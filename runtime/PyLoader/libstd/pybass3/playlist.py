"""
    Playlist class

    Manages a list of songs, providing both static sequential & randomized play queues along
    with the ability to fade in the next song in the queue by N-seconds.

    Does the best it can to avoid ctype's memory leaks.
"""
import enum
import pathlib
from pathlib import Path
import random
import logging

from .bass_module import BassException
from .song import Song

log = logging.getLogger(__name__)

class PlaylistState(enum.Enum):
    stopped = enum.auto()
    playing = enum.auto()
    paused = enum.auto()
    error = enum.auto()


class PlaylistMode(enum.Enum):
    loop_single = enum.auto()
    loop_all = enum.auto()
    one_time = enum.auto()

    sequential = enum.auto()
    random = enum.auto()

    progress_on_error = enum.auto()
    die_on_error = enum.auto()

class Playlist:

    VALID_TYPES = [".mp3", ".mp4", ".ogg", ".opus"]

    songs: dict # The songs the playlist knows about
    queue: list # The order songs will be played in
    state: PlaylistState # Is the playlist playing songs, stopped, or paused?
    mode: PlaylistMode # Is the playlist running sequential or random
    play_mode: PlaylistMode # is the playlist looping the whole queue, just a song, or running to end?

    queue_position: int  # Where is the playlist in the current queue
    _current_song: Song # What is currently playing
    _fade_in_song: Song # if fade_in is not None, this is the next song to play
    _fade_in: int # How soon should the next song start playing, None if lock step
    song_cls: Song # What is the container for a song (eg Song or QtSong)



    def __init__(self, song_cls = Song):
        self.songs = {}
        self.queue = []
        self.state = PlaylistState.stopped
        self.mode = PlaylistMode.sequential
        self.play_mode = PlaylistMode.one_time

        self.error_mode = PlaylistMode.progress_on_error

        self.queue_position = 0
        self._current_song = None

        self._fade_in = 0
        self._fade_in_song = None
        self.song_cls = song_cls

        log.debug("Playlist Initialized")

    def free(self):
        del self.current
        del self.fadein_song
        self.songs = []
        self.queue = []

    def clear(self):
        self.free()


    def get_song_by_row(self, row_position:int) -> Song:
        try:
            key = list(self.songs.keys())[row_position]
        except IndexError:
            return None

        return self.songs[key]

    def get_song_by_id(self, song_id) -> Song:
        return self.songs.get(song_id, None)

    def add_song(self, song_path: pathlib.Path, add2queue=True):
        log.debug("Playlist.add_song called with %s", song_path)
        song = self.song_cls(song_path)
        try:
            song.duration
        except BassException as bexc:
            if bexc.code == 41:
                # bad formatted song
                log.error("Unsupported file format: %s", song_path)
                return None
            log.exception("Failed to properly load: %s", song_path)

        else:
            song.free_stream()
            self.songs[song.id] = song
            if add2queue is True:
                self.queue.append(song.id)

            return song

        return None

    def add_directory(self, dir_path: Path, recurse=True):
        log.debug("Playlist.add_directory called with %s", dir_path)

        files = (file for file in dir_path.iterdir() if file.is_file() and file.suffix in self.VALID_TYPES)
        dirs = (fdir for fdir in dir_path.iterdir() if fdir.is_dir())

        song_ids = []

        for song_path in files:
            try:
                song = self.add_song(song_path)
                if song is not None:
                    song_ids.append(song.id)
            except TypeError:
                pass


        if recurse is True:
            for fdir in dirs:
                sub_song_ids = self.add_directory(fdir, recurse)
                song_ids.extend(sub_song_ids)

        return song_ids

    @property
    def fade_in(self):
        return self._fade_in

    @fade_in.setter
    def fade_in(self, value):
        self._fade_in = value

    @fade_in.deleter
    def fade_in(self):
        self._fade_in = 0

    def set_randomize(self, restart_and_play=True):
        if self.current is not None:
            self.stop()

        ids = list(self.songs.keys())
        random.shuffle(ids)
        self.queue = ids
        self.mode = PlaylistMode.random
        if restart_and_play is True:
            self.queue_position = 0
            self.play_first()


    def set_sequential(self, restart_and_play = True):
        if self.current is not None:
            self.stop()

        self.queue = list(self.songs.keys())
        self.mode = PlaylistMode.sequential
        if restart_and_play is True:
            self.queue_position = 0
            self.play_first()


    def loop_song(self):
        self.play_mode = PlaylistMode.loop_single

    def loop_queue(self):
        self.play_mode = PlaylistMode.loop_all

    @property
    def current(self) -> Song:
        return self._current_song

    @current.setter
    def current(self, new_song):
        if self._current_song is not None:
            del self.current

        self._current_song = new_song
        return self._current_song

    @current.deleter
    def current(self):
        if self._current_song is not None:
            self._current_song.stop()
            self._current_song.free_stream()
            self._current_song = None

    @property
    def fadein_song(self):
        return self._fade_in_song

    @fadein_song.setter
    def fadein_song(self, new_song):
        if self._fade_in_song is not None and self._fade_in_song != self.current:
            self._fade_in_song.free_stream()

        self._fade_in_song = new_song

    @fadein_song.deleter
    def fadein_song(self):
        # if there is a fade in song and it hasn't been assigned to current
        if self._fade_in_song is not None and self._fade_in_song != self.current:
            # kill it.
            self._fade_in_song.free_stream()
            self._fade_in_song = None




    @property
    def upcoming(self) -> Song:
        qpos = self.queue_position + 1
        # Is the next song past the queue's length?
        if qpos >= len(self.queue):
            if self.mode == PlaylistMode.loop_all:
                qpos = 0
            else:
                return None

        song_id = self.queue[qpos]

        return self.songs[song_id]


    @property
    def prior(self):
        qpos = self.queue_position - 1
        if qpos < 0:
            if self.mode == PlaylistMode.loop_all:
                qpos = len(self.songs) - 1
            else:
                return None

        song_id = self.queue[qpos]

        return self.songs[song_id]


    def play(self):

        if self.fadein_song is not None:
            self.fadein_song.play()

        if self.current is None:
            if len(self.queue) == 0:
                if self.mode == PlaylistMode.sequential:
                    self.set_sequential()
                else:
                    self.set_randomize()

            self.queue_position = 0
            if len(self.queue) > 0:
                current_id = self.queue[self.queue_position]
                self.current = self.songs[current_id]
                self.current.play()

        elif self.current is not None and (self.current.is_paused or self.current.is_stopped):
            self.current.play()

    def play_first(self) -> Song:
        del self.fadein_song

        self.queue_position = 0
        try:
            self.current = self.songs[self.queue[self.queue_position]]
        except IndexError:
            return None
        except KeyError:
            raise RuntimeError("Song queue is corrupt/out of sync with song list")

        self.current.play()

        return self.current

    def play_song_by_id(self, song_id):
        song = self.songs.get(song_id, None)
        if song is None:
            #TODO raise an error here?
            return None

        del self.fadein_song
        del self.current

        self.current = song
        self.play()

    def play_song_by_index(self, song_index):
        song = self.get_song_by_row(song_index)

        del self.fadein_song
        del self.current
        self.current = song
        self.play()


    def stop(self):
        if self.fadein_song is not None:
            self.fadein_song.stop()

        if self.current is not None:
            self.current.stop()


    def pause(self):
        if self.fadein_song is not None:
            self.fadein_song.pause()

        if self.current is not None:
            return self.current.pause()

        return None


    def restart(self):
        if self.fadein_song is not None:
            del self.fadein_song

        if self.current is not None:
            return self.current.move2position_seconds(0)



    def next(self) -> Song:
        try:
            return self._next()
        except BassException:
            if self.error_mode == PlaylistMode.progress_on_error:
                self.queue_position += 1
                if self.queue_position > len(self.queue) and self.mode == PlaylistMode.loop_all:
                    self.queue_position = 0

                return self._next()

    def _next(self) -> Song:

        next_song = self.upcoming
        # Advance the queue forward if we can
        if self.queue_position + 1 >= len(self.queue):
            if self.play_mode != PlaylistMode.loop_all:
                self.queue_position = 0
        else:
            self.queue_position += 1


        # stop the music
        if self.current is not None:
            self.current.stop()
            self.current.free_stream()


        if self.fadein_song is not None:
            self.current = self.fadein_song
        else:
            try:
                song_id = self.queue[self.queue_position]

            except IndexError:
                log.error("No song at queue position %s", self.queue_position)
                return None

            try:
                self.current = self.songs[song_id]
            except IndexError:
                log.exception("Playlist corrupt!  No song_id %s exists @ queue position %s", song_id, self.queue_position)

        if self.current is not None and self.current.is_playing is False:
            self.current.play()

        return self.current


    def previous(self):
        try:
            return self._previous()
        except BaseException:
            if self.error_mode == PlaylistMode.progress_on_error:
                self.queue_position -= 1
                if self.queue_position < 0:
                    self.queue_position = len(self.queue)

                return self._previous()
            else:
                raise


    def _previous(self):
        prior = self.prior
        if self.fadein_song is not None:
            del self.fadein_song
            self.current.move2position_seconds(0)
            self.current.play()
        else:
            del self.current

            self.current = prior

            if self.current is not None:
                self.current.play()


            self.queue_position -= 1
            if self.queue_position < 0:
                if self.play_mode == PlaylistMode.loop_all:
                    self.queue_position = len(self.queue)
                else:
                    self.queue_position = 0

        return self.current

    def tick(self):
        remaining = self.current.remaining_bytes
        remaining_seconds = self.current.remaining_seconds

        if self.play_mode == PlaylistMode.loop_single and remaining == 0:
            self.current.move2position_seconds(0)

        elif self.fade_in > 0 and remaining_seconds <= self._fade_in:
            if self.fadein_song is not None and remaining <= 0:
                self.current = self.fadein_song
                self.fadein_song = None
                self.queue_position += 1
            elif self.fadein_song is None and self.upcoming is not None:
                self.fadein_song = self.upcoming
                self.fadein_song.play()

        elif remaining <= 0:
            del self.current
            self.next()
            self.queue_position += 1
            self.current.play()

    def items(self):
        # TODO yield from instead?
        for song_id, song in self.songs.items():
            yield song_id, song

    def __len__(self):
        return len(self.songs)

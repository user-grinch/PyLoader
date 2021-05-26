"""
    Pyside2 compatible Playlist object


"""
import logging
import pathlib

from PySide2 import QtCore

Qt = QtCore.Qt

from .pys2_song import Pys2Song
from .playlist import Playlist, PlaylistMode

log = logging.getLogger(__name__)

class Pys2Playlist(QtCore.QObject, Playlist):
    """
    Extension to the Playlist class which fires QT5/Pyside2 signals
    for when songs are added (group or individual), when the song changes, as well as reports when
    the state (play, pause, stop) occurs.

    """
    song_added = QtCore.Signal(str)  # Song ID, Qt DOES NOT like when I try to pass the Song object
    songs_added = QtCore.Signal(list) # list of Song ID's
    song_changed = QtCore.Signal(str)  # Song ID
    music_paused = QtCore.Signal(str)
    music_playing = QtCore.Signal(str)
    music_stopped = QtCore.Signal(str)

    ticked = QtCore.Signal()

    def __init__(self, tick_precision = 500):
        QtCore.QObject.__init__(self)
        Playlist.__init__(self, Pys2Song)
        self.ticker = QtCore.QTimer()
        self.ticker.setInterval(tick_precision)

        self.ticker.timeout.connect(self.tick)

        log.debug("Initialized playlist: Precision is %s", tick_precision)


    def add_song(self, song_path) -> Pys2Song:
        log.debug("Pys2Playlist.add_song %s", song_path)
        song = super(Pys2Playlist, self).add_song(song_path)
        if song is not None:
            self.song_added.emit(song.id)

        return song

    def get_indexof_song_by_id(self, song_id):
        """
            Find out where in the songs list a specific song is lcoated.   Only works reliably with
            Python >= 3.7 where dict is naturally ordered.

            Drastically slower but works for now.

        :param song_id:
        :return:
        """
        songs = list(self.songs.keys())
        return songs.index(song_id)

    def play(self):
        log.debug("Pys2Playlist.play self.current is %s", self.current)
        new_song = False

        if self.current is None:
            new_song = True

        super(Pys2Playlist, self).play()
        if self.current is not None and self.current.is_playing:
            self.music_playing.emit(self.current.id)
            self.ticker.start()

        if new_song is True and self.current is not None:
            self.song_changed.emit(self.current.id)

    def play_song(self, song_id):
        log.debug("Pys2Playlist.play_song %s", song_id)

        if self.fadein_song is not None:
            del self.fadein_song

        if self.current is not None:
            del self.current

        self.current = self.songs[song_id]
        self.current.play()
        self.ticker.start()

        self.song_changed.emit(song_id)
        self.music_playing.emit(song_id)


    def play_first(self) -> Pys2Song:
        song = super(Pys2Playlist, self).play_first()
        if song is not None:
            self.song_changed.emit(song.id)
            self.music_playing.emit(song.id)
        return song

    def stop(self):
        log.debug("Pys2Playlist.stop called")

        super(Pys2Playlist, self).stop()
        if self.current is not None:
            self.music_stopped.emit(self.current.id)
            
        self.ticker.stop()

    def pause(self):
        log.debug("Pys2Playlist.pause called")
        super(Pys2Playlist, self).pause()
        if self.current is not None:
            self.music_paused.emit(self.current.id)

        self.ticker.stop()
        
    def previous(self):
        log.debug("Pys2Playlist.previous")
        result = super(Pys2Playlist, self).previous()
        log.debug("Pys2Playlist.previous changed to %s", result)
        if result is not None:
            self.song_changed.emit(result.id)
        
    def next(self):
        log.debug("Pys2Playlist.next")
        result = super(Pys2Playlist, self).next()
        log.debug("Next song is %s", result)
        if result is not None:
            self.song_changed.emit(result.id)

        return result


    def tick(self):

        if self.current is not None:
            remaining = self.current.remaining_bytes
            remaining_seconds = self.current.remaining_seconds
        else:
            log.debug("TICKER ACTIVE WITH NO SONG")
            self.ticker.stop()
            return

        if self.play_mode == PlaylistMode.loop_single and remaining <= 0:
            log.debug("TICK - Repeating %s", self.current.file_path)
            self.current.move2position_seconds(0)
            self.song_changed.emit(self.current.id)


        elif self.fade_in > 0 and remaining_seconds <= self.fade_in:
            if self.fadein_song is not None and remaining <= 0:
                log.debug("TICK - Fade in progress switching to current")
                self.current.stop()
                self.current.free_stream()
                self.current = self.fadein_song
                self.fadein_song = None
                self.queue_position += 1
                self.song_changed.emit(self.current.id)

            elif self.fadein_song is None and self.upcoming is not None:
                log.debug("TICK - fading in song")
                self.fadein_song = self.upcoming
                self.fadein_song.play()

        elif remaining <= 0 and self.current is not None:
            log.debug("TICK - current is finished, moving to next song")
            self.current.stop()
            self.current.free_stream()
            self.current = self.next()
            if self.current is not None:
                self.queue_position += 1
                self.current.play()
                self.song_changed.emit(self.current.id)

        self.ticked.emit()







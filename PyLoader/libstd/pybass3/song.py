from pathlib import Path
import typing as T
from uuid import uuid4
import logging

from .datatypes import HANDLE
from .bass_module import Bass
from .bass_channel import BassChannel
from .bass_stream import BassStream

log = logging.getLogger(__name__)

class Song:

    _handle: HANDLE
    _handle_length: float # Seconds
    _handle_position: float # Seconds
    file_path: Path

    def __init__(self, file_path: T.Union[str, Path]):
        super(Song, self).__init__()
        Bass.Init()

        self._id = uuid4().hex
        self.file_path = Path(file_path)
        if self.file_path.exists() is False:
            raise ValueError(f"{file_path} doesn't exist")

        if self.file_path.is_file() is False:
            raise ValueError(f"{file_path=} is not a valid file")


        self._handle = None
        self._handle_length = None # Length in seconds
        self._handle_position = 0 # Current position in the song, in seconds

    def __del__(self):
        """
            Ensure that the BASS library file handle is freed.

        :return:
        """
        self.free_stream()

    @property
    def id(self):
        return self._id

    def _create_stream(self):
        self._handle = BassStream.CreateFile(False, bytes(self.file_path))
        self._handle_length = BassChannel.GetLengthSeconds(self._handle, BassChannel.GetLengthBytes(self.handle))

    def free_stream(self) -> None:
        """
            Stop this music file from playing and frees its file handle from the BASS library.

            :raises
            BassException - If there is an issue releasing the file handle (eg it never existed).
        """
        if self._handle is not None:

            if self.is_playing or self.is_paused:
                self.stop()

            retval = BassStream.Free(self._handle)
            if retval is not True:
                Bass.RaiseError()

        self._handle = None

    @property
    def position(self) -> float:
        return BassChannel.GetPositionSeconds(self.handle)


    @property
    def position_bytes(self) -> int:
        return BassChannel.GetPositionBytes(self.handle)

    @property
    def position_time(self):
        seconds = int(self.position % 60)
        minutes = int(self.position // 60)

        return f"{minutes:02}:{seconds:02}"

    @property
    def duration(self) -> float:
        if self._handle is None:
            self._create_stream()

        return self._handle_length

    @property
    def duration_bytes(self) -> int:
        return BassChannel.GetLengthBytes(self.handle)

    @property
    def duration_time(self):
        seconds = int(self.duration % 60)
        minutes = int(self.duration // 60)
        return f"{minutes:02}:{seconds:02}"

    @property
    def remaining_seconds(self):
        return self.duration - self.position

    @property
    def remaining_bytes(self):
        return self.duration_bytes - self.position_bytes

    @property
    def remaining_time(self):
        seconds = int(self.remaining_seconds % 60)
        minutes = int(self.remaining_seconds // 60)
        return f"{minutes:02}:{seconds:02}"


    @property
    def handle(self) -> HANDLE:
        if self._handle is None:
            self._create_stream()

        return self._handle



    @handle.deleter
    def handle(self):
        self.free_stream()

    def __len__(self):
        return BassChannel.GetLengthBytes(self.handle)

    @property
    def is_playing(self):
        return BassChannel.IsPlaying(self.handle)

    @property
    def is_paused(self):
        return BassChannel.IsPaused(self.handle)

    @property
    def is_stopped(self):
        return BassChannel.IsStopped(self.handle)

    def move2position_seconds(self, seconds: float):
        retval = BassChannel.SetPositionBySeconds(self.handle, seconds)
        if retval is not True:
            Bass.RaiseError()
        return retval

    def move2position_bytes(self, bytes: int):
        """
            Repositioning by bytes is drastically more precise and is the recommend
            method for seeking through a song.

        :param bytes:
        :return:
        """
        retval = BassChannel.SetPositionByBytes(self.handle, bytes)
        if retval is not True:
            Bass.RaiseError()

    def play(self):
        retval = BassChannel.Play(self.handle, False)
        if retval is not True:
            Bass.RaiseError()

    def stop(self):
        retval = BassChannel.Stop(self.handle)
        if retval is not True:
            Bass.RaiseError()

    def pause(self):
        retval = BassChannel.Pause(self.handle)
        if retval is not True:
            Bass.RaiseError()

    def resume(self):
        retval = BassChannel.Pause(self.handle)
        if retval is not True:
            Bass.RaiseError()

    def __hash__(self):
        return hash(self.file_path)

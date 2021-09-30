import _bass
from .data_types import *


def get_audiostream_length(hAudiostream : int) -> int:
	'''Returns length of the audio stream'''

	return _bass.get_audiostream_length(hAudiostream)

def get_audiostream_volume(hAudiostream : int) -> float:
	'''Returns the current volume of the audio stream'''

	return _bass.get_audiostream_volume(hAudiostream)

def link_3d_audiostream_to_actor(hAudiostream : int, hped :int) -> None:
	'''Links a 3d audiostream to ped'''

	_bass.link_3d_audiostream_to_actor(hAudiostream, hped)

def link_3d_audiostream_to_obj(hAudiostream : int, hobj :int) -> None:
	'''Links a 3d audiostream to object'''

	_bass.link_3d_audiostream_to_obj(hAudiostream, hobj)

def link_3d_audiostream_to_veh(hAudiostream : int, hveh :int) -> None:
	'''Links a 3d audiostream to vehicle'''

	_bass.link_3d_audiostream_to_veh(hAudiostream, hveh)

def load_audio_stream(path :str) -> int:
	'''Loads audio stream from the provided path. Returns handle to the loaded stream. 0 is returned on failure'''

	return _bass.load_audio_stream(path)

def loop_audio_stream(hAudiostream :int, enable :bool) -> None:
	'''Sets flag whether the audio stream should be looped'''

	_bass.loop_audio_stream(hAudiostream, enable)

def load_audio_stream_with_3d_support(path :str) -> None:
	'''Loads audio stream from the provided path. Returns handle to the loaded stream. 0 is returned on failure'''

	_bass.load_audio_stream_with_3d_support(path)

def release_audiostream(hAudiostream : int) -> None:
	'''Frees the loaded audio stream'''

	_bass.release_audiostream(hAudiostream)

def set_audiostream_perform_action(hAudiostream :int, action :int) -> None:
	''' Sets the action for the audio stream.
    Values (action): Stop = 0, Play = 1, Pause = 2, Resume = 3
    '''

	_bass.set_audiostream_perform_action(hAudiostream, action)

def set_audiostream_volume(hAudiostream : int, volume :float) -> None:
	'''Sets the audio stream volume'''

	_bass.set_audiostream_volume(hAudiostream , volume)

def set_3d_audiostream_position(hAudiostream : int, posX :float, posY :float, posZ :float) -> None:
	'''Sets position for the 3d audio stream'''

	_bass.set_3d_audiostream_position(hAudiostream, x, y, z)


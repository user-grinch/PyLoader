import _bass
from .data_types import *


class StreamStates():
	Stop = 0
	Play = 1
	Pause = 2
	Resume = 3

class AudioStream():
	def __init__(self, path :str, support3D: bool = False):
		self.__stream3d = support3D
		if support3D:
			self.__handle = self.load_audio_stream_with_3d_support(path)
		else:
			self.__handle = self.load_audio_stream(path)

	def get_length(self) -> int:
		'''Returns length of the audio stream'''

		return _bass.get_audiostream_length(self.__handle)

	def get_volume(self) -> float:
		'''Returns the current volume of the audio stream'''

		return _bass.get_audiostream_volume(self.__handle)

	def link_to_actor(self, hped :int) -> None:
		'''Links a 3d audiostream to ped'''

		if (self.__stream3d):
			_bass.link_3d_audiostream_to_actor(self.__handle, hped)
		else:
			print("Error: Not a 3d AudioStream")

	def link_to_obj(self, hobj :int) -> None:
		'''Links a 3d audiostream to object'''

		if (self.__stream3d):
			_bass.link_3d_audiostream_to_obj(self.__handle, hobj)
		else:
			print("Error: Not a 3d AudioStream")

	def link_to_veh(self, hveh :int) -> None:
		'''Links a 3d audiostream to vehicle'''
		
		if (self.__stream3d):
			_bass.link_3d_audiostream_to_veh(self.__handle, hveh)
		else:
			print("Error: Not a 3d AudioStream")

	def release(self) -> None:
		'''Frees the loaded audio stream'''

		_bass.release_audiostream(self.__handle)
	
	def set_loop(self, flag :bool) -> None:
		'''Sets flag whether the audio stream should be looped'''

		_bass.loop_audio_stream(self.__handle, flag)

	def set_position(self, posX :float, posY :float, posZ :float) -> None:
		'''Sets position for the 3d audio stream'''

		if (self.__stream3d):
			_bass.set_3d_audiostream_position(self.__handle, posX, posY, posZ)
		else:
			print("Error: Not a 3d AudioStream")

	def set_state(self, state : StreamStates) -> None:
		''' Sets the action for the audio stream'''

		_bass.set_audiostream_perform_action(self.__handle, state)

	def set_volume(self, volume :float) -> None:
		'''Sets the audio stream volume'''

		_bass.set_audiostream_volume(self.__handle, volume)


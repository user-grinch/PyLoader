import _opcodes
from typing import Tuple
from enums import MissionAudioSlot, RadioChannel

class Audio():
   @staticmethod
   def play_mission_passed_tune(soundId: int):
      '''Plays an audio file with the specified ID from the Audio directory'''
      _opcodes.play_mission_passed_tune(soundId)

   @staticmethod
   def load_mission_audio(slotId: MissionAudioSlot, audioId: int):
      '''Loads the file from the audio directory'''
      _opcodes.load_mission_audio(slotId, audioId)

   @staticmethod
   def has_mission_audio_loaded(slotId: MissionAudioSlot):
      '''Returns true if the mission audio has loaded (03CF)'''
      return _opcodes.has_mission_audio_loaded(slotId)

   @staticmethod
   def play_mission_audio(slotId: MissionAudioSlot):
      '''Plays the loaded sound (03CF)'''
      _opcodes.play_mission_audio(slotId)

   @staticmethod
   def has_mission_audio_finished(slotId: MissionAudioSlot):
      '''Returns true if the audio (03CF) is no longer playing'''
      return _opcodes.has_mission_audio_finished(slotId)

   @staticmethod
   def set_mission_audio_position(slotId: MissionAudioSlot, x: float, y: float, z: float):
      '''Sets the location of the mission audio (03CF) where it can be heard'''
      _opcodes.set_mission_audio_position(slotId, x, y, z)

   @staticmethod
   def clear_mission_audio(slotId: MissionAudioSlot):
      '''Unloads the mission audio (03CF), freeing game memory'''
      _opcodes.clear_mission_audio(slotId)

   @staticmethod
   def set_radio_channel(channel: RadioChannel):
      '''Sets the current radio station that is playing, if the player is in a vehicle'''
      _opcodes.set_radio_channel(channel)

   @staticmethod
   def set_music_does_fade(state: bool):
      '''Sets whether sounds should fade along with the screen'''
      _opcodes.set_music_does_fade(state)

   @staticmethod
   def get_radio_channel() -> RadioChannel:
      '''Returns the current radio station that is being played'''
      return _opcodes.get_radio_channel()

   @staticmethod
   def get_beat_proximity(_p1: int) ->  Tuple[int, int, int]:
      return _opcodes.get_beat_proximity(_p1)

   @staticmethod
   def attach_mission_audio_to_char(slotId: MissionAudioSlot, handle: int):
      '''Sets the loaded audio to play at the char's location'''
      _opcodes.attach_mission_audio_to_char(slotId, handle)

   @staticmethod
   def preload_beat_track(trackId: int):
      _opcodes.preload_beat_track(trackId)

   @staticmethod
   def get_beat_track_status() -> int:
      return _opcodes.get_beat_track_status()

   @staticmethod
   def play_beat_track():
      _opcodes.play_beat_track()

   @staticmethod
   def stop_beat_track():
      _opcodes.stop_beat_track()

   @staticmethod
   def report_mission_audio_event_at_position(x: float, y: float, z: float, soundId: int):
      _opcodes.report_mission_audio_event_at_position(x, y, z, soundId)

   @staticmethod
   def report_mission_audio_event_at_object(handle: int, soundId: int):
      _opcodes.report_mission_audio_event_at_object(handle, soundId)

   @staticmethod
   def attach_mission_audio_to_object(slotId: MissionAudioSlot, handle: int):
      '''Sets the loaded audio to play at the object's location'''
      _opcodes.attach_mission_audio_to_object(slotId, handle)

   @staticmethod
   def pause_current_beat_track(state: bool):
      '''Sets whether the loaded soundtrack is paused'''
      _opcodes.pause_current_beat_track(state)

   @staticmethod
   def report_mission_audio_event_at_char(handle: int, soundId: int):
      _opcodes.report_mission_audio_event_at_char(handle, soundId)

   @staticmethod
   def report_mission_audio_event_at_car(handle: int, soundId: int):
      '''Plays the audio event at the car's position'''
      _opcodes.report_mission_audio_event_at_car(handle, soundId)

   @staticmethod
   def attach_mission_audio_to_car(slotId: MissionAudioSlot, handle: int):
      '''Sets the loaded audio to play at the vehicle's location'''
      _opcodes.attach_mission_audio_to_car(slotId, handle)

   @staticmethod
   def set_radio_to_players_favourite_station():
      '''Sets the radio station of the vehicle the player is currently in to the favourite station, retrieved from the stats (ID 326)'''
      _opcodes.set_radio_to_players_favourite_station()


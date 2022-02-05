import _opcodes
from typing import Tuple
from enums import ModSlot

class Streaming():
   @staticmethod
   def load_special_character(slotId: int, modelName: str):
      '''Requests a special character's model to be loaded into the specified slot'''
      _opcodes.load_special_character(slotId, modelName)

   @staticmethod
   def has_special_character_loaded(slotId: int):
      '''Returns true if the special character's model (023C) is available for creation'''
      return _opcodes.has_special_character_loaded(slotId)

   @staticmethod
   def request_model(modelId: int):
      '''Requests a new model to load'''
      _opcodes.request_model(modelId)

   @staticmethod
   def has_model_loaded(modelId: int):
      '''Returns true if the model is available for creation'''
      return _opcodes.has_model_loaded(modelId)

   @staticmethod
   def mark_model_as_no_longer_needed(modelId: int):
      '''Releases the specified model, freeing game memory'''
      _opcodes.mark_model_as_no_longer_needed(modelId)

   @staticmethod
   def unload_special_character(slotId: int):
      '''Releases the special character (023C), freeing game memory'''
      _opcodes.unload_special_character(slotId)

   @staticmethod
   def load_all_models_now():
      '''Loads any requested models (0247 or 0353) synchronously'''
      _opcodes.load_all_models_now()

   @staticmethod
   def switch(state: bool):
      '''Sets the streaming of additional models like peds, cars, and maps'''
      _opcodes.switch_streaming(state)

   @staticmethod
   def load_scene(x: float, y: float, z: float):
      '''Starts loading a specific location, just like if the player was there, removing LOD textures'''
      _opcodes.load_scene(x, y, z)

   @staticmethod
   def is_model_available(modelId: int):
      '''Returns true if the specified model exists in the loaded '''
      return _opcodes.is_model_available(modelId)

   @staticmethod
   def set_area_visible(areaId: int):
      '''Sets the visibility of an interior area'''
      _opcodes.set_area_visible(areaId)

   @staticmethod
   def request_collision(x: float, y: float):
      '''Reloads the area at the specified coordinates'''
      _opcodes.request_collision(x, y)

   @staticmethod
   def request_animation(animationFile: str):
      '''Loads the specified IFP File'''
      _opcodes.request_animation(animationFile)

   @staticmethod
   def has_animation_loaded(animationFile: str):
      '''Returns true if the specified IFP file is loaded'''
      return _opcodes.has_animation_loaded(animationFile)

   @staticmethod
   def remove_animation(animationFile: str):
      '''Releases the specified IFP file, freeing game memory'''
      _opcodes.remove_animation(animationFile)

   @staticmethod
   def get_vehicle_mod_type(modelId: int) -> ModSlot:
      '''Returns a slot the upgrade model is for'''
      return _opcodes.get_vehicle_mod_type(modelId)

   @staticmethod
   def request_vehicle_mod(modelId: int):
      '''Loads the upgrade model and any associated models'''
      _opcodes.request_vehicle_mod(modelId)

   @staticmethod
   def has_vehicle_mod_loaded(modelId: int):
      '''Returns true if the vehicle upgrade model has loaded'''
      return _opcodes.has_vehicle_mod_loaded(modelId)

   @staticmethod
   def mark_vehicle_mod_as_no_longer_needed(modelId: int):
      '''Marks the vehicle upgrade model as no longer needed, allowing it to be unloaded by the streamer'''
      _opcodes.mark_vehicle_mod_as_no_longer_needed(modelId)

   @staticmethod
   def request_ipl(iplName: str):
      _opcodes.request_ipl(iplName)

   @staticmethod
   def remove_ipl(iplName: str):
      _opcodes.remove_ipl(iplName)

   @staticmethod
   def remove_ipl_discreetly(iplName: str):
      _opcodes.remove_ipl_discreetly(iplName)

   @staticmethod
   def get_area_visible() -> int:
      '''Gets the current interior ID'''
      return _opcodes.get_area_visible()

   @staticmethod
   def request_car_recording(pathId: int):
      '''Loads the specified car recording'''
      _opcodes.request_car_recording(pathId)

   @staticmethod
   def has_car_recording_been_loaded(pathId: int):
      '''Returns true if the car recording has finished loading'''
      return _opcodes.has_car_recording_been_loaded(pathId)

   @staticmethod
   def is_model_in_cdimage(modeId: int):
      '''Returns true if a file for the model exists'''
      return _opcodes.is_model_in_cdimage(modeId)

   @staticmethod
   def get_model_dimensions(modelId: int) ->  Tuple[float, float, float, float, float, float]:
      return _opcodes.get_model_dimensions(modelId)

   @staticmethod
   def is_this_model_a_boat(modelId: int):
      '''Returns true if the model is the model of a boat'''
      return _opcodes.is_this_model_a_boat(modelId)

   @staticmethod
   def is_this_model_a_plane(modelId: int):
      '''Returns true if the model is the model of a plane'''
      return _opcodes.is_this_model_a_plane(modelId)

   @staticmethod
   def is_this_model_a_heli(modelId: int):
      '''Returns true if the model is the model of a helicopter'''
      return _opcodes.is_this_model_a_heli(modelId)

   @staticmethod
   def remove_car_recording(pathId: int):
      '''Unloads the car recording'''
      _opcodes.remove_car_recording(pathId)

   @staticmethod
   def get_random_car_model_in_memory(_p1: bool) ->  Tuple[int, int]:
      return _opcodes.get_random_car_model_in_memory(_p1)

   @staticmethod
   def is_this_model_a_car(modelId: int):
      '''Returns true if a valid car model is passed'''
      return _opcodes.is_this_model_a_car(modelId)

   @staticmethod
   def load_scene_in_direction(x: float, y: float, z: float, heading: float):
      _opcodes.load_scene_in_direction(x, y, z, heading)

   @staticmethod
   def get_name_of_vehicle_model(modelId: int) -> str:
      return _opcodes.get_name_of_vehicle_model(modelId)


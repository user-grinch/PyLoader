import libstd.opcodes as opcodes
from typing import Tuple

class Train():
   def __init__(self, type: int, x: float, y: float, z: float, direction: bool) -> Train:
      '''Creates a script handled train from a predefined type (the type dictates how long the train is and the varieties of carriages) and sets the direction for the train to head in'''
      self.__handle = opcodes.create_mission_train(self.__handle, type, x, y, z, direction)

   def set_speed(self, speed: float):
      '''Sets the trains acceleration'''
      opcodes.set_train_speed(self.__handle, speed)

   def set_cruise_speed(self, speed: float):
      '''Sets the trains speed'''
      opcodes.set_train_cruise_speed(self.__handle, speed)

   def get_caboose(self) -> Car:
      '''Gets the handle of the last carriage (known as the "caboose")'''
      return opcodes.get_train_caboose(self.__handle)

   def get_carriage(self, number: int) -> Car:
      '''Gets the nth train carriage'''
      return opcodes.get_train_carriage(self.__handle, number)

   def delete(self):
      '''Removes the specified script created train'''
      opcodes.delete_mission_train(self.__handle)

   def mark_as_no_longer_needed(self):
      '''Removes the specified script created train from the list of trains that the game shouldn't delete'''
      opcodes.mark_mission_train_as_no_longer_needed(self.__handle)

   def set_coordinates(self, x: float, y: float, z: float):
      '''Puts the train on the rails nearest to the specified coordinates'''
      opcodes.set_mission_train_coordinates(self.__handle, x, y, z)

   def has_derailed(self):
      '''Returns true if the train has derailed (usually from going too fast)'''
      return opcodes.has_train_derailed(self.__handle)

   def set_forced_to_slow_down(self, state: bool):
      '''Sets whether the train should stop at each station it encounters'''
      opcodes.set_train_forced_to_slow_down(self.__handle, state)

   def find_direction(self):
      '''Returns true if the train is travelling clockwise, around San Andreas'''
      return opcodes.find_train_direction(self.__handle)

   def is_next_station_allowed(self):
      '''Returns true if the next station is accessible (at the start of the game, railroad blocks prevent the player from travelling to stations whose area is not unlocked)'''
      return opcodes.is_next_station_allowed(self.__handle)

   def skip_to_next_allowed_station(self):
      '''Puts the script created train at the next allowed station'''
      opcodes.skip_to_next_allowed_station(self.__handle)


import libstd.opcodes as opcodes
from typing import Tuple

class ScriptFire():
   def start(self, x: float, y: float, z: float, propagation: int, size: int) -> ScriptFire:
      '''Creates a fire at the specified coordinates'''
      return opcodes.start_script_fire(self.__handle, x, y, z, propagation, size)

   def is_extinguished(self):
      '''Returns true if the script fire has been put out'''
      return opcodes.is_script_fire_extinguished(self.__handle)

   def remove(self):
      '''Removes the script fire'''
      opcodes.remove_script_fire(self.__handle)

   def create_car_fire(self, vehicle: Car) -> ScriptFire:
      '''Creates a script fire on the vehicle'''
      return opcodes.start_car_fire(self.__handle, vehicle)

   def create_char_fire(self, char: Char) -> ScriptFire:
      '''Creates a script fire on the character'''
      return opcodes.start_char_fire(self.__handle, char)

   def get_coords(self, x: float, y: float, z: float):
      '''Gets the coordinates of the fire'''
      opcodes.get_script_fire_coords(self.__handle, x, y, z)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid script fire handle'''
      return opcodes.does_script_fire_exist(handle)


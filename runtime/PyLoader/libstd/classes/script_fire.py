import _opcodes
from car import Car
from char import Char

class ScriptFire():
   def start(self, x: float, y: float, z: float, propagation: int, size: int, char_obj: Char = None, car_obj: Car = None): 
      '''Creates a fire at the specified coordinates. Passing car or char_obj will create a fire on that object'''
      if (car_obj):
         self.__handle = _opcodes.start_car_fire(self.__handle, car_obj.get_handle())
      elif (char_obj):
         self.__handle = _opcodes.start_char_fire(self.__handle, char_obj.get_handle())
      else:
         self.__handle = _opcodes.start_script_fire(x, y, z, propagation, size)

   def is_extinguished(self) -> bool:
      '''Returns true if the script fire has been put out'''
      return _opcodes.is_script_fire_extinguished(self.__handle)

   def remove(self):
      '''Removes the script fire'''
      _opcodes.remove_script_fire(self.__handle)

   def get_coords(self, x: float, y: float, z: float):
      '''Gets the coordinates of the fire'''
      _opcodes.get_script_fire_coords(self.__handle, x, y, z)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid script fire handle'''
      return _opcodes.does_script_fire_exist(handle)


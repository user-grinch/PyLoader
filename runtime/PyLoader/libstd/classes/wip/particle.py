import libstd.opcodes as opcodes
from typing import Tuple

class Particle():
   def __init__(self, name: str, x: float, y: float, z: float, type: int) -> Particle:
      '''Creates a particle effect'''
      self.__handle = opcodes.create_fx_system(self.__handle, name, x, y, z, type)

   def play(self):
      '''Makes the specified particle visible'''
      opcodes.play_fx_system(self.__handle)

   def stop(self):
      '''Stops the specified particle at the source'''
      opcodes.stop_fx_system(self.__handle)

   def play_and_kill(self):
      '''Starts the particle effect and relinquishes script control over it'''
      opcodes.play_and_kill_fx_system(self.__handle)

   def kill(self):
      '''Stops the particle and deletes it'''
      opcodes.kill_fx_system(self.__handle)

   def create_on_char(self, name: str, char: Char, xOffset: float, yOffset: float, zOffset: float, type: int) -> Particle:
      '''Creates a particle attached to a character'''
      return opcodes.create_fx_system_on_char(self.__handle, name, char, xOffset, yOffset, zOffset, type)

   def create_on_char_with_direction(self, name: str, char: Char, xOffset: float, yOffset: float, zOffset: float, xDirection: float, yDirection: float, zDirection: float, type: int) -> Particle:
      '''Creates a particle effect attached to a character'''
      return opcodes.create_fx_system_on_char_with_direction(self.__handle, name, char, xOffset, yOffset, zOffset, xDirection, yDirection, zDirection, type)

   def create_on_car(self, name: str, vehicle: Car, xOffset: float, yOffset: float, zOffset: float, type: float) -> Particle:
      '''Creates a particle effect attached to a vehicle'''
      return opcodes.create_fx_system_on_car(self.__handle, name, vehicle, xOffset, yOffset, zOffset, type)

   def create_on_car_with_direction(self, name: str, vehicle: Car, xOffset: float, yOffset: float, zOffset: float, xDirection: float, yDirection: float, zDirection: float, type: int) -> Particle:
      '''Creates a particle and attaches it to the specified vehicle with the specified offset and direction'''
      return opcodes.create_fx_system_on_car_with_direction(self.__handle, name, vehicle, xOffset, yOffset, zOffset, xDirection, yDirection, zDirection, type)

   def create_on_object(self, name: str, object: Object, xOffset: float, yOffset: float, zOffset: float, type: int) -> Particle:
      '''Creates a particle effect on an object'''
      return opcodes.create_fx_system_on_object(self.__handle, name, object, xOffset, yOffset, zOffset, type)

   def create_on_object_with_direction(self, name: str, object: Object, xOffset: float, yOffset: float, zOffset: float, xDirection: float, yDirection: float, zDirection: float, type: int) -> Particle:
      '''Creates particle effect on an object'''
      return opcodes.create_fx_system_on_object_with_direction(self.__handle, name, object, xOffset, yOffset, zOffset, xDirection, yDirection, zDirection, type)

   def attach_to_char_bone(self, handle: Char, boneId: int):
      '''Attaches the specified particle to the specified character'''
      opcodes.attach_fx_system_to_char_bone(self.__handle, handle, boneId)

   def kill_now(self):
      '''Destroys the specified particle'''
      opcodes.kill_fx_system_now(self.__handle)


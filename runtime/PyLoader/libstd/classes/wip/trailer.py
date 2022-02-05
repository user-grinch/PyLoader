import libstd.opcodes as opcodes
from typing import Tuple

class Trailer():
   def is_attached_to_cab(self, cab: Car):
      '''Returns true if CAR A has CAR B attached to it like a trailer'''
      return opcodes.is_trailer_attached_to_cab(self.__handle, cab)

   def detach_from_cab(self, cab: Car):
      '''Detaches the trailer from the car which it is attached to'''
      opcodes.detach_trailer_from_cab(self.__handle, cab)

   def attach_to_cab(self, cab: Car):
      opcodes.attach_trailer_to_cab(self.__handle, cab)


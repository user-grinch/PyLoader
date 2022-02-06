import libstd.opcodes as opcodes
from car import Car

class Trailer():
   def is_attached_to_cab(self, obj: Car):
      '''Returns true if CAR A has CAR B attached to it like a trailer'''
      return opcodes.is_trailer_attached_to_cab(self.__handle, obj.get_handle())

   def detach_from_cab(self, obj: Car):
      '''Detaches the trailer from the car which it is attached to'''
      opcodes.detach_trailer_from_cab(self.__handle, obj.get_handle())

   def attach_to_cab(self, obj: Car):
      opcodes.attach_trailer_to_cab(self.__handle, obj.get_handle())


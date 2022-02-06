import _opcodes
from car import Car

class Boat(Car):
   def goto(self, x: float, y: float, z: float):
      '''Makes the boat sail to the location'''
      _opcodes.boat_goto_coords(self.__handle, x, y, z)

   def stop(self):
      '''Turns off the boat's engine'''
      _opcodes.boat_stop(self.__handle)

   def set_cruise_speed(self, maxSpeed: float):
      '''Sets the boat's max speed'''
      _opcodes.set_boat_cruise_speed(self.__handle, maxSpeed)

   def anchor(self, state: bool):
      '''Makes the boat stay motionless in the water'''
      _opcodes.anchor_boat(self.__handle, state)


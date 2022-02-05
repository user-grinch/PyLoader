import libstd.opcodes as opcodes
from typing import Tuple

class Boat():
   def goto(self, x: float, y: float, z: float):
      '''Makes the boat sail to the location'''
      opcodes.boat_goto_coords(self.__handle, x, y, z)

   def stop(self):
      '''Turns off the car's engine'''
      opcodes.boat_stop(self.__handle)

   def set_cruise_speed(self, maxSpeed: float):
      '''Sets the boat's max speed'''
      opcodes.set_boat_cruise_speed(self.__handle, maxSpeed)

   def anchor(self, state: bool):
      '''Makes the boat stay motionless in the water'''
      opcodes.anchor_boat(self.__handle, state)


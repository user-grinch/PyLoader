import libstd.opcodes as opcodes
from typing import Tuple

class StuckCarCheck():
   @staticmethod
   def add(vehicle: Car, speed: float, duration: int):
      '''Adds the vehicle to the stuck cars array'''
      opcodes.add_stuck_car_check(vehicle, speed, duration)

   @staticmethod
   def remove(vehicle: Car):
      '''Removes the vehicle from the stuck cars array'''
      opcodes.remove_stuck_car_check(vehicle)

   @staticmethod
   def is_car_stuck(vehicle: Car):
      '''Returns true if the car is stuck'''
      return opcodes.is_car_stuck(vehicle)

   @staticmethod
   def add_with_warp(vehicle: Car, speed: float, duration: int, stuck: bool, flipped: bool, warp: bool, pathId: int):
      '''Attempts to automatically restore vehicles that get stuck or flipped'''
      opcodes.add_stuck_car_check_with_warp(vehicle, speed, duration, stuck, flipped, warp, pathId)


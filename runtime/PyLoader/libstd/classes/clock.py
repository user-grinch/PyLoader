import _opcodes
from typing import Tuple

class Clock():
   @staticmethod
   def get_time_of_day() ->  Tuple[int, int]:
      '''Returns the number of hours and minutes passed since midnight'''
      return _opcodes.get_time_of_day()

   @staticmethod
   def set_time_of_day(hours: int, minutes: int):
      '''Sets the current in-game time'''
      _opcodes.set_time_of_day(hours, minutes)

   @staticmethod
   def get_minutes_to_time_of_day(hours: int, minutes: int) -> int:
      '''Returns the number of minutes left until the clock matches the time specified'''
      return _opcodes.get_minutes_to_time_of_day(hours, minutes)

   @staticmethod
   def set_time_scale(scale: float):
      '''Sets the game to run at the specified speed'''
      _opcodes.set_time_scale(scale)

   @staticmethod
   def get_game_timer() -> int:
      '''Returns the time passed in milliseconds since the game started'''
      return _opcodes.get_game_timer()

   @staticmethod
   def store():
      '''Saves the current time in game'''
      _opcodes.store_clock()

   @staticmethod
   def restore():
      '''Restores the game time to the time when it was saved with 0253'''
      _opcodes.restore_clock()

   @staticmethod
   def get_current_day_of_week() -> int:
      '''Returns an integer representation of the in-game day of the week'''
      return _opcodes.get_current_day_of_week()

   @staticmethod
   def get_current_date() ->  Tuple[int, int]:
      '''Returns the in-game day of the month and month of the year'''
      return _opcodes.get_current_date()

   @staticmethod
   def set_time_one_day_forward():
      '''Progresses the game to the next day'''
      _opcodes.set_time_one_day_forward()


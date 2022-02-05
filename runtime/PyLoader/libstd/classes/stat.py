import _opcodes

class Stat():
   @staticmethod
   def player_made_progress(progress: int):
      '''Increases the progress made stat by the specified amount'''
      _opcodes.player_made_progress(progress)

   @staticmethod
   def set_progress_total(maxProgress: int):
      '''Sets the maximum progress the player can reach'''
      _opcodes.set_progress_total(maxProgress)

   @staticmethod
   def register_mission_given():
      '''Increments the number of mission attempts stat by 1'''
      _opcodes.register_mission_given()

   @staticmethod
   def register_mission_passed(key: gxt_key):
      '''Sets the GXT of the last mission passed'''
      _opcodes.register_mission_passed(key)

   @staticmethod
   def set_total_number_of_missions(numMissions: int):
      '''Sets the total number of missions that can be completed'''
      _opcodes.set_total_number_of_missions(numMissions)

   @staticmethod
   def register_fastest_time(statId: int, value: int):
      '''Updates the stat if the value is lower than the current stat value'''
      _opcodes.register_fastest_time(statId, value)

   @staticmethod
   def register_best_position(statId: int, position: int):
      '''Updates the race best position'''
      _opcodes.register_best_position(statId, position)

   @staticmethod
   def get_progress_percentage() -> float:
      '''Gets the progress of completion as a percentage'''
      return _opcodes.get_progress_percentage()

   @staticmethod
   def register_oddjob_mission_passed():
      '''Sets the latest odd job mission passed'''
      _opcodes.register_oddjob_mission_passed()

   @staticmethod
   def increment_int(statId: int, value: int):
      '''Increases the stat by the value given'''
      _opcodes.increment_int_stat(statId, value)

   @staticmethod
   def increment_float(statId: int, value: float):
      '''Increases the stat by the value specified'''
      _opcodes.increment_float_stat(statId, value)

   @staticmethod
   def decrement_int(statId: int, value: int):
      '''Decreases the stat by the value given'''
      _opcodes.decrement_int_stat(statId, value)

   @staticmethod
   def decrement_float(statId: int, value: float):
      '''Decreases the stat by the value given'''
      _opcodes.decrement_float_stat(statId, value)

   @staticmethod
   def register_int(statId: int, value: int):
      '''Updates the specified integer stat'''
      _opcodes.register_int_stat(statId, value)

   @staticmethod
   def register_float(statId: int, value: float):
      '''Sets the specified stat to the specified value, if the specified value is greater than the current stat value'''
      _opcodes.register_float_stat(statId, value)

   @staticmethod
   def set_int(statId: int, value: int):
      '''Sets the stat to the specified value'''
      _opcodes.set_int_stat(statId, value)

   @staticmethod
   def set_float(statId: int, value: float):
      '''Sets the stat to the specified value'''
      _opcodes.set_float_stat(statId, value)

   @staticmethod
   def get_int(statId: int) -> int:
      '''Returns the value of the specified integer stat'''
      return _opcodes.get_int_stat(statId)

   @staticmethod
   def get_float(statId: int) -> float:
      '''Returns the value of the specified float stat'''
      return _opcodes.get_float_stat(statId)

   @staticmethod
   def find_number_tags_tagged() -> int:
      '''Gets the number of spraytags painted over'''
      return _opcodes.find_number_tags_tagged()

   @staticmethod
   def get_territory_under_control_percentage() -> int:
      return _opcodes.get_territory_under_control_percentage()

   @staticmethod
   def show_update_stats(state: bool):
      '''Displays help boxes indicating that the players stats have been updated'''
      _opcodes.show_update_stats(state)

   @staticmethod
   def set_mission_respect_total(totalRespect: int):
      _opcodes.set_mission_respect_total(totalRespect)

   @staticmethod
   def award_player_mission_respect(value: int):
      _opcodes.award_player_mission_respect(value)

   @staticmethod
   def increment_int_no_message(statId: int, value: int):
      _opcodes.increment_int_stat_no_message(statId, value)

   @staticmethod
   def increment_float_no_message(statId: int, value: float):
      '''Adds the value to the specified stat'''
      _opcodes.increment_float_stat_no_message(statId, value)


import _opcodes
from typing import Tuple

class Cutscene():
   @staticmethod
   def set_offset(x: float, y: float, z: float):
      '''Sets the position for a cutscene'''
      _opcodes.set_cutscene_offset(x, y, z)

   @staticmethod
   def load(name: str):
      '''Loads the data for the specified cutscene'''
      _opcodes.load_cutscene(name)

   @staticmethod
   def start():
      '''Starts the loaded cutscene (02E4)'''
      _opcodes.start_cutscene()

   @staticmethod
   def get_time() -> int:
      '''Returns the time in milliseconds passed since the cutscene has started (02E7)'''
      return _opcodes.get_cutscene_time()

   @staticmethod
   def has_finished():
      '''Returns true if the cutscene has finished'''
      return _opcodes.has_cutscene_finished()

   @staticmethod
   def clear():
      '''Ends the current cutscene, freeing game memory'''
      _opcodes.clear_cutscene()

   @staticmethod
   def was_skipped():
      '''Returns true if the cutscene was skipped'''
      return _opcodes.was_cutscene_skipped()

   @staticmethod
   def has_loaded():
      '''Returns true if the cutscene has finished loading'''
      return _opcodes.has_cutscene_loaded()

   @staticmethod
   def get_offset() ->  Tuple[float, float, float]:
      '''Stores the offset of the currently loaded cutscene'''
      return _opcodes.get_cutscene_offset()

   @staticmethod
   def append_to_next(_p1: str, _p2: str):
      _opcodes.append_to_next_cutscene(_p1, _p2)


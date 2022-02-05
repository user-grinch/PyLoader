import _opcodes
from enums import WeaponType

class KillFrenzy():
   @staticmethod
   def start(text: str, weaponType: WeaponType, timeInMs: int, targetsNum: int, targetModel1: int, targetModel2: int, targetModel3: int, targetModel4: int, betaSoundsAndMessages: bool):
      '''Starts a rampage'''
      _opcodes.start_kill_frenzy(text, weaponType, timeInMs, targetsNum, targetModel1, targetModel2, targetModel3, targetModel4, betaSoundsAndMessages)

   @staticmethod
   def read_status() -> int:
      '''Returns the status of the current rampage'''
      return _opcodes.read_kill_frenzy_status()

   @staticmethod
   def fail():
      '''Cancels current rampage, setting the rampage status to failed'''
      _opcodes.fail_kill_frenzy()


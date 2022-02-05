import libstd.opcodes as opcodes
from typing import Tuple

class Gang():
   @staticmethod
   def set_weapons(gangId: GangType, weaponType1: WeaponType, weaponType2: WeaponType, weaponType3: WeaponType):
      '''Sets the weapons that the specified gang can use'''
      opcodes.set_gang_weapons(gangId, weaponType1, weaponType2, weaponType3)


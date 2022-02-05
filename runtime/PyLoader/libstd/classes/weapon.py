import _opcodes
from enums import WeaponType

class Weapon():
   @staticmethod
   def get_model(weaponType: WeaponType) -> int:
      '''Gets the model ID of the weapon according to the weapon type'''
      return _opcodes.get_weapontype_model(weaponType)

   @staticmethod
   def get_slot(weaponType: WeaponType) -> int:
      return _opcodes.get_weapontype_slot(weaponType)


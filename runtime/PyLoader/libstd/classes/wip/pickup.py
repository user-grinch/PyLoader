import libstd.opcodes as opcodes
from enums import PickupType

class Pickup():
   def __init__(self, modelId: int, pickupType: PickupType, x: float, y: float, z: float) -> Pickup:
      '''Creates a pickup with the given model and type'''
      self.__handle = opcodes.create_pickup(self.__handle, modelId, pickupType, x, y, z)

   def has_been_collected(self):
      '''Returns true if specified pickup has been collected'''
      return opcodes.has_pickup_been_collected(self.__handle)

   def remove(self):
      '''Destroys the specified pickup, freeing game memory'''
      opcodes.remove_pickup(self.__handle)

   def create_money(self, x: float, y: float, z: float, cashAmount: int, permanent: bool) -> Pickup:
      '''Creates a money pickup with the specified cash value'''
      return opcodes.create_money_pickup(self.__handle, x, y, z, cashAmount, permanent)

   def create_with_ammo(self, modelId: int, pickupType: PickupType, ammo: int, x: float, y: float, z: float) -> Pickup:
      '''Creates a weapon pickup, giving the player the specified amount of ammo when they pick it up'''
      return opcodes.create_pickup_with_ammo(self.__handle, modelId, pickupType, ammo, x, y, z)

   def create_protection(self, x: float, y: float, z: float, revenueLimit: int, revenueRate: int) -> Pickup:
      '''Creates an asset revenue pickup'''
      return opcodes.create_protection_pickup(self.__handle, x, y, z, revenueLimit, revenueRate)

   def create_locked_property(self, x: float, y: float, z: float, message: str) -> Pickup:
      '''Creates an asset icon for an asset that is not for sale'''
      return opcodes.create_locked_property_pickup(self.__handle, x, y, z, message)

   def create_for_sale_property(self, x: float, y: float, z: float, price: int, message: str) -> Pickup:
      '''Creates an asset pickup for an asset which can be bought'''
      return opcodes.create_forsale_property_pickup(self.__handle, x, y, z, price, message)

   def get_coordinates(self, x: float, y: float, z: float):
      '''Returns the X, Y and Z coordinates of the pickup'''
      opcodes.get_pickup_coordinates(self.__handle, x, y, z)

   def update_money_per_day(self, value: int):
      opcodes.update_pickup_money_per_day(self.__handle, value)

   def create_snapshot(self, x: float, y: float, z: float) -> Pickup:
      return opcodes.create_snapshot_pickup(x, y, z)

   def create_horseshoe(self, x: float, y: float, z: float) -> Pickup:
      return opcodes.create_horseshoe_pickup(self.__handle, x, y, z)

   def create_oyster(self, x: float, y: float, z: float) -> Pickup:
      return opcodes.create_oyster_pickup(self.__handle, x, y, z)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid pickup handle'''
      return opcodes.does_pickup_exist(handle)


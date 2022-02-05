import libstd.opcodes as opcodes
from typing import Tuple

class CarGenerator():
   def __init__(self, x: float, y: float, z: float, heading: float, modelId: int, primaryColor: int, secondaryColor: int, forceSpawn: bool, alarmChance: int, doorLockChance: int, minDelay: int, maxDelay: int) -> CarGenerator:
      '''Initializes a parked car generator'''
      self.__handle = opcodes.create_car_generator(self.__handle, x, y, z, heading, modelId, primaryColor, secondaryColor, forceSpawn, alarmChance, doorLockChance, minDelay, maxDelay)

   def switch(self, amount: int):
      '''Specifies the number of times the car generator spawns a car (101 - infinite)'''
      opcodes.switch_car_generator(self.__handle, amount)

   @staticmethod
   def suppress_car_model(model: int):
      '''Prevents the specified car model from spawning for car generators'''
      opcodes.suppress_car_model(model)

   @staticmethod
   def dont_suppress_car_model(modelId: int):
      '''Allows the specified car model to spawn for car generators'''
      opcodes.dont_suppress_car_model(modelId)

   @staticmethod
   def dont_suppress_any_car_models():
      '''Resets the disabled car model list for car generators'''
      opcodes.dont_suppress_any_car_models()

   def create_with_plate(self, x: float, y: float, z: float, heading: float, modelId: int, primaryColor: int, secondaryColor: int, forceSpawn: bool, alarmChance: int, doorLockChance: int, minDelay: int, maxDelay: int, plateName: str) -> CarGenerator:
      '''Creates a parked car generator with a number plate'''
      return opcodes.create_car_generator_with_plate(self.__handle, x, y, z, heading, modelId, primaryColor, secondaryColor, forceSpawn, alarmChance, doorLockChance, minDelay, maxDelay, plateName)

   def set_has_been_owned(self, state: bool):
      '''Sets whether the player will not receive a wanted level when entering a vehicle from this generator when the police is around'''
      opcodes.set_has_been_owned_for_car_generator(self.__handle, state)


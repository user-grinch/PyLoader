import libstd.opcodes as opcodes
from typing import Tuple

class Garage():
   @staticmethod
   def set_target_car_for_mission(garageName: GarageName, vehicle: Car):
      '''Sets the specified garage to only accept the specified vehicle'''
      opcodes.set_target_car_for_mission_garage(garageName, vehicle)

   @staticmethod
   def activate(garageId: str):
      '''Activates the garage'''
      opcodes.activate_garage(garageId)

   @staticmethod
   def deactivate(garageId: str):
      '''Deactivates the garage'''
      opcodes.deactivate_garage(garageId)

   @staticmethod
   def change_type(garageId: str, type: GarageType):
      '''Sets the garage's type'''
      opcodes.change_garage_type(garageId, type)

   @staticmethod
   def open(garageId: str):
      '''Opens the garage'''
      opcodes.open_garage(garageId)

   @staticmethod
   def close(garageId: str):
      '''Closes the garage'''
      opcodes.close_garage(garageId)

   @staticmethod
   def is_open(garageId: str):
      '''Returns true if the garage's door is open'''
      return opcodes.is_garage_open(garageId)

   @staticmethod
   def is_closed(garageId: str):
      '''Returns true if the garage's door is closed'''
      return opcodes.is_garage_closed(garageId)

   @staticmethod
   def set_respray_free(garageId: str, state: bool):
      opcodes.set_garage_respray_free(garageId, state)


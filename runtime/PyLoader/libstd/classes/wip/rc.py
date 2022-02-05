import libstd.opcodes as opcodes
from typing import Tuple

class RC():
   @staticmethod
   def give_model_to_player(handle: Player, x: float, y: float, z: float, angle: float, modelId: int):
      '''Puts the player in control of a remote-control vehicle'''
      opcodes.give_remote_controlled_model_to_player(handle, x, y, z, angle, modelId)

   @staticmethod
   def get_car(player: Player) -> Car:
      '''Returns the players radio-controlled vehicle'''
      return opcodes.get_remote_controlled_car(player)

   @staticmethod
   def set_enable_detonate(state: bool):
      '''Enables a remote-control vehicle detonation'''
      opcodes.set_enable_rc_detonate(state)

   @staticmethod
   def set_enable_detonate_on_contact(state: bool):
      '''Sets whether RC Bandits detonate on contact with the wheels of any four-wheeled vehicles'''
      opcodes.set_enable_rc_detonate_on_contact(state)

   @staticmethod
   def remove_buggy():
      '''Exits remote-control mode'''
      opcodes.remove_rc_buggy()

   @staticmethod
   def take_car(player: Player, vehicle: Car):
      '''Puts the specified player in control of a remote-control vehicle'''
      opcodes.take_remote_control_of_car(player, vehicle)


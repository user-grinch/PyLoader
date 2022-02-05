import libstd.opcodes as opcodes
from typing import Tuple

class Plane():
   def goto_coords(self, x: float, y: float, z: float, minAltitude: float, maxAltitude: float):
      opcodes.plane_goto_coords(self.__handle, x, y, z, minAltitude, maxAltitude)

   def attack_player(self, handle: Player, radius: float):
      '''Sets the planes mission to attack the player'''
      opcodes.plane_attack_player(self.__handle, handle, radius)

   def fly_in_direction(self, heading: float, minAltitude: float, maxAltitude: float):
      opcodes.plane_fly_in_direction(self.__handle, heading, minAltitude, maxAltitude)

   def follow_entity(self, char: Char, vehicle: Car, radius: float):
      opcodes.plane_follow_entity(self.__handle, char, vehicle, radius)

   def set_throttle(self, throttle: float):
      opcodes.set_plane_throttle(self.__handle, throttle)

   def starts_in_air(self):
      '''Provides the aircraft with full power so it can start flying mid-air'''
      opcodes.plane_starts_in_air(self.__handle)

   def attack_player_using_dog_fight(self, player: Player, radius: float):
      opcodes.plane_attack_player_using_dog_fight(self.__handle, player, radius)

   def set_undercarriage_up(self, state: bool):
      '''Sets whether the plane's landing wheels are up'''
      opcodes.set_plane_undercarriage_up(self.__handle, state)

   def get_undercarriage_position(self) -> float:
      return opcodes.get_plane_undercarriage_position(self.__handle)


import libstd.opcodes as opcodes
from typing import Tuple

class Heli():
   def goto_coords(self, x: float, y: float, z: float, minAltitude: float, maxAltitude: float):
      '''Makes the helicopter fly to the specified location, keeping a specific Z height/altitude'''
      opcodes.heli_goto_coords(self.__handle, x, y, z, minAltitude, maxAltitude)

   def set_orientation(self, angle: float):
      '''Forces the heli rotation relative to the north'''
      opcodes.set_heli_orientation(self.__handle, angle)

   def clear_orientation(self):
      '''Resets the heli rotation set with 04D0'''
      opcodes.clear_heli_orientation(self.__handle)

   def set_stabiliser(self, state: bool):
      '''Limits the amount a helicopter can tilt'''
      opcodes.set_heli_stabiliser(self.__handle, state)

   def fire_hunter_gun(self):
      '''Makes the Hunter helicopter fire cannon gun'''
      opcodes.fire_hunter_gun(self.__handle)

   def make_come_crashing_down(self):
      '''Makes helicopter simulate crash landing, exploding on the way if high up'''
      opcodes.make_heli_come_crashing_down(self.__handle)

   def attack_player(self, handle: Player, radius: float):
      '''Makes the heli follow and attack the current player in the given radius'''
      opcodes.heli_attack_player(self.__handle, handle, radius)

   def follow_entity(self, char: Char, vehicle: Car, radius: float):
      '''Makes the heli follow the specified actor or vehicle in the air'''
      opcodes.heli_follow_entity(self.__handle, char, vehicle, radius)

   def chase_entity(self, char: Char, vehicle: Car, radius: float):
      '''Makes the helicopter hunt down the character or the vehicle within the specified radius'''
      opcodes.police_heli_chase_entity(self.__handle, char, vehicle, radius)

   def land_at_coords(self, x: float, y: float, z: float, minAltitude: float, maxAltitude: float):
      opcodes.heli_land_at_coords(self.__handle, x, y, z, minAltitude, maxAltitude)

   def keep_entity_in_view(self, char: Char, vehicle: Car, minAltitude: float, maxAltitude: any):
      opcodes.heli_keep_entity_in_view(self.__handle, char, vehicle, minAltitude, maxAltitude)

   def attach_winch(self, state: bool):
      opcodes.attach_winch_to_heli(self.__handle, state)

   def release_entity_from_winch(self):
      opcodes.release_entity_from_winch(self.__handle)

   def grab_entity_on_winch(self) ->  Tuple[Char, Car, Object]:
      '''Retrieves the entity attached to the heli's magnet and returns to specific variables depending on the entities type'''
      return opcodes.grab_entity_on_winch(self.__handle)

   def activate_speed_cheat(self, _p2: int):
      '''Provides the heli with extra thrust power'''
      opcodes.activate_heli_speed_cheat(self.__handle, _p2)

   def set_blades_full_speed(self):
      '''Makes the helicopter rotor spin at full speed instantly'''
      opcodes.set_heli_blades_full_speed(self.__handle)

   def set_reached_target_distance(self, distance: int):
      opcodes.set_heli_reached_target_distance(self.__handle, distance)

   def disable_audio(self, state: bool):
      '''Sets whether the helicopter sound is muted'''
      opcodes.disable_heli_audio(self.__handle, state)


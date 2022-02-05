import libstd.opcodes as opcodes
from typing import Tuple

class Blip():
   def add_for_car_old(self, vehicle: Car, color: BlipColor, display: BlipDisplay) -> Blip:
      '''Adds a blip with properties to the vehicle'''
      return opcodes.add_blip_for_car_old(self.__handle, vehicle, color, display)

   def remove(self):
      '''Removes the blip'''
      opcodes.remove_blip(self.__handle)

   def change_color(self, color: BlipColor):
      '''Sets the blip's color'''
      opcodes.change_blip_colour(self.__handle, color)

   def add_for_coord_old(self, x: float, y: float, z: float, colour: BlipColor, display: BlipDisplay) -> Blip:
      '''Adds a blip with properties at the location'''
      return opcodes.add_blip_for_coord_old(self.__handle, x, y, z, colour, display)

   def change_scale(self, size: int):
      '''Sets the blip's size'''
      opcodes.change_blip_scale(self.__handle, size)

   def add_for_car(self, vehicle: Car) -> Blip:
      '''Adds a blip and a marker to the vehicle'''
      return opcodes.add_blip_for_car(self.__handle, vehicle)

   def add_for_char(self, char: Char) -> Blip:
      '''Adds a blip and a marker to the character'''
      return opcodes.add_blip_for_char(self.__handle, char)

   def add_for_object(self, object: Object) -> Blip:
      '''Adds a blip and a marker to the object'''
      return opcodes.add_blip_for_object(self.__handle, object)

   def add_for_coord(self, x: float, y: float, z: float) -> Blip:
      '''Adds a blip to the location'''
      return opcodes.add_blip_for_coord(self.__handle, x, y, z)

   def change_display(self, display: BlipDisplay):
      '''Changes the display of the specified blip'''
      opcodes.change_blip_display(self.__handle, display)

   def add_sprite_for_contact_point(self, x: float, y: float, z: float, sprite: RadarSprite) -> Blip:
      '''Adds a sprite blip to the contact point'''
      return opcodes.add_sprite_blip_for_contact_point(self.__handle, x, y, z, sprite)

   def add_sprite_for_coord(self, x: float, y: float, z: float, sprite: RadarSprite) -> Blip:
      '''Adds a sprite blip to the location'''
      return opcodes.add_sprite_blip_for_coord(self.__handle, x, y, z, sprite)

   def add_for_pickup(self, pickup: Pickup) -> Blip:
      '''Adds a blip and a marker to the pickup'''
      return opcodes.add_blip_for_pickup(self.__handle, pickup)

   def add_short_range_sprite_for_coord(self, x: float, y: float, z: float, sprite: RadarSprite) -> Blip:
      '''Adds a sprite blip for the specified coordinates'''
      return opcodes.add_short_range_sprite_blip_for_coord(self.__handle, x, y, z, sprite)

   def add_short_range_sprite_for_contact_point(self, x: float, y: float, z: float, sprite: RadarSprite) -> Blip:
      '''Adds a contact sprite blip for the specified coordinates'''
      return opcodes.add_short_range_sprite_blip_for_contact_point(self.__handle, x, y, z, sprite)

   def add_for_searchlight(self, searchlight: Searchlight) -> Blip:
      '''Creates a blip indicating the searchlights position on the radar'''
      return opcodes.add_blip_for_searchlight(self.__handle, searchlight)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid blip handle'''
      return opcodes.does_blip_exist(handle)

   def set_always_display_on_zoomed_radar(self, state: bool):
      '''Sets whether the tracking blip will remain regardless of the entities existance'''
      opcodes.set_blip_always_display_on_zoomed_radar(self.__handle, state)

   def set_as_friendly(self, state: bool):
      opcodes.set_blip_as_friendly(self.__handle, state)

   def add_for_dead_char(self, char: Char) -> Blip:
      '''Adds a blip and a marker to the character (identical to 0187)'''
      return opcodes.add_blip_for_dead_char(self.__handle, char)

   def set_entry_exit(self, x: float, y: float, radius: float):
      '''Assigns the blip to the specified entrance/exit marker'''
      opcodes.set_blip_entry_exit(self.__handle, x, y, radius)

   def set_coord_appearance(self, color: int):
      '''Works similar to 0165, except this command does not work on tracking blips, has different colors and does not support direct RGBA setting'''
      opcodes.set_coord_blip_appearance(self.__handle, color)


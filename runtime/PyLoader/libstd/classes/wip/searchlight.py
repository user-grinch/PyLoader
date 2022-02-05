import libstd.opcodes as opcodes
from typing import Tuple

class Searchlight():
   def __init__(self, x: float, y: float, z: float, xPoint: float, yPoint: float, zPoint: float, radius: float, radiusPoint: float) -> Searchlight:
      self.__handle = opcodes.create_searchlight(self.__handle, x, y, z, xPoint, yPoint, zPoint, radius, radiusPoint)

   def delete(self):
      opcodes.delete_searchlight(self.__handle)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid searchlight handle'''
      return opcodes.does_searchlight_exist(handle)

   def move_between_coords(self, fromX: float, fromY: float, fromZ: float, toX: float, toY: float, toZ: float, speed: float):
      '''Makes the specified searchlight travel between the two specified points with the specified speed'''
      opcodes.move_searchlight_between_coords(self.__handle, fromX, fromY, fromZ, toX, toY, toZ, speed)

   def point_at_coord(self, x: float, y: float, z: float, speed: float):
      '''Makes the searchlight target move/travel to the specified coords'''
      opcodes.point_searchlight_at_coord(self.__handle, x, y, z, speed)

   def point_at_char(self, handle: Char, speed: float):
      '''Makes the searchlight follow the specified actor'''
      opcodes.point_searchlight_at_char(self.__handle, handle, speed)

   def is_char_in(self, handle: Char):
      '''Returns true if the searchlight has spotted the actor'''
      return opcodes.is_char_in_searchlight(self.__handle, handle)

   def point_at_vehicle(self, handle: Car, speed: float):
      opcodes.point_searchlight_at_vehicle(self.__handle, handle, speed)

   def is_vehicle_in(self, handle: Car):
      '''Returns true if the searchlights light is on the vehicle'''
      return opcodes.is_vehicle_in_searchlight(self.__handle, handle)

   def create_on_vehicle(self, vehicle: Car, xOffset: float, yOffset: float, zOffset: float, xPoint: float, yPoint: float, zPoint: float, pointRadius: float, radius: float) -> Searchlight:
      '''Creates a searchlight-styled light cone on a car with the specified offset and points to a certain point'''
      return opcodes.create_searchlight_on_vehicle(self.__handle, vehicle, xOffset, yOffset, zOffset, xPoint, yPoint, zPoint, pointRadius, radius)

   def attach_to_object(self, spotTower: Object, spotHousing: Object, spotBulb: Object, xOffset: float, yOffset: float, zOffset: float):
      '''Attaches the searchlight to the specified objects'''
      opcodes.attach_searchlight_to_searchlight_object(self.__handle, spotTower, spotHousing, spotBulb, xOffset, yOffset, zOffset)

   def set_clip_if_colliding(self, state: bool):
      opcodes.set_searchlight_clip_if_colliding(self.__handle, state)

   def switch_on_ground(self, state: bool):
      '''Sets whether the searchlight shows a shadow effect on the surface it hits'''
      opcodes.switch_on_ground_searchlight(self.__handle, state)


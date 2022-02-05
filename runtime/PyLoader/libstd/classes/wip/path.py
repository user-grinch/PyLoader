import libstd.opcodes as opcodes
from typing import Tuple

class Path():
   @staticmethod
   def switch_roads_on(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Allows cars to drive in the specified 3D area'''
      opcodes.switch_roads_on(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def switch_roads_off(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Prevents cars from driving on roads in the specified 3D area'''
      opcodes.switch_roads_off(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def switch_ped_roads_on(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Allows pedestrians to walk into the specified area'''
      opcodes.switch_ped_roads_on(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def switch_ped_roads_off(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Forbids pedestrians to walk into the specified area'''
      opcodes.switch_ped_roads_off(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def get_closest_char_node(x: float, y: float, z: float) ->  Tuple[float, float, float]:
      '''Returns the nearest path node from the specified coordinates that a pedestrian can walk on'''
      return opcodes.get_closest_char_node(x, y, z)

   @staticmethod
   def get_closest_car_node(x: float, y: float, z: float) ->  Tuple[float, float, float]:
      '''Returns the nearest path note from the specified coordinates that a vehicle can drive on'''
      return opcodes.get_closest_car_node(x, y, z)

   @staticmethod
   def get_closest_car_node_with_heading(x: float, y: float, z: float) ->  Tuple[float, float, float, float]:
      '''Returns the position and heading of the closest vehicle path node to the specified position'''
      return opcodes.get_closest_car_node_with_heading(x, y, z)

   @staticmethod
   def get_closest_straight_road(x: float, y: float, z: float, minDist: float, maxDist: float) ->  Tuple[float, float, float, float, float, float, float]:
      '''Gets two closest path nodes within the specified distance range'''
      return opcodes.get_closest_straight_road(x, y, z, minDist, maxDist)

   @staticmethod
   def get_nth_closest_car_node(fromX: float, fromY: float, fromZ: float, n: int) ->  Tuple[float, float, float]:
      '''Gets the coordinates of the nth car path node closest to the given coordinates'''
      return opcodes.get_nth_closest_car_node(fromX, fromY, fromZ, n)

   @staticmethod
   def flush_route():
      '''Flushes the task route'''
      opcodes.flush_route()

   @staticmethod
   def extend_route(x: float, y: float, z: float):
      '''Adds a point to the task route'''
      opcodes.extend_route(x, y, z)

   @staticmethod
   def load_path_nodes_in_area(leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float):
      '''Adds an area where script created cars will avoid driving in'''
      opcodes.load_path_nodes_in_area(leftBottomX, leftBottomY, rightTopX, rightTopY)

   @staticmethod
   def release_nodes():
      '''Removes areas forbidden for scripted cars set up by 0606'''
      opcodes.release_path_nodes()

   @staticmethod
   def get_nth_closest_car_node_with_heading(xCoord: float, yCoord: float, zCoord: float, nth: int) ->  Tuple[float, float, float, float]:
      return opcodes.get_nth_closest_car_node_with_heading(xCoord, yCoord, zCoord, nth)

   @staticmethod
   def flush_patrol_route():
      '''Clears all previous patrol data to start a new patrol route, which can be used in combination with 0755 to create patrol routes'''
      opcodes.flush_patrol_route()

   @staticmethod
   def extend_patrol_route(x: float, y: float, z: float, animationName: str, animationFile: str):
      '''Adds a new point to the patrol route'''
      opcodes.extend_patrol_route(x, y, z, animationName, animationFile)

   @staticmethod
   def switch_roads_back_to_original(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      opcodes.switch_roads_back_to_original(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def switch_ped_roads_back_to_original(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      opcodes.switch_ped_roads_back_to_original(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def mark_road_node_as_dont_wander(x: float, y: float, z: float):
      opcodes.mark_road_node_as_dont_wander(x, y, z)

   @staticmethod
   def unmark_all_road_nodes_as_dont_wander():
      opcodes.unmark_all_road_nodes_as_dont_wander()


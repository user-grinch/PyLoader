import libstd.opcodes as opcodes
from typing import Tuple

class World():
   @staticmethod
   def set_car_density_multiplier(multiplier: float):
      '''Sets the quantity of traffic that will spawn in the game'''
      opcodes.set_car_density_multiplier(multiplier)

   @staticmethod
   def get_ground_z_for3_d_coord(x: float, y: float, z: float) -> float:
      '''Stores the ground position at the location'''
      return opcodes.get_ground_z_for_3d_coord(x, y, z)

   @staticmethod
   def is_projectile_in_area(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Returns true if a projectile is in the specified 3D area'''
      return opcodes.is_projectile_in_area(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def remove_all_script_fires():
      '''Removes all script fires (02CF)'''
      opcodes.remove_all_script_fires()

   def get_random_car_of_type_in_area(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, modelId: int) -> Car:
      '''Returns the handle of a random car with the specified model in the specified 2D area, or -1 otherwise'''
      return opcodes.get_random_car_of_type_in_area(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, modelId)

   @staticmethod
   def is_area_occupied(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, solid: bool, car: bool, char: bool, object: bool, particle: bool):
      '''Returns true if there is anything with the specified properties within the 3D area'''
      return opcodes.is_area_occupied(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, solid, car, char, object, particle)

   @staticmethod
   def is_explosion_in_area(explosionType: ExplosionType, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Returns true if there is an explosion of the specified type in the 3D area'''
      return opcodes.is_explosion_in_area(explosionType, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def set_visibility_of_closest_object_of_type(x: float, y: float, z: float, radius: float, modelId: model_object, state: bool):
      '''Sets the visibility of the object closest to the specified coordinates, matching the specified model'''
      opcodes.set_visibility_of_closest_object_of_type(x, y, z, radius, modelId, state)

   @staticmethod
   def is_point_obscured_by_a_mission_entity(x: float, y: float, z: float, radiusX: float, radiusY: float, radiusZ: float):
      '''Returns true if there is a vehicle in the specified area'''
      return opcodes.is_point_obscured_by_a_mission_entity(x, y, z, radiusX, radiusY, radiusZ)

   @staticmethod
   def clear_area(x: float, y: float, z: float, radius: float, clearParticles: bool):
      '''Clears the area, removing all vehicles and pedestrians'''
      opcodes.clear_area(x, y, z, radius, clearParticles)

   @staticmethod
   def swap_nearest_building_model(x: float, y: float, z: float, radius: float, fromModelId: int, toModelId: int):
      '''Swaps a map model with another map model nearest to the center of the search area'''
      opcodes.swap_nearest_building_model(x, y, z, radius, fromModelId, toModelId)

   @staticmethod
   def switch_processing(state: bool):
      '''Sets whether the game should render the world or only the cutscene objects'''
      opcodes.switch_world_processing(state)

   @staticmethod
   def clear_area_of_cars(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Clears all cars in the specified 3D area'''
      opcodes.clear_area_of_cars(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def create_random_car_for_car_park(x: float, y: float, z: float, heading: float):
      '''Starts spawning random cars at the specified location'''
      opcodes.create_random_car_for_car_park(x, y, z, heading)

   @staticmethod
   def set_ped_density_multiplier(multiplier: float):
      '''Sets the quantity of pedestrians to spawn in the game'''
      opcodes.set_ped_density_multiplier(multiplier)

   @staticmethod
   def clear_area_of_chars(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Clears all pedestrians from the given area'''
      opcodes.clear_area_of_chars(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def is_any_pickup_at_coords(x: float, y: float, z: float):
      '''Returns true if the pickup at the specified coordinates is available to be picked up'''
      return opcodes.is_any_pickup_at_coords(x, y, z)

   @staticmethod
   def get_dead_char_pickup_coords(char: Char) ->  Tuple[float, float, float]:
      '''Returns appropriate coordinates for creating a pickup by a dead character'''
      return opcodes.get_dead_char_pickup_coords(char)

   @staticmethod
   def create_script_roadblock(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, type: int):
      '''Creates a roadblock in the specified area with the specified type'''
      opcodes.create_script_roadblock(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, type)

   @staticmethod
   def clear_all_script_roadblocks():
      '''Removes references to all created roadblocks, freeing game memory'''
      opcodes.clear_all_script_roadblocks()

   @staticmethod
   def add_set_piece(type: SetPieceType, fromX: float, fromY: float, toX: float, toY: float, spawnPoliceAAtX: float, spawnPoliceAAtY: float, headedTowardsAAtX: float, headedTowardsAAtY: float, spawnPoliceBAtX: float, spawnPoliceBAtY: float, headedTowardsBAtX: float, headedTowardsBAtY: float):
      '''Creates a trigger zone for police to appear during chases'''
      opcodes.add_set_piece(type, fromX, fromY, toX, toY, spawnPoliceAAtX, spawnPoliceAAtY, headedTowardsAAtX, headedTowardsAAtY, spawnPoliceBAtX, spawnPoliceBAtY, headedTowardsBAtX, headedTowardsBAtY)

   @staticmethod
   def set_extra_colors(color: int, fade: bool):
      '''Sets the extra color of the sky'''
      opcodes.set_extra_colours(color, fade)

   @staticmethod
   def clear_extra_colors(withFade: bool):
      '''Clears the extra color of the sky'''
      opcodes.clear_extra_colours(withFade)

   @staticmethod
   def get_random_car_of_type_in_area_no_save(leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, modelId: int) -> Car:
      '''Loops through the pool of vehicles to retrieve one that matches the specified model in the specified 2D area'''
      return opcodes.get_random_car_of_type_in_area_no_save(leftBottomX, leftBottomY, rightTopX, rightTopY, modelId)

   @staticmethod
   def fire_single_bullet(fromX: float, fromY: float, fromZ: float, toX: float, toY: float, toZ: float, energy: int):
      opcodes.fire_single_bullet(fromX, fromY, fromZ, toX, toY, toZ, energy)

   @staticmethod
   def is_line_of_sight_clear(fromX: float, fromY: float, fromZ: float, toX: float, toY: float, toZ: float, buildings: bool, cars: bool, chars: bool, objects: bool, particles: bool):
      '''Checks if there is something in the range of the two specified points'''
      return opcodes.is_line_of_sight_clear(fromX, fromY, fromZ, toX, toY, toZ, buildings, cars, chars, objects, particles)

   @staticmethod
   def get_number_of_fires_in_range(x: float, y: float, z: float, radius: float) -> int:
      return opcodes.get_number_of_fires_in_range(x, y, z, radius)

   @staticmethod
   def set_la_riots(state: bool):
      '''Enables the LS Riots, making smoke appear on houses, random car fires occur, peds stealing things and attacking each other in a frenzy'''
      opcodes.set_la_riots(state)

   @staticmethod
   def switch_random_trains(state: bool):
      '''Sets whether trains are generated'''
      opcodes.switch_random_trains(state)

   @staticmethod
   def delete_mission_trains():
      '''Destroys all script-created trains'''
      opcodes.delete_mission_trains()

   @staticmethod
   def mark_mission_trains_as_no_longer_needed():
      '''Marks the train as no longer needed by the script, allowing it to be deleted by the game'''
      opcodes.mark_mission_trains_as_no_longer_needed()

   @staticmethod
   def delete_all_trains():
      '''Destroys all trains, including those that are not created by the script'''
      opcodes.delete_all_trains()

   @staticmethod
   def get_percentage_tagged_in_area(leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float) -> int:
      '''Gets the percentage of the number of tags sprayed in the area'''
      return opcodes.get_percentage_tagged_in_area(leftBottomX, leftBottomY, rightTopX, rightTopY)

   @staticmethod
   def set_tag_status_in_area(leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, percent: int):
      '''Sets whether all tags in the area are sprayed'''
      opcodes.set_tag_status_in_area(leftBottomX, leftBottomY, rightTopX, rightTopY, percent)

   @staticmethod
   def is_closest_object_of_type_smashed_or_damaged(x: float, y: float, z: float, radius: float, modelId: model_object, smashed: bool, damaged: bool):
      return opcodes.is_closest_object_of_type_smashed_or_damaged(x, y, z, radius, modelId, smashed, damaged)

   @staticmethod
   def is_flame_in_angled_area2_d(leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      '''Returns true if there's any fire particles within the specified area'''
      return opcodes.is_flame_in_angled_area_2d(leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   @staticmethod
   def is_flame_in_angled_area3_d(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      '''Returns true if there's any flames within the specified area'''
      return opcodes.is_flame_in_angled_area_3d(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   @staticmethod
   def get_random_car_in_sphere_no_save(x: float, y: float, z: float, radius: float, model: int) -> Car:
      return opcodes.get_random_car_in_sphere_no_save(x, y, z, radius, model)

   @staticmethod
   def get_random_char_in_sphere(x: float, y: float, z: float, radius: float, civilian: bool, gang: bool, criminal: bool) -> Char:
      return opcodes.get_random_char_in_sphere(x, y, z, radius, civilian, gang, criminal)

   @staticmethod
   def get_number_of_fires_in_area(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float) -> int:
      '''Gets the number of fires within the specified area'''
      return opcodes.get_number_of_fires_in_area(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def get_nearest_tag_position(xCoord: float, yCoord: float, zCoord: float) ->  Tuple[float, float, float]:
      return opcodes.get_nearest_tag_position(xCoord, yCoord, zCoord)

   @staticmethod
   def remove_oil_puddles_in_area(leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float):
      opcodes.remove_oil_puddles_in_area(leftBottomX, leftBottomY, rightTopX, rightTopY)

   @staticmethod
   def get_city_from_coords(x: float, y: float, z: float) -> Town:
      '''Returns the town the specified location is within'''
      return opcodes.get_city_from_coords(x, y, z)

   @staticmethod
   def has_object_of_type_been_smashed(x: float, y: float, z: float, radius: float, modelId: model_object):
      return opcodes.has_object_of_type_been_smashed(x, y, z, radius, modelId)

   @staticmethod
   def switch_entry_exit(interiorName: str, state: bool):
      '''Locates the enex marker via the specified name and sets whether it is visible and usable'''
      opcodes.switch_entry_exit(interiorName, state)

   @staticmethod
   def get_parking_node_in_area(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float) ->  Tuple[float, float, float]:
      '''Stores the coordinates of the nearest car park node in the specified area'''
      return opcodes.get_parking_node_in_area(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def add_stunt_jump(startX: float, startY: float, startZ: float, startRadiusX: float, startRadiusY: float, startRadiusZ: float, finishX: float, finishY: float, finishZ: float, finishRadiusX: float, finishRadiusY: float, finishRadiusZ: float, cameraX: float, cameraY: float, cameraZ: float, reward: int):
      '''Creates a trigger for a Unique Jump bonus'''
      opcodes.add_stunt_jump(startX, startY, startZ, startRadiusX, startRadiusY, startRadiusZ, finishX, finishY, finishZ, finishRadiusX, finishRadiusY, finishRadiusZ, cameraX, cameraY, cameraZ, reward)

   @staticmethod
   def set_pool_table_coords(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Creates a pool collision object'''
      opcodes.set_pool_table_coords(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def get_sound_level_at_coords(handle: Char, x: float, y: float, z: float) -> float:
      '''Gets the level that the character can hear noise at the specified position'''
      return opcodes.get_sound_level_at_coords(handle, x, y, z)

   @staticmethod
   def create_emergency_services_car(model: int, x: float, y: float, z: float):
      '''Creates an emergency service vehicle on the closest road to the specified coordinates'''
      opcodes.create_emergency_services_car(model, x, y, z)

   @staticmethod
   def get_closest_stealable_object(x: float, y: float, z: float, radius: float) -> Object:
      '''Gets the closest object which can be stolen for burglary missions'''
      return opcodes.get_closest_stealable_object(x, y, z, radius)

   @staticmethod
   def create_birds(xFrom: float, yFrom: float, zFrom: float, xTo: float, yTo: float, zTo: float, quantity: int, type: int):
      '''Creates a flock of birds flying in the specified direction'''
      opcodes.create_birds(xFrom, yFrom, zFrom, xTo, yTo, zTo, quantity, type)

   @staticmethod
   def get_random_char_in_sphere_only_drugs_buyers(x: float, y: float, z: float, radius: float) -> Char:
      '''Loops through the ped pool and returns the first character that is within the specified radius and has the "buys drugs" flag set in peds'''
      return opcodes.get_random_char_in_sphere_only_drugs_buyers(x, y, z, radius)

   @staticmethod
   def set_always_draw3_d_markers(state: bool):
      '''Enables an increase in the distance that markers hovering above entities can be seen from'''
      opcodes.set_always_draw_3d_markers(state)

   @staticmethod
   def get_random_char_in_sphere_no_brain(x: float, y: float, z: float, radius: float) -> Char:
      '''Finds the nearest character to the specified point, in the specified radius'''
      return opcodes.get_random_char_in_sphere_no_brain(x, y, z, radius)

   @staticmethod
   def disable_all_entry_exits(state: bool):
      '''Disables all entry/exit markers'''
      opcodes.disable_all_entry_exits(state)

   @staticmethod
   def set_create_random_gang_members(state: bool):
      '''Sets whether gang members will spawn'''
      opcodes.set_create_random_gang_members(state)

   def get_user_of_closest_map_attractor(self, x: float, y: float, z: float, radius: float, modelId: model_object, attractorName: str) -> Char:
      '''Returns the character using a map attractor with the specified model in the specified area'''
      return opcodes.get_user_of_closest_map_attractor(self.__handle, x, y, z, radius, modelId, attractorName)

   @staticmethod
   def get_water_height_at_coords(x: float, y: float, ignoreWaves: bool) -> float:
      '''Gets the height of the water at the specified 2D coordinates'''
      return opcodes.get_water_height_at_coords(x, y, ignoreWaves)

   @staticmethod
   def extinguish_fire_at_point(x: float, y: float, z: float, radius: float):
      '''Removes all fires within the specified area'''
      opcodes.extinguish_fire_at_point(x, y, z, radius)

   @staticmethod
   def set_only_create_gang_members(state: bool):
      '''Sets whether gangs appear everywhere, like when "Gangs control the streets" cheat is activated'''
      opcodes.set_only_create_gang_members(state)

   @staticmethod
   def set_char_uses_collision_closest_object_of_type(x: float, y: float, z: float, radius: float, modelId: model_object, solid: bool, target: Char):
      opcodes.set_char_uses_collision_closest_object_of_type(x, y, z, radius, modelId, solid, target)

   @staticmethod
   def clear_all_script_fire_flags():
      '''Marks all fires as no longer needed, allowing them to disappear'''
      opcodes.clear_all_script_fire_flags()

   @staticmethod
   def set_create_random_cops(state: bool):
      opcodes.set_create_random_cops(state)

   @staticmethod
   def set_closest_entry_exit_flag(x: float, y: float, radius: float, entryexitsFlag: EntryexitsFlag, state: bool):
      '''This command is like 098E, except it finds the appropriate enex marker via its position instead of its name'''
      opcodes.set_closest_entry_exit_flag(x, y, radius, entryexitsFlag, state)

   @staticmethod
   def get_random_car_of_type_in_angled_area_no_save(leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, char: Char) -> Car:
      return opcodes.get_random_car_of_type_in_angled_area_no_save(leftBottomX, leftBottomY, rightTopX, rightTopY, angle, char)

   @staticmethod
   def is_cop_vehicle_in_area3_d_no_save(leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float):
      '''Returns true if there's any kind of police vehicle in the specified 3D area'''
      return opcodes.is_cop_vehicle_in_area_3d_no_save(leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ)

   @staticmethod
   def enable_ambient_crime(state: bool):
      '''Sets whether cops will chase and kill criminals when their task is 'TASK_COMPLEX_KILL_CRIMINAL''''
      opcodes.enable_ambient_crime(state)

   @staticmethod
   def is_money_pickup_at_coords(x: float, y: float, z: float):
      '''Returns true if a money pickup exists near the specified coordinates'''
      return opcodes.is_money_pickup_at_coords(x, y, z)

   @staticmethod
   def enable_burglary_houses(state: bool):
      '''Switches enex markers used for burglary missions on or off'''
      opcodes.enable_burglary_houses(state)

   @staticmethod
   def get_random_char_in_area_offset_no_save(x: float, y: float, z: float, radiusX: float, radiusY: float, radiusZ: float) -> Char:
      '''Returns the first char in the ped pool within radius of the specified point'''
      return opcodes.get_random_char_in_area_offset_no_save(x, y, z, radiusX, radiusY, radiusZ)

   @staticmethod
   def set_railtrack_resistance_mult(mult: float):
      '''Sets the friction/slowdown rate on all rail tracks'''
      opcodes.set_railtrack_resistance_mult(mult)

   @staticmethod
   def get_target_coords() ->  Tuple[float, float, float]:
      '''Gets the coordinates of the location targeted in the game map'''
      return opcodes.get_target_blip_coords()

   @staticmethod
   def spawn_vehicle_by_cheating(modelId: int):
      '''Creates a vehicle with the model (no pre-loading needed) in front of the player'''
      opcodes.spawn_vehicle_by_cheating(modelId)

   @staticmethod
   def get_random_char_in_sphere_no_save_recursive(x: float, y: float, z: float, radius: float, findNext: bool, skipDead: bool) -> Char:
      return opcodes.get_random_char_in_sphere_no_save_recursive(x, y, z, radius, findNext, skipDead)

   @staticmethod
   def get_random_car_in_sphere_no_save_recursive(x: float, y: float, z: float, radius: float, findNext: bool, skipWrecked: bool) -> Car:
      return opcodes.get_random_car_in_sphere_no_save_recursive(x, y, z, radius, findNext, skipWrecked)

   @staticmethod
   def get_random_object_in_sphere_no_save_recursive(x: float, y: float, z: float, radius: float, findNext: bool) -> Object:
      return opcodes.get_random_object_in_sphere_no_save_recursive(x, y, z, radius, findNext)


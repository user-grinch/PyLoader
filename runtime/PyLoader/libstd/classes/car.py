import _opcodes, _addition
from typing import Tuple
from enums import *
from object import Object

class Car():
   def __init__(self, handle: int = None, modelID: int = None, x: float = 0, y: float = 0, z: float = 0):
      '''Initializes class with the given handle. Creates a new object if handle is None'''
      if (handle):
         self.__handle = handle
      else:
         if (modelID):
            self.__handle = _opcodes.create_car(self.__handle, modelID, x, y, z)

   def delete(self):
      '''Removes the vehicle from the game'''
      _opcodes.delete_car(self.__handle)

   def goto_coordinates(self, x: float, y: float, z: float):
      '''Makes the AI drive to the specified location by any means'''
      _opcodes.car_goto_coordinates(self.__handle, x, y, z)

   def wander_randomly(self):
      '''Clears any current tasks the vehicle has and makes it drive around aimlessly'''
      _opcodes.car_wander_randomly(self.__handle)

   def set_idle(self):
      '''Sets the car's mission to idle (MISSION_NONE), stopping any driving activity'''
      _opcodes.car_set_idle(self.__handle)

   def get_coordinates(self) ->  Tuple[float, float, float]:
      '''Returns the vehicle's coordinates'''
      return _opcodes.get_car_coordinates(self.__handle)

   def set_coordinates(self, x: float, y: float, z: float):
      '''Puts the vehicle at the specified location'''
      _opcodes.set_car_coordinates(self.__handle, x, y, z)

   def set_cruise_speed(self, maxSpeed: float):
      '''Sets the vehicle's max speed'''
      _opcodes.set_car_cruise_speed(self.__handle, maxSpeed)

   def set_driving_style(self, drivingStyle: CarDrivingStyle):
      '''Sets the behavior of the vehicle's AI driver'''
      _opcodes.set_car_driving_style(self.__handle, drivingStyle)

   def set_mission(self, carMission: CarMission):
      '''Sets the mission of the vehicle's AI driver'''
      _opcodes.set_car_mission(self.__handle, carMission)

   def is_in_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if the vehicle is located within the specified 2D area'''
      return _opcodes.is_car_in_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_in_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the vehicle is located within the specified 3D area'''
      return _opcodes.is_car_in_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def is_dead(self, handle: any):
      '''Returns true if the handle is an invalid vehicle handle or the vehicle has been destroyed (wrecked)'''
      return _opcodes.is_car_dead(self.__handle, handle)

   def is_model(self, modelId: int):
      '''Returns true if the vehicle has the specified model'''
      return _opcodes.is_car_model(self.__handle, modelId)

   def get_heading(self) -> float:
      '''Returns the vehicle's heading (z-angle)'''
      return _opcodes.get_car_heading(self.__handle)

   def set_heading(self, heading: float):
      '''Sets the vehicle's heading (z-angle)'''
      _opcodes.set_car_heading(self.__handle, heading)

   def is_health_greater(self, health: int):
      '''Returns true if the car's health is over the specified value'''
      return _opcodes.is_car_health_greater(self.__handle, health)

   def is_stuck_on_roof(self):
      '''Returns true if the car has been upside down for more than 2 seconds (requires 0190)'''
      return _opcodes.is_car_stuck_on_roof(self.__handle)

   def add_upsidedown_check(self):
      '''Activates upside-down car check for the car'''
      _opcodes.add_upsidedown_car_check(self.__handle)

   def remove_upsidedown_check(self):
      '''Deactivates upside-down car check (0190) for the car'''
      _opcodes.remove_upsidedown_car_check(self.__handle)

   def is_stopped_in_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      return _opcodes.is_car_stopped_in_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_stopped_in_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      return _opcodes.is_car_stopped_in_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def locate2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      return _opcodes.locate_car_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate_stopped2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      return _opcodes.locate_stopped_car_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      return _opcodes.locate_car_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def locate_stopped3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the car is stopped in the radius of the specified point'''
      return _opcodes.locate_stopped_car_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def is_stopped(self):
      '''Returns true if the vehicle is not moving'''
      return _opcodes.is_car_stopped(self.__handle)

   def mark_as_no_longer_needed(self):
      '''Allows the vehicle to be deleted by the game if necessary, and also removes it from the mission cleanup list, if applicable'''
      _opcodes.mark_car_as_no_longer_needed(self.__handle)

   def get_number_of_passengers(self) -> int:
      '''Returns the number of passengers sitting in the car'''
      return _opcodes.get_number_of_passengers(self.__handle)

   def get_maximum_number_of_passengers(self) -> int:
      '''Returns the maximum number of passengers that could sit in the car'''
      return _opcodes.get_maximum_number_of_passengers(self.__handle)

   def set_heavy(self, state: bool):
      '''Sets whether the car is heavy'''
      _opcodes.set_car_heavy(self.__handle, state)

   def is_in_air_proper(self):
      '''Returns true if the vehicle is in the air'''
      return _opcodes.is_car_in_air_proper(self.__handle)

   def is_upsidedown(self):
      '''Returns true if the car is upside down'''
      return _opcodes.is_car_upsidedown(self.__handle)

   def lock_doors(self, lockStatus: CarLock):
      '''Sets the locked status of the car's doors'''
      _opcodes.lock_car_doors(self.__handle, lockStatus)

   def explode(self):
      '''Makes the vehicle explode'''
      _opcodes.explode_car(self.__handle)

   def is_upright(self):
      '''Returns true if the vehicle is in the normal position (upright)'''
      return _opcodes.is_car_upright(self.__handle)

   def set_taxi_lights(self, state: bool):
      '''Sets whether the taxi's roof light is on'''
      _opcodes.set_taxi_lights(self.__handle, state)

   def set_health(self, health: int):
      '''Sets the vehicle's health'''
      _opcodes.set_car_health(self.__handle, health)

   def get_health(self) -> int:
      '''Returns the vehicle's health'''
      return _opcodes.get_car_health(self.__handle)

   def change_color(self, primaryColor: int, secondaryColor: int):
      '''Sets the car's primary and secondary colors'''
      _opcodes.change_car_colour(self.__handle, primaryColor, secondaryColor)

   def arm_with_bomb(self, bombType: BombType):
      '''Arms the vehicle with a bomb of the given type (In SA, this command only supports the mobile version)'''
      _opcodes.arm_car_with_bomb(self.__handle, bombType)

   def set_can_respray(self, state: bool):
      '''Enables or disables the ability to Pay'n'Spray the car'''
      _opcodes.set_can_respray_car(self.__handle, state)

   def set_only_damaged_by_player(self, state: bool):
      '''Makes a vehicle immune to everything except the player'''
      _opcodes.set_car_only_damaged_by_player(self.__handle, state)

   def set_proofs(self, bulletProof: bool, fireProof: bool, explosionProof: bool, collisionProof: bool, meleeProof: bool):
      '''Sets the vehicle's immunities'''
      _opcodes.set_car_proofs(self.__handle, bulletProof, fireProof, explosionProof, collisionProof, meleeProof)

   def is_in_water(self):
      '''Returns true if the vehicle is submerged in water'''
      return _opcodes.is_car_in_water(self.__handle)

   def goto_coordinates_accurate(self, x: float, y: float, z: float):
      '''Makes the AI drive to the specified location obeying the traffic rules'''
      _opcodes.car_goto_coordinates_accurate(self.__handle, x, y, z)

   def is_on_screen(self):
      '''Returns true if the car is visible'''
      return _opcodes.is_car_on_screen(self.__handle)

   def get_speed(self) -> float:
      '''Gets the car's speed'''
      return _opcodes.get_car_speed(self.__handle)

   def get_forward_x(self) -> float:
      '''Returns the X coord of the vehicle's angle'''
      return _opcodes.get_car_forward_x(self.__handle)

   def get_forward_y(self) -> float:
      '''Returns the Y coord of the vehicle's angle'''
      return _opcodes.get_car_forward_y(self.__handle)

   def has_been_damaged_by_weapon(self, weaponType: WeaponType) -> bool:
      '''Returns true if the vehicle has been hit by the specified weapon'''
      return _opcodes.has_car_been_damaged_by_weapon(self.__handle, weaponType)

   def set_visible(self, state: bool):
      '''Sets whether the vehicle is visible or not'''
      _opcodes.set_car_visible(self.__handle, state)

   def switch_siren(self, state: bool):
      '''Sets whether the car's alarm can be activated'''
      _opcodes.switch_car_siren(self.__handle, state)

   def set_watertight(self, state: bool):
      '''Makes the vehicle watertight, meaning characters inside will not be harmed if the vehicle is submerged in water'''
      _opcodes.set_car_watertight(self.__handle, state)

   def turn_to_face_coord(self, x: float, y: float):
      '''Sets the car's heading so that it is facing the 2D coordinate'''
      _opcodes.turn_car_to_face_coord(self.__handle, x, y)

   def set_status(self, status: EntityStatus):
      '''Sets the car's status'''
      _opcodes.set_car_status(self.__handle, status)

   def set_strong(self, state: bool):
      '''Makes the car more resistant to collisions'''
      _opcodes.set_car_strong(self.__handle, state)

   def is_visibly_damaged(self):
      '''Returns true if any of the car components is visibly damaged or lost'''
      return _opcodes.is_car_visibly_damaged(self.__handle)

   def set_upsidedown_not_damaged(self, state: bool):
      '''Disables the car from exploding when it is upside down, as long as the player is not in the vehicle'''
      _opcodes.set_upsidedown_car_not_damaged(self.__handle, state)

   def get_colors(self) ->  Tuple[int, int]:
      '''Gets the car's primary and secondary colors'''
      return _opcodes.get_car_colours(self.__handle)

   def set_can_be_damaged(self, state: bool):
      '''Sets whether the car receives damage'''
      _opcodes.set_car_can_be_damaged(self.__handle, state)

   def get_offset_in_world_coords(self, xOffset: float, yOffset: float, zOffset: float) ->  Tuple[float, float, float]:
      '''Returns the coordinates of an offset of the vehicle's position, depending on the vehicle's rotation'''
      return _opcodes.get_offset_from_car_in_world_coords(self.__handle, xOffset, yOffset, zOffset)

   def set_traction(self, traction: float):
      '''Overrides the default vehicle traction value of 1.0'''
      _opcodes.set_car_traction(self.__handle, traction)

   def set_avoid_level_transitions(self, state: bool):
      '''Sets whether the vehicle will avoid paths between levels (0426)'''
      _opcodes.set_car_avoid_level_transitions(self.__handle, state)

   def is_passenger_seat_free(self, seatIndex: int):
      '''Returns true if the specified car seat is empty'''
      return _opcodes.is_car_passenger_seat_free(self.__handle, seatIndex)

   def get_char_in_passenger_seat(self, seatIndex: int) -> Char:
      '''Returns the handle of a character sitting in the specified car seat'''
      return _opcodes.get_char_in_car_passenger_seat(self.__handle, seatIndex)

   def get_model(self) -> int:
      '''Returns the car's model id'''
      return _opcodes.get_car_model(self.__handle)

   def set_stay_in_fast_lane(self, state: bool):
      _opcodes.set_car_stay_in_fast_lane(self.__handle, state)

   def clear_last_weapon_damage(self):
      '''Clears the vehicle's last weapon damage (see 031E)'''
      _opcodes.clear_car_last_weapon_damage(self.__handle)

   def get_driver(self) -> Char:
      '''Returns the car's driver handle'''
      return _opcodes.get_driver_of_car(self.__handle)

   def set_temp_action(self, actionId: TempAction, timeInMs: int):
      '''Makes the AI driver perform the action in the vehicle for the specified period of time'''
      _opcodes.set_car_temp_action(self.__handle, actionId, timeInMs)

   def set_random_route_seed(self, routeSeed: int):
      '''Sets the car on a specific route'''
      _opcodes.set_car_random_route_seed(self.__handle, routeSeed)

   def is_on_fire(self):
      '''Returns true if the car is burning'''
      return _opcodes.is_car_on_fire(self.__handle)

   def is_tire_burst(self, tireId: int):
      '''Returns true if the car's tire is deflated'''
      return _opcodes.is_car_tyre_burst(self.__handle, tireId)

   def set_forward_speed(self, forwardSpeed: float):
      '''Sets the speed of the car'''
      _opcodes.set_car_forward_speed(self.__handle, forwardSpeed)

   def mark_as_convoy_car(self, state: bool):
      '''Marks the car as being part of a convoy, which seems to follow a path set by 0994'''
      _opcodes.mark_car_as_convoy_car(self.__handle, state)

   def set_straight_line_distance(self, distance: int):
      '''Sets the minimum distance for the AI driver to start ignoring car paths and go straight to the target'''
      _opcodes.set_car_straight_line_distance(self.__handle, distance)

   def pop_boot(self):
      '''Opens the car's trunk and keeps it open'''
      _opcodes.pop_car_boot(self.__handle)

   def is_waiting_for_world_collision(self):
      return _opcodes.is_car_waiting_for_world_collision(self.__handle)

   def burst_tire(self, tireId: int):
      '''Deflates the car's tire'''
      _opcodes.burst_car_tyre(self.__handle, tireId)

   @staticmethod
   def set_model_components(_unused: int, component1: int, component2: int):
      '''Sets the variation of the next car to be created'''
      _opcodes.set_car_model_components(_unused, component1, component2)

   def close_all_doors(self):
      '''Closes all car doors, hoods and boots'''
      _opcodes.close_all_car_doors(self.__handle)

   def freeze_position(self, state: bool):
      '''Locks the vehicle's position'''
      _opcodes.freeze_car_position(self.__handle, state)

   def has_been_damaged_by_char(self, handle: Char) -> bool:
      '''Returns true if the car has been damaged by the specified actor'''
      return _opcodes.has_car_been_damaged_by_char(self.__handle, handle)

   def has_been_damaged_by_car(self, other: 'Car') -> bool:
      '''Returns true if the vehicle has been damaged by another specified vehicle'''
      return _opcodes.has_car_been_damaged_by_car(self.__handle, other.get_handle())

   def set_can_burst_tires(self, state: bool):
      '''Sets whether the car's tires can be deflated'''
      _opcodes.set_can_burst_car_tyres(self.__handle, state)

   def clear_last_damage_entity(self):
      '''Clears the car's last damage entity'''
      _opcodes.clear_car_last_damage_entity(self.__handle)

   def does_exist(self):
      '''Returns true if the handle is a valid vehicle handle'''
      return _opcodes.does_vehicle_exist(self.__handle)

   def freeze_position_and_dont_load_collision(self, state: bool):
      '''Makes the car maintain its position'''
      _opcodes.freeze_car_position_and_dont_load_collision(self.__handle, state)

   def set_load_collision_flag(self, state: bool):
      _opcodes.set_load_collision_for_car_flag(self.__handle, state)

   def set_to_fade_in(self, alpha: int):
      '''Sets the alpha transparency of a distant vehicle'''
      _opcodes.set_vehicle_to_fade_in(self.__handle, alpha)

   def start_playback_recorded(self, path: int):
      '''Assigns a car to a path'''
      _opcodes.start_playback_recorded_car(self.__handle, path)

   def stop_playback_recorded(self):
      '''Stops car from following path'''
      _opcodes.stop_playback_recorded_car(self.__handle)

   def pause_playback_recorded(self):
      '''Freezes the car on its path'''
      _opcodes.pause_playback_recorded_car(self.__handle)

   def unpause_playback_recorded(self):
      '''Unfreezes the vehicle on its path'''
      _opcodes.unpause_playback_recorded_car(self.__handle)

   def set_escort_car_left(self, obj: 'Car'):
      '''Makes the vehicle stay on the other vehicle's left side, keeping parallel'''
      _opcodes.set_car_escort_car_left(self.__handle, obj.get_handle())

   def set_escort_car_right(self, obj: 'Car'):
      '''Makes the vehicle stay by the right side of the other vehicle, keeping parallel'''
      _opcodes.set_car_escort_car_right(self.__handle, obj.get_handle())

   def set_escort_car_rear(self, obj: 'Car'):
      '''Makes the vehicle stay behind the other car, keeping parallel'''
      _opcodes.set_car_escort_car_rear(self.__handle, obj.get_handle())

   def set_escort_car_front(self, obj: 'Car'):
      '''Makes the vehicle stay in front of the other, keeping parallel'''
      _opcodes.set_car_escort_car_front(self.__handle, obj.get_handle())

   def is_playback_going_on(self):
      '''Returns true if the car is assigned to a path'''
      return _opcodes.is_playback_going_on_for_car(self.__handle)

   def open_door(self, door: CarDoor):
      '''Opens the specified car door'''
      _opcodes.open_car_door(self.__handle, door)

   @staticmethod
   def custom_plate_for_next_car(modelId: int, plateText: str):
      '''Sets the numberplate of the next car to be spawned with the specified model'''
      _opcodes.custom_plate_for_next_car(modelId, plateText)

   def force_lights(self, lightMode: int):
      '''Sets an override for the car's lights'''
      _opcodes.force_car_lights(self.__handle, lightMode)

   def attach_to_car(self, obj: 'Car', xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      _opcodes.attach_car_to_car(self.__handle, obj.get_handle(), xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def detach(self, x: float, y: float, z: float, collisionDetection: bool):
      _opcodes.detach_car(self.__handle, x, y, z, collisionDetection)

   def is_attached(self):
      return _opcodes.is_vehicle_attached(self.__handle)

   def pop_door(self, door: CarDoor, visibility: bool):
      '''Removes the specified car door component from the car'''
      _opcodes.pop_car_door(self.__handle, door, visibility)

   def fix_door(self, door: CarDoor):
      '''Repairs the car door'''
      _opcodes.fix_car_door(self.__handle, door)

   def task_everyone_leave(self):
      '''Makes all passengers of the car leave it'''
      _opcodes.task_everyone_leave_car(self.__handle)

   def pop_panel(self, panelId: int, visibility: bool):
      _opcodes.pop_car_panel(self.__handle, panelId, visibility)

   def fix_panel(self, panelId: int):
      _opcodes.fix_car_panel(self.__handle, panelId)

   def fix_tire(self, typeId: int):
      '''Repairs a car's tire'''
      _opcodes.fix_car_tyre(self.__handle, typeId)

   def get_speed_vector(self, x: float, y: bool, z: bool):
      _opcodes.get_car_speed_vector(self.__handle, x, y, z)

   def get_mass(self, mass: float):
      '''Returns the vehicle's mass'''
      _opcodes.get_car_mass(self.__handle, mass)

   def get_roll(self) -> float:
      '''Returns the Y Angle of the vehicle'''
      return _opcodes.get_car_roll(self.__handle)

   def skip_to_end_and_stop_playback_recorded(self):
      _opcodes.skip_to_end_and_stop_playback_recorded_car(self.__handle)

   def get_available_mod(self, slotId: ModSlot) -> int:
      '''Returns a model id available for the vehicle's mod slot, or -1 otherwise'''
      return _opcodes.get_available_vehicle_mod(self.__handle, slotId)

   def add_mod(self, modelId: int) -> int:
      '''Adds a new mod with the model to the vehicle'''
      return _opcodes.add_vehicle_mod(self.__handle, modelId)

   def remove_mod(self, modelId: int):
      '''Removes the vehicle's mod with the specified model'''
      _opcodes.remove_vehicle_mod(self.__handle, modelId)

   def get_num_available_paintjobs(self) -> int:
      '''Gets the number of possible paintjobs that can be applied to the car'''
      return _opcodes.get_num_available_paintjobs(self.__handle)

   def give_paintjob(self, paintjobId: int):
      '''Sets the car's paintjob'''
      _opcodes.give_vehicle_paintjob(self.__handle, paintjobId)

   def does_have_stuck_car_check(self):
      '''Returns true if the car has car stuck check enabled'''
      return _opcodes.does_car_have_stuck_car_check(self.__handle)

   def set_playback_speed(self, speed: float):
      '''Sets the playback speed of the car playing a car recording'''
      _opcodes.set_playback_speed(self.__handle, speed)

   def goto_coordinates_racing(self, x: float, y: float, z: float):
      '''Makes the AI drive to the destination as fast as possible, trying to overtake other vehicles'''
      _opcodes.car_goto_coordinates_racing(self.__handle, x, y, z)

   def start_playback_recorded_using_ai(self, pathId: int):
      '''Starts the playback of a recorded car with driver AI enabled'''
      _opcodes.start_playback_recorded_car_using_ai(self.__handle, pathId)

   def skip_in_playback_recorded(self, amount: float):
      '''Advances the recorded car playback by the specified amount'''
      _opcodes.skip_in_playback_recorded_car(self.__handle, amount)

   def explode_in_cutscene(self):
      '''Makes the vehicle explode without affecting its surroundings'''
      _opcodes.explode_car_in_cutscene(self.__handle)

   def set_stay_in_slow_lane(self, state: bool):
      _opcodes.set_car_stay_in_slow_lane(self.__handle, state)

   def damage_panel(self, panelId: int):
      '''Damages a panel on the car'''
      _opcodes.damage_car_panel(self.__handle, panelId)

   def set_roll(self, yAngle: float):
      '''Sets the Y Angle of the vehicle to the specified value'''
      _opcodes.set_car_roll(self.__handle, yAngle)

   def set_can_go_against_traffic(self, state: bool):
      '''Sets whether the vehicle will drive the wrong way on roads'''
      _opcodes.set_car_can_go_against_traffic(self.__handle, state)

   def damage_door(self, door: CarDoor):
      '''Damages a component on the vehicle'''
      _opcodes.damage_car_door(self.__handle, door)

   def set_as_mission_car(self):
      '''Sets the script as the owner of the vehicle and adds it to the mission cleanup list'''
      _opcodes.set_car_as_mission_car(self.__handle)

   @staticmethod
   def custom_plate_design_for_next_car(modelId: int, townId: int):
      '''Sets the town ID of the license plate which is created on the specified model, affecting which texture is chosen for the plate'''
      _opcodes.custom_plate_design_for_next_car(modelId, townId)

   def get_pitch(self) -> float:
      '''Returns the X Angle of the vehicle'''
      return _opcodes.get_car_pitch(self.__handle)

   def get_quaternion(self) ->  Tuple[float, float, float, float]:
      '''Gets the quaternion values of the car'''
      return _opcodes.get_vehicle_quaternion(self.__handle)

   def set_quaternion(self, x: float, y: float, z: float, w: float):
      '''Sets the rotation of a vehicle using quaternion values'''
      _opcodes.set_vehicle_quaternion(self.__handle, x, y, z, w)

   def apply_force(self, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      _opcodes.apply_force_to_car(self.__handle, xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def add_to_rotation_velocity(self, x: float, y: float, z: float):
      _opcodes.add_to_car_rotation_velocity(self.__handle, x, y, z)

   def set_rotation_velocity(self, x: float, y: float, z: float):
      _opcodes.set_car_rotation_velocity(self.__handle, x, y, z)

   def set_always_create_skids(self, state: bool):
      _opcodes.set_car_always_create_skids(self.__handle, state)

   def control_hydraulics(self, _p2: float, _p3: float, _p4: float, _p5: float):
      _opcodes.control_car_hydraulics(self.__handle, _p2, _p3, _p4, _p5)

   def set_follow_car(self, obj: 'Car', radius: float):
      _opcodes.set_car_follow_car(self.__handle, obj.get_handle(), radius)

   def set_hydraulics(self, state: bool):
      '''Enables hydraulic suspension on the car'''
      _opcodes.set_car_hydraulics(self.__handle, state)

   def does_have_hydraulics(self):
      '''Returns true if the car has hydraulics installed'''
      return _opcodes.does_car_have_hydraulics(self.__handle)

   def set_engine_broken(self, state: bool):
      '''Sets whether the car's engine is broken'''
      _opcodes.set_car_engine_broken(self.__handle, state)

   def get_upright_value(self) -> float:
      '''Gets the car's vertical angle'''
      return _opcodes.get_car_upright_value(self.__handle)

   def set_area_visible(self, interiorId: int):
      _opcodes.set_vehicle_area_visible(self.__handle, interiorId)

   def select_weapons(self, _p2: int):
      '''Sets the vehicle to use its secondary guns'''
      _opcodes.select_weapons_for_vehicle(self.__handle, _p2)

   def set_can_be_targeted(self, state: bool):
      '''Sets whether the vehicle can be targeted'''
      _opcodes.set_vehicle_can_be_targeted(self.__handle, state)

   def set_can_be_visibly_damaged(self, state: bool):
      '''Sets whether the vehicle can be visibly damaged'''
      _opcodes.set_car_can_be_visibly_damaged(self.__handle, state)

   def start_playback_recorded_looped(self, pathId: int):
      '''Starts looped playback of a recorded car path'''
      _opcodes.start_playback_recorded_car_looped(self.__handle, pathId)

   def set_dirt_level(self, level: float):
      '''Sets the dirt level of the car'''
      _opcodes.set_vehicle_dirt_level(self.__handle, level)

   def set_air_resistance_multiplier(self, multiplier: float):
      '''Sets the air resistance for the vehicle'''
      _opcodes.set_vehicle_air_resistance_multiplier(self.__handle, multiplier)

   def set_coordinates_no_offset(self, x: float, y: float, z: float):
      '''Sets the vehicle coordinates without applying offsets to account for the height of the vehicle'''
      _opcodes.set_car_coordinates_no_offset(self.__handle, x, y, z)

   def is_touching_object(self, obj: Object):
      '''Returns true if the vehicle is in contact with the object'''
      return _opcodes.is_vehicle_touching_object(self.__handle, obj.get_handle())

   def control_movable_part(self, range: float):
      '''Sets the angle of a vehicle's extra'''
      _opcodes.control_movable_vehicle_part(self.__handle, range)

   def winch_can_pick_up(self, state: bool):
      '''Sets whether the vehicle can be picked up using the magnocrane'''
      _opcodes.winch_can_pick_vehicle_up(self.__handle, state)

   def open_door_a_bit(self, door: CarDoor, value: float):
      '''Sets the angle of a car door'''
      _opcodes.open_car_door_a_bit(self.__handle, door, value)

   def is_door_fully_open(self, door: CarDoor):
      return _opcodes.is_car_door_fully_open(self.__handle, door)

   def explode_in_cutscene_shake_and_bits(self, shake: bool, effect: bool, sound: bool):
      '''Causes the vehicle to explode, without damage to surrounding entities'''
      _opcodes.explode_car_in_cutscene_shake_and_bits(self.__handle, shake, effect, sound)

   def get_class(self) -> int:
      '''Returns the vehicle's class as defined in vehicles'''
      return _opcodes.get_vehicle_class(self.__handle)

   def can_be_targeted_by_hs_missile(self, state: bool):
      '''Sets whether the player can target this vehicle with a heatseeking rocket launcher'''
      _opcodes.vehicle_can_be_targeted_by_hs_missile(self.__handle, state)

   def set_freebies(self, state: bool):
      '''Sets whether the player can receive items from this vehicle, such as shotgun ammo from a police car and cash from a taxi'''
      _opcodes.set_freebies_in_vehicle(self.__handle, state)

   def set_engine_on(self, state: bool):
      '''Sets whether the vehicle's engine is turned on or off'''
      _opcodes.set_car_engine_on(self.__handle, state)

   def set_lights_on(self, state: bool):
      '''Sets whether the vehicle's lights are on'''
      _opcodes.set_car_lights_on(self.__handle, state)

   def attach_to_object(self, obj: Object, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      '''Attaches the car to object with offset and rotation'''
      _opcodes.attach_car_to_object(self.__handle, obj.get_handle(), xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def does_provide_cover(self, state: bool):
      '''Sets whether characters in combat will choose to use the vehicle as cover from gunfire'''
      _opcodes.vehicle_does_provide_cover(self.__handle, state)

   def control_door(self, door: CarDoor, latch: int, angle: float):
      '''Sets the car's door angle and latch state'''
      _opcodes.control_car_door(self.__handle, door, latch, angle)

   def get_door_angle_ratio(self, door: CarDoor) -> float:
      '''Gets the specified car doors angle, relative to the hinge'''
      return _opcodes.get_door_angle_ratio(self.__handle, door)

   def is_big(self):
      '''Returns true if the specified vehicle has the 'is big' flag set in vehicles'''
      return _opcodes.is_big_vehicle(self.__handle)

   @staticmethod
   def store_mod_state():
      _opcodes.store_car_mod_state()

   @staticmethod
   def restore_mod_state():
      _opcodes.restore_car_mod_state()

   def get_current_mod(self, slot: ModSlot) -> int:
      '''Returns the model of the component installed on the specified slot of the vehicle, or -1 otherwise'''
      return _opcodes.get_current_car_mod(self.__handle, slot)

   def is_low_rider(self) -> bool:
      '''Returns true if the vehicle is a low rider'''
      return _opcodes.is_car_low_rider(self.__handle)

   def is_street_racer(self) -> bool:
      '''Returns true if the vehicle is a street racer'''
      return _opcodes.is_car_street_racer(self.__handle)

   def is_emergency_services(self) -> bool:
      return _opcodes.is_emergency_services_vehicle(self.__handle)

   def get_num_colors(self) -> int:
      return _opcodes.get_num_car_colours(self.__handle)

   def get_blocking_car(self) -> 'Car':
      '''Returns a handle of the vehicle preventing this car from getting to its destination'''
      return Car(_opcodes.get_car_blocking_car(self.__handle))

   def get_current_paintjob(self) -> int:
      '''Gets the car's paintjob'''
      return _opcodes.get_current_vehicle_paintjob(self.__handle)
   
   def get_handle(self) -> int:
      '''Returns the game handle of the object'''
      return _addition.get_car_handle()

   def get_moving_component_offset(self) -> float:
      '''Sets the angle of a vehicle's extra'''
      return _opcodes.get_car_moving_component_offset(self.__handle)
   
   def get_pointer(self) -> int:
      '''Returns the game pointer of the object'''
      return _addition.get_car_pointer()

   def set_collision(self, state: bool):
      _opcodes.set_car_collision(self.__handle, state)

   def change_playback_to_use_ai(self):
      '''Changes vehicle control from playback to AI driven'''
      _opcodes.change_playback_to_use_ai(self.__handle)

   def random_passenger_say(self, speechId: int):
      '''Makes a passenger in the vehicle speak from an ambient speech ID, if one exists for the character'''
      _opcodes.random_passenger_say(self.__handle, speechId)

   def set_is_considered_by_player(self, state: bool):
      _opcodes.set_vehicle_is_considered_by_player(self.__handle, state)

   def get_door_lock_status(self) -> CarLock:
      '''Returns the door lock mode of the vehicle'''
      return _opcodes.get_car_door_lock_status(self.__handle)

   def is_door_damaged(self, door: CarDoor):
      '''Returns true if the specified vehicle part is visibly damaged'''
      return _opcodes.is_car_door_damaged(self.__handle, door)

   def set_petrol_tank_weakpoint(self, state: bool):
      '''Sets whether the car can be blown up by shooting at the petrol tank'''
      _opcodes.set_petrol_tank_weakpoint(self.__handle, state)

   def is_touching_car(self, obj: 'Car'):
      '''Returns true if the car is touching the other car'''
      return _opcodes.is_car_touching_car(self.__handle, obj.get_handle())

   def is_on_all_wheels(self):
      '''Returns true if all the vehicle's wheels are touching the ground'''
      return _opcodes.is_vehicle_on_all_wheels(self.__handle)

   def get_model_value(self) -> int:
      '''Returns the value of the specified car model'''
      return _opcodes.get_car_model_value(self.__handle)

   def give_non_player_nitro(self):
      '''Makes the car have one nitro'''
      _opcodes.give_non_player_car_nitro(self.__handle)

   def reset_hydraulics(self):
      '''This resets all the hydraulics on the car, making it "sit"'''
      _opcodes.reset_vehicle_hydraulics(self.__handle)

   def set_extra_colors(self, colourId1: int, colourId2: int):
      _opcodes.set_extra_car_colours(self.__handle, colourId1, colourId2)

   def get_extra_colors(self) ->  Tuple[int, int]:
      return _opcodes.get_extra_car_colours(self.__handle)

   def has_been_resprayed(self) -> bool:
      '''Returns true if the vehicle was resprayed in the last frame'''
      return _opcodes.has_car_been_resprayed(self.__handle)

   def improve_by_cheating(self, state: bool):
      '''Sets whether a ped driven vehicle's handling is affected by the 'perfect handling' cheat'''
      _opcodes.improve_car_by_cheating(self.__handle, state)

   def fix(self):
      '''Restores the vehicle to full health and removes the damage'''
      _opcodes.fix_car(self.__handle)

   def get_number_of_gears(self) -> int:
      '''Gets the total number of gears of the vehicle and stores it to the variable'''
      return _opcodes.get_car_number_of_gears(self.__handle)

   def get_current_gear(self) -> int:
      '''Returns the current gear of the vehicle'''
      return _opcodes.get_car_current_gear(self.__handle)

   def is_siren_on(self):
      return _opcodes.is_car_siren_on(self.__handle)

   def is_engine_on(self):
      return _opcodes.is_car_engine_on(self.__handle)

   def cleo_set_engine_on(self, state: bool):
      _opcodes.cleo_set_car_engine_on(self.__handle, state)
   
   def add_stuck_check(self, speed: float, duration: int):
      '''Adds the vehicle to the stuck cars array'''
      _opcodes.add_stuck_car_check(self.__handle, speed, duration)

   def remove_stuck_check(self):
      '''Removes the vehicle from the stuck cars array'''
      _opcodes.remove_stuck_car_check(self.__handle)

   def is_stuck(self):
      '''Returns true if the car is stuck'''
      return _opcodes.is_car_stuck(self.__handle)

   def add_stuck_check_with_warp(self, speed: float, duration: int, stuck: bool, flipped: bool, warp: bool, pathId: int):
      '''Attempts to automatically restore vehicles that get stuck or flipped'''
      _opcodes.add_stuck_car_check_with_warp(self.__handle, speed, duration, stuck, flipped, warp, pathId)
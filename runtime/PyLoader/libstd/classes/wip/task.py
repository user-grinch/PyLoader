import libstd.opcodes as opcodes
from typing import Tuple

class Task():
   @staticmethod
   def toggle_duck(handle: Char, state: bool):
      '''Makes the character crouch'''
      opcodes.task_toggle_duck(handle, state)

   @staticmethod
   def pause(handle: Char, time: int):
      '''Makes the character pause for the specified amount of time'''
      opcodes.task_pause(handle, time)

   @staticmethod
   def stand_still(handle: Char, time: int):
      '''Makes the character stand still'''
      opcodes.task_stand_still(handle, time)

   @staticmethod
   def fall_and_get_up(handle: Char, fallDown: bool, timeOnGround: int):
      '''Makes actor fall to the ground and stay there for the specified time'''
      opcodes.task_fall_and_get_up(handle, fallDown, timeOnGround)

   @staticmethod
   def jump(handle: Char, state: bool):
      '''Makes the actor perform a jump'''
      opcodes.task_jump(handle, state)

   @staticmethod
   def tired(handle: Char, time: int):
      '''Makes the actor stop to regain breath'''
      opcodes.task_tired(handle, time)

   @staticmethod
   def die(handle: Char):
      '''Kills the character'''
      opcodes.task_die(handle)

   @staticmethod
   def look_at_char(observer: Char, target: Char, time: int):
      '''Makes the character look at another character'''
      opcodes.task_look_at_char(observer, target, time)

   @staticmethod
   def look_at_vehicle(char: Char, vehicle: Car, time: int):
      '''Makes the actor look at the specified vehicle'''
      opcodes.task_look_at_vehicle(char, vehicle, time)

   @staticmethod
   def say(handle: Char, phraseId: int):
      '''Makes the character say a phrase from the specified audio table'''
      opcodes.task_say(handle, phraseId)

   @staticmethod
   def shake_fist(handle: Char):
      '''Makes the actor lift their hand up in the air angrily'''
      opcodes.task_shake_fist(handle)

   @staticmethod
   def cower(handle: Char):
      '''Makes the actor stumble backwards with their arms in front of their face as if he is backing away from something in fear'''
      opcodes.task_cower(handle)

   @staticmethod
   def hands_up(handle: Char, time: int):
      '''Makes the actor put their hands in the air'''
      opcodes.task_hands_up(handle, time)

   @staticmethod
   def duck(handle: Char, time: int):
      '''Makes a character duck with their arms over head'''
      opcodes.task_duck(handle, time)

   @staticmethod
   def use_atm(handle: Char):
      '''Makes a character use an ATM machine'''
      opcodes.task_use_atm(handle)

   @staticmethod
   def scratch_head(handle: Char):
      '''Makes a character scratch their head while looking around'''
      opcodes.task_scratch_head(handle)

   @staticmethod
   def look_about(handle: Char, time: int):
      '''Makes a character look out ahead'''
      opcodes.task_look_about(handle, time)

   @staticmethod
   def enter_car_as_passenger(char: Char, vehicle: Car, seatId: int, time: int):
      '''Makes a character approach the car and occupy the specified passenger seat'''
      opcodes.task_enter_car_as_passenger(char, vehicle, seatId, time)

   @staticmethod
   def enter_car_as_driver(char: Char, vehicle: Car, time: int):
      '''Makes a character approach the car and occupy the driver seat'''
      opcodes.task_enter_car_as_driver(char, vehicle, time)

   @staticmethod
   def leave_car(char: Char, vehicle: Car):
      '''Makes the character exit the specified vehicle, if they are currently in it'''
      opcodes.task_leave_car(char, vehicle)

   @staticmethod
   def leave_car_and_flee(char: Char, vehicle: Car, x: float, y: float, z: float):
      '''Makes the character exit the vehicle and flee to the specified position'''
      opcodes.task_leave_car_and_flee(char, vehicle, x, y, z)

   @staticmethod
   def car_drive_to_coord(driver: Char, vehicle: Car, x: float, y: float, z: float, speed: float, _p7: int, _p8: int, drivingStyle: CarDrivingStyle):
      opcodes.task_car_drive_to_coord(driver, vehicle, x, y, z, speed, _p7, _p8, drivingStyle)

   @staticmethod
   def car_drive_wander(char: Char, vehicle: Car, speed: float, drivingStyle: int):
      '''Makes the character drive around aimlessly in a vehicle'''
      opcodes.task_car_drive_wander(char, vehicle, speed, drivingStyle)

   @staticmethod
   def go_straight_to_coord(handle: Char, x: float, y: float, z: float, moveState: MoveState, time: int):
      '''Makes the character walk to the specified coordinates'''
      opcodes.task_go_straight_to_coord(handle, x, y, z, moveState, time)

   @staticmethod
   def achieve_heading(handle: Char, heading: float):
      '''Rotates a character to the specified angle'''
      opcodes.task_achieve_heading(handle, heading)

   @staticmethod
   def follow_point_route(handle: Char, walkSpeed: int, flag: int):
      '''Makes the character follow the path route'''
      opcodes.task_follow_point_route(handle, walkSpeed, flag)

   @staticmethod
   def goto_char(walking: Char, target: Char, time: int, radius: float):
      '''Approaches the character from any direction within the specified radius'''
      opcodes.task_goto_char(walking, target, time, radius)

   @staticmethod
   def flee_point(handle: Char, x: float, y: float, z: float, radius: float, time: int):
      '''Makes the character run away from a point, scared and often screaming'''
      opcodes.task_flee_point(handle, x, y, z, radius, time)

   @staticmethod
   def flee_char(handle: Char, threat: Char, radius: float, time: int):
      '''Makes the character run away from another character'''
      opcodes.task_flee_char(handle, threat, radius, time)

   @staticmethod
   def smart_flee_point(handle: Char, x: float, y: float, z: float, radius: float, time: int):
      '''Makes the character run away from the specified coordinates'''
      opcodes.task_smart_flee_point(handle, x, y, z, radius, time)

   @staticmethod
   def smart_flee_char(handle: Char, threat: Char, radius: float, time: int):
      '''Makes the character flee from another character'''
      opcodes.task_smart_flee_char(handle, threat, radius, time)

   @staticmethod
   def wander_standard(handle: Char):
      '''Makes the character walk around the ped path'''
      opcodes.task_wander_standard(handle)

   @staticmethod
   def kill_char_on_foot(killer: Char, target: Char):
      '''Makes a character attack another character on foot'''
      opcodes.task_kill_char_on_foot(killer, target)

   @staticmethod
   def follow_path_nodes_to_coord(handle: Char, x: float, y: float, z: float, walkSpeed: int, time: int):
      '''Makes the character go to the specified coordinates'''
      opcodes.task_follow_path_nodes_to_coord(handle, x, y, z, walkSpeed, time)

   @staticmethod
   def go_to_coord_any_means(char: Char, x: float, y: float, z: float, walkSpeed: int, vehicle: Car):
      '''Assigns the character the task of getting to the specified coordinates'''
      opcodes.task_go_to_coord_any_means(char, x, y, z, walkSpeed, vehicle)

   @staticmethod
   def play_anim(handle: Char, animationName: str, animationFile: str, frameDelta: float, loop: bool, lockX: bool, lockY: bool, lockF: bool, time: int):
      '''Makes the character perform an animation'''
      opcodes.task_play_anim(handle, animationName, animationFile, frameDelta, loop, lockX, lockY, lockF, time)

   @staticmethod
   def leave_car_immediately(char: Char, vehicle: Car):
      '''Makes the character jump out of the vehicle while it is in motion'''
      opcodes.task_leave_car_immediately(char, vehicle)

   @staticmethod
   def leave_any_car(handle: Char):
      '''Makes the actor exit the car, if he is in one'''
      opcodes.task_leave_any_car(handle)

   @staticmethod
   def kill_char_on_foot_while_ducking(char: Char, target: Char, flags: int, actionDelay: int, actionChance: int):
      opcodes.task_kill_char_on_foot_while_ducking(char, target, flags, actionDelay, actionChance)

   @staticmethod
   def aim_gun_at_char(char: Char, target: Char, time: int):
      '''Makes a character aim at another character'''
      opcodes.task_aim_gun_at_char(char, target, time)

   @staticmethod
   def go_to_coord_while_shooting(char: Char, x: float, y: float, z: float, mode: int, turnRadius: float, stopRadius: float, target: Char):
      '''Makes a character go to the location while shooting at another character'''
      opcodes.task_go_to_coord_while_shooting(char, x, y, z, mode, turnRadius, stopRadius, target)

   @staticmethod
   def stay_in_same_place(handle: Char, state: bool):
      '''Makes the character stay in the same place'''
      opcodes.task_stay_in_same_place(handle, state)

   @staticmethod
   def turn_char_to_face_char(char: Char, target: Char):
      '''Makes a character face another character'''
      opcodes.task_turn_char_to_face_char(char, target)

   @staticmethod
   def look_at_object(char: Char, object: Object, time: any):
      '''Makes the character look at an object'''
      opcodes.task_look_at_object(char, object, time)

   @staticmethod
   def aim_gun_at_coord(handle: Char, x: float, y: float, z: float, time: int):
      '''Makes the character aim at the specified coordinates'''
      opcodes.task_aim_gun_at_coord(handle, x, y, z, time)

   @staticmethod
   def shoot_at_coord(handle: Char, x: float, y: float, z: float, time: int):
      '''Makes the character turn round and shoot at the specified coordinates'''
      opcodes.task_shoot_at_coord(handle, x, y, z, time)

   @staticmethod
   def destroy_car(char: Char, vehicle: Car):
      '''Makes the character attack a vehicle'''
      opcodes.task_destroy_car(char, vehicle)

   @staticmethod
   def dive_and_get_up(handle: Char, directionX: float, directionY: float, timeOnGround: int):
      '''Makes the character perform a dive in the specified direction'''
      opcodes.task_dive_and_get_up(handle, directionX, directionY, timeOnGround)

   @staticmethod
   def shuffle_to_next_car_seat(char: Char, vehicle: Car):
      '''Makes the character move to the seat on the right'''
      opcodes.task_shuffle_to_next_car_seat(char, vehicle)

   @staticmethod
   def chat_with_char(char: Char, other: Char, leadSpeaker: bool, _p4: int):
      '''Makes the character chat with another character'''
      opcodes.task_chat_with_char(char, other, leadSpeaker, _p4)

   @staticmethod
   def toggle_ped_threat_scanner(handle: Char, _p2: bool, _p3: bool, _p4: bool):
      opcodes.task_toggle_ped_threat_scanner(handle, _p2, _p3, _p4)

   @staticmethod
   def dive_from_attachment_and_get_up(handle: Char, time: int):
      opcodes.task_dive_from_attachment_and_get_up(handle, time)

   @staticmethod
   def goto_char_offset(char: Char, target: Char, time: int, radius: float, heading: float):
      '''Approaches the char at the specified offset, specified by the radius and angle'''
      opcodes.task_goto_char_offset(char, target, time, radius, heading)

   @staticmethod
   def look_at_coord(handle: Char, x: float, y: float, z: float, time: int):
      '''Makes the actor look at the specified coordinates'''
      opcodes.task_look_at_coord(handle, x, y, z, time)

   @staticmethod
   def sit_down(handle: Char, time: int):
      '''Makes the actor sit down for the specified amount of time'''
      opcodes.task_sit_down(handle, time)

   @staticmethod
   def turn_char_to_face_coord(handle: Char, x: float, y: float, z: float):
      opcodes.task_turn_char_to_face_coord(handle, x, y, z)

   @staticmethod
   def drive_point_route(char: Char, vehicle: Car, speed: int):
      opcodes.task_drive_point_route(char, vehicle, speed)

   @staticmethod
   def go_to_coord_while_aiming(char: Char, x: float, y: float, z: float, mode: int, turnRadius: float, stopRadius: float, target: Char, xOffset: float, yOffset: float, zOffset: float):
      opcodes.task_go_to_coord_while_aiming(char, x, y, z, mode, turnRadius, stopRadius, target, xOffset, yOffset, zOffset)

   @staticmethod
   def car_temp_action(char: Char, vehicle: Car, actionId: int, time: int):
      opcodes.task_car_temp_action(char, vehicle, actionId, time)

   @staticmethod
   def car_mission(char: Char, vehicle: Car, targetVehicle: Car, missionId: int, cruiseSpeed: float, drivingStyle: int):
      '''Sets the car's current mission with various parameters'''
      opcodes.task_car_mission(char, vehicle, targetVehicle, missionId, cruiseSpeed, drivingStyle)

   @staticmethod
   def go_to_object(char: Char, object: Object, time: int, radius: float):
      '''Makes the character go to an object'''
      opcodes.task_go_to_object(char, object, time, radius)

   @staticmethod
   def weapon_roll(handle: Char, direction: bool):
      opcodes.task_weapon_roll(handle, direction)

   @staticmethod
   def char_arrest_char(char: Char, target: Char):
      '''Makes the character attempt to arrest another character'''
      opcodes.task_char_arrest_char(char, target)

   @staticmethod
   def pick_up_object(char: Char, object: Object, xOffset: float, yOffset: float, zOffset: float, boneId: int, _p7: int, animationName: str, animationFile: str, time: int):
      '''Attaches the specified actor to an object with the optional addition of having it perform an animation'''
      opcodes.task_pick_up_object(char, object, xOffset, yOffset, zOffset, boneId, _p7, animationName, animationFile, time)

   @staticmethod
   def drive_by(handle: Char, targetChar: Char, targetVehicle: Car, x: float, y: float, z: float, radius: float, style: int, rightHandCarSeat: bool, fireRate: int):
      opcodes.task_drive_by(handle, targetChar, targetVehicle, x, y, z, radius, style, rightHandCarSeat, fireRate)

   @staticmethod
   def use_mobile_phone(handle: Char, start: bool):
      '''Makes a character pull out a cellphone, answer it, and hold it to their ear'''
      opcodes.task_use_mobile_phone(handle, start)

   @staticmethod
   def warp_char_into_car_as_driver(char: Char, vehicle: Car):
      '''Warps the character into the specified vehicle's driver seat'''
      opcodes.task_warp_char_into_car_as_driver(char, vehicle)

   @staticmethod
   def warp_char_into_car_as_passenger(char: Char, vehicle: Car, seatId: int):
      opcodes.task_warp_char_into_car_as_passenger(char, vehicle, seatId)

   @staticmethod
   def use_attractor(char: Char, attractor: Attractor):
      opcodes.task_use_attractor(char, attractor)

   @staticmethod
   def shoot_at_char(handle: Char, target: Char, time: int):
      opcodes.task_shoot_at_char(handle, target, time)

   @staticmethod
   def flee_char_any_means(handle: Char, threat: Char, runDistance: float, time: int, changeCourse: bool, _p6: int, _p7: int, radius: float):
      opcodes.task_flee_char_any_means(handle, threat, runDistance, time, changeCourse, _p6, _p7, radius)

   @staticmethod
   def dead(handle: Char):
      '''Kills the character'''
      opcodes.task_dead(handle)

   @staticmethod
   def goto_car(char: Char, vehicle: Car, time: int, radius: float):
      opcodes.task_goto_car(char, vehicle, time, radius)

   @staticmethod
   def climb(handle: Char, flag: bool):
      '''Makes the character jump and climb on an object'''
      opcodes.task_climb(handle, flag)

   @staticmethod
   def goto_char_aiming(handle: Char, target: Char, radiusFrom: float, radiusTo: float):
      opcodes.task_goto_char_aiming(handle, target, radiusFrom, radiusTo)

   @staticmethod
   def kill_char_on_foot_timed(handle: Char, target: Char, time: int):
      '''Makes the character attack the specified character'''
      opcodes.task_kill_char_on_foot_timed(handle, target, time)

   @staticmethod
   def jetpack(handle: Char):
      opcodes.task_jetpack(handle)

   @staticmethod
   def set_char_decision_maker(char: Char, decisionMakerChar: DecisionMakerChar):
      '''Sets the decision maker used by the specified actor'''
      opcodes.task_set_char_decision_maker(char, decisionMakerChar)

   @staticmethod
   def complex_pickup_object(char: Char, object: Object):
      opcodes.task_complex_pickup_object(char, object)

   @staticmethod
   def char_slide_to_coord(handle: Char, x: float, y: float, z: float, angle: float, radius: float):
      opcodes.task_char_slide_to_coord(handle, x, y, z, angle, radius)

   @staticmethod
   def swim_to_coord(handle: Char, x: float, y: float, z: float):
      opcodes.task_swim_to_coord(handle, x, y, z)

   @staticmethod
   def drive_point_route_advanced(char: Char, vehicle: Car, speed: float, _p4: int, _p5: int, _p6: int):
      opcodes.task_drive_point_route_advanced(char, vehicle, speed, _p4, _p5, _p6)

   @staticmethod
   def char_slide_to_coord_and_play_anim(handle: Char, x: float, y: float, z: float, angle: float, radius: float, animationName: str, animationFile: str, frameDelta: float, loop: bool, lockX: bool, lockY: bool, lockF: bool, time: int):
      '''Makes a character go to the specified point and play an anim'''
      opcodes.task_char_slide_to_coord_and_play_anim(handle, x, y, z, angle, radius, animationName, animationFile, frameDelta, loop, lockX, lockY, lockF, time)

   @staticmethod
   def play_anim_non_interruptable(handle: Char, animationName: str, animationFile: str, frameDelta: float, loop: bool, lockX: bool, lockY: bool, lockF: bool, time: int):
      '''Makes the character perform an animation'''
      opcodes.task_play_anim_non_interruptable(handle, animationName, animationFile, frameDelta, loop, lockX, lockY, lockF, time)

   @staticmethod
   def follow_patrol_route(handle: Char, walkSpeed: int, routeMode: int):
      '''Assigns the character to the patrol path'''
      opcodes.task_follow_patrol_route(handle, walkSpeed, routeMode)

   @staticmethod
   def greet_partner(handle: Char, partner: Char, _p3: float, _p4: int):
      '''Makes a character greet another character with a handshake'''
      opcodes.task_greet_partner(handle, partner, _p3, _p4)

   @staticmethod
   def die_named_anim(handle: Char, animationName: str, animationFile: str, frameDelta: float, time: int):
      '''Makes the actor perform an animation similarly to 0605'''
      opcodes.task_die_named_anim(handle, animationName, animationFile, frameDelta, time)

   @staticmethod
   def follow_footsteps(handle: Char, target: Char):
      '''Makes one actor follow another'''
      opcodes.task_follow_footsteps(handle, target)

   @staticmethod
   def walk_alongside_char(handle: Char, target: Char):
      '''Makes the character walk alongside the specified character'''
      opcodes.task_walk_alongside_char(handle, target)

   @staticmethod
   def kinda_stay_in_same_place(handle: Char, state: bool):
      '''Makes the character stay near their current position'''
      opcodes.task_kinda_stay_in_same_place(handle, state)

   @staticmethod
   def play_anim_with_flags(handle: Char, animationName: str, animationFile: str, frameDelta: float, loop: bool, lockX: bool, lockY: bool, lockF: bool, time: int, disableForce: bool, disableLockZ: bool):
      '''Makes the actor perform an animation'''
      opcodes.task_play_anim_with_flags(handle, animationName, animationFile, frameDelta, loop, lockX, lockY, lockF, time, disableForce, disableLockZ)

   @staticmethod
   def use_closest_map_attractor(handle: Char, radius: float, modelId: model_object, fromX: float, fromY: float, fromZ: float, name: str):
      opcodes.task_use_closest_map_attractor(handle, radius, modelId, fromX, fromY, fromZ, name)

   @staticmethod
   def set_ignore_weapon_range_flag(handle: Char, state: bool):
      opcodes.task_set_ignore_weapon_range_flag(handle, state)

   @staticmethod
   def pick_up_second_object(char: Char, object: Object, xOffset: float, yOffset: float, zOffset: float, boneId: int, _p7: int, animationName: str, animationFile: str, time: int):
      opcodes.task_pick_up_second_object(char, object, xOffset, yOffset, zOffset, boneId, _p7, animationName, animationFile, time)

   @staticmethod
   def play_anim_secondary(handle: Char, animationFile: str, animationName: str, frameDelta: float, loop: bool, lockX: bool, lockY: bool, lockF: bool, time: int):
      '''Makes a character play an animation that affects only the upper half of their body'''
      opcodes.task_play_anim_secondary(handle, animationFile, animationName, frameDelta, loop, lockX, lockY, lockF, time)

   @staticmethod
   def hand_gesture(handle: Char, target: Char):
      '''Makes a character face the other character and make a gesture'''
      opcodes.task_hand_gesture(handle, target)

   @staticmethod
   def follow_path_nodes_to_coord_with_radius(handle: Char, x: float, y: float, z: float, mode: int, time: int, radius: float):
      '''Makes the specified character run in panic to the specified position'''
      opcodes.task_follow_path_nodes_to_coord_with_radius(handle, x, y, z, mode, time, radius)


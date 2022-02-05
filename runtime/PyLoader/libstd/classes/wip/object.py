import libstd.opcodes as opcodes
from typing import Tuple

class Object():
   def __init__(self, modelId: model_object, x: float, y: float, z: float) -> Object:
      '''Creates an object at the specified location, with the specified model'''
      self.__handle = opcodes.create_object(self.__handle, modelId, x, y, z)

   def delete(self):
      '''Destroys the object, freeing game memory'''
      opcodes.delete_object(self.__handle)

   def get_heading(self) -> float:
      '''Returns the object's heading (z-angle)'''
      return opcodes.get_object_heading(self.__handle)

   def set_heading(self, heading: float):
      '''Sets the object's heading (z-angle)'''
      opcodes.set_object_heading(self.__handle, heading)

   def get_coordinates(self) ->  Tuple[float, float, float]:
      '''Returns the object's coordinates'''
      return opcodes.get_object_coordinates(self.__handle)

   def set_coordinates(self, x: float, y: float, z: float):
      '''Puts the object at the specified location'''
      opcodes.set_object_coordinates(self.__handle, x, y, z)

   def mark_as_no_longer_needed(self):
      '''Allows the object to be deleted by the game if necessary, and also removes it from the mission cleanup list, if applicable'''
      opcodes.mark_object_as_no_longer_needed(self.__handle)

   def dont_remove(self):
      '''Removes the object from the mission cleanup list, preventing it from being deleted when the mission ends'''
      opcodes.dont_remove_object(self.__handle)

   def create_no_offset(self, modelId: model_object, x: float, y: float, z: float) -> Object:
      '''Creates an object without offset at the location'''
      return opcodes.create_object_no_offset(self.__handle, modelId, x, y, z)

   def is_on_screen(self):
      '''Returns true if the object is visible'''
      return opcodes.is_object_on_screen(self.__handle)

   def rotate(self, fromAngle: float, toAngle: float, collisionCheck: bool):
      '''Rotates the object from one angle to another, optionally accounting for a collision during the rotation'''
      return opcodes.rotate_object(self.__handle, fromAngle, toAngle, collisionCheck)

   def slide(self, fromX: float, fromY: float, fromZ: float, xSpeed: float, ySpeed: float, zSpeed: float, collisionCheck: bool):
      '''Returns true if the object has finished moving'''
      return opcodes.slide_object(self.__handle, fromX, fromY, fromZ, xSpeed, ySpeed, zSpeed, collisionCheck)

   def place_relative_to_car(self, vehicle: Car, xOffset: float, yOffset: float, zOffset: float):
      '''Places the object at an offset from the car'''
      opcodes.place_object_relative_to_car(self.__handle, vehicle, xOffset, yOffset, zOffset)

   def make_targetable(self, state: bool):
      '''Sets whether the object can be targeted (auto-aimed) or not'''
      opcodes.make_object_targetable(self.__handle, state)

   def has_been_damaged(self):
      '''Returns true if the object is damaged'''
      return opcodes.has_object_been_damaged(self.__handle)

   def set_velocity(self, xSpeed: float, ySpeed: float, zSpeed: float):
      '''Sets the object's velocity'''
      opcodes.set_object_velocity(self.__handle, xSpeed, ySpeed, zSpeed)

   def set_collision(self, state: bool):
      '''Sets the object's collision detection'''
      opcodes.set_object_collision(self.__handle, state)

   def add_to_velocity(self, x: float, y: float, z: float):
      '''Adds the given vector to the object's velocity (0381)'''
      opcodes.add_to_object_velocity(self.__handle, x, y, z)

   def set_dynamic(self, state: bool):
      '''Makes the object moveable'''
      opcodes.set_object_dynamic(self.__handle, state)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid object handle'''
      return opcodes.does_object_exist(handle)

   def get_offset_in_world_coords(self, xOffset: float, yOffset: float, zOffset: float) ->  Tuple[float, float, float]:
      '''Returns the object's coordinates with an offset'''
      return opcodes.get_offset_from_object_in_world_coords(self.__handle, xOffset, yOffset, zOffset)

   def set_draw_last(self, state: bool):
      '''Sets the specified object to always draw on top of other objects'''
      opcodes.set_object_draw_last(self.__handle, state)

   def set_rotation(self, x: float, y: float, z: float):
      '''Sets the object rotation along X, Y and Z axis'''
      opcodes.set_object_rotation(self.__handle, x, y, z)

   def set_records_collisions(self, state: bool):
      '''Enables the use of collision checking for the object'''
      opcodes.set_object_records_collisions(self.__handle, state)

   def has_collided_with_anything(self):
      '''Returns true if the object has collided'''
      return opcodes.has_object_collided_with_anything(self.__handle)

   def locate2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the object is near the specified coordinates'''
      return opcodes.locate_object_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the object is near the specified point'''
      return opcodes.locate_object_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def is_in_water(self):
      '''Returns true if the object is in water'''
      return opcodes.is_object_in_water(self.__handle)

   def is_in_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if object is in the specified area'''
      return opcodes.is_object_in_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_in_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the object is in the specified area'''
      return opcodes.is_object_in_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def sort_out_collision_with_car(self, handle: Car):
      '''Makes the specified car have no collision with the specified object'''
      opcodes.sort_out_object_collision_with_car(self.__handle, handle)

   def freeze_position(self, state: bool):
      '''Keeps the object in the games memory'''
      opcodes.freeze_object_position(self.__handle, state)

   def set_area_visible(self, areaId: Interior):
      '''Sets the visibility of the object to the specified interior'''
      opcodes.set_object_area_visible(self.__handle, areaId)

   def get_velocity(self) ->  Tuple[float, float, float]:
      '''Returns the object's X, Y, and Z velocity'''
      return opcodes.get_object_velocity(self.__handle)

   def add_to_rotation_velocity(self, x: float, y: float, z: float):
      '''Sets the object's rotation velocity from the center of its body'''
      opcodes.add_to_object_rotation_velocity(self.__handle, x, y, z)

   def set_rotation_velocity(self, x: float, y: float, z: float):
      '''Sets the object's rotation velocity with frame sync applied?'''
      opcodes.set_object_rotation_velocity(self.__handle, x, y, z)

   def is_static(self):
      '''Returns true if the object is not moving'''
      return opcodes.is_object_static(self.__handle)

   def get_rotation_velocity(self) ->  Tuple[float, float, float]:
      return opcodes.get_object_rotation_velocity(self.__handle)

   def add_velocity_relative(self, x: float, y: float, z: float):
      '''Sets the object's velocity'''
      opcodes.add_velocity_relative_to_object_velocity(self.__handle, x, y, z)

   def get_speed(self, speed: float):
      '''Gets the speed of the object'''
      opcodes.get_object_speed(self.__handle, speed)

   def set_render_scorched(self, state: bool):
      '''Makes the object look like it has been burnt'''
      opcodes.set_object_render_scorched(self.__handle, state)

   def attach_to_car(self, handle: Car, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      opcodes.attach_object_to_car(self.__handle, handle, xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def detach(self, x: float, y: float, z: float, collisionDetection: bool):
      opcodes.detach_object(self.__handle, x, y, z, collisionDetection)

   def is_attached(self):
      return opcodes.is_object_attached(self.__handle)

   def attach_to_object(self, handle: Object, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      opcodes.attach_object_to_object(self.__handle, handle, xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def attach_to_char(self, handle: Char, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      opcodes.attach_object_to_char(self.__handle, handle, xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def get_health(self, health: int):
      opcodes.get_object_health(self.__handle, health)

   def set_health(self, health: int):
      opcodes.set_object_health(self.__handle, health)

   def break(self, intensity: int):
      '''Smashes the object to pieces'''
      opcodes.break_object(self.__handle, intensity)

   def set_visible(self, state: bool):
      '''Sets whether the object is visible'''
      opcodes.set_object_visible(self.__handle, state)

   def play_anim(self, animationName: str, animationFile: str, framedelta: float, lockF: bool, loop: bool):
      '''Plays an object animation'''
      opcodes.play_object_anim(self.__handle, animationName, animationFile, framedelta, lockF, loop)

   def get_rope_height(self) -> float:
      return opcodes.get_rope_height_for_object(self.__handle)

   def set_rope_height(self, height: float):
      opcodes.set_rope_height_for_object(self.__handle, height)

   def grab_entity_on_rope(self) ->  Tuple[Car, Char, Object]:
      return opcodes.grab_entity_on_rope_for_object(self.__handle)

   def release_entity_from_rope(self):
      opcodes.release_entity_from_rope_for_object(self.__handle)

   def get_quaternion(self, x: float, y: float, z: float, w: float):
      '''Gets the object's quaternion'''
      opcodes.get_object_quaternion(self.__handle, x, y, z, w)

   def set_quaternion(self, x: float, y: float, z: float, w: float):
      '''Sets the object's quaternion'''
      opcodes.set_object_quaternion(self.__handle, x, y, z, w)

   def set_collision_damage_effect(self, state: bool):
      '''Sets whether the object can be destroyed or not'''
      opcodes.set_object_collision_damage_effect(self.__handle, state)

   def get_level_design_coords(self, nth: int) ->  Tuple[float, float, float]:
      return opcodes.get_level_design_coords_for_object(self.__handle, nth)

   def set_coordinates_and_velocity(self, x: float, y: float, z: float):
      '''Sets the object's coordinates without affecting the rotation'''
      opcodes.set_object_coordinates_and_velocity(self.__handle, x, y, z)

   def connect_lods(self, lodObject: Object):
      '''Sets which LOD object should show when the object is being viewed from far away'''
      opcodes.connect_lods(self.__handle, lodObject)

   def has_been_photographed(self):
      '''Returns true if the object has been photographed'''
      return opcodes.has_object_been_photographed(self.__handle)

   def set_anim_speed(self, animationName: str, speed: float):
      '''Sets the object's animation speed'''
      opcodes.set_object_anim_speed(self.__handle, animationName, speed)

   def is_playing_anim(self, animationName: str):
      '''Returns true if the object is playing the specified animation'''
      return opcodes.is_object_playing_anim(self.__handle, animationName)

   def get_anim_current_time(self, animationName: str) -> float:
      '''Gets the current progress of the object's animation'''
      return opcodes.get_object_anim_current_time(self.__handle, animationName)

   def set_anim_current_time(self, animationName: str, time: float):
      '''Sets the progress of an animation, with 0'''
      opcodes.set_object_anim_current_time(self.__handle, animationName, time)

   def set_only_damaged_by_player(self, state: bool):
      '''Makes the object damageable only by the player'''
      opcodes.set_object_only_damaged_by_player(self.__handle, state)

   def set_scale(self, scale: float):
      '''Sets the scale of the object'''
      opcodes.set_object_scale(self.__handle, scale)

   def is_in_angled_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      return opcodes.is_object_in_angled_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_in_angled_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      return opcodes.is_object_in_angled_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def set_as_stealable(self, state: bool):
      '''Sets whether the object can be picked up and carried'''
      opcodes.set_object_as_stealable(self.__handle, state)

   def has_been_damaged_by_weapon(self, weaponType: WeaponType):
      '''Returns true if the object has been damaged by the specified weapon or damage type'''
      return opcodes.has_object_been_damaged_by_weapon(self.__handle, weaponType)

   def clear_last_weapon_damage(self):
      '''Clears the object's last damaging weapon ID'''
      opcodes.clear_object_last_weapon_damage(self.__handle)

   def lock_door(self, state: bool):
      '''Sets whether the door object is locked at its current rotation and allows it to be pushed open by entities once'''
      opcodes.lock_door(self.__handle, state)

   def set_mass(self, mass: float):
      '''Sets the object's mass'''
      opcodes.set_object_mass(self.__handle, mass)

   def get_mass(self, mass: float):
      '''Returns the object's mass'''
      opcodes.get_object_mass(self.__handle, mass)

   def set_turn_mass(self, turnMass: float):
      '''Sets the object's turn mass'''
      opcodes.set_object_turn_mass(self.__handle, turnMass)

   def get_turn_mass(self, turnMass: float):
      '''Returns the object's turn mass'''
      opcodes.get_object_turn_mass(self.__handle, turnMass)

   def winch_can_pick_up(self, state: bool):
      '''Sets whether the object can be picked up with the magnocrane'''
      opcodes.winch_can_pick_object_up(self.__handle, state)

   def has_been_uprooted(self):
      '''Returns true if the object has been made moveable by the 0392'''
      return opcodes.has_object_been_uprooted(self.__handle)

   def is_within_brain_activation_range(self):
      '''Returns true if the object is within the external script trigger radius'''
      return opcodes.is_object_within_brain_activation_range(self.__handle)

   def get_model(self, model: int):
      '''Returns the object's model index'''
      opcodes.get_object_model(self.__handle, model)

   def remove_elegantly(self):
      '''Fades the object out of existence, freeing game memory'''
      opcodes.remove_object_elegantly(self.__handle)

   def set_proofs(self, bulletProof: bool, fireProof: bool, explosionProof: bool, collisionProof: bool, meleeProof: bool):
      '''Sets what immunities the object has'''
      opcodes.set_object_proofs(self.__handle, bulletProof, fireProof, explosionProof, collisionProof, meleeProof)

   def does_have_this_model(self, modelId: model_any):
      '''Returns true if the object's model is the model specified'''
      return opcodes.does_object_have_this_model(self.__handle, modelId)

   def is_intersecting_world(self):
      '''Appears to return true if something had entered the object's position since it was created or its position was changed'''
      return opcodes.is_object_intersecting_world(self.__handle)

   def enable_disabled_attractors(self, state: bool):
      '''Sets whether the object attracts spawned peds to interact with it'''
      opcodes.enable_disabled_attractors_on_object(self.__handle, state)


import _opcodes, _addition
from car import Car
from char import Char
from enums import WeaponType
from typing import Tuple

class Object():
   def __init__(self, handle: int = None, modelID: int = None, x: float = 0, y: float = 0, z: float = 0):
      '''Initializes class with the given handle. Creates a new object if handle is None'''
      if (handle):
         self.__handle = handle
      else:
         if (modelID):
            self.__handle = _opcodes.create_object(self.__handle, modelID, x, y, z)

   def delete(self):
      '''Destroys the object, freeing game memory'''
      _opcodes.delete_object(self.__handle)

   def get_handle(self) -> int:
      '''Returns the game handle of the object'''
      return _addition.get_object_handle()

   def get_heading(self) -> float:
      '''Returns the object's heading (z-angle)'''
      return _opcodes.get_object_heading(self.__handle)

   def get_pointer(self) -> int:
      '''Returns the game pointer of the object'''
      return _addition.get_object_pointer()

   def set_heading(self, heading: float):
      '''Sets the object's heading (z-angle)'''
      _opcodes.set_object_heading(self.__handle, heading)

   def get_coordinates(self) ->  Tuple[float, float, float]:
      '''Returns the object's coordinates'''
      return _opcodes.get_object_coordinates(self.__handle)

   def set_coordinates(self, x: float, y: float, z: float):
      '''Puts the object at the specified location'''
      _opcodes.set_object_coordinates(self.__handle, x, y, z)

   def mark_as_no_longer_needed(self):
      '''Allows the object to be deleted by the game if necessary, and also removes it from the mission cleanup list, if applicable'''
      _opcodes.mark_object_as_no_longer_needed(self.__handle)

   def dont_remove(self):
      '''Removes the object from the mission cleanup list, preventing it from being deleted when the mission ends'''
      _opcodes.dont_remove_object(self.__handle)

   @staticmethod
   def create_no_offset(modelId: int, x: float, y: float, z: float) -> 'Object':
      '''Creates an object without offset at the location'''
      return Object(_opcodes.create_object_no_offset(modelId, x, y, z))

   def is_on_screen(self):
      '''Returns true if the object is visible'''
      return _opcodes.is_object_on_screen(self.__handle)

   def rotate(self, fromAngle: float, toAngle: float, collisionCheck: bool):
      '''Rotates the object from one angle to another, optionally accounting for a collision during the rotation'''
      return _opcodes.rotate_object(self.__handle, fromAngle, toAngle, collisionCheck)

   def slide(self, fromX: float, fromY: float, fromZ: float, xSpeed: float, ySpeed: float, zSpeed: float, collisionCheck: bool):
      '''Returns true if the object has finished moving'''
      return _opcodes.slide_object(self.__handle, fromX, fromY, fromZ, xSpeed, ySpeed, zSpeed, collisionCheck)

   def place_relative_to_car(self, obj: Car, xOffset: float, yOffset: float, zOffset: float):
      '''Places the object at an offset from the car'''
      _opcodes.place_object_relative_to_car(self.__handle, obj.get_handle(), xOffset, yOffset, zOffset)

   def make_targetable(self, state: bool):
      '''Sets whether the object can be targeted (auto-aimed) or not'''
      _opcodes.make_object_targetable(self.__handle, state)

   def has_been_damaged(self):
      '''Returns true if the object is damaged'''
      return _opcodes.has_object_been_damaged(self.__handle)

   def set_velocity(self, xSpeed: float, ySpeed: float, zSpeed: float):
      '''Sets the object's velocity'''
      _opcodes.set_object_velocity(self.__handle, xSpeed, ySpeed, zSpeed)

   def set_collision(self, state: bool):
      '''Sets the object's collision detection'''
      _opcodes.set_object_collision(self.__handle, state)

   def add_to_velocity(self, x: float, y: float, z: float):
      '''Adds the given vector to the object's velocity (0381)'''
      _opcodes.add_to_object_velocity(self.__handle, x, y, z)

   def set_dynamic(self, state: bool):
      '''Makes the object moveable'''
      _opcodes.set_object_dynamic(self.__handle, state)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid object handle'''
      return _opcodes.does_object_exist(handle)

   def get_offset_in_world_coords(self, xOffset: float, yOffset: float, zOffset: float) ->  Tuple[float, float, float]:
      '''Returns the object's coordinates with an offset'''
      return _opcodes.get_offset_from_object_in_world_coords(self.__handle, xOffset, yOffset, zOffset)

   def set_draw_last(self, state: bool):
      '''Sets the specified object to always draw on top of other objects'''
      _opcodes.set_object_draw_last(self.__handle, state)

   def set_rotation(self, x: float, y: float, z: float):
      '''Sets the object rotation along X, Y and Z axis'''
      _opcodes.set_object_rotation(self.__handle, x, y, z)

   def set_records_collisions(self, state: bool):
      '''Enables the use of collision checking for the object'''
      _opcodes.set_object_records_collisions(self.__handle, state)

   def has_collided_with_anything(self):
      '''Returns true if the object has collided'''
      return _opcodes.has_object_collided_with_anything(self.__handle)

   def locate2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the object is near the specified coordinates'''
      return _opcodes.locate_object_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the object is near the specified point'''
      return _opcodes.locate_object_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def is_in_water(self):
      '''Returns true if the object is in water'''
      return _opcodes.is_object_in_water(self.__handle)

   def is_in_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if object is in the specified area'''
      return _opcodes.is_object_in_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_in_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the object is in the specified area'''
      return _opcodes.is_object_in_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def sort_out_collision_with_car(self, obj: Car):
      '''Makes the specified car have no collision with the specified object'''
      _opcodes.sort_out_object_collision_with_car(self.__handle, obj.get_handle())

   def freeze_position(self, state: bool):
      '''Keeps the object in the games memory'''
      _opcodes.freeze_object_position(self.__handle, state)

   def set_area_visible(self, areaId: int):
      '''Sets the visibility of the object to the specified interior'''
      _opcodes.set_object_area_visible(self.__handle, areaId)

   def get_velocity(self) ->  Tuple[float, float, float]:
      '''Returns the object's X, Y, and Z velocity'''
      return _opcodes.get_object_velocity(self.__handle)

   def add_to_rotation_velocity(self, x: float, y: float, z: float):
      '''Sets the object's rotation velocity from the center of its body'''
      _opcodes.add_to_object_rotation_velocity(self.__handle, x, y, z)

   def set_rotation_velocity(self, x: float, y: float, z: float):
      '''Sets the object's rotation velocity with frame sync applied?'''
      _opcodes.set_object_rotation_velocity(self.__handle, x, y, z)

   def is_static(self):
      '''Returns true if the object is not moving'''
      return _opcodes.is_object_static(self.__handle)

   def get_rotation_velocity(self) ->  Tuple[float, float, float]:
      return _opcodes.get_object_rotation_velocity(self.__handle)

   def add_velocity_relative(self, x: float, y: float, z: float):
      '''Sets the object's velocity'''
      _opcodes.add_velocity_relative_to_object_velocity(self.__handle, x, y, z)

   def get_speed(self, speed: float):
      '''Gets the speed of the object'''
      _opcodes.get_object_speed(self.__handle, speed)

   def set_render_scorched(self, state: bool):
      '''Makes the object look like it has been burnt'''
      _opcodes.set_object_render_scorched(self.__handle, state)

   def attach_to_car(self, obj: Car, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      _opcodes.attach_object_to_car(self.__handle, obj.get_handle(), xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def detach(self, x: float, y: float, z: float, collisionDetection: bool):
      _opcodes.detach_object(self.__handle, x, y, z, collisionDetection)

   def is_attached(self):
      return _opcodes.is_object_attached(self.__handle)

   def attach_to_object(self, obj: 'Object', xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      _opcodes.attach_object_to_object(self.__handle, obj.get_handle(), xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def attach_to_char(self, handle: Char, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float):
      _opcodes.attach_object_to_char(self.__handle, handle, xOffset, yOffset, zOffset, xRotation, yRotation, zRotation)

   def get_health(self, health: int):
      _opcodes.get_object_health(self.__handle, health)

   def set_health(self, health: int):
      _opcodes.set_object_health(self.__handle, health)

   def break_obj(self, intensity: int):
      '''Smashes the object to pieces'''
      _opcodes.break_object(self.__handle, intensity)

   def set_visible(self, state: bool):
      '''Sets whether the object is visible'''
      _opcodes.set_object_visible(self.__handle, state)

   def play_anim(self, animationName: str, animationFile: str, framedelta: float, lockF: bool, loop: bool):
      '''Plays an object animation'''
      _opcodes.play_object_anim(self.__handle, animationName, animationFile, framedelta, lockF, loop)

   def get_rope_height(self) -> float:
      return _opcodes.get_rope_height_for_object(self.__handle)

   def set_rope_height(self, height: float):
      _opcodes.set_rope_height_for_object(self.__handle, height)

   def grab_entity_on_rope(self) ->  Tuple[Car, Char, 'Object']:

      car, char, obj =  _opcodes.grab_entity_on_rope_for_object(self.__handle)
      return Car(car), Char(char), Object(obj)

   def release_entity_from_rope(self):
      _opcodes.release_entity_from_rope_for_object(self.__handle)

   def get_quaternion(self, x: float, y: float, z: float, w: float):
      '''Gets the object's quaternion'''
      _opcodes.get_object_quaternion(self.__handle, x, y, z, w)

   def set_quaternion(self, x: float, y: float, z: float, w: float):
      '''Sets the object's quaternion'''
      _opcodes.set_object_quaternion(self.__handle, x, y, z, w)

   def set_collision_damage_effect(self, state: bool):
      '''Sets whether the object can be destroyed or not'''
      _opcodes.set_object_collision_damage_effect(self.__handle, state)

   def get_level_design_coords(self, nth: int) ->  Tuple[float, float, float]:
      return _opcodes.get_level_design_coords_for_object(self.__handle, nth)

   def set_coordinates_and_velocity(self, x: float, y: float, z: float):
      '''Sets the object's coordinates without affecting the rotation'''
      _opcodes.set_object_coordinates_and_velocity(self.__handle, x, y, z)

   def connect_lods(self, obj: 'Object'):
      '''Sets which LOD object should show when the object is being viewed from far away'''
      _opcodes.connect_lods(self.__handle, obj.get_handle())

   def has_been_photographed(self):
      '''Returns true if the object has been photographed'''
      return _opcodes.has_object_been_photographed(self.__handle)

   def set_anim_speed(self, animationName: str, speed: float):
      '''Sets the object's animation speed'''
      _opcodes.set_object_anim_speed(self.__handle, animationName, speed)

   def is_playing_anim(self, animationName: str):
      '''Returns true if the object is playing the specified animation'''
      return _opcodes.is_object_playing_anim(self.__handle, animationName)

   def get_anim_current_time(self, animationName: str) -> float:
      '''Gets the current progress of the object's animation'''
      return _opcodes.get_object_anim_current_time(self.__handle, animationName)

   def set_anim_current_time(self, animationName: str, time: float):
      '''Sets the progress of an animation, with 0'''
      _opcodes.set_object_anim_current_time(self.__handle, animationName, time)

   def set_only_damaged_by_player(self, state: bool):
      '''Makes the object damageable only by the player'''
      _opcodes.set_object_only_damaged_by_player(self.__handle, state)

   def set_scale(self, scale: float):
      '''Sets the scale of the object'''
      _opcodes.set_object_scale(self.__handle, scale)

   def is_in_angled_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      return _opcodes.is_object_in_angled_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_in_angled_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      return _opcodes.is_object_in_angled_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def set_as_stealable(self, state: bool):
      '''Sets whether the object can be picked up and carried'''
      _opcodes.set_object_as_stealable(self.__handle, state)

   def has_been_damaged_by_weapon(self, weaponType: WeaponType):
      '''Returns true if the object has been damaged by the specified weapon or damage type'''
      return _opcodes.has_object_been_damaged_by_weapon(self.__handle, weaponType)

   def clear_last_weapon_damage(self):
      '''Clears the object's last damaging weapon ID'''
      _opcodes.clear_object_last_weapon_damage(self.__handle)

   def lock_door(self, state: bool):
      '''Sets whether the door object is locked at its current rotation and allows it to be pushed open by entities once'''
      _opcodes.lock_door(self.__handle, state)

   def set_mass(self, mass: float):
      '''Sets the object's mass'''
      _opcodes.set_object_mass(self.__handle, mass)

   def get_mass(self, mass: float):
      '''Returns the object's mass'''
      _opcodes.get_object_mass(self.__handle, mass)

   def set_turn_mass(self, turnMass: float):
      '''Sets the object's turn mass'''
      _opcodes.set_object_turn_mass(self.__handle, turnMass)

   def get_turn_mass(self, turnMass: float):
      '''Returns the object's turn mass'''
      _opcodes.get_object_turn_mass(self.__handle, turnMass)

   def winch_can_pick_up(self, state: bool):
      '''Sets whether the object can be picked up with the magnocrane'''
      _opcodes.winch_can_pick_object_up(self.__handle, state)

   def has_been_uprooted(self):
      '''Returns true if the object has been made moveable by the 0392'''
      return _opcodes.has_object_been_uprooted(self.__handle)

   def is_within_brain_activation_range(self):
      '''Returns true if the object is within the external script trigger radius'''
      return _opcodes.is_object_within_brain_activation_range(self.__handle)

   def get_model(self, model: int):
      '''Returns the object's model index'''
      _opcodes.get_object_model(self.__handle, model)

   def remove_elegantly(self):
      '''Fades the object out of existence, freeing game memory'''
      _opcodes.remove_object_elegantly(self.__handle)

   def set_proofs(self, bulletProof: bool, fireProof: bool, explosionProof: bool, collisionProof: bool, meleeProof: bool):
      '''Sets what immunities the object has'''
      _opcodes.set_object_proofs(self.__handle, bulletProof, fireProof, explosionProof, collisionProof, meleeProof)

   def does_have_this_model(self, modelId: int):
      '''Returns true if the object's model is the model specified'''
      return _opcodes.does_object_have_this_model(self.__handle, modelId)

   def is_intersecting_world(self):
      '''Appears to return true if something had entered the object's position since it was created or its position was changed'''
      return _opcodes.is_object_intersecting_world(self.__handle)

   def enable_disabled_attractors(self, state: bool):
      '''Sets whether the object attracts spawned peds to interact with it'''
      _opcodes.enable_disabled_attractors_on_object(self.__handle, state)


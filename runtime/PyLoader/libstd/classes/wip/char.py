import libstd.opcodes as opcodes
from typing import Tuple

class Char():
   def __init__(self, pedType: PedType, modelId: model_char, x: float, y: float, z: float) -> Char:
      '''Creates a character at the specified location, with the specified model and pedtype'''
      self.__handle = opcodes.create_char(self.__handle, pedType, modelId, x, y, z)

   def delete(self):
      '''Removes the character from the game and mission cleanup list, freeing game memory'''
      opcodes.delete_char(self.__handle)

   def get_coordinates(self) ->  Tuple[float, float, float]:
      '''Returns the character's coordinates'''
      return opcodes.get_char_coordinates(self.__handle)

   def set_coordinates(self, x: float, y: float, z: float):
      '''Puts the character at the specified location'''
      opcodes.set_char_coordinates(self.__handle, x, y, z)

   def is_in_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if the character is within the specified 2D area'''
      return opcodes.is_char_in_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_in_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the character is within the specified 3D area'''
      return opcodes.is_char_in_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def store_car_is_in(self) -> Car:
      '''Returns the current vehicle of the character and adds it to the mission cleanup list'''
      return opcodes.store_car_char_is_in(self.__handle)

   def is_in_car(self, vehicle: Car):
      '''Returns true if the character is in the specified vehicle'''
      return opcodes.is_char_in_car(self.__handle, vehicle)

   def is_in_model(self, modelId: int):
      '''Returns true if the character is driving a vehicle with the specified model'''
      return opcodes.is_char_in_model(self.__handle, modelId)

   def is_in_any_car(self):
      '''Returns true if the character has a vehicle, even if they are not actually sat inside it (opening and closing the door)'''
      return opcodes.is_char_in_any_car(self.__handle)

   def locate_any_means2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: Sphere):
      '''Returns true if the character is within the 2D radius of the coordinates point'''
      return opcodes.locate_char_any_means_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate_on_foot2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the coordinates point on foot'''
      return opcodes.locate_char_on_foot_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate_in_car2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the coordinates point in a vehicle'''
      return opcodes.locate_char_in_car_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate_stopped_any_means2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character stopped within the 2D radius of the coordinates point'''
      return opcodes.locate_stopped_char_any_means_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate_stopped_on_foot2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character stopped within the 2D radius of the coordinates point on foot'''
      return opcodes.locate_stopped_char_on_foot_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate_stopped_in_car2_d(self, x: float, y: float, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character stopped within the 2D radius of the coordinates point in a vehicle'''
      return opcodes.locate_stopped_char_in_car_2d(self.__handle, x, y, xRadius, yRadius, drawSphere)

   def locate_any_means_char2_d(self, target: Char, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the other character'''
      return opcodes.locate_char_any_means_char_2d(self.__handle, target, xRadius, yRadius, drawSphere)

   def locate_on_foot_char2_d(self, target: Char, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the other character on foot'''
      return opcodes.locate_char_on_foot_char_2d(self.__handle, target, xRadius, yRadius, drawSphere)

   def locate_in_car_char2_d(self, otherChar: Char, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the other character in a vehicle'''
      return opcodes.locate_char_in_car_char_2d(self.__handle, otherChar, xRadius, yRadius, drawSphere)

   def locate_any_means3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the coordinates point'''
      return opcodes.locate_char_any_means_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def locate_on_foot3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the coordinates point on foot'''
      return opcodes.locate_char_on_foot_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def locate_in_car3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the coordinates point in a vehicle'''
      return opcodes.locate_char_in_car_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def locate_stopped_any_means3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character stopped within the 3D radius of the coordinates point'''
      return opcodes.locate_stopped_char_any_means_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def locate_stopped_on_foot3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character stopped within the 3D radius of the coordinates point on foot'''
      return opcodes.locate_stopped_char_on_foot_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def locate_stopped_in_car3_d(self, x: float, y: float, z: float, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character stopped within the 3D radius of the coordinates point in a vehicle'''
      return opcodes.locate_stopped_char_in_car_3d(self.__handle, x, y, z, xRadius, yRadius, zRadius, drawSphere)

   def locate_any_means_char3_d(self, target: Char, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the other character'''
      return opcodes.locate_char_any_means_char_3d(self.__handle, target, xRadius, yRadius, zRadius, drawSphere)

   def locate_on_foot_char3_d(self, target: Char, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the other character on foot'''
      return opcodes.locate_char_on_foot_char_3d(self.__handle, target, xRadius, yRadius, zRadius, drawSphere)

   def locate_in_car_char3_d(self, target: Char, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the other character in a vehicle'''
      return opcodes.locate_char_in_car_char_3d(self.__handle, target, xRadius, yRadius, zRadius, drawSphere)

   def add_ammo(self, weaponType: WeaponType, ammo: int):
      '''Adds the specified amount of ammo to the character's weapon, if the character has the weapon'''
      opcodes.add_ammo_to_char(self.__handle, weaponType, ammo)

   def is_dead(self, handle: any):
      '''Returns true if the handle is an invalid character handle or the character is dead (wasted)'''
      return opcodes.is_char_dead(self.__handle, handle)

   def create_inside_car(self, vehicle: Car, pedType: PedType, modelId: model_char) -> Char:
      '''Creates a character in the driver's seat of the vehicle'''
      return opcodes.create_char_inside_car(self.__handle, vehicle, pedType, modelId)

   def is_in_zone(self, zone: zone_key):
      '''Returns true if the character is in the specified map zone'''
      return opcodes.is_char_in_zone(self.__handle, zone)

   def get_heading(self) -> float:
      '''Returns the character's heading (z-angle)'''
      return opcodes.get_char_heading(self.__handle)

   def set_heading(self, heading: float):
      '''Sets the character's heading (z-angle)'''
      opcodes.set_char_heading(self.__handle, heading)

   def is_touching_object(self, object: Object):
      '''Returns true if the character is colliding with the specified object'''
      return opcodes.is_char_touching_object(self.__handle, object)

   def set_ammo(self, weaponType: WeaponType, ammo: int):
      '''Sets the amount of ammo the character has in the specified weapon'''
      opcodes.set_char_ammo(self.__handle, weaponType, ammo)

   def is_health_greater(self, health: int):
      '''Returns true if the character's health is over the specified value'''
      return opcodes.is_char_health_greater(self.__handle, health)

   def is_in_area_on_foot2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if the character is within the specified 2D area on foot'''
      return opcodes.is_char_in_area_on_foot_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_in_area_in_car2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if the character is within the specified 2D area in a vehicle'''
      return opcodes.is_char_in_area_in_car_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_stopped_in_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if the character stopped within the specified 2D area'''
      return opcodes.is_char_stopped_in_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_stopped_in_area_on_foot2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if the character stopped within the specified 2D area on foot'''
      return opcodes.is_char_stopped_in_area_on_foot_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_stopped_in_area_in_car2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, drawSphere: bool):
      '''Returns true if the character stopped within the specified 2D area in a vehicle'''
      return opcodes.is_char_stopped_in_area_in_car_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, drawSphere)

   def is_in_area_on_foot3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the character is within the specified 3D area on foot'''
      return opcodes.is_char_in_area_on_foot_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def is_in_area_in_car3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the character is within the specified 3D area in a vehicle'''
      return opcodes.is_char_in_area_in_car_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def is_stopped_in_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the character stopped within the specified 3D area'''
      return opcodes.is_char_stopped_in_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def is_stopped_in_area_on_foot3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the character stopped within the specified 3D area on foot'''
      return opcodes.is_char_stopped_in_area_on_foot_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def is_stopped_in_area_in_car3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, drawSphere: bool):
      '''Returns true if the character stopped within the specified 3D area in a vehicle'''
      return opcodes.is_char_stopped_in_area_in_car_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, drawSphere)

   def give_weapon(self, weaponType: WeaponType, ammo: int):
      '''Gives the character the weapon with the specified amount of ammo'''
      opcodes.give_weapon_to_char(self.__handle, weaponType, ammo)

   def set_current_weapon(self, weaponType: WeaponType):
      '''Sets the character's currently held weapon'''
      opcodes.set_current_char_weapon(self.__handle, weaponType)

   def mark_as_no_longer_needed(self):
      '''Allows the character to be deleted by the game if necessary, and also removes them from the mission cleanup list, if applicable'''
      opcodes.mark_char_as_no_longer_needed(self.__handle)

   def dont_remove(self):
      '''Removes the character from the mission cleanup list, preventing it from being deleted when the mission ends'''
      opcodes.dont_remove_char(self.__handle)

   def create_as_passenger(self, vehicle: Car, pedType: PedType, modelId: model_char, seatId: int) -> Char:
      '''Creates a character with the specified model in the passenger seat of the vehicle'''
      return opcodes.create_char_as_passenger(self.__handle, vehicle, pedType, modelId, seatId)

   def locate_any_means_car2_d(self, vehicle: Car, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the vehicle'''
      return opcodes.locate_char_any_means_car_2d(self.__handle, vehicle, xRadius, yRadius, drawSphere)

   def locate_on_foot_car2_d(self, vehicle: Car, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the vehicle on foot'''
      return opcodes.locate_char_on_foot_car_2d(self.__handle, vehicle, xRadius, yRadius, drawSphere)

   def locate_in_car_car2_d(self, handle: Car, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the vehicle in a vehicle'''
      return opcodes.locate_char_in_car_car_2d(self.__handle, handle, xRadius, yRadius, drawSphere)

   def locate_any_means_car3_d(self, vehicle: Car, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the vehicle'''
      return opcodes.locate_char_any_means_car_3d(self.__handle, vehicle, xRadius, yRadius, zRadius, drawSphere)

   def locate_on_foot_car3_d(self, vehicle: Car, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the vehicle on foot'''
      return opcodes.locate_char_on_foot_car_3d(self.__handle, vehicle, xRadius, yRadius, zRadius, drawSphere)

   def locate_in_car_car3_d(self, vehicle: Car, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the vehicle in a vehicle'''
      return opcodes.locate_char_in_car_car_3d(self.__handle, vehicle, xRadius, yRadius, zRadius, drawSphere)

   def set_health(self, health: int):
      '''Sets the character's health'''
      opcodes.set_char_health(self.__handle, health)

   def get_health(self) -> int:
      '''Returns the character's health'''
      return opcodes.get_char_health(self.__handle)

   def is_touching_object_on_foot(self, object: Object):
      '''Returns true if the character is colliding with the specified object on foot'''
      return opcodes.is_char_touching_object_on_foot(self.__handle, object)

   def set_anim_group(self, animGroup: AnimGroup):
      '''Sets the animation group for the character'''
      opcodes.set_anim_group_for_char(self.__handle, animGroup)

   def is_stopped(self):
      '''Returns true if the character is not moving'''
      return opcodes.is_char_stopped(self.__handle)

   def set_only_damaged_by_player(self, state: bool):
      '''Makes a character immune to everything except the player'''
      opcodes.set_char_only_damaged_by_player(self.__handle, state)

   def set_proofs(self, bulletProof: bool, fireProof: bool, explosionProof: bool, collisionProof: bool, meleeProof: bool):
      '''Sets the character's immunities'''
      opcodes.set_char_proofs(self.__handle, bulletProof, fireProof, explosionProof, collisionProof, meleeProof)

   def is_on_screen(self):
      '''Returns true if the character is visible'''
      return opcodes.is_char_on_screen(self.__handle)

   def is_shooting_in_area(self, leftBottomX: float, leftBottomY: float, topRightX: float, topRightY: float, drawSphere: bool):
      '''Returns true if the character fired a weapon within the specified 2D area'''
      return opcodes.is_char_shooting_in_area(self.__handle, leftBottomX, leftBottomY, topRightX, topRightY, drawSphere)

   def is_current_weapon(self, weaponType: WeaponType):
      '''Returns true if the character is holding the given type of weapon'''
      return opcodes.is_current_char_weapon(self.__handle, weaponType)

   def is_shooting(self):
      '''Returns true if the character is firing a weapon'''
      return opcodes.is_char_shooting(self.__handle)

   def set_accuracy(self, accuracy: int):
      '''Affects how often the character will hit the target when attacking with a weapon'''
      opcodes.set_char_accuracy(self.__handle, accuracy)

   def is_model(self, modelId: model_char):
      '''Returns true if the character's model ID is equivalent to the model ID passed'''
      return opcodes.is_char_model(self.__handle, modelId)

   def has_been_damaged_by_weapon(self, weaponType: WeaponType):
      '''Returns true if the character has been hit by the specified weapon'''
      return opcodes.has_char_been_damaged_by_weapon(self.__handle, weaponType)

   def explode_head(self):
      '''Dismembers the character'''
      opcodes.explode_char_head(self.__handle)

   def set_bleeding(self, state: bool):
      '''Makes a character bleed'''
      opcodes.set_char_bleeding(self.__handle, state)

   def set_visible(self, state: bool):
      '''Sets whether the character is visible or not'''
      opcodes.set_char_visible(self.__handle, state)

   def remove_elegantly(self):
      '''Removes the character with a fade, freeing game memory'''
      opcodes.remove_char_elegantly(self.__handle)

   def set_stay_in_same_place(self, state: bool):
      '''Makes the character maintain their position when attacked'''
      opcodes.set_char_stay_in_same_place(self.__handle, state)

   def add_armor(self, amount: int):
      '''Increases the character's armor by the specified value to the maximum of 100.0'''
      opcodes.add_armour_to_char(self.__handle, amount)

   def warp_from_car_to_coord(self, x: float, y: float, z: float):
      '''Pulls the character out of their car and places at the location'''
      opcodes.warp_char_from_car_to_coord(self.__handle, x, y, z)

   def has_spotted_char(self, target: Char):
      '''Returns true if the character can see the target character'''
      return opcodes.has_char_spotted_char(self.__handle, target)

   def warp_into_car(self, vehicle: Car):
      '''Puts the character in the specified vehicle'''
      opcodes.warp_char_into_car(self.__handle, vehicle)

   def create_random(self, x: float, y: float, z: float) -> Char:
      '''Creates a character with a randomised model and pedtype at the specified coordinates'''
      return opcodes.create_random_char(self.__handle, x, y, z)

   def set_anim_speed(self, animName: str, animSpeed: float):
      '''Makes an actor perform an animation at the specified speed'''
      opcodes.set_char_anim_speed(self.__handle, animName, animSpeed)

   def set_cant_be_dragged_out(self, state: bool):
      '''Locks the character while in a car'''
      opcodes.set_char_cant_be_dragged_out(self.__handle, state)

   def is_male(self):
      '''Returns true if the character is male'''
      return opcodes.is_char_male(self.__handle)

   def store_car_is_in_no_save(self) -> Car:
      '''Returns the character's vehicle handle without marking it as used by the script, therefore allowing it to be deleted by the game at any time'''
      return opcodes.store_car_char_is_in_no_save(self.__handle)

   def set_money(self, amount: int):
      '''Sets the character's cash sum, setting how much cash they will drop when dead'''
      opcodes.set_char_money(self.__handle, amount)

   def get_ammo_in_weapon(self, weaponType: WeaponType) -> int:
      '''Gets the amount of ammo in the specified weapon of the character'''
      return opcodes.get_ammo_in_char_weapon(self.__handle, weaponType)

   def warp_into_car_as_passenger(self, handle: Car, seatId: int):
      '''Puts the character into a vehicle's passenger seat'''
      opcodes.warp_char_into_car_as_passenger(self.__handle, handle, seatId)

   def set_is_chris_criminal(self, state: bool):
      '''Sets whether the character is a psychotic killer or not'''
      opcodes.set_char_is_chris_criminal(self.__handle, state)

   def set_suffers_critical_hits(self, state: bool):
      '''Sets whether the specified character is immune to headshots'''
      opcodes.set_char_suffers_critical_hits(self.__handle, state)

   def is_sitting_in_car(self, vehicle: Car):
      '''Returns true if the character is sitting in the specified vehicle'''
      return opcodes.is_char_sitting_in_car(self.__handle, vehicle)

   def is_sitting_in_any_car(self):
      '''Returns true if the character is sitting in any vehicle'''
      return opcodes.is_char_sitting_in_any_car(self.__handle)

   def is_on_foot(self):
      '''Returns true if the character is on foot, and not occupying a vehicle'''
      return opcodes.is_char_on_foot(self.__handle)

   def attach_to_car(self, vehicle: Car, xOffset: float, yOffset: float, zOffset: float, position: int, angleLimit: float, weaponType: WeaponType):
      '''Puts character into a turret on the vehicle, allowing them to shoot'''
      opcodes.attach_char_to_car(self.__handle, vehicle, xOffset, yOffset, zOffset, position, angleLimit, weaponType)

   def detach_from_car(self):
      '''Removes the character from turret mode (0464)'''
      opcodes.detach_char_from_car(self.__handle)

   def clear_last_weapon_damage(self):
      '''Clears the character's last weapon damage (see 031D)'''
      opcodes.clear_char_last_weapon_damage(self.__handle)

   def get_number_of_followers(self) -> int:
      '''Returns the number of members which are in a group of the character (01DE)'''
      return opcodes.get_number_of_followers(self.__handle)

   def get_current_weapon(self) -> WeaponType:
      '''Returns the type of weapon that the character is currently holding'''
      return opcodes.get_current_char_weapon(self.__handle)

   def locate_any_means_object2_d(self, object: Object, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the object'''
      return opcodes.locate_char_any_means_object_2d(self.__handle, object, xRadius, yRadius, drawSphere)

   def locate_on_foot_object2_d(self, object: Object, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the object on foot'''
      return opcodes.locate_char_on_foot_object_2d(self.__handle, object, xRadius, yRadius, drawSphere)

   def locate_in_car_object2_d(self, object: Object, xRadius: float, yRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 2D radius of the object in a vehicle'''
      return opcodes.locate_char_in_car_object_2d(self.__handle, object, xRadius, yRadius, drawSphere)

   def locate_any_means_object3_d(self, object: Object, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the object'''
      return opcodes.locate_char_any_means_object_3d(self.__handle, object, xRadius, yRadius, zRadius, drawSphere)

   def locate_on_foot_object3_d(self, object: Object, xRadius: float, yRadius: float, zRadius: float, drawSphere: bool):
      '''Returns true if the character is within the 3D radius of the object on foot'''
      return opcodes.locate_char_on_foot_object_3d(self.__handle, object, xRadius, yRadius, zRadius, drawSphere)

   def locate_in_car_object3_d(self, object: Object, xRadius: float, yRadius: float, zRadius: float, drawSphere: int):
      '''Returns true if the character is within the 3D radius of the object in a vehicle'''
      return opcodes.locate_char_in_car_object_3d(self.__handle, object, xRadius, yRadius, zRadius, drawSphere)

   def is_on_any_bike(self):
      '''Returns true if the character is driving a bike'''
      return opcodes.is_char_on_any_bike(self.__handle)

   def can_see_dead_char(self, pedType: int):
      '''Returns true if the character sees a dead body of the given type'''
      return opcodes.can_char_see_dead_char(self.__handle, pedType)

   def shut_up(self, state: bool):
      '''Sets the character ability to talk'''
      opcodes.shut_char_up(self.__handle, state)

   def remove_all_weapons(self):
      '''Removes the characters weapons'''
      opcodes.remove_all_char_weapons(self.__handle)

   def has_got_weapon(self, weaponType: WeaponType):
      '''Returns true if the character has the specified weapon'''
      return opcodes.has_char_got_weapon(self.__handle, weaponType)

   def is_in_any_boat(self):
      '''Returns true if the character is driving a boat'''
      return opcodes.is_char_in_any_boat(self.__handle)

   def is_in_any_heli(self):
      '''Returns true if the character is flying a helicopter'''
      return opcodes.is_char_in_any_heli(self.__handle)

   def is_in_any_plane(self):
      '''Returns true if the character is in a plane'''
      return opcodes.is_char_in_any_plane(self.__handle)

   def is_in_water(self):
      '''Returns true if the character is in water'''
      return opcodes.is_char_in_water(self.__handle)

   def get_weapon_in_slot(self, weaponSlotId: WeaponSlot) ->  Tuple[WeaponType, int, model_object]:
      '''Returns the weapon type, ammo and model from the specified slot'''
      return opcodes.get_char_weapon_in_slot(self.__handle, weaponSlotId)

   def get_offset_in_world_coords(self, xOffset: float, yOffset: float, zOffset: float) ->  Tuple[float, float, float]:
      '''Returns the coordinates of the character, with an offset'''
      return opcodes.get_offset_from_char_in_world_coords(self.__handle, xOffset, yOffset, zOffset)

   def has_been_photographed(self):
      '''Returns true if the character has been photographed'''
      return opcodes.has_char_been_photographed(self.__handle)

   def is_in_flying_vehicle(self):
      '''Returns true if the character is in a flying vehicle'''
      return opcodes.is_char_in_flying_vehicle(self.__handle)

   def freeze_position(self, state: bool):
      '''Sets whether the character's position remains unchanged'''
      opcodes.freeze_char_position(self.__handle, state)

   def set_drowns_in_water(self, state: bool):
      '''Controls whether the character can drown in water'''
      opcodes.set_char_drowns_in_water(self.__handle, state)

   def get_armor(self) -> int:
      '''Returns the character's armor amount'''
      return opcodes.get_char_armour(self.__handle)

   def is_waiting_for_world_collision(self):
      return opcodes.is_char_waiting_for_world_collision(self.__handle)

   def attach_to_object(self, handle: Object, xOffset: float, yOffset: float, zOffset: float, orientation: int, angleLimit: float, weaponType: WeaponType):
      '''Attaches the character to the specified object, in turret mode'''
      opcodes.attach_char_to_object(self.__handle, handle, xOffset, yOffset, zOffset, orientation, angleLimit, weaponType)

   def create_swat_rope(self, pedType: PedType, modelId: model_char, x: float, y: float, z: float) -> Char:
      '''Creates a character descending from a rope'''
      return opcodes.create_swat_rope(self.__handle, pedType, modelId, x, y, z)

   def has_been_damaged_by_char(self, handle: Char):
      '''Returns true if the character has been hurt by the other character'''
      return opcodes.has_char_been_damaged_by_char(self.__handle, handle)

   def has_been_damaged_by_car(self, handle: Car):
      '''Returns true if the actor has been hurt by the specified vehicle'''
      return opcodes.has_char_been_damaged_by_car(self.__handle, handle)

   def set_stay_in_car_when_jacked(self, state: bool):
      '''Makes the character stay in the vehicle when it is jacked (characters let themselves get "kidnapped")'''
      opcodes.set_char_stay_in_car_when_jacked(self.__handle, state)

   def is_touching_vehicle(self, handle: Car):
      '''Returns true if the character is colliding with a car'''
      return opcodes.is_char_touching_vehicle(self.__handle, handle)

   def set_can_be_shot_in_vehicle(self, state: bool):
      '''Makes the character immune to a damage while in a vehicle'''
      opcodes.set_char_can_be_shot_in_vehicle(self.__handle, state)

   def clear_last_damage_entity(self):
      opcodes.clear_char_last_damage_entity(self.__handle)

   def remove_weapon(self, weaponType: WeaponType):
      '''Removes the weapon from the character'''
      opcodes.remove_weapon_from_char(self.__handle, weaponType)

   def create_random_as_driver(self, vehicle: Car) -> Char:
      '''Creates a driver in the vehicle'''
      return opcodes.create_random_char_as_driver(self.__handle, vehicle)

   def create_random_as_passenger(self, vehicle: Car, seatId: int) -> Char:
      '''Creates a random character in the passenger seat of the vehicle'''
      return opcodes.create_random_char_as_passenger(self.__handle, vehicle, seatId)

   def set_never_targeted(self, state: bool):
      '''Sets whether the character won't be targeted by the autoaim system'''
      opcodes.set_char_never_targeted(self.__handle, state)

   def is_in_any_police_vehicle(self):
      '''Returns true if the character is driving a police vehicle'''
      return opcodes.is_char_in_any_police_vehicle(self.__handle)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid character handle'''
      return opcodes.does_char_exist(handle)

   def freeze_position_and_dont_load_collision(self, state: bool):
      opcodes.freeze_char_position_and_dont_load_collision(self.__handle, state)

   def set_load_collision_flag(self, state: bool):
      opcodes.set_load_collision_for_char_flag(self.__handle, state)

   def is_ducking(self):
      '''Returns true if the specified character is crouching'''
      return opcodes.is_char_ducking(self.__handle)

   def is_in_angled_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      '''Checks if the character is within the angled 2D area'''
      return opcodes.is_char_in_angled_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_in_angled_area_on_foot2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      '''Checks if the character is within the angled 2D area'''
      return opcodes.is_char_in_angled_area_on_foot_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_in_angled_area_in_car2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      '''Checks if the character is in a car which is within the angled 2D area'''
      return opcodes.is_char_in_angled_area_in_car_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_stopped_in_angled_area2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      '''Checks if the character is within the angled 2D area and is motionless'''
      return opcodes.is_char_stopped_in_angled_area_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_stopped_in_angled_area_on_foot2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      '''Checks if the character is within the angled 2D area'''
      return opcodes.is_char_stopped_in_angled_area_on_foot_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_stopped_in_angled_area_in_car2_d(self, leftBottomX: float, leftBottomY: float, rightTopX: float, rightTopY: float, angle: float, drawSphere: bool):
      '''Checks if the character is in a motionless car within the angled 2D area'''
      return opcodes.is_char_stopped_in_angled_area_in_car_2d(self.__handle, leftBottomX, leftBottomY, rightTopX, rightTopY, angle, drawSphere)

   def is_in_angled_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      '''Checks if the character is within the angled 3D area'''
      return opcodes.is_char_in_angled_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def is_in_angled_area_on_foot3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      '''Checks if the character is within the angled 3D area'''
      return opcodes.is_char_in_angled_area_on_foot_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def is_in_angled_area_in_car3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      return opcodes.is_char_in_angled_area_in_car_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def is_stopped_in_angled_area3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      return opcodes.is_char_stopped_in_angled_area_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def is_stopped_in_angled_area_on_foot3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      return opcodes.is_char_stopped_in_angled_area_on_foot_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def is_stopped_in_angled_area_in_car3_d(self, leftBottomX: float, leftBottomY: float, leftBottomZ: float, rightTopX: float, rightTopY: float, rightTopZ: float, angle: float, drawSphere: bool):
      return opcodes.is_char_stopped_in_angled_area_in_car_3d(self.__handle, leftBottomX, leftBottomY, leftBottomZ, rightTopX, rightTopY, rightTopZ, angle, drawSphere)

   def is_in_taxi(self):
      '''Returns true if the character is driving a taxi'''
      return opcodes.is_char_in_taxi(self.__handle)

   def set_decision_maker(self, maskOrHandle: DecisionMakerChar):
      '''Sets the decision maker for the character'''
      opcodes.set_char_decision_maker(self.__handle, maskOrHandle)

   def set_sense_range(self, meleeAccuracy: float):
      '''Sets the characters melee accuracy'''
      opcodes.set_sense_range(self.__handle, meleeAccuracy)

   def is_playing_anim(self, animationName: str):
      '''Returns true if character is performing the specified animation'''
      return opcodes.is_char_playing_anim(self.__handle, animationName)

   def set_anim_playing_flag(self, animationName: str, flag: bool):
      '''Sets whether the animation is playing'''
      opcodes.set_char_anim_playing_flag(self.__handle, animationName, flag)

   def get_anim_current_time(self, animationName: str) -> int:
      '''Returns the progress of the animation on the actor, ranging from 0'''
      return opcodes.get_char_anim_current_time(self.__handle, animationName)

   def set_anim_current_time(self, animationName: str, time: float):
      '''Sets how far through the animation the character is, with 1'''
      opcodes.set_char_anim_current_time(self.__handle, animationName, time)

   def perform_sequence(self, sequence: Sequence):
      '''Assigns the character to the specified action sequence'''
      opcodes.perform_sequence_task(self.__handle, sequence)

   def set_collision(self, state: bool):
      '''Sets whether collision detection is enabled for the character'''
      opcodes.set_char_collision(self.__handle, state)

   def get_anim_total_time(self, animationName: str) -> int:
      '''Returns a float of the length of the animation in milliseconds'''
      return opcodes.get_char_anim_total_time(self.__handle, animationName)

   def create_at_attractor(self, pedType: PedType, modelId: model_char, taskId: int, attractor: Attractor) -> Char:
      return opcodes.create_char_at_attractor(self.__handle, pedType, modelId, taskId, attractor)

   def get_script_task_status(self, taskId: int) -> int:
      '''Returns the status of the specified script task of the character'''
      return opcodes.get_script_task_status(self.__handle, taskId)

   def is_at_scripted_attractor(self, handle: Attractor):
      return opcodes.is_char_at_scripted_attractor(self.__handle, handle)

   def get_sequence_progress(self) -> int:
      '''Gets the characters task sequence progress, as started by 0618'''
      return opcodes.get_sequence_progress(self.__handle)

   def clear_look_at(self):
      '''Clears the actor's look task, making them stop looking at whatever they were assigned to look at'''
      opcodes.clear_look_at(self.__handle)

   def set_follow_node_threshold_distance(self, range: float):
      '''Sets the range within which the char responds to events'''
      opcodes.set_follow_node_threshold_distance(self.__handle, range)

   def get_model(self, modelId: int):
      '''Returns the characters model'''
      opcodes.get_char_model(self.__handle, modelId)

   def clear_tasks(self):
      '''Clears the char's task, making them quit whatever they were doing'''
      opcodes.clear_char_tasks(self.__handle)

   def attach_to_bike(self, vehicle: Car, xOffset: float, yOffset: float, zOffset: float, position: int, _p7: float, _p8: float, weaponType: WeaponType):
      opcodes.attach_char_to_bike(self.__handle, vehicle, xOffset, yOffset, zOffset, position, _p7, _p8, weaponType)

   def hide_weapon_for_scripted_cutscene(self, state: bool):
      '''Hides all of the specified actor's weapons'''
      opcodes.hide_char_weapon_for_scripted_cutscene(self.__handle, state)

   def get_speed(self) -> float:
      '''Returns the actor's movement speed'''
      return opcodes.get_char_speed(self.__handle)

   def remove_from_group(self):
      '''Removes the character from their current group'''
      opcodes.remove_char_from_group(self.__handle)

   def is_group_member(self, handle: Group):
      '''Returns true if the character is a member of the specified group'''
      return opcodes.is_group_member(self.__handle, handle)

   def is_group_leader(self, handle: Group):
      '''Returns true if the character is the leader of the specified group'''
      return opcodes.is_group_leader(self.__handle, handle)

   def is_near_any_chars(self, radius: float):
      '''Returns true if any characters are within range of the character'''
      return opcodes.are_any_chars_near_char(self.__handle, radius)

   def drop_object(self, state: bool):
      opcodes.drop_object(self.__handle, state)

   def is_holding_object(self, handle: Object):
      '''Returns true if the actor is lifting the specified object'''
      return opcodes.is_char_holding_object(self.__handle, handle)

   def has_been_arrested(self):
      '''Returns true if the character has been arrested'''
      return opcodes.has_char_been_arrested(self.__handle)

   def set_inform_respected_friends(self, radius: float, _p3: int):
      opcodes.set_inform_respected_friends(self.__handle, radius, _p3)

   def is_responding_to_event(self, eventId: int):
      '''Returns true if the character is responding to the specified ped event'''
      return opcodes.is_char_responding_to_event(self.__handle, eventId)

   def set_is_target_priority(self, state: bool):
      '''Causes the auto aim to be more likely to target the specified actor than actors without this flag'''
      opcodes.set_char_is_target_priority(self.__handle, state)

   def set_relationship(self, relationshipType: RelationshipType, pedType: PedType):
      opcodes.set_char_relationship(self.__handle, relationshipType, pedType)

   def clear_relationship(self, relationshipType: RelationshipType, toPedType: PedType):
      opcodes.clear_char_relationship(self.__handle, relationshipType, toPedType)

   def clear_all_relationships(self, relationshipType: RelationshipType):
      opcodes.clear_all_char_relationships(self.__handle, relationshipType)

   def clear_tasks_immediately(self):
      '''Clears all the characters tasks immediately, resetting the character to an idle state'''
      opcodes.clear_char_tasks_immediately(self.__handle)

   def perform_sequence_from_progress(self, sequence: Sequence, _p3: int, _p4: int):
      opcodes.perform_sequence_task_from_progress(self.__handle, sequence, _p3, _p4)

   @staticmethod
   def set_next_desired_move_state(moveState: MoveState):
      '''Sets how the character chooses to go to their destination in the next task without a parameter specifying this'''
      opcodes.set_next_desired_move_state(moveState)

   def get_sequence_progress_recursive(self) ->  Tuple[int, int]:
      return opcodes.get_sequence_progress_recursive(self.__handle)

   def is_in_any_searchlight(self) -> Searchlight:
      '''Returns the handle for the searchlight that's targeting the character'''
      return opcodes.is_char_in_any_searchlight(self.__handle)

   def listen_to_player_group_commands(self, state: bool):
      opcodes.listen_to_player_group_commands(self.__handle, state)

   def set_shoot_rate(self, rate: int):
      '''Sets the attack rate of the actor'''
      opcodes.set_char_shoot_rate(self.__handle, rate)

   def give_melee_attack(self, fightStyle: FightStyle, moveId: int):
      '''Sets the specified characters fighting style and moves'''
      opcodes.give_melee_attack_to_char(self.__handle, fightStyle, moveId)

   def get_highest_priority_event(self) -> int:
      '''Gets the characters active ped event'''
      return opcodes.get_char_highest_priority_event(self.__handle)

   def get_car_is_using(self) -> Car:
      '''Stores a handle for the vehicle the character is in or entering'''
      return opcodes.get_car_char_is_using(self.__handle)

   def set_kinda_stay_in_same_place(self, state: bool):
      '''Sets whether the character shouldn't chase their victim far (to attempt a melee attack or get in weapon range)'''
      opcodes.set_char_kinda_stay_in_same_place(self.__handle, state)

   def is_in_air(self):
      '''Returns true if the character is in the air'''
      return opcodes.is_char_in_air(self.__handle)

   def get_height_above_ground(self) -> float:
      '''Returns the actor's distance from ground'''
      return opcodes.get_char_height_above_ground(self.__handle)

   def set_weapon_skill(self, skillId: int):
      '''Sets the characters weapon accuracy'''
      opcodes.set_char_weapon_skill(self.__handle, skillId)

   def set_velocity(self, x: float, y: float, z: float):
      '''Sets the characters velocity'''
      opcodes.set_char_velocity(self.__handle, x, y, z)

   def get_velocity(self) ->  Tuple[float, float, float]:
      '''Gets the characters velocity'''
      return opcodes.get_char_velocity(self.__handle)

   def set_rotation(self, x: float, y: float, z: float):
      '''Sets the characters rotation'''
      opcodes.set_char_rotation(self.__handle, x, y, z)

   def damage(self, amount: int, damageArmour: bool):
      '''Decreases the characters health'''
      opcodes.damage_char(self.__handle, amount, damageArmour)

   def set_allowed_to_duck(self, state: bool):
      '''Sets whether the character can crouch'''
      opcodes.set_char_allowed_to_duck(self.__handle, state)

   def set_area_visible(self, interiorId: int):
      '''Sets the interior that the char is in'''
      opcodes.set_char_area_visible(self.__handle, interiorId)

   def set_drops_weapons_when_dead(self, state: bool):
      '''Sets whether the character will drop any of their weapons when they die'''
      opcodes.set_char_drops_weapons_when_dead(self.__handle, state)

   def set_never_leaves_group(self, state: bool):
      '''Prevents the character from leaving their group'''
      opcodes.set_char_never_leaves_group(self.__handle, state)

   def set_heading_limit_for_attached(self, orientation: int, headingLimit: float):
      '''Sets the heading limit for a character attached to an object or vehicle'''
      opcodes.set_heading_limit_for_attached_char(self.__handle, orientation, headingLimit)

   def get_coordinates_of_died(self) ->  Tuple[float, float, float]:
      return opcodes.get_dead_char_coordinates(self.__handle)

   def get_ped_type(self) -> int:
      '''Gets the ped type of the character'''
      return opcodes.get_ped_type(self.__handle)

   def set_has_used_entry_exit(self, x: float, y: float, radius: float):
      '''Locates the entry/exit marker in the specified radius of the specified coordinates and links it to the character, also setting the appropriate interior ID for the character and setting the appropriate sky color if the character is player-controlled'''
      opcodes.set_char_has_used_entry_exit(self.__handle, x, y, radius)

   def set_max_health(self, maxHealth: int):
      '''Sets the characters max health'''
      opcodes.set_char_max_health(self.__handle, maxHealth)

   def set_can_be_knocked_off_bike(self, state: bool):
      '''Sets whether the character can fall off their bike in collisions'''
      opcodes.set_char_can_be_knocked_off_bike(self.__handle, state)

   def set_coordinates_dont_warp_gang(self, x: float, y: float, z: float):
      '''Sets the character's coordinates without warping the rest of their group'''
      opcodes.set_char_coordinates_dont_warp_gang(self.__handle, x, y, z)

   def set_bulletproof_vest(self, state: bool):
      '''Specifies that the character should only use upper-body damage animations, meaning they can still run if shot in the legs etc'''
      opcodes.set_char_bulletproof_vest(self.__handle, state)

   def set_uses_upperbody_damage_anims_only(self, state: bool):
      opcodes.set_char_uses_upperbody_damage_anims_only(self.__handle, state)

   def set_say_context(self, speech: int) -> int:
      '''Works similar to 05C1, but returns which phrase was spoken and is not run as a task'''
      return opcodes.set_char_say_context(self.__handle, speech)

   def get_name_of_entry_exit_used(self) -> str:
      '''Gets the name of the characters interior'''
      return opcodes.get_name_of_entry_exit_char_used(self.__handle)

   def get_position_of_entry_exit_char_used(self) ->  Tuple[float, float, float, float]:
      '''Returns the coordinates and heading of the entry (enex) marker the character used to get to the current interior'''
      return opcodes.get_position_of_entry_exit_char_used(self.__handle)

   def is_talking(self):
      '''Returns true if the character is playing any speech'''
      return opcodes.is_char_talking(self.__handle)

   def disable_speech(self, stopNow: bool):
      '''Prevents any character speech from playing'''
      opcodes.disable_char_speech(self.__handle, stopNow)

   def enable_speech(self):
      '''Enables pain audio if it was disabled using 094E'''
      opcodes.enable_char_speech(self.__handle)

   def is_stuck_under_car(self):
      '''Returns true if the actor is stuck under a car'''
      return opcodes.is_char_stuck_under_car(self.__handle)

   def set_keep_task(self, state: bool):
      '''Sets whether the character should keep their tasks after mission cleanup (basically cleanup will be skipped for this character)'''
      opcodes.set_char_keep_task(self.__handle, state)

   def is_swimming(self):
      return opcodes.is_char_swimming(self.__handle)

   def get_swim_state(self) -> int:
      return opcodes.get_char_swim_state(self.__handle)

   def start_facial_talk(self, duration: int):
      '''Makes a character move their mouth as if they were talking'''
      opcodes.start_char_facial_talk(self.__handle, duration)

   def stop_facial_talk(self):
      '''Stops the character moving their mouth as if they were talking'''
      opcodes.stop_char_facial_talk(self.__handle)

   def set_coordinates_no_offset(self, x: float, y: float, z: float):
      '''Puts the characters at the coordinates by the center of body instead of the feet'''
      opcodes.set_char_coordinates_no_offset(self.__handle, x, y, z)

   def set_force_die_in_car(self, state: bool):
      '''Makes a character remain in the car upon death'''
      opcodes.set_char_force_die_in_car(self.__handle, state)

   def drop_second_object(self, state: bool):
      opcodes.drop_second_object(self.__handle, state)

   def set_drugged_up(self, state: bool):
      opcodes.set_char_drugged_up(self.__handle, state)

   def is_head_missing(self):
      '''Returns true if the character has had its head shot off'''
      return opcodes.is_char_head_missing(self.__handle)

   def is_in_any_train(self):
      '''Returns true if the specified character is in a train'''
      return opcodes.is_char_in_any_train(self.__handle)

   def set_signal_after_kill(self, state: bool):
      '''Sets whether the character signals after killing'''
      opcodes.set_char_signal_after_kill(self.__handle, state)

   def set_wanted_by_police(self, state: bool):
      '''Sets whether police should chase the character'''
      opcodes.set_char_wanted_by_police(self.__handle, state)

   def set_coordinates_dont_warp_gang_no_offset(self, x: float, y: float, z: float):
      '''This command is a combination of 0972 and 08C7'''
      opcodes.set_char_coordinates_dont_warp_gang_no_offset(self.__handle, x, y, z)

   def is_using_map_attractor(self):
      '''Returns true if the character is using a map attractor'''
      return opcodes.is_char_using_map_attractor(self.__handle)

   def remove_from_car_maintain_position(self, handle: Car):
      '''Removes the character from the vehicle'''
      opcodes.remove_char_from_car_maintain_position(self.__handle, handle)

   def set_say_context_important(self, _p2: int, _p3: bool, _p4: bool, _p5: bool) -> int:
      return opcodes.set_char_say_context_important(self.__handle, _p2, _p3, _p4, _p5)

   def set_say_script(self, _p2: int, _p3: bool, _p4: bool, _p5: bool):
      opcodes.set_char_say_script(self.__handle, _p2, _p3, _p4, _p5)

   def is_getting_in_to_a_car(self):
      '''Returns true if the character is entering a car, but is not in the car'''
      return opcodes.is_char_getting_in_to_a_car(self.__handle)

   def get_area_visible(self) -> int:
      '''Returns the interior ID that the character is in'''
      return opcodes.get_char_area_visible(self.__handle)

   def has_spotted_char_in_front(self, handle: Char):
      '''Returns true if the character can see the other character in front of them'''
      return opcodes.has_char_spotted_char_in_front(self.__handle, handle)

   def ignore_height_difference_following_nodes(self, state: bool):
      opcodes.ignore_height_difference_following_nodes(self.__handle, state)

   def set_get_out_upside_down_car(self, state: bool):
      '''Controls whether the character will try to exit an upside-down car until it is on fire'''
      opcodes.set_char_get_out_upside_down_car(self.__handle, state)

   def shut_up_for_scripted_speech(self, state: bool):
      '''Works similar to 0489, but mutes more things, including ambient speeches (needs confirming)'''
      opcodes.shut_char_up_for_scripted_speech(self.__handle, state)

   def is_touching_char(self, handle: Char):
      '''Returns true if the character is touching the other character'''
      return opcodes.is_char_touching_char(self.__handle, handle)

   def set_death_weapons_persist(self, state: bool):
      '''Prevents pickups, which are created when this character dies, from disappearing until picked up by the player'''
      opcodes.set_death_weapons_persist(self.__handle, state)

   def set_swim_speed(self, speed: float):
      '''Sets the speed that the character swims at, changing their swimming animation speed'''
      opcodes.set_swim_speed(self.__handle, speed)

   def is_attached_to_any_car(self):
      '''Returns true if the actor is turreted on any vehicle'''
      return opcodes.is_char_attached_to_any_car(self.__handle)

   def store_car_is_attached_to_no_save(self) -> Car:
      '''Returns the vehicle the character is attached to'''
      return opcodes.store_car_char_is_attached_to_no_save(self.__handle)

   def store_closest_entities(self) ->  Tuple[Char, Car]:
      '''Stores the handles of a ped and vehicle being closest to the char or -1 otherwise'''
      return opcodes.store_closest_entities(self.__handle)


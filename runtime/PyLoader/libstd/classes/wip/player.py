import libstd.opcodes as opcodes
from typing import Tuple

class Player():
   def __init__(self, modelId: model_char, x: float, y: float, z: float) -> Player:
      '''Creates a player at the specified location'''
      self.__handle = opcodes.create_player(self.__handle, modelId, x, y, z)

   def add_score(self, money: int):
      '''Adds to the player's money'''
      opcodes.add_score(self.__handle, money)

   def is_score_greater(self, money: int):
      '''Returns true if the player's money is over the specified value'''
      return opcodes.is_score_greater(self.__handle, money)

   def store_score(self) -> int:
      '''Returns the player's money'''
      return opcodes.store_score(self.__handle)

   def alter_wanted_level(self, wantedLevel: int):
      '''Sets the player's wanted level'''
      opcodes.alter_wanted_level(self.__handle, wantedLevel)

   def alter_wanted_level_no_drop(self, wantedLevel: int):
      '''Sets the player's wanted level if the specified level is higher than the current one'''
      opcodes.alter_wanted_level_no_drop(self.__handle, wantedLevel)

   def is_wanted_level_greater(self, wantedLevel: int):
      '''Returns true if the player's wanted level is over the specified value'''
      return opcodes.is_wanted_level_greater(self.__handle, wantedLevel)

   def clear_wanted_level(self):
      '''Clears the player's wanted level'''
      opcodes.clear_wanted_level(self.__handle)

   @staticmethod
   def is_dead(handle: any):
      '''Returns true if the handle is an invalid player handle or the player is dead (wasted)'''
      return opcodes.is_player_dead(handle)

   def is_pressing_horn(self):
      '''Returns true if the player is honking the horn in a car'''
      return opcodes.is_player_pressing_horn(self.__handle)

   def set_control(self, state: bool):
      '''Sets whether player's control is enabled'''
      opcodes.set_player_control(self.__handle, state)

   def store_wanted_level(self) -> int:
      '''Returns the player's current wanted level'''
      return opcodes.store_wanted_level(self.__handle)

   def get_char(self) -> Char:
      '''Gets the character handle for the specified player'''
      return opcodes.get_player_char(self.__handle)

   def set_ignore_police(self, state: bool):
      '''Sets whether cops should ignore the player regardless of wanted level'''
      opcodes.set_police_ignore_player(self.__handle, state)

   def apply_brakes_to_car(self, state: bool):
      '''Applies brakes to the player's car'''
      opcodes.apply_brakes_to_players_car(self.__handle, state)

   def is_in_remote_mode(self):
      '''Returns true if the player is controlling a remote-control vehicle'''
      return opcodes.is_player_in_remote_mode(self.__handle)

   def is_playing(self):
      '''Returns true if the player hasn't been wasted or busted (the player is still playing)'''
      return opcodes.is_player_playing(self.__handle)

   def reset_num_of_models_killed(self):
      '''Resets the count of how many times the player has destroyed a certain model'''
      opcodes.reset_num_of_models_killed_by_player(self.__handle)

   def get_num_of_models_killed(self, modelId: model_any) -> int:
      '''Returns the number of times the player has destroyed a specific model'''
      return opcodes.get_num_of_models_killed_by_player(self.__handle, modelId)

   def set_never_gets_tired(self, state: bool):
      '''Defines whether the player can run fast forever'''
      opcodes.set_player_never_gets_tired(self.__handle, state)

   def set_fast_reload(self, state: bool):
      '''Defines whether the player have to reload their gun'''
      opcodes.set_player_fast_reload(self.__handle, state)

   def can_start_mission(self):
      '''Returns true if the player can move'''
      return opcodes.can_player_start_mission(self.__handle)

   def make_safe_for_cutscene(self):
      '''Makes the player safe, putting the character in a safe location'''
      opcodes.make_player_safe_for_cutscene(self.__handle)

   def set_free_health_care(self, state: bool):
      '''Sets whether the player loses the cash when gets wasted (works once)'''
      opcodes.set_free_health_care(self.__handle, state)

   def is_targetting_char(self, handle: Char):
      '''Returns true if the player is aiming at the specified character'''
      return opcodes.is_player_targetting_char(self.__handle, handle)

   def is_targetting_object(self, handle: Object):
      '''Returns true if the player is aiming at the specified object'''
      return opcodes.is_player_targetting_object(self.__handle, handle)

   def set_mood(self, mood: PlayerMood, time: int):
      '''Sets the players mood, affecting the dialogue spoken by the player'''
      opcodes.set_player_mood(self.__handle, mood, time)

   def get_wheelie_stats(self) ->  Tuple[int, float, int, float, int, float]:
      '''Returns the stats of the most recent wheelie or stoppie attempt'''
      return opcodes.get_wheelie_stats(self.__handle)

   def is_wearing(self, modelName: str, bodyPart: BodyPart):
      '''Returns true if the player's bodypart has the specified model (0784 or 087B) '''
      return opcodes.is_player_wearing(self.__handle, modelName, bodyPart)

   def set_can_do_drive_by(self, state: bool):
      '''Sets the players driveby mode'''
      opcodes.set_player_can_do_drive_by(self.__handle, state)

   def set_drunkenness(self, intensity: int):
      '''Makes the camera start moving around in a swirling motion with the specified intensity as if drunk'''
      opcodes.set_player_drunkenness(self.__handle, intensity)

   def make_fire_proof(self, state: bool):
      '''Makes the player immune to fire'''
      opcodes.make_player_fire_proof(self.__handle, state)

   def increase_max_health(self, value: int):
      '''Increases the players maximum health by the specified amount'''
      opcodes.increase_player_max_health(self.__handle, value)

   def increase_max_armor(self, value: int):
      '''Increases the players armor by the specified amount'''
      opcodes.increase_player_max_armour(self.__handle, value)

   def ensure_has_drive_by_weapon(self, ammo: int):
      '''Sets the amount of ammo a player has during a driveby'''
      opcodes.ensure_player_has_drive_by_weapon(self.__handle, ammo)

   def is_in_info_zone(self, infoZone: gxt_key):
      '''Returns true if the player is in the specified zone'''
      return opcodes.is_player_in_info_zone(self.__handle, infoZone)

   def is_targetting_anything(self):
      '''Returns true if the specified player is aiming at anything using autoaim'''
      return opcodes.is_player_targetting_anything(self.__handle)

   def disable_sprint(self, state: bool):
      opcodes.disable_player_sprint(self.__handle, state)

   def delete(self):
      '''Removes the specified player'''
      opcodes.delete_player(self.__handle)

   def build_model(self):
      '''Rebuilds the player model, applying any required texture changes'''
      opcodes.build_player_model(self.__handle)

   def give_clothes(self, textureHash: int, modelHash: int, bodyPart: BodyPart):
      opcodes.give_player_clothes(self.__handle, textureHash, modelHash, bodyPart)

   @staticmethod
   def store_clothes_state():
      '''Stores the players current clothes to later be restored with 0794'''
      opcodes.store_clothes_state()

   @staticmethod
   def restore_clothes_state():
      '''Restores the players clothes stored with 0793'''
      opcodes.restore_clothes_state()

   def get_group(self) -> Group:
      return opcodes.get_player_group(self.__handle)

   def set_group_recruitment(self, state: bool):
      opcodes.set_player_group_recruitment(self.__handle, state)

   def is_performing_wheelie(self):
      return opcodes.is_player_performing_wheelie(self.__handle)

   def is_performing_stoppie(self):
      '''Returns true if the player is performing a stoppie'''
      return opcodes.is_player_performing_stoppie(self.__handle)

   def get_total_number_of_peds_killed(self) -> int:
      '''Returns the number of peds killed by the player since the last reset (0297)'''
      return opcodes.get_total_number_of_peds_killed_by_player(self.__handle)

   def get_city_is_in(self) -> int:
      '''Gets the players current town ID'''
      return opcodes.get_city_player_is_in(self.__handle)

   def set_heading_for_attached(self, heading: float, rotationSpeed: float):
      '''Sets the view angle for the player attached to an object or vehicle'''
      opcodes.set_heading_for_attached_player(self.__handle, heading, rotationSpeed)

   def is_attached_heading_achieved(self):
      '''Returns true if the heading has finished being applied, as started by 0858'''
      return opcodes.is_attached_player_heading_achieved(self.__handle)

   def give_clothes_outside_shop(self, textureName: str, modelName: str, bodyPart: BodyPart):
      '''Sets the players clothing'''
      opcodes.give_player_clothes_outside_shop(self.__handle, textureName, modelName, bodyPart)

   @staticmethod
   def make_gang_disappear():
      opcodes.make_player_gang_disappear()

   @staticmethod
   def make_gang_reappear():
      opcodes.make_player_gang_reappear()

   def get_clothes_item(self, bodyPart: BodyPart) ->  Tuple[int, int]:
      return opcodes.get_clothes_item(self.__handle, bodyPart)

   def get_max_armor(self) -> int:
      return opcodes.get_player_max_armour(self.__handle)

   def set_model(self, modelId: int):
      '''Changes the player to use the specified model'''
      opcodes.set_player_model(self.__handle, modelId)

   def force_interior_lighting(self, state: bool):
      opcodes.force_interior_lighting_for_player(self.__handle, state)

   @staticmethod
   def use_detonator():
      '''Detonates all satchel charges and car bombs planted by the player'''
      opcodes.use_detonator()

   def is_control_on(self):
      '''Returns true if the player control hasn't been disabled using 01B4'''
      return opcodes.is_player_control_on(self.__handle)

   def take_off_goggles(self, animate: bool):
      '''Removes the players Goggles and disables night/heat vision'''
      opcodes.player_take_off_goggles(self.__handle, animate)

   def is_using_jetpack(self):
      '''Returns true if player is using a jetpack'''
      return opcodes.is_player_using_jetpack(self.__handle)

   def set_group_to_follow_always(self, state: bool):
      '''Controls the players ability to tell their group to wait and automatically orders any group members to continue following'''
      opcodes.set_player_group_to_follow_always(self.__handle, state)

   def is_climbing(self):
      '''Returns true if the player is climbing'''
      return opcodes.is_player_climbing(self.__handle)

   def set_group_to_follow_never(self, state: bool):
      '''Sets whether the player's group stops following the player, even if the player uses the "group follow" button'''
      opcodes.set_player_group_to_follow_never(self.__handle, state)

   def is_last_building_model_shot(self, modelId: model_any):
      '''Returns true if the player's last shot model is the model specified'''
      return opcodes.is_last_building_model_shot_by_player(self.__handle, modelId)

   def clear_last_building_model_shot(self):
      '''Resets the status of the last model the player has shot'''
      opcodes.clear_last_building_model_shot_by_player(self.__handle)

   def get_char_is_targeting(self) -> Char:
      return opcodes.get_char_player_is_targeting(self.__handle)


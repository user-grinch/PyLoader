import libstd.opcodes as opcodes
from typing import Tuple

class Game():
   @staticmethod
   def set_max_wanted_level(wantedLevel: int):
      '''Sets the maximum wanted level the player can receive'''
      opcodes.set_max_wanted_level(wantedLevel)

   @staticmethod
   def set_collectable_total(amount: int):
      '''Sets the total number of hidden packages to collect'''
      opcodes.set_collectable1_total(amount)

   @staticmethod
   def set_free_resprays(state: bool):
      '''Defines whether the player can respray their car for free'''
      opcodes.set_free_resprays(state)

   @staticmethod
   def set_everyone_ignore_player(handle: Player, state: bool):
      '''Makes pedestrians pay no attention to the player'''
      opcodes.set_everyone_ignore_player(handle, state)

   @staticmethod
   def set_wanted_multiplier(multiplier: float):
      '''Sets sensitivity to crime, changing how many crimes a player can commit before police begin to pursue'''
      opcodes.set_wanted_multiplier(multiplier)

   @staticmethod
   def activate_save_menu():
      '''Displays a screen prompting the player to save'''
      opcodes.activate_save_menu()

   @staticmethod
   def has_save_game_finished():
      '''Returns true if the player has saved their game'''
      return opcodes.has_save_game_finished()

   @staticmethod
   def set_all_cars_can_be_damaged(state: bool):
      '''Sets whether all cars receive damage'''
      opcodes.set_all_cars_can_be_damaged(state)

   @staticmethod
   def is_german():
      '''Returns true if the game language is set to German'''
      return opcodes.is_german_game()

   @staticmethod
   def are_measurements_in_meters():
      '''Returns true if the game uses metric measurements (meters instead of inches)'''
      return opcodes.are_measurements_in_metres()

   @staticmethod
   def are_any_car_cheats_activated():
      '''Returns true if the player has used any of the cheats'''
      return opcodes.are_any_car_cheats_activated()

   @staticmethod
   def fail_current_mission():
      '''Terminates the active mission by executing its mission cleanup routine'''
      opcodes.fail_current_mission()

   @staticmethod
   def is_pc_version():
      '''Returns true on PC versions of the game'''
      return opcodes.is_pc_version()

   @staticmethod
   def get_max_wanted_level() -> int:
      '''Gets the maximum wanted level the player can receive'''
      return opcodes.get_max_wanted_level()

   @staticmethod
   def set_all_taxis_have_nitro(state: bool):
      '''Toggles whether all taxis have nitrous'''
      opcodes.set_all_taxis_have_nitro(state)

   @staticmethod
   def set_is_in_stadium(state: bool):
      '''Greys out the radar'''
      opcodes.set_player_is_in_stadium(state)

   @staticmethod
   def is_australian():
      '''Returns true if the current game is an Australian release'''
      return opcodes.is_australian_game()

   @staticmethod
   def switch_emergency_services(state: bool):
      '''Sets whether emergency traffic spawns'''
      opcodes.switch_emergency_services(state)

   @staticmethod
   def limit_two_player_distance(distance: float):
      '''Sets how far apart players can get on 2-player mode'''
      opcodes.limit_two_player_distance(distance)

   @staticmethod
   def switch_cops_on_bikes(state: bool):
      '''Disables the game from creating police bikes and their riders on the roads'''
      opcodes.switch_cops_on_bikes(state)

   @staticmethod
   def set_relationship(relationshipType: RelationshipType, ofPedType: PedType, toPedType: PedType):
      '''Sets the attitude of peds with one pedtype towards peds of another pedtype'''
      opcodes.set_relationship(relationshipType, ofPedType, toPedType)

   @staticmethod
   def clear_relationship(relationshipType: RelationshipType, ofPedType: PedType, toPedType: PedType):
      opcodes.clear_relationship(relationshipType, ofPedType, toPedType)

   @staticmethod
   def set_area51_sam_site(state: bool):
      '''Enables or disables the SAM site at the Area 51'''
      opcodes.set_area51_sam_site(state)

   @staticmethod
   def is_relationship_set(ofPedType: PedType, toPedType: PedType, relationshipType: RelationshipType):
      '''Returns true if the specified relationship between ped types is set'''
      return opcodes.is_relationship_set(ofPedType, toPedType, relationshipType)

   @staticmethod
   def is2_player_game_going_on():
      '''Returns true if the game is in 2-player mode'''
      return opcodes.is_2player_game_going_on()

   @staticmethod
   def set_max_fire_generations(limit: int):
      '''Sets the limit on how many fires can be created from other fires when "propagation" was enabled on 02CF'''
      opcodes.set_max_fire_generations(limit)

   @staticmethod
   def activate_interior_peds(state: bool):
      '''Enables ped spawning in interiors'''
      opcodes.activate_interior_peds(state)

   @staticmethod
   def enable_entry_exit_player_group_warping(x: float, y: float, radius: float, state: bool):
      '''Enables the entry/exit marker in the specified radius of the coordinates'''
      opcodes.enable_entry_exit_player_group_warping(x, y, radius, state)

   @staticmethod
   def is_procedural_interior_active(interiorId: int):
      '''Returns true in interactive interiors'''
      return opcodes.is_procedural_interior_active(interiorId)

   @staticmethod
   def set_gang_wars_active(state: bool):
      '''Sets whether gang wars can be started by the player or enemy gangs'''
      opcodes.set_gang_wars_active(state)

   @staticmethod
   def is_gang_war_going_on():
      '''Returns true if there is a gang war happening'''
      return opcodes.is_gang_war_going_on()

   @staticmethod
   def can_trigger_gang_war_when_on_a_mission(state: bool):
      '''Allows the player to provoke turf wars while a mission is active'''
      opcodes.can_trigger_gang_war_when_on_a_mission(state)

   @staticmethod
   def set_gang_wars_training_mission(state: bool):
      '''Disables highlighting of gang territory on the map and radar'''
      opcodes.set_gang_wars_training_mission(state)

   @staticmethod
   def set_night_vision(state: bool):
      '''Enables night vision effects'''
      opcodes.set_night_vision(state)

   @staticmethod
   def set_infrared_vision(state: bool):
      '''Enables thermal vision effects'''
      opcodes.set_infrared_vision(state)

   @staticmethod
   def switch_death_penalties(state: bool):
      '''Sets whether or not the player loses their weapons and inventory when taken to hospital'''
      opcodes.switch_death_penalties(state)

   @staticmethod
   def switch_arrest_penalties(state: bool):
      '''Sets whether or not the player loses their weapons and inventory when busted'''
      opcodes.switch_arrest_penalties(state)

   @staticmethod
   def attach_anims_to_model(pedModelId: int, animationFile: str):
      '''Sets an animation pack to be loaded along with the specified model'''
      opcodes.attach_anims_to_model(pedModelId, animationFile)

   @staticmethod
   def set_script_limit_to_gang_size(maxSize: int):
      '''Sets the maximum number of members that the player can recruit'''
      opcodes.set_script_limit_to_gang_size(maxSize)

   @staticmethod
   def clear_specific_zones_to_trigger_gang_war():
      '''Enables turf wars to be provoked in all zones'''
      opcodes.clear_specific_zones_to_trigger_gang_war()

   @staticmethod
   def switch_ambient_planes(state: bool):
      '''Enables or disables planes'''
      opcodes.switch_ambient_planes(state)

   @staticmethod
   def find_max_number_of_group_members() -> int:
      return opcodes.find_max_number_of_group_members()

   @staticmethod
   def switch_police_helis(state: bool):
      '''Sets whether ghetto birds spawn'''
      opcodes.switch_police_helis(state)

   @staticmethod
   def force_death_restart():
      opcodes.force_death_restart()

   @staticmethod
   def reset_stuff_upon_resurrection():
      '''Emulates the shared effects of being wasted or busted'''
      opcodes.reset_stuff_upon_resurrection()

   @staticmethod
   def set_gunshot_sense_range_for_riot2(range: float):
      opcodes.set_gunshot_sense_range_for_riot2(range)

   @staticmethod
   def set_named_entry_exit_flag(name: str, entryexitsFlag: EntryexitsFlag, state: bool):
      '''Sets the specified enex flag'''
      opcodes.set_named_entry_exit_flag(name, entryexitsFlag, state)

   @staticmethod
   def is_night_vision_active():
      '''Returns true if night vision is active'''
      return opcodes.is_night_vision_active()

   @staticmethod
   def show_blips_on_all_levels(state: bool):
      '''Enables entity blips showing on the radar and map while in interiors'''
      opcodes.show_blips_on_all_levels(state)

   @staticmethod
   def hide_all_frontend_blips(state: bool):
      opcodes.hide_all_frontend_blips(state)

   @staticmethod
   def set_minigame_in_progress(state: bool):
      '''Disables displaying help messages in other scripts'''
      opcodes.set_minigame_in_progress(state)

   @staticmethod
   def is_minigame_in_progress():
      '''Returns true if 09BD has been used in any script to disable help messages'''
      return opcodes.is_minigame_in_progress()

   @staticmethod
   def set_force_random_car_model(modelId: int):
      '''Forces all cars spawned to be of the specified model'''
      opcodes.set_force_random_car_model(modelId)

   @staticmethod
   def are_subtitles_switched_on():
      '''Returns true if subtitles are switched on in the settings menu'''
      return opcodes.are_subtitles_switched_on()

   @staticmethod
   def clear_wanted_level_in_garage():
      '''Suspends the current players wanted level'''
      opcodes.clear_wanted_level_in_garage()

   @staticmethod
   def make_room_in_player_gang_for_mission_peds(_p1: int):
      '''Ensures there is x amount of space for new members to be added to the players gang'''
      opcodes.make_room_in_player_gang_for_mission_peds(_p1)

   @staticmethod
   def set_aircraft_carrier_sam_site(state: bool):
      '''Enables missiles to be fired from the aircraft carrier by Easter Bay Naval Station, San Fierro'''
      opcodes.set_aircraft_carrier_sam_site(state)

   @staticmethod
   def shut_all_chars_up(state: bool):
      '''Prevents all peds from attempting to start conversations with the player'''
      opcodes.shut_all_chars_up(state)

   @staticmethod
   def has_game_just_returned_from_frontend():
      '''Returns true if the player just exited the menu on the last frame'''
      return opcodes.has_game_just_returned_from_frontend()

   @staticmethod
   def get_current_language() -> int:
      '''Returns the current language set in the menu language settings'''
      return opcodes.get_current_language()

   @staticmethod
   def is_gang_war_fighting_going_on():
      '''Returns true if the player provoked a gang war or is defending territory'''
      return opcodes.is_gang_war_fighting_going_on()

   @staticmethod
   def has_language_changed():
      '''Returns true if the current language set is different from the previous language set'''
      return opcodes.has_language_changed()

   @staticmethod
   def manage_all_population():
      opcodes.manage_all_population()

   @staticmethod
   def set_no_resprays(state: bool):
      '''Disables respray garages from opening for the player'''
      opcodes.set_no_resprays(state)

   @staticmethod
   def take_photo(_p1: bool):
      '''Takes a screenshot of the screen without any HUD elements and stores the file in the "GTA San Andreas User FilesGallery" folder'''
      opcodes.take_photo(_p1)

   @staticmethod
   def is_widescreen_on_in_options():
      '''Returns true if widescreen is switched on in the display settings'''
      return opcodes.is_widescreen_on_in_options()

   @staticmethod
   def force_all_vehicle_lights_off(state: bool):
      '''Disables all vehicle lights from being rendered if enabled'''
      opcodes.force_all_vehicle_lights_off(state)

   @staticmethod
   def activate_pimp_cheat(state: bool):
      '''Sets whether sleeping with a prostitute earns you money instead of taking it away from you'''
      opcodes.activate_pimp_cheat(state)

   @staticmethod
   def set_script_coop_game(state: bool):
      '''Sets an unused flag at address 0x96A8A8'''
      opcodes.set_script_coop_game(state)

   @staticmethod
   def get_rid_of_player_prostitute():
      '''Cancels any prostitute invitations received in-game and makes any current prostitutes quit'''
      opcodes.get_rid_of_player_prostitute()

   @staticmethod
   def switch_object_brains(type: ScriptBrainAttachType, state: bool):
      '''Enables or disables all triggers of the specified type (0928 or 0929)'''
      opcodes.switch_object_brains(type, state)

   @staticmethod
   def allow_pause_in_widescreen(state: bool):
      '''Enables the player to access the pause menu while widescreen is enabled'''
      opcodes.allow_pause_in_widescreen(state)

   @staticmethod
   def is_pc_using_joypad():
      '''Returns true if players controls are set to joystick and not mouse+keyboard'''
      return opcodes.is_pc_using_joypad()

   @staticmethod
   def is_version_original():
      '''Returns true if the game version is vanilla 1.0'''
      return opcodes.is_game_version_original()


import libstd.opcodes as opcodes
from typing import Tuple

class Pad():
   @staticmethod
   def is_button_pressed(pad: Pad, buttonId: Button):
      '''Returns true if the pad's button has been pressed'''
      return opcodes.is_button_pressed(pad, buttonId)

   @staticmethod
   def get_state(pad: Pad, buttonId: Button) -> int:
      '''Stores the status of the specified key into a variable'''
      return opcodes.get_pad_state(pad, buttonId)

   @staticmethod
   def shake(pad: Pad, time: int, intensity: int):
      '''Shakes the player's joypad at the specified intensity for the specified time'''
      opcodes.shake_pad(pad, time, intensity)

   @staticmethod
   def get_controller_mode() -> ControllerMode:
      '''Returns the controller mode'''
      return opcodes.get_controller_mode()

   @staticmethod
   def set_drunk_input_delay(pad: Pad, delay: int):
      '''Affects the delay to the left and right steering while driving'''
      opcodes.set_drunk_input_delay(pad, delay)

   @staticmethod
   def get_position_of_analogue_sticks(pad: Pad) ->  Tuple[int, int, int, int]:
      '''Returns the offset of the specified Left/Right, Up/Down, Look Left/Look Right and Look Up/Look Down keys'''
      return opcodes.get_position_of_analogue_sticks(pad)

   @staticmethod
   def set_player_enter_car_button(playerId: Player, state: bool):
      '''Sets whether the player can enter and exit vehicles'''
      opcodes.set_player_enter_car_button(playerId, state)

   @staticmethod
   def set_player_duck_button(playerId: Player, state: bool):
      '''Sets whether the player can use the crouch button'''
      opcodes.set_player_duck_button(playerId, state)

   @staticmethod
   def set_player_fire_button(playerId: Player, state: bool):
      '''Sets whether the player is able to use weapons'''
      opcodes.set_player_fire_button(playerId, state)

   @staticmethod
   def is_skip_cutscene_button_pressed():
      '''Returns true if the player is pressing a key used to skip cutscenes or the game has been minimised'''
      return opcodes.is_skip_cutscene_button_pressed()

   @staticmethod
   def set_player_jump_button(playerId: Player, state: bool):
      '''Sets whether the player can jump'''
      opcodes.set_player_jump_button(playerId, state)

   @staticmethod
   def set_player_display_vital_stats_button(playerId: Player, state: bool):
      '''Sets whether a player can use the ACTION key to display their stats'''
      opcodes.set_player_display_vital_stats_button(playerId, state)

   @staticmethod
   def set_player_cycle_weapon_button(playerId: Player, state: bool):
      opcodes.set_player_cycle_weapon_button(playerId, state)

   @staticmethod
   def is_key_pressed(keyCode: int):
      '''Returns true if the player is pressing a keyboard button with the specified code'''
      return opcodes.is_key_pressed(keyCode)

   @staticmethod
   def test_cheat(input: str):
      '''Returns true if the specified string of letters has been typed on the keyboard'''
      return opcodes.test_cheat(input)


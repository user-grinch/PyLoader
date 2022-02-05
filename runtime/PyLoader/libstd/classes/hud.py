import _opcodes
from typing import Tuple
from enums import TimerDirection, CounterDisplay, HudObject

class Hud():
   @staticmethod
   def display_timer(timer: int, direction: TimerDirection):
      '''Creates a countdown or countup onscreen timer'''
      _opcodes.display_onscreen_timer(timer, direction)

   @staticmethod
   def clear_timer(timer: int):
      '''Removes the onscreen timer'''
      _opcodes.clear_onscreen_timer(timer)

   @staticmethod
   def clear_counter(counter: int):
      '''Removes the onscreen counter (0150 or 03C4)'''
      _opcodes.clear_onscreen_counter(counter)

   @staticmethod
   def switch_widescreen(state: bool):
      '''Enables widescreen'''
      _opcodes.switch_widescreen(state)

   @staticmethod
   def draw_sprite(memorySlot: int, offsetLeft: float, offsetTop: float, width: float, height: float, r: int, g: int, b: int, a: int):
      '''Draws a loaded texture (038F) at the specified on-screen X and Y coordinates, with the specified size and RGBA color'''
      _opcodes.draw_sprite(memorySlot, offsetLeft, offsetTop, width, height, r, g, b, a)

   @staticmethod
   def draw_rect(x: float, y: float, width: float, height: float, r: int, g: int, b: int, a: int):
      '''Draws a box at the specified screen X and Y position, with the specified size and RGBA colors'''
      _opcodes.draw_rect(x, y, width, height, r, g, b, a)

   @staticmethod
   def freeze_timer(state: bool):
      '''Makes the on-screen timer stop updating'''
      _opcodes.freeze_onscreen_timer(state)

   @staticmethod
   def display_timer_with_string(timer: int, direction: TimerDirection, text: str):
      '''Creates a countdown or countup onscreen timer with the text'''
      _opcodes.display_onscreen_timer_with_string(timer, direction, text)

   @staticmethod
   def display_counter_with_string(counter: int, display: CounterDisplay, text: str):
      '''Displays an onscreen counter with the text, either shown in numbers or as a bar'''
      _opcodes.display_onscreen_counter_with_string(counter, display, text)

   @staticmethod
   def set_sprites_draw_before_fade(state: bool):
      '''Causes the next texture to be drawn (038D) before the fade is drawn'''
      _opcodes.set_sprites_draw_before_fade(state)

   @staticmethod
   def flash_object(object: HudObject):
      '''Makes a specific part of the HUD disappear and reappear several times'''
      _opcodes.flash_hud_object(object)

   @staticmethod
   def display_nth_counter_with_string(counter: int, display: CounterDisplay, slot: int, text: str):
      '''Displays an onscreen counter with the text in the specified slot, either shown in numbers or as a bar'''
      _opcodes.display_nth_onscreen_counter_with_string(counter, display, slot, text)

   @staticmethod
   def display_radar(state: bool):
      '''Displays or hides the radar'''
      _opcodes.display_radar(state)

   @staticmethod
   def set_onscreen_counter_flash_when_first_displayed(counter: int, state: bool):
      _opcodes.set_onscreen_counter_flash_when_first_displayed(counter, state)

   @staticmethod
   def draw_sprite_with_rotation(memorySlot: int, offsetLeft: float, offsetTop: float, height: float, width: float, angle: float, red: int, green: int, blue: int, alpha: int):
      '''This is an extended version of 038D with scale and angle parameters'''
      _opcodes.draw_sprite_with_rotation(memorySlot, offsetLeft, offsetTop, height, width, angle, red, green, blue, alpha)

   @staticmethod
   def set_radar_zoom(zoom: int):
      _opcodes.set_radar_zoom(zoom)

   @staticmethod
   def display(state: bool):
      '''Sets whether the HUD displays'''
      _opcodes.display_hud(state)

   @staticmethod
   def set_timer_beep_countdown_time(timer: int, timeInSec: int):
      '''Starts a sound when the countdown timer reaches the specified number of seconds'''
      _opcodes.set_timer_beep_countdown_time(timer, timeInSec)

   @staticmethod
   def get_color(hudObject: HudObject) ->  Tuple[int, int, int, int]:
      '''Returns the RGBA of the specified HUD color'''
      return _opcodes.get_hud_colour(hudObject)

   @staticmethod
   def draw_window(leftTopX: float, leftTopY: float, rightBottomX: float, rightBottomY: float, header: str, zIndex: int):
      '''Draws a black box with styled text from corner A to corner B'''
      _opcodes.draw_window(leftTopX, leftTopY, rightBottomX, rightBottomY, header, zIndex)

   @staticmethod
   def draw_crosshair(state: bool):
      '''Sets whether the HUD should always display weapon aiming crosshairs, used in the mission 'Catalyst' where the player must throw crates of ammo to Ryder'''
      _opcodes.draw_crosshair(state)

   @staticmethod
   def display_car_names(state: bool):
      '''Sets whether the name of the current vehicle should be displayed'''
      _opcodes.display_car_names(state)

   @staticmethod
   def display_zone_names(state: bool):
      '''Sets whether the area text for the current area should show'''
      _opcodes.display_zone_names(state)


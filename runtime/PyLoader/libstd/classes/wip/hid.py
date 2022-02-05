import libstd.opcodes as opcodes
from typing import Tuple

class Hid():
   @staticmethod
   def is_button_pressed(touch: Pad, touchPoints: TouchPoints):
      '''Returns true if the touch point of the screen has been pressed. See 0DE0 and 0DE1'''
      return opcodes.is_button_pressed(touch, touchPoints)


import libstd.opcodes as opcodes
from typing import Tuple

class Debugger():
   @staticmethod
   def line(f1: float, f2: float, f3: float, f4: float, f5: float, f6: float):
      '''Displays 6 floating-point values on the screen'''
      opcodes.line(f1, f2, f3, f4, f5, f6)

   @staticmethod
   def is_debug_camera_on():
      return opcodes.is_debug_camera_on()

   @staticmethod
   def save_string_to_debug_file(msg: string128):
      '''Makes the current script skip the next 128 bytes of the code'''
      opcodes.save_string_to_debug_file(msg)


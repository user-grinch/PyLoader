import libstd.opcodes as opcodes
from typing import Tuple

class Sequence():
   def open(self) -> Sequence:
      '''Begins a task sequence'''
      return opcodes.open_sequence_task(self.__handle)

   def close(self):
      '''Ends the task sequence'''
      opcodes.close_sequence_task(self.__handle)

   def clear(self):
      '''Clears the task sequence'''
      opcodes.clear_sequence_task(self.__handle)

   def set_to_repeat(self, state: bool):
      '''Sets whether the task sequence repeats continuously'''
      opcodes.set_sequence_to_repeat(self.__handle, state)


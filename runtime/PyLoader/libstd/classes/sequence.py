import _opcodes

class Sequence():
   def __init__(self):
      '''Begins a task sequence'''
      self.__handle = _opcodes.open_sequence_task()

   def close(self):
      '''Ends the task sequence'''
      _opcodes.close_sequence_task(self.__handle)

   def clear(self):
      '''Clears the task sequence'''
      _opcodes.clear_sequence_task(self.__handle)

   def set_to_repeat(self, state: bool):
      '''Sets whether the task sequence repeats continuously'''
      _opcodes.set_sequence_to_repeat(self.__handle, state)


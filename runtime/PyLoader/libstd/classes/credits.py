import _opcodes

class Credits():
   @staticmethod
   def start():
      '''Makes the credits scroll up the screen'''
      _opcodes.start_credits()

   @staticmethod
   def stop():
      '''Stops the credits text from showing'''
      _opcodes.stop_credits()

   @staticmethod
   def are_finished():
      '''Returns true if the credits have finished'''
      return _opcodes.are_credits_finished()


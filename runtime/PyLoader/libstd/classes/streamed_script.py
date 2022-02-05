import _opcodes

class StreamedScript():
   @staticmethod
   def register_script_brain_for_code_use(id: int, _p2: str):
      '''Sets the name for the script brain, enabling it to be initiated by the EXE'''
      _opcodes.register_script_brain_for_code_use(id, _p2)

   @staticmethod
   def register_attractor_script_brain_for_code_use(id: int, _p2: str):
      '''Registers a script brain for the specified ped attractor'''
      _opcodes.register_attractor_script_brain_for_code_use(id, _p2)

   @staticmethod
   def stream(id: int):
      '''Loads the ambient script with the specified ID from the script.img file'''
      _opcodes.stream_script(id)

   @staticmethod
   def has_loaded(id: int):
      '''Returns true if the ambient script has finished loading (08A9)'''
      return _opcodes.has_streamed_script_loaded(id)

   @staticmethod
   def mark_as_no_longer_needed(id: int):
      '''Ends the specified script brain'''
      _opcodes.mark_streamed_script_as_no_longer_needed(id)

   @staticmethod
   def remove(id: int):
      '''Releases the ambient script with the specified ID, freeing game memory'''
      _opcodes.remove_streamed_script(id)

   @staticmethod
   def start_new(id: int, *args):
      '''Runs the ambient script with the specified ID'''
      _opcodes.start_new_streamed_script(id, *args)

   @staticmethod
   def get_number_of_instances(id: int) -> int:
      '''Gets the number of instances of a script'''
      return _opcodes.get_number_of_instances_of_streamed_script(id)

   @staticmethod
   def allocate_to_random_ped(id: int, modelId: int, priority: int):
      '''Makes the game start an ambient script when the player is nearby a character of the specified model'''
      _opcodes.allocate_streamed_script_to_random_ped(id, modelId, priority)

   @staticmethod
   def allocate_to_object(id: int, modelId: int, priority: int, radius: float, type: int):
      '''Makes the game start an ambient script when the player is nearby an object of the specified model'''
      _opcodes.allocate_streamed_script_to_object(id, modelId, priority, radius, type)


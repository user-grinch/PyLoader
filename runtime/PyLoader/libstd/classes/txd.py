import _opcodes

class Txd():
   @staticmethod
   def load_sprite(memorySlot: int, spriteName: str):
      '''Loads a sprite from the most recently loaded texture dictionary (0390)'''
      _opcodes.load_sprite(memorySlot, spriteName)

   @staticmethod
   def load_dictionary(name: str):
      '''Loads the texture dictionary for use in drawing sprites (038D) on the screen'''
      _opcodes.load_texture_dictionary(name)

   @staticmethod
   def remove():
      '''Unloads all currently loaded textures (038F), as well as texture dictionaries (0390), freeing game memory'''
      _opcodes.remove_texture_dictionary()


import _opcodes

class Sound():
   @staticmethod
   def add_one_off_sound(x: float, y: float, z: float, soundId: int):
      '''Plays a sound with the specified ID at the location'''
      _opcodes.add_one_off_sound(x, y, z, soundId)

   # def remove(self):
   #    '''Stops the sound'''
   #    _opcodes.remove_sound(self.__handle)


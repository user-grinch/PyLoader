import _opcodes

class User3DMarker():
   def __init__(self, x: float, y: float, z: float, color: int):
      '''Creates a marker similar to the yellow enex markers'''
      self.__handle = _opcodes.create_user_3d_marker(self.__handle, x, y, z, color)

   def remove(self):
      '''Destroys a marker created with 0A40'''
      _opcodes.remove_user_3d_marker(self.__handle)


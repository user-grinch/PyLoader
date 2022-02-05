import _opcodes

class Sphere():
   @staticmethod
   def draw(x: float, y: float, z: float, radius: float):
      '''Displays a red cylinder sphere'''
      _opcodes.draw_sphere(x, y, z, radius)

   def __init__(self, x: float, y: float, z: float, radius: float):
      '''Creates a static sphere at the location, with the specified radius'''
      self.__handle = _opcodes.add_sphere(self.__handle, x, y, z, radius)

   def remove(self):
      '''Destroys a static sphere'''
      _opcodes.remove_sphere(self.__handle)


import _opcodes
from enums import PedType

class Attractor():
   def __init__(self, x: float, y: float, z: float, angle: float, _p5: float, sequence: any):
      '''Adds a ped attractor'''
      self.__handle = _opcodes.add_attractor(x, y, z, angle, _p5, sequence)

   def clear(self):
      _opcodes.clear_attractor(self.__handle)

   def add_ped_type_as_user(self, pedType: PedType):
      _opcodes.add_pedtype_as_attractor_user(self.__handle, pedType)


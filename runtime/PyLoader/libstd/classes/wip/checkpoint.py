import libstd.opcodes as opcodes
from typing import Tuple

class Checkpoint():
   def __init__(self, type: int, x: float, y: float, z: float, pointX: float, pointY: float, pointZ: float, radius: float) -> Checkpoint:
      self.__handle = opcodes.create_checkpoint(self.__handle, type, x, y, z, pointX, pointY, pointZ, radius)

   def delete(self):
      opcodes.delete_checkpoint(self.__handle)

   def set_coords(self, x: float, y: float, z: float):
      opcodes.set_checkpoint_coords(self.__handle, x, y, z)

   def set_heading(self, heading: float):
      opcodes.set_checkpoint_heading(self.__handle, heading)


import _opcodes

class Checkpoint():
   def __init__(self, type: int, x: float, y: float, z: float, pointX: float, pointY: float, pointZ: float, radius: float) -> Checkpoint:
      self.__handle = _opcodes.create_checkpoint(self.__handle, type, x, y, z, pointX, pointY, pointZ, radius)

   def delete(self):
      _opcodes.delete_checkpoint(self.__handle)

   def set_coords(self, x: float, y: float, z: float):
      _opcodes.set_checkpoint_coords(self.__handle, x, y, z)

   def set_heading(self, heading: float):
      _opcodes.set_checkpoint_heading(self.__handle, heading)


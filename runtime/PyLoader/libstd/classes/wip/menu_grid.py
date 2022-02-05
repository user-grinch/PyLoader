import libstd.opcodes as opcodes
from typing import Tuple

class MenuGrid():
   def __init__(self, header: gxt_key, topLeftX: float, topLeftY: float, width: float, numColumns: int, interactive: bool, background: bool, alignment: int) -> MenuGrid:
      '''Creates the same color chart that you see in car modification shops'''
      self.__handle = opcodes.create_menu_grid(self.__handle, header, topLeftX, topLeftY, width, numColumns, interactive, background, alignment)


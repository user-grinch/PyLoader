import _opcodes

class Menu():
   def __init__(self, header: str, topLeftX: float, topLeftY: float, width: float, numColumns: int, interactive: bool, background: bool, alignment: int, gridMenu: bool = False):
      '''Creates the specified panel on the screen with basic settings'''
      if (gridMenu):
         self.__handle = _opcodes.create_menu_grid(self.__handle, header, topLeftX, topLeftY, width, numColumns, interactive, background, alignment)
      else:
         self.__handle = _opcodes.create_menu(self.__handle, header, topLeftX, topLeftY, width, numColumns, interactive, background, alignment)

   def set_column_orientation(self, column: int, alignment: int):
      _opcodes.set_menu_column_orientation(self.__handle, column, alignment)

   def get_item_selected(self) -> int:
      '''Returns the currently highlighted row in a panel'''
      return _opcodes.get_menu_item_selected(self.__handle)

   def get_item_accepted(self) -> int:
      '''Returns the last row of a panel selected with the sprint key'''
      return _opcodes.get_menu_item_accepted(self.__handle)

   def activate_item(self, row: int, state: bool):
      _opcodes.activate_menu_item(self.__handle, row, state)

   def delete(self):
      '''Removes the specified panel from the screen'''
      _opcodes.delete_menu(self.__handle)

   def set_column(self, column: int, title: str, row0: str, row1: str, row2: str, row3: str, row4: str, row5: str, row6: str, row7: str, row8: str, row9: str, row10: str, row11: str):
      _opcodes.set_menu_column(self.__handle, column, title, row0, row1, row2, row3, row4, row5, row6, row7, row8, row9, row10, row11)

   def set_item_with_number(self, column: int, row: int, gxt: str, number: int):
      '''Sets the numbered GXT of the specified panel row'''
      _opcodes.set_menu_item_with_number(self.__handle, column, row, gxt, number)

   def set_item_with2_numbers(self, column: int, row: int, gxt: str, number1: int, number2: int):
      _opcodes.set_menu_item_with_2_numbers(self.__handle, column, row, gxt, number1, number2)

   def set_active_item(self, row: int):
      _opcodes.set_active_menu_item(self.__handle, row)

   def set_column_width(self, column: int, width: int):
      '''Sets the width of the specified menu column'''
      _opcodes.set_menu_column_width(self.__handle, column, width)

   def change_car_color(self, vehicle: Car, colorSlot: int, row: int):
      _opcodes.change_car_colour_from_menu(self.__handle, vehicle, colorSlot, row)

   def highlight_item(self, row: int, state: bool):
      '''Highlights the menu item - used to indicate an owned shopping item'''
      _opcodes.highlight_menu_item(self.__handle, row, state)


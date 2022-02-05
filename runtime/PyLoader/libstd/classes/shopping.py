import _opcodes

class Shopping():
   @staticmethod
   def load_prices(sectionName: str):
      _opcodes.load_prices(sectionName)

   @staticmethod
   def load(name: str):
      _opcodes.load_shop(name)

   @staticmethod
   def get_number_of_items() -> int:
      return _opcodes.get_number_of_items_in_shop()

   @staticmethod
   def get_item(nth: int) -> int:
      '''Returns an identifier for an item associated with the shopping data entry'''
      return _opcodes.get_item_in_shop(nth)

   @staticmethod
   def get_price_of_item(itemId: int) -> int:
      return _opcodes.get_price_of_item(itemId)

   @staticmethod
   def get_extra_info(itemId: int, flag: int) -> int:
      return _opcodes.get_shopping_extra_info(itemId, flag)

   @staticmethod
   def get_name_of_item(itemId: int) -> str:
      return _opcodes.get_name_of_item(itemId)

   @staticmethod
   def buy_item(itemId: int):
      '''Charges the player for the purchase of the item and in many cases, automatically gives the item to the player'''
      _opcodes.buy_item(itemId)

   @staticmethod
   def get_loaded() -> str:
      '''Returns the name of currently loaded subsection in shopping'''
      return _opcodes.get_loaded_shop()

   @staticmethod
   def clear_loaded():
      '''Releases the loaded shopping data'''
      _opcodes.clear_loaded_shop()

   @staticmethod
   def add_price_modifier(itemId: int, modifier: int):
      _opcodes.add_price_modifier(itemId, modifier)

   @staticmethod
   def remove_price_modifier(itemId: int):
      _opcodes.remove_price_modifier(itemId)

   @staticmethod
   def has_player_bought_item(itemId: int):
      '''Returns true if the shopping item has been bought'''
      return _opcodes.has_player_bought_item(itemId)


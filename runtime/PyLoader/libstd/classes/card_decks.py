import _opcodes

class CardDecks():
   @staticmethod
   def shuffle(type: int):
      _opcodes.shuffle_card_decks(type)

   @staticmethod
   def fetch_next_card() -> int:
      '''Returns a random number between 1 and 52, inclusive'''
      return _opcodes.fetch_next_card()


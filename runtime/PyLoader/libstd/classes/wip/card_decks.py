import libstd.opcodes as opcodes
from typing import Tuple

class CardDecks():
   @staticmethod
   def shuffle(type: int):
      opcodes.shuffle_card_decks(type)

   @staticmethod
   def fetch_next_card() -> int:
      '''Returns a random number between 1 and 52, inclusive'''
      return opcodes.fetch_next_card()


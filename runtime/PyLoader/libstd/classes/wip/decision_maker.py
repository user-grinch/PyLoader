import libstd.opcodes as opcodes
from typing import Tuple

class DecisionMaker():
   def remove(self):
      '''Removes the decision maker'''
      opcodes.remove_decision_maker(self.__handle)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid decision maker handle'''
      return opcodes.does_decision_maker_exist(handle)


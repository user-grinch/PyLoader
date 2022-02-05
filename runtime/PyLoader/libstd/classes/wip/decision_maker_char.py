import libstd.opcodes as opcodes
from typing import Tuple

class DecisionMakerChar():
   def load(self, type: int) -> DecisionMakerChar:
      '''Creates a decision maker with the specified type'''
      return opcodes.load_char_decision_maker(self.__handle, type)

   def clear_event_response(self, eventId: int):
      '''Resets the task for the event of the specified decision maker'''
      opcodes.clear_char_decision_maker_event_response(self.__handle, eventId)

   def add_event_response(self, eventId: int, taskId: int, respect: float, hate: float, like: float, dislike: float, inCar: bool, onFoot: bool):
      '''Sets which action should occur according to the event on the following parameters'''
      opcodes.add_char_decision_maker_event_response(self.__handle, eventId, taskId, respect, hate, like, dislike, inCar, onFoot)

   def copy(self, maskOrOtherHandle: DecisionMakerChar) -> DecisionMakerChar:
      '''Copies a decision makers data to another decision maker'''
      return opcodes.copy_char_decision_maker(self.__handle, maskOrOtherHandle)

   def copy_shared(self, mask: int) -> DecisionMakerChar:
      return opcodes.copy_shared_char_decision_maker(self.__handle, mask)


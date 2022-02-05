import libstd.opcodes as opcodes
from typing import Tuple

class DecisionMakerGroup():
   def load(self, type: int) -> DecisionMakerGroup:
      '''Creates a decision maker for use on groups of actors'''
      return opcodes.load_group_decision_maker(self.__handle, type)

   def clear_event_response(self, eventId: int):
      '''Resets the task for the event of the specified group decision maker'''
      opcodes.clear_group_decision_maker_event_response(self.__handle, eventId)

   def add_event_response(self, eventId: int, taskId: int, respect: float, hate: float, like: float, dislike: float, inCar: bool, onFoot: bool):
      '''Sets which action should occur according to the event on the following parameters'''
      opcodes.add_group_decision_maker_event_response(self.__handle, eventId, taskId, respect, hate, like, dislike, inCar, onFoot)

   def copy(self, mask: int) -> DecisionMakerGroup:
      '''Copies a group decision makers data to another decision maker'''
      return opcodes.copy_group_decision_maker(self.__handle, mask)


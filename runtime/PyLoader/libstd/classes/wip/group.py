import libstd.opcodes as opcodes
from typing import Tuple

class Group():
   def __init__(self, defaultTaskAllocator: DefaultTaskAllocator) -> Group:
      '''Creates a new group, which multiple characters can be assigned to, allowing control over all of them as a group'''
      self.__handle = opcodes.create_group(self.__handle, defaultTaskAllocator)

   def set_leader(self, handle: Char):
      '''Puts the specified character into the group as the leader'''
      opcodes.set_group_leader(self.__handle, handle)

   def set_member(self, handle: Char):
      '''Puts the specified character into the group as a member'''
      opcodes.set_group_member(self.__handle, handle)

   def remove(self):
      '''Releases the group'''
      opcodes.remove_group(self.__handle)

   def set_decision_maker(self, maskOrHandle: DecisionMakerGroup):
      '''Sets the decision maker for a group of characters'''
      opcodes.set_group_decision_maker(self.__handle, maskOrHandle)

   def set_separation_range(self, range: float):
      '''Sets how far members of the group can be from the leader before they are removed from the group'''
      opcodes.set_group_separation_range(self.__handle, range)

   def set_default_task_allocator(self, defaultTaskAllocator: DefaultTaskAllocator):
      opcodes.set_group_default_task_allocator(self.__handle, defaultTaskAllocator)

   def get_size(self) ->  Tuple[int, int]:
      return opcodes.get_group_size(self.__handle)

   @staticmethod
   def does_exist(handle: any):
      '''Returns true if the handle is a valid group handle'''
      return opcodes.does_group_exist(handle)

   def set_sequence(self, sequence: Sequence):
      '''Sets the default task sequence for members of the group'''
      opcodes.set_group_sequence(self.__handle, sequence)

   def get_member(self, slotId: int) -> Char:
      '''Returns the nth group member'''
      return opcodes.get_group_member(self.__handle, slotId)

   def set_follow_status(self, state: bool):
      '''Sets whether the group members enter a car when the leader does'''
      opcodes.set_group_follow_status(self.__handle, state)


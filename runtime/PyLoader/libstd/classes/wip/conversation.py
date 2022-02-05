import libstd.opcodes as opcodes
from typing import Tuple

class Conversation():
   @staticmethod
   def start_setting_up(handle: Char):
      '''Starts a conversation between the character and the player and clears the conversation lines'''
      opcodes.start_setting_up_conversation(handle)

   @staticmethod
   def finish_setting_up():
      '''Begins a script-controlled conversation'''
      opcodes.finish_setting_up_conversation()

   @staticmethod
   def is_at_node(handle: Char, speech: gxt_key):
      '''Returns true if the conversation is at the specified node'''
      return opcodes.is_conversation_at_node(handle, speech)

   @staticmethod
   def is_player_in_position(handle: Char):
      '''Returns true if there is a conversation going on between the character and the player and both the character and the player are able to communicate with one another'''
      return opcodes.is_player_in_position_for_conversation(handle)

   @staticmethod
   def enable(handle: Char, state: bool):
      '''Pauses the scripted conversation assigned to the specified character'''
      opcodes.enable_conversation(handle, state)

   @staticmethod
   def clear_for_char(handle: Char):
      opcodes.clear_conversation_for_char(handle)

   @staticmethod
   def set_up_node_with_speech(question: gxt_key, positiveAnswer: gxt_key, negativeAnswer: gxt_key, questionSoundId: int, positiveAnswerSoundId: int, negativeAnswerSoundId: int):
      '''Specifies the dialogue GXT's and audio ID's'''
      opcodes.set_up_conversation_node_with_speech(question, positiveAnswer, negativeAnswer, questionSoundId, positiveAnswerSoundId, negativeAnswerSoundId)

   @staticmethod
   def set_up_end_node_with_speech(speech: gxt_key, speechSoundId: int):
      '''Sets the speech ID for the specified conversation response node'''
      opcodes.set_up_conversation_end_node_with_speech(speech, speechSoundId)

   @staticmethod
   def set_up_node_with_scripted_speech(question: gxt_key, positiveAnswer: gxt_key, negativeAnswer: gxt_key, questionSoundId: int, positiveAnswerSoundId: int, negativeAnswerSoundId: int):
      '''Adds a new line to the scripted conversation'''
      opcodes.set_up_conversation_node_with_scripted_speech(question, positiveAnswer, negativeAnswer, questionSoundId, positiveAnswerSoundId, negativeAnswerSoundId)

   @staticmethod
   def set_up_end_node_with_scripted_speech(speech: gxt_key, speechSoundId: int):
      '''Sets the script audio ID (see 03CF) for the specified conversation response node'''
      opcodes.set_up_conversation_end_node_with_scripted_speech(speech, speechSoundId)

   @staticmethod
   def finish_setting_up_no_subtitles():
      opcodes.finish_setting_up_conversation_no_subtitles()


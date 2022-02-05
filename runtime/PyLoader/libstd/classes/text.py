import _opcodes
from enums import TextStyle, Font

class Text():
   @staticmethod
   def print_big(key: str, time: int, style: TextStyle):
      '''Displays a styled message for the specified time'''
      _opcodes.print_big(key, time, style)

   @staticmethod
   def print(key: str, time: int, flag: int):
      '''Displays a message positioned on the bottom of the screen for the specified time'''
      _opcodes.print(key, time, flag)

   @staticmethod
   def print_now(key: str, time: int, flag: int):
      '''Displays a message positioned on the bottom of the screen for the specified time'''
      _opcodes.print_now(key, time, flag)

   @staticmethod
   def clear_prints():
      '''Clears all priority text and some styles of big texts'''
      _opcodes.clear_prints()

   @staticmethod
   def print_with_number_big(key: str, num: int, duration: int, style: TextStyle):
      '''Displays a styled message in which the first string token~1~ is substituted with the specified number'''
      _opcodes.print_with_number_big(key, num, duration, style)

   @staticmethod
   def print_with_number(key: str, num: int, duration: int, flag: int):
      '''Displays a styled message in which the first string token ~1~ is substituted with the specified number'''
      _opcodes.print_with_number(key, num, duration, flag)

   @staticmethod
   def print_with_number_now(key: str, num: int, duration: int, flag: int):
      '''Displays a styled message in which the first string token ~1~ is substituted with the specified number'''
      _opcodes.print_with_number_now(key, num, duration, flag)

   @staticmethod
   def print_big_q(key: str, duration: int, style: TextStyle):
      '''Displays a low-priority styled message for the specified time'''
      _opcodes.print_big_q(key, duration, style)

   @staticmethod
   def print_with2_numbers_now(key: str, num1: int, num2: int, duration: int, style: TextStyle):
      '''Displays a styled message in which the first two ~1~ tokens are substituted with the specified numbers'''
      _opcodes.print_with_2_numbers_now(key, num1, num2, duration, style)

   @staticmethod
   def print_with3_numbers(key: str, num1: int, num2: int, num3: int, duration: int, style: TextStyle):
      '''Displays a styled message in which the first three ~1~ tokens are substituted with the specified numbers'''
      _opcodes.print_with_3_numbers(key, num1, num2, num3, duration, style)

   @staticmethod
   def print_with4_numbers(key: str, num1: int, num2: int, num3: int, num4: int, duration: int, style: TextStyle):
      '''Displays a styled message in which the first four ~1~ tokens are substituted with the specified numbers'''
      _opcodes.print_with_4_numbers(key, num1, num2, num3, num4, duration, style)

   @staticmethod
   def print_with4_numbers_now(key: str, num1: int, num2: int, num3: int, num4: int, duration: int, style: TextStyle):
      '''Displays a styled message in which the first four ~1~ tokens are substituted with the specified numbers'''
      _opcodes.print_with_4_numbers_now(key, num1, num2, num3, num4, duration, style)

   @staticmethod
   def print_with6_numbers(key: str, num1: int, num2: int, num3: int, num4: int, num5: int, num6: int, duration: int, style: TextStyle):
      '''Displays a styled message in which the first six ~1~ tokens are substituted with the specified numbers'''
      _opcodes.print_with_6_numbers(key, num1, num2, num3, num4, num5, num6, duration, style)

   @staticmethod
   def display(offsetLeft: float, offsetTop: float, key: str):
      '''Draws text at the specified on-screen position'''
      _opcodes.display_text(offsetLeft, offsetTop, key)

   @staticmethod
   def set_scale(widthScale: float, heightScale: float):
      '''Scales the width and height of the text letters'''
      _opcodes.set_text_scale(widthScale, heightScale)

   @staticmethod
   def set_color(red: int, green: int, blue: int, alpha: int):
      '''Sets the color of the text letters'''
      _opcodes.set_text_colour(red, green, blue, alpha)

   @staticmethod
   def set_justify(state: bool):
      '''Sets the text to be drawn justified, which means the text will wrap in order to fill an even rectangle of space'''
      _opcodes.set_text_justify(state)

   @staticmethod
   def set_center(state: bool):
      '''Centers the text'''
      _opcodes.set_text_centre(state)

   @staticmethod
   def set_wrap_x(width: float):
      '''Sets the line width of the text'''
      _opcodes.set_text_wrapx(width)

   @staticmethod
   def set_center_size(width: float):
      '''Sets the line width of the centered text'''
      _opcodes.set_text_centre_size(width)

   @staticmethod
   def set_background(state: bool):
      '''Gives the text a background (0346)'''
      _opcodes.set_text_background(state)

   @staticmethod
   def set_proportional(state: bool):
      '''Makes the text size proportionate'''
      _opcodes.set_text_proportional(state)

   @staticmethod
   def set_font(font: Font):
      '''Sets the text draw font'''
      _opcodes.set_text_font(font)

   @staticmethod
   def print_with2_numbers_big(key: str, num1: int, num2: int, duration: int, style: TextStyle):
      '''Displays a styled message in which the first two ~1~ tokens are substituted with the specified numbers'''
      _opcodes.print_with_2_numbers_big(key, num1, num2, duration, style)

   @staticmethod
   def print_string_in_string_now(templateKey: str, replacementKey: str, duration: int, style: TextStyle):
      '''Displays a styled message in which the first string token ~a~ is substituted with the specified text'''
      _opcodes.print_string_in_string_now(templateKey, replacementKey, duration, style)

   @staticmethod
   def clear_this_print(key: str):
      '''Removes the priority text from the screen'''
      _opcodes.clear_this_print(key)

   @staticmethod
   def clear_this_big_print(key: str):
      '''Removes the styled text from the screen'''
      _opcodes.clear_this_big_print(key)

   @staticmethod
   def set_draw_before_fade(state: bool):
      '''Causes the next text to be drawn before the fade is drawn'''
      _opcodes.set_text_draw_before_fade(state)

   @staticmethod
   def set_right_justify(state: bool):
      '''Sets the text draw to be aligned to the right'''
      _opcodes.set_text_right_justify(state)

   @staticmethod
   def print_help(key: str):
      '''Displays a black text box for a few seconds'''
      _opcodes.print_help(key)

   @staticmethod
   def clear_help():
      '''Removes the text box from the screen'''
      _opcodes.clear_help()

   @staticmethod
   def clear_small_prints():
      '''Clears small messages from the screen'''
      _opcodes.clear_small_prints()

   @staticmethod
   def use_commands(state: bool):
      '''Enables text and texture drawing'''
      _opcodes.use_text_commands(state)

   @staticmethod
   def display_with_number(offsetLeft: float, offsetTop: float, key: str, num: int):
      '''Draws text with 1 number'''
      _opcodes.display_text_with_number(offsetLeft, offsetTop, key, num)

   @staticmethod
   def display_with2_numbers(offsetLeft: float, offsetTop: float, key: str, num1: int, num2: int):
      '''Draws text with 2 numbers'''
      _opcodes.display_text_with_2_numbers(offsetLeft, offsetTop, key, num1, num2)

   @staticmethod
   def print_help_forever(key: str):
      '''Shows a text box which stays on screen until it is removed by another command'''
      _opcodes.print_help_forever(key)

   @staticmethod
   def print_help_forever_with_number(gxt: str, number: int):
      '''Shows a text box with one number'''
      _opcodes.print_help_forever_with_number(gxt, number)

   @staticmethod
   def load_mission_text(tableName: str):
      '''Makes the game use GXT Entries from the specified GXT Table'''
      _opcodes.load_mission_text(tableName)

   @staticmethod
   def set_dropshadow(intensity: int, red: int, green: int, blue: int, alpha: int):
      '''Sets shadow for the current text draw'''
      _opcodes.set_text_dropshadow(intensity, red, green, blue, alpha)

   @staticmethod
   def is_message_being_displayed():
      '''Returns true if a priority GXT string is displayed on screen'''
      return _opcodes.is_message_being_displayed()

   @staticmethod
   def display_with_float(leftTopX: float, leftTopY: float, key: str, value: float, precision: int):
      '''Converts the float to two separate numbers to use in a 2-numbered GXT entry, and draws the text'''
      _opcodes.display_text_with_float(leftTopX, leftTopY, key, value, precision)

   @staticmethod
   def set_edge(size: int, red: int, green: int, blue: int, alpha: int):
      '''Adds an outline to the next text drawn using a text draw command'''
      _opcodes.set_text_edge(size, red, green, blue, alpha)

   @staticmethod
   def is_help_message_being_displayed():
      '''Returns true if any help message is being displayed'''
      return _opcodes.is_help_message_being_displayed()

   @staticmethod
   def set_message_formatting(_p1: bool, margin: int, width: int):
      '''Overrides the position of the text on screen'''
      _opcodes.set_message_formatting(_p1, margin, width)

   @staticmethod
   def set_help_message_box_size(size: int):
      '''Sets the global width of text boxes displayed on screen'''
      _opcodes.set_help_message_box_size(size)

   @staticmethod
   def add_next_message_to_previous_briefs(state: bool):
      '''Sets whether the next text is added to the brief in the menu'''
      _opcodes.add_next_message_to_previous_briefs(state)

   @staticmethod
   def force_big_message_and_counter(state: bool):
      '''Prevents timers and big texts from being hidden if there is another conflicting type of text on screen'''
      _opcodes.force_big_message_and_counter(state)

   @staticmethod
   def clear_this_print_big_now(textStyle: TextStyle):
      '''Removes the print big text with the specified style from the screen'''
      _opcodes.clear_this_print_big_now(textStyle)

   @staticmethod
   def set_area_name(name: str):
      '''Displays the text of the specified GXT entry using San Andreas' area name text style'''
      _opcodes.set_area_name(name)

   @staticmethod
   def is_this_help_message_being_displayed(gxt: str):
      '''Returns true if a help message with the specified GXT entry is being displayed'''
      return _opcodes.is_this_help_message_being_displayed(gxt)

   @staticmethod
   def draw_subtitles_before_fade(state: bool):
      '''Sets whether the text stays on the screen when it fades out'''
      _opcodes.draw_subtitles_before_fade(state)

   @staticmethod
   def draw_oddjob_title_before_fade(state: bool):
      '''Sets whether the styled text stays on the screen when it fades out'''
      _opcodes.draw_oddjob_title_before_fade(state)

   @staticmethod
   def display_non_minigame_help_messages(state: bool):
      '''Overrides the text block set by 09BD'''
      _opcodes.display_non_minigame_help_messages(state)

   @staticmethod
   def print_help_string(text: str):
      _opcodes.print_help_string(text)

   @staticmethod
   def print_big_string(text: str, time: int, style: TextStyle):
      _opcodes.print_big_string(text, time, style)

   @staticmethod
   def print_string(text: str, time: int):
      '''Displays the text (provided as a string literal or an address) similarly to 00BB'''
      _opcodes.print_string(text, time)

   @staticmethod
   def print_string_now(text: str, time: int):
      _opcodes.print_string_now(text, time)

   @staticmethod
   def print_help_formatted(text: str, *arg):
      '''Displays a black text box for a few seconds respecting the format of the String entered'''
      _opcodes.print_help_formatted(text, *arg)

   @staticmethod
   def print_big_formatted(text: str, time: int, style: TextStyle, *arg):
      '''Displays a styled message for the specified time respecting the format of the String entered'''
      _opcodes.print_big_formatted(text, time, style, *arg)

   @staticmethod
   def print_formatted(text: str, time: int, *arg):
      _opcodes.print_formatted(text, time, *arg)

   @staticmethod
   def print_formatted_now(text: str, time: int, *arg):
      _opcodes.print_formatted_now(text, time, *arg)

   @staticmethod
   def string_format(format: str, *arg) -> str:
      return _opcodes.string_format(format, *arg)

   @staticmethod
   def scan_string(str: str, format: str, *arg) -> str:
      return _opcodes.scan_string(str, format, *arg)

   @staticmethod
   def get_label_string(key: str) -> str:
      return _opcodes.get_text_label_string(key)

   @staticmethod
   def add_label(dynamicKey: str, text: str):
      _opcodes.add_text_label(dynamicKey, text)

   @staticmethod
   def remove_label(dynamicKey: str):
      _opcodes.remove_text_label(dynamicKey)

   @staticmethod
   def string_float_format(number: float, format: str) -> str:
      return _opcodes.string_float_format(number, format)


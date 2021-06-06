# Function definations for the intellisense
# Author: Grinch_
# Last updated on: 05/06/2021

import _hud

def set_help_message(message :str,  quick_msg :bool = False, permanent :bool = False, add_to_brief :bool = False) -> None:
    '''Shows a game hud help popup on top left corner of the screen with provided message string'''

    _hud.set_help_message(message, quick_msg, permanent, add_to_brief)
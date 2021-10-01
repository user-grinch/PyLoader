import libstd.common as common
import libstd.opcodes as opcodes
import libstd.script as script
from libstd.game_sa.hud import *

script.name("CreateCar")
script.author("Grinch_")
script.desc("Spawns a car when Left Shift is pressed")
script.version("1.0")

while True:
    common.wait(0)

    if common.key_pressed(0xA0):
        common.wait(300)

        handle = opcodes.get_player_char(0)
        if opcodes.is_char_in_any_car(handle):
            CHud.set_help_message("Already in a car")
        else:
            opcodes.request_model(400)
            opcodes.load_all_models_now()
            coord = opcodes.get_char_coordinates(handle)
            car : int = opcodes.create_car(400, coord[0], coord[1], coord[2])
            opcodes.warp_char_into_car(handle, car)
            opcodes.mark_model_as_no_longer_needed(400)

import libstd.common as common
import libstd.opcodes as opcodes
import libstd.cleo as cleo
import libstd.script as script

script.name("QuickTeleport")
script.author("Grinch_")
script.desc("Teleport to marker location pressing X+Y")
script.version("1.0")
script.properties("no_reload")

while True:
    common.wait(0)

    if common.key_pressed(0x58) and common.key_pressed(0x59):
        while common.key_pressed(0x58) and common.key_pressed(0x59):
            common.wait(25)

        coords = cleo.get_target_marker_coords()
        handle = opcodes.get_player_char(0)
        opcodes.do_fade(50,0)
        opcodes.set_char_coordinates(handle, coords[0], coords[1], coords[2]+100)
        opcodes.freeze_char_position_and_dont_load_collision(handle, True)
        common.wait(500)
        opcodes.set_char_coordinates(handle, coords[0], coords[1], coords[2])
        opcodes.freeze_char_position_and_dont_load_collision(handle, False)
        opcodes.do_fade(50,1)


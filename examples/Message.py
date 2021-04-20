import common, hud

print("Working directory: {}".format(common.get_working_dir()))
print("Game directory: {}".format(common.get_game_dir()))

while True:
    if (common.key_pressed(0x09)):
      hud.set_help_message("Hello World", False, False, False)

    common.wait(0)



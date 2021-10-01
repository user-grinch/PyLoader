import libstd.common as common
from libstd.game_sa.hud import *

print("Working directory: {}".format(common.get_working_dir()))
print("Game directory: {}".format(common.get_game_dir()))

while True:
    if (common.key_pressed(0x09)):
      CHud.set_help_message("Hello World")
      print("Game directory: {}".format(common.get_game_dir()))
      
    common.wait(0)



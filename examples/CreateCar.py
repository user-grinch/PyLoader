import common, opcodes, hud, script

script.name("CreateCar")
script.author("Grinch_")
script.desc("Spawns a car when Left Shift is pressed")
script.version("1.0")

while True:
    common.wait(0)
    
    if common.key_pressed(0xA0):
        while common.key_pressed(0xA0):
            common.wait(0)

        if opcodes.is_char_in_any_car(1):
            hud.set_help_message("Already in a car", False, False, False)
        else:
            opcodes.request_model(400)
            opcodes.load_all_models_now()
            coord = opcodes.get_char_coordinates(1)
            car : int = opcodes.create_car(400, coord[0], coord[1], coord[2])
            opcodes.warp_char_into_car(1, car)
            opcodes.mark_model_as_no_longer_needed(400)

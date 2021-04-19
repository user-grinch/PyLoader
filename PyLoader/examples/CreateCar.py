import common, opcode, hud

while True:
    common.wait(0)
    
    if common.key_pressed(0xA0):
        while common.key_pressed(0xA0):
            common.wait(0)

        if opcode.is_char_in_any_car(1):
            hud.set_help_message("Already in a car", False, False, False)
        else:
            opcode.request_model(400)
            opcode.load_all_models_now()
            coord = opcode.get_char_coordinates(1)
            car : int = opcode.create_car(400, coord[0], coord[1], coord[2])
            opcode.warp_char_into_car(1, car)
            opcode.mark_model_as_no_longer_needed(400)

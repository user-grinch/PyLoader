import common, cleo, pool, opcodes

while True:
    if cleo.test_cheat("peds"):
        for pPed in pool.ped():
            print(pPed)   

    if cleo.test_cheat("vehs"):
        for pVeh in pool.veh():
            handle = cleo.get_car_handle(pVeh)
            coord = opcodes.get_car_coordinates(handle)

            print("pVeh: {} Coords: {}, {}, {}".format(pVeh,coord[0],coord[1],coord[2]))
    common.wait(0)



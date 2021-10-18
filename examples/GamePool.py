import libstd.common as common
import libstd.opcodes as opcodes
import libstd.pool as pool
import libstd.addition as add

while True:
    if pool.test_cheat("peds"):
        for ped in pool.ped():
            print(ped)   

    if pool.test_cheat("vehs"):
        for handle in pool.veh():
            coord = opcodes.get_car_coordinates(handle)
            print("Veh handle: {} Coords: {}, {}, {}".format(handle, coord[0],coord[1],coord[2]))
            
    common.wait(0)



# Pool

Iterative lists containing handles to game types.

* building
* object
* ped
* veh

**Example:**

`for handle in pool.ped():  
    # do something with ped handle  
    pass`  


**Full script:** 

```text
# GamePool.py
import common, cleo, pool, opcodes

while True:
    if cleo.test_cheat("peds"):
        for ped in pool.ped():
            print(ped)   

    if cleo.test_cheat("vehs"):
        for handle in pool.veh():
            coord = opcodes.get_car_coordinates(handle)
            print("Veh handle: {} Coords: {}, {}, {}".format(handle, coord[0],coord[1],coord[2]))
            
    common.wait(0)
```


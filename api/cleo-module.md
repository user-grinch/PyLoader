# CLEO

### free\_library\(handle\)

Frees a loaded library by **load\_library.**

### **get\_proc\_address\(handle, proc\)**

Returns address of proc from library handle. Returns **NULL** on failure.

### call\_function\(int address, int num\_args, int pop, ...\)

Calls a game function from the specified address. More [info](https://gtagmodding.com/opcode-database/opcode/0AA5/)

### call\_method\(int address, struct, int num\_args, int pop, ...\)

Calls a game class method from the specified address. More [info](https://gtagmodding.com/opcode-database/opcode/0AA6/)

### get\_car\_handle\(pveh\)

Fetches the car handle from the pointer.

### get\_car\_pointer\(hveh\)

Fetches the car pointer from the handle

### get\_char\_handle\(pchar\)

Fetches the char handle from the pointer.

### get\_char\_pointer\(hchar\)

Fetches the char pointer from the handle

### get\_closest\_ped\(hped\)

Gets the closest pedestrian to the player.

### get\_closest\_vehicle\(hveh\)

Gets the closest vehicle to the player.

### get\_object\_handle\(pobj\)

Fetches the object handle from the pointer.

### get\_object\_pointer\(hobj\)

Fetches the object pointer from the handle

### get\_player\_targeted\_char\(\)

Retu**r**ns the char currently being targeted by the player. Returns **NULL** on failure.

### get\_target\_marker\_coords\(\)

Returns the x, y & z coord of target marker. Returns **-1, -1, -1** on failure.

### get\_vehicle\_current\_gear\(hveh\)

Returns the current gear from the vehicle handle.

### get\_vehicle\_number\_of\_gears\(hveh\)

Returns the total amount of gears from the vehicle handle.

### is\_on\_cutscene\(\)

Returns true if a game cutscene is being played.

### is\_on\_mission\(\)

Returns true if a mission is running.

### is\_vehicle\_engine\_on\(hveh\)

Returns true if the vehicle engine is turned on.

### is\_vehicle\_siren\_on\(hveh\)

Returns true if the vehicle siren is on.

### get\_largest\_gang\_id\_in\_zone\(\)

Returns the largest gang id in the player zone.

### get\_vehicle\_model\_from\_name\(veh name\)

Fetches the vehicle model from its name.

### get\_vehicle\_model\_name\(int model\)

Get vehicle model from its name.

### set\_vehicle\_engine\_state\(hveh, bool\)

Sets the engine state of the vehicle.

### test\_cheat\(str\)

Returns true if the cheat is typed.


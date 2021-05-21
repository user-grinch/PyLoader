---
description: Execute certain functions when some event is triggered
---

# Events

### on\_script\_terminate\(error\_occured: bool\)

This function is called after the script termination. You can clean up any changes that may need to be undone.   
  
**error\_occured**  - states whether the script terminated due to an error.

### on\_veh\_create\(hveh : int\)

This function is called whenever a vehicle is created. 

**hveh** - contains the handle to that vehicle

### on\_veh\_render\(hveh : int\)

This function is called whenever a vehicle is being rendered. 

**hveh** - contains the handle to that vehicle

### on\_veh\_destroy\(hveh : int\)

This function is called whenever a vehicle is destroyed. 

**hveh** - contains the handle to that vehicle

### on\_ped\_create\(hped : int\)

This function is called whenever a ped is created. 

**hped** - contains the handle to that ped

### on\_ped\_render\(hped : int\)

This function is called whenever a ped is being rendered. 

**hped** - contains the handle to that ped

### on\_ped\_destroy\(hped : int\)

This function is called whenever a ped is destroyed. 

**hped** - contains the handle to that ped

### on\_obj\_create\(hobj : int\)

This function is called whenever an object is created. 

**hobj** - contains the handle to that object 

### on\_obj\_render\(hobj : int\)

This function is called whenever an object is being rendered. 

**hobj** - contains the handle to that object 

### on\_obj\_destroy\(hobj : int\)

This function is called whenever an object is destroyed. 

**hobj** - contains the handle to that object 


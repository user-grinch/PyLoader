---
description: Sound system library for PyLoader.
---

# Bass

This module provides minimal APIs to work with bass. If you need anything advanced, use the pybass3 module instead.

### **get\_audiostream\_length\(hstream\)**

Returns length of the audio stream.

### **get\_audiostream\_volume\(hstream\)**

Returns the current volume of the audio stream.

### link\_3d\_audiostream\_to\_actor\(**hstream, hped**\)

Links the audio stream position to the actor.

### link\_3d\_audiostream\_to\_obj\(**hstream, hobj**\)

Links the audio stream position to the object.

### link\_3d\_audiostream\_to\_veh\(**hstream, hveh**\)

Links the audio stream position to the vehicle.

### load\_audiostream\(path\) load\_audiostream\_with\_3d\_support\(path\)

Loads audio stream from the provided path. Returns handle to the loaded stream. **0** is returned on failure.

### loop\_audiostream**\(hstream, bool\)**

Sets flag whether the audio stream should be looped.

### release\_audiostream\(hstream\)

Frees the loaded audio stream.

### set\_audiostream\_perform\_action\(hstream, int action\)

Sets the action for the audio stream.  
  
**Values \(action\):**

* Stop = 0
* Play = 1
* Pause = 2
* Resume = 3

### set\_audiostream\_volume\(hstream, float volume\)

Sets the audio stream volume.

### set\_3d\_audiostream\_position\(hstream, float posX,float posY, float posZ\)

Sets position for the 3d audio stream.


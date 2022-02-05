import _opcodes

class Skip():
   @staticmethod
   def set_up(x: float, y: float, z: float, heading: float):
      '''Fades out the screen and teleports the player to the specified coordinates and angle'''
      _opcodes.set_up_skip(x, y, z, heading)

   @staticmethod
   def clear():
      _opcodes.clear_skip()

   @staticmethod
   def set_up_after_mission(x: float, y: float, z: float, heading: float):
      '''Fades the screen out and teleports the player to the specified coordinates and angle'''
      _opcodes.set_up_skip_after_mission(x, y, z, heading)

   @staticmethod
   def set_up_for_specific_vehicle(x: float, y: float, z: float, heading: float, handle: Car):
      '''Teleports the player to the specified coordinates and sets the specified angle when in the specified car'''
      _opcodes.set_up_skip_for_specific_vehicle(x, y, z, heading, handle)

   @staticmethod
   def set_up_for_vehicle_finished_by_script(x: float, y: float, z: float, heading: float, vehicle: Car):
      '''Teleports the player to the specified coordinates and sets the specified angle with the screen fading in when in the specified car'''
      _opcodes.set_up_skip_for_vehicle_finished_by_script(x, y, z, heading, vehicle)

   @staticmethod
   def is_waiting_for_script_to_fade_in():
      '''Returns true if the trip skip created with 0A35 has finished teleporting the vehicle and is ready to allow the script to fade in'''
      return _opcodes.is_skip_waiting_for_script_to_fade_in()


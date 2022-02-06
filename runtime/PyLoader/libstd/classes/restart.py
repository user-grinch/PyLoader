import libstd.opcodes as opcodes
from enums import Town

class Restart():
   @staticmethod
   def add_hospital(x: float, y: float, z: float, heading: float, townId: Town):
      '''Adds a hospital restart, which is where the player will spawn after death (wasted) if the point is closer than any other hospital restart'''
      opcodes.add_hospital_restart(x, y, z, heading, townId)

   @staticmethod
   def add_police(x: float, y: float, z: float, heading: float, townId: Town):
      '''Adds a police restart, which is where the player will spawn after being arrested (busted) if the point is closer than any other police restart'''
      opcodes.add_police_restart(x, y, z, heading, townId)

   @staticmethod
   def override_next(x: float, y: float, z: float, heading: float):
      '''Forces this location to be the next respawn location'''
      opcodes.override_next_restart(x, y, z, heading)

   @staticmethod
   def cancel_override():
      '''Stops the player from spawning at the override location (016E)'''
      opcodes.cancel_override_restart()

   @staticmethod
   def set_extra_hospital_restart_point(x: float, y: float, z: float, radius: float, heading: float):
      opcodes.set_extra_hospital_restart_point(x, y, z, radius, heading)

   @staticmethod
   def set_extra_police_station_restart_point(x: float, y: float, z: float, radius: float, heading: float):
      opcodes.set_extra_police_station_restart_point(x, y, z, radius, heading)

   @staticmethod
   def set_respawn_point_for_duration_of_mission(x: float, y: float, z: float):
      '''Overrides the respawn point'''
      opcodes.set_respawn_point_for_duration_of_mission(x, y, z)


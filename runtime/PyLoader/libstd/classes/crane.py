import _opcodes

class Crane():
   @staticmethod
   def player_entered_dock_crane():
      '''Puts the player in the San Fierro dock crane'''
      _opcodes.player_entered_dock_crane()

   @staticmethod
   def player_entered_buildingsite_crane():
      '''Puts the player in the San Fierro building site crane'''
      _opcodes.player_entered_buildingsite_crane()

   @staticmethod
   def player_left_crane():
      '''Removes the player from the current crane'''
      _opcodes.player_left_crane()

   @staticmethod
   def player_entered_quarry_crane():
      '''Puts the player in the crane at the quarry near Las Venturras'''
      _opcodes.player_entered_quarry_crane()

   @staticmethod
   def player_entered_las_vegas_crane():
      '''Puts the player in the crane at the building site in Las Venturras'''
      _opcodes.player_entered_las_vegas_crane()

   @staticmethod
   def enable_controls(up: bool, down: bool, release: bool):
      '''Enables/disables individual crane controls'''
      _opcodes.enable_crane_controls(up, down, release)


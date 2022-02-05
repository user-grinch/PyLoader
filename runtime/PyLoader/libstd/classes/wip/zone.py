import libstd.opcodes as opcodes
from enums import GangType
from char import Char

class Zone():
   @staticmethod
   def get_random_char(zone: int, civilian: bool, gang: bool, criminalOrProstitute: bool) -> Char:
      '''Gets a random character in the specified zone whose pedtype matches the specified values'''
      
      hChar: int = opcodes.get_random_char_in_zone(zone, civilian, gang, criminalOrProstitute)

      coord = opcodes.get_char_coordinates(hChar)

      Char()

      return opcodes.get_random_char_in_zone(zone, civilian, gang, criminalOrProstitute)

   @staticmethod
   def set_population_type(zone: int, type: int):
      opcodes.set_zone_population_type(zone, type)

   @staticmethod
   def set_dealer_strength(zone: int, strength: int):
      '''Sets the total number of drug dealers in the zone'''
      opcodes.set_zone_dealer_strength(zone, strength)

   @staticmethod
   def get_dealer_strength(zone: int) -> int:
      '''Returns the drug dealer density of the specified zone'''
      return opcodes.get_zone_dealer_strength(zone)

   @staticmethod
   def set_gang_strength(zone: int, gangId: GangType, density: int):
      '''Sets the density of the gang members in the specified zone'''
      opcodes.set_zone_gang_strength(zone, gangId, density)

   @staticmethod
   def get_gang_strength(zone: int, gangId: GangType) -> int:
      '''Returns the density of the gang members in the specified zone'''
      return opcodes.get_zone_gang_strength(zone, gangId)

   @staticmethod
   def get_name(x: float, y: float, z: float) -> str:
      '''Gets the name of the info zone at the specified coordinates'''
      return opcodes.get_name_of_zone(x, y, z)

   @staticmethod
   def set_population_race(zone: int, _p2: int):
      opcodes.set_zone_population_race(zone, _p2)

   @staticmethod
   def set_for_gang_wars_training(zone: int):
      '''Sets the zone as the only zone where a turf war can be provoked'''
      opcodes.set_zone_for_gang_wars_training(zone)

   @staticmethod
   def init_population_settings():
      '''Resets all changes made to the zone info'''
      opcodes.init_zone_population_settings()

   @staticmethod
   def get_current_population_zone_type() -> int:
      return opcodes.get_current_population_zone_type()

   @staticmethod
   def get_name(x: float, y: float, z: float) -> str:
      '''Gets the name of the zone at the specified coordinates'''
      return opcodes.get_name_of_info_zone(x, y, z)

   @staticmethod
   def set_trigger_gang_war(zone: int):
      opcodes.set_specific_zone_to_trigger_gang_war(zone)

   @staticmethod
   def switch_audio(zone: int, state: bool):
      '''Sets whether the IPL defined audio for the specified area should play'''
      opcodes.switch_audio_zone(zone, state)

   @staticmethod
   def set_no_cops(zone: int, state: bool):
      '''Sets whether cops should be prevented from spawning in the specified area'''
      opcodes.set_zone_no_cops(zone, state)

   @staticmethod
   def set_disable_military_zones(state: bool):
      '''Causes the players wanted level to be set at 4 when in restricted areas'''
      opcodes.set_disable_military_zones(state)


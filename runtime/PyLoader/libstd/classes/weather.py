import _opcodes
from enums import WeatherType

class Weather():
   @staticmethod
   def force(type: WeatherType):
      '''Forces the game weather to the specified type'''
      _opcodes.force_weather(type)

   @staticmethod
   def force_now(type: WeatherType):
      '''Forces the upcoming weather to the specified type'''
      _opcodes.force_weather_now(type)

   @staticmethod
   def release():
      '''Allows the game to continue its usual weather pattern after using 01B5'''
      _opcodes.release_weather()

   @staticmethod
   def set_heathaze_effect(state: bool):
      '''Specifies whether the heat haze effect should be enabled in sunny conditions'''
      _opcodes.set_heathaze_effect(state)

   @staticmethod
   def set_to_appropriate_type_now():
      '''Sets the current weather ID according to the game clock and the players current town number'''
      _opcodes.set_weather_to_appropriate_type_now()


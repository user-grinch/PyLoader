import _opcodes
from enums import CoronaType, ExplosionType, FlareType, ShadowTextureType
from char import Char

class Fx():
   @staticmethod
   def draw_shadow(textureType: ShadowTextureType, x: float, y: float, z: float, angle: float, length: float, intensity: int, r: int, g: int, b: int):
      '''Draws a shadow in the current frame'''
      _opcodes.draw_shadow(textureType, x, y, z, angle, length, intensity, r, g, b)

   @staticmethod
   def add_explosion(x: float, y: float, z: float, type: ExplosionType):
      '''Creates an explosion at the point'''
      _opcodes.add_explosion(x, y, z, type)

   @staticmethod
   def draw_corona(x: float, y: float, z: float, size: float, coronaType: CoronaType, flareType: FlareType, r: int, g: int, b: int):
      '''Displays a corona at the specified location'''
      _opcodes.draw_corona(x, y, z, size, coronaType, flareType, r, g, b)

   @staticmethod
   def draw_weaponshop_corona(x: float, y: float, z: float, size: float, coronaType: CoronaType, flareType: FlareType, r: int, g: int, b: int):
      '''Displays a corona with the lowered draw distance at the specified coordinates'''
      _opcodes.draw_weaponshop_corona(x, y, z, size, coronaType, flareType, r, g, b)

   @staticmethod
   def add_explosion_no_sound(x: float, y: float, z: float, type: ExplosionType):
      '''Creates an explosion with no sound'''
      _opcodes.add_explosion_no_sound(x, y, z, type)

   @staticmethod
   def add_big_gun_flash(fromX: float, fromY: float, fromZ: float, toX: float, toY: float, toZ: float):
      '''Creates a gun flash particle effect'''
      _opcodes.add_big_gun_flash(fromX, fromY, fromZ, toX, toY, toZ)

   @staticmethod
   def add_sparks(x: float, y: float, z: float, velocityX: float, velocityY: float, velocityZ: float, density: int):
      _opcodes.add_sparks(x, y, z, velocityX, velocityY, velocityZ, density)

   @staticmethod
   def add_explosion_variable_shake(x: float, y: float, z: float, type: int, shake: float):
      '''Creates an explosion at the specified coordinates'''
      _opcodes.add_explosion_variable_shake(x, y, z, type, shake)

   @staticmethod
   def add_smoke_particle(x: float, y: float, z: float, velocityX: float, velocityY: float, velocityZ: float, red: int, green: int, blue: int, alpha: int, size: float, lastFactor: float):
      _opcodes.add_smoke_particle(x, y, z, velocityX, velocityY, velocityZ, red, green, blue, alpha, size, lastFactor)

   @staticmethod
   def add_blood(x: float, y: float, z: float, offsetX: float, offsetY: float, offsetZ: float, density: int, obj: Char):
      _opcodes.add_blood(x, y, z, offsetX, offsetY, offsetZ, density, obj.get_handle())

   @staticmethod
   def draw_light_with_range(x: float, y: float, z: float, red: int, green: int, blue: int, radius: float):
      '''Draws colored light in radius of the specified point'''
      _opcodes.draw_light_with_range(x, y, z, red, green, blue, radius)


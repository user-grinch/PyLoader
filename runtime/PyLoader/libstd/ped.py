from enum import Enum
import libstd.opcodes as opcodes

class eWeaponType(Enum):
   Unarmed = 0
   BrassKnuckles = 1
   GolfClub = 2
   NightStick = 3
   Knife = 4
   BaseballBat = 5
   Shovel = 6
   PoolCue = 7
   Katana = 8
   Chainsaw = 9
   Dildo1 = 10
   Dildo2 = 11
   Vibe1 = 12
   Vibe2 = 13
   Flowers = 14
   Cane = 15
   Grenade = 16
   Teargas = 17
   Molotov = 18
   Pistol = 22
   PistolSilenced = 23
   DesertEagle = 24
   Shotgun = 25
   Sawnoff = 26
   Spas12 = 27
   MicroUzi = 28
   Mp5 = 29
   Ak47 = 30
   M4 = 31
   Tec9 = 32
   Rifle = 33
   Sniper = 34
   RocketLauncher = 35
   RocketLauncherHs = 36
   Flamethrower = 37
   Minigun = 38
   Satchel = 39
   Detonator = 40
   SprayCan = 41
   Extinguisher = 42
   Camera = 43
   NightVision = 44
   Infrared = 45
   Parachute = 46

# TODO: Merge this with CPed later
class Ped():
    def __init__(self, model, ped_type, x, y, z):
        self.handle = opcodes.create_char(model, ped_type, x, y, z)

    def remove(self):
        opcodes.delete_char(self.handle)

    def set_position(self, x, y, z):
        opcodes.set_char_coordinates(self.handle, x, y, z)

    def get_position(self, x, y, z):
        return opcodes.get_char_coordinates(self.handle)

    def get_vehicle(self):
        return opcodes.store_car_char_is_in(self.handle)

    def is_in_vehicle(self, vehicle):
        return opcodes.is_char_in_car(self.handle, vehicle)

    def get_heading(self):
        return opcodes.get_char_heading(self.handle)

    def set_heading(self, heading):
        opcodes.set_char_heading(self.handle, heading)

    def give_weapon(self, weapontype : eWeaponType, ammo):
        opcodes.give_weapon_to_char(self.handle, weapontype, ammo)
    
    def get_handle(self):
        return self.handle

    def fight(self, other_char):
        opcodes.task_kill_char_on_foot(self.handle, other_char)
        

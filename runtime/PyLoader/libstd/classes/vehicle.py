from typing import Tuple
import libstd.opcodes as opcodes
import libstd.addition as addition

class DrivingStyle():
    StopForCars = 0
    SlowDownForCars = 1
    AvoidCars = 2
    PloughThrough = 3
    StopForCarsIgnoreLights = 4

class CarMission():
   NoMission = 0
   Cruise = 1
   RamPlayerFaraway = 2
   RamPlayerClose = 3
   BlockPlayerFaraway = 4
   BlockPlayerClose = 5
   BlockPlayerHandbrakeStop = 6
   WaitForDeletion = 7
   GotoCoords = 8
   GotoCoordsStraight = 9
   EmergencyVehicleStop = 10
   StopForever = 11
   GotoCoordsAccurate = 12
   GotoCoordsStraightAccurate = 13
   GotoCoordsAsthecrowSwims = 14
   RamCarFaraway = 15
   RamCarClose = 16
   BlockCarFaraway = 17
   BlockCarClose = 18
   BlockCarHandbrakeStop = 19
   HeliFlyToCoors = 20
   AttackPlayer = 21
   PlaneFlyToCoors = 22
   HeliLand = 23
   SlowlyDriveTowardsPlayer1 = 24
   SlowlyDriveTowardsPlayer2 = 25
   BlockPlayerForwardAndBack = 26
   Mission1B = 27
   Mission1C = 28
   Mission1D = 29
   Mission1E = 30
   Mission1F = 31
   Mission20 = 32
   Racing = 33
   FollowPreRecordedPath = 34
   PlaneAttackPlayer = 35
   PlaneFlyInDirection = 36
   PlaneFollowEntity = 37
   Mission26 = 38
   HeliFollowEntity = 39
   CopHeliAttack = 40
   Mission29 = 41
   Mission2A = 42
   PoliceBike = 43
   Mission2C = 44
   Parking2D = 45
   Parking2E = 46
   Mission2F = 47
   Mission30 = 48
   Parking31 = 49
   Parking32 = 50
   HeliKeepEntityInView = 51
   Mission34 = 52
   Mission35 = 53
   Mission36 = 54
   Mission37 = 55
   Mission38 = 56
   Mission39 = 57
   HeliCrashLand = 58
   PlaneHsMissileAttackCar = 59
   Mission3C = 60
   Mission3D = 61
   Mission3E = 62
   PlaneHsMissileAttackPlayer = 63
   PoliceWaitForPlayer = 64
   Mission41 = 65
   Mission42 = 66
   Mission43 = 67
   Mission44 = 68
   Mission45 = 69
   Mission46 = 70
   Mission47 = 71
   Mission48 = 72
   Mission49 = 73
   Mission4A = 74
   Mission4B = 75
   Mission4C = 76
   Mission4D = 77
   Mission4E = 78
   Mission4F = 79
   Mission50 = 80

class BlipColor():
   Red = 0
   Green = 1
   Blue = 2
   White = 3
   Yellow = 4
   Purple = 5
   Cyan = 6
   Threat = 7
   Destination = 8

class BlipDisplay():
   Neither = 0
   MarkerOnly = 1
   BlipOnly = 2
   Both = 3

class CarLock():
   NotUsed = 0
   Unlocked = 1
   Locked = 2
   LockoutPlayerOnly = 3
   LockedPlayerInside = 4
   LockedInitially = 5
   ForceShutDoors = 6
   SkipShutDoors = 7

class WeaponType():
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

class Vehicle():
    def __init__(self, model: int, x: float, y: float, z: float):
        opcodes.request_model(model)
        opcodes.load_all_models_now()
        self.__handle = opcodes.create_car(model, x, y, z)
        self.__pointer = addition.get_car_pointer(self.__handle)

    def add_blip(self, colour = BlipColor.White, display = BlipDisplay.Both):
        opcodes.add_blip_for_car_old(self.__handle, colour, display)

    def exists(self):
        return opcodes.does_vehicle_exist(self.__handle)

    def explode(self):
        opcodes.explode_car(self.__handle)

    def fix(self):
        opcodes.fix_car(self.__handle)

    def freeze(self, freeze: bool):
        opcodes.freeze_car_position(self.__handle, freeze)
    
    def get_forward_xy(self) -> Tuple[float, float]:
        x: float = opcodes.get_car_forward_x(self.__handle)
        y: float = opcodes.get_car_forward_y(self.__handle)

        return (x, y)

    def get_health(self):
        return opcodes.get_car_health(self.__handle)

    def get_colours(self):
        return opcodes.get_car_colours(self.__handle)

    def get_coordinates(self):
        return opcodes.get_car_coordinates(self.__handle)
    
    def get_handle(self):
        return self.__handle

    def get_heading(self):
        return opcodes.get_car_heading(self.__handle)

    def get_model(self):
        return opcodes.get_car_model(self.__handle)

    def get_model_name(self):
        return addition.get_vehicle_model_name(self.get_model())

    def get_pointer(self):
        return self.__pointer
    
    def get_speed(self):
        return opcodes.get_car_speed(self.__handle)
    
    def goto_coordinates(self, x: float, y: float, z: float):
        opcodes.car_goto_coordinates(self.__handle, x, y, z)

    def in_area(self, x: float, y: float, z: float = None):
        if (z is None):
            return opcodes.is_car_in_area_2d(self.__handle, x, y)
        else:
            return opcodes.is_car_in_area_3d(self.__handle, x, y, z)
            
    def is_damanged_by_weapon(self, weapon: WeaponType):
       return opcodes.has_car_been_damaged_by_weapon(self.__handle, weapon)

    def is_dead(self):
        return opcodes.is_car_dead(self.__handle)
    
    def is_in_air(self):
        return opcodes.is_car_in_air_proper(self.__handle)
    
    def is_in_water(self):
        return opcodes.is_car_in_water(self.__handle)
    
    def is_on_screen(self):
        return opcodes.is_car_on_screen(self.__handle)

    def is_stopped(self):
        return opcodes.is_car_stopped(self.__handle)

    def is_stuck(self):
        return opcodes.is_car_stuck(self.__handle)

    def is_stuck_on_roof(self):
        return opcodes.is_car_stuck_on_roof(self.__handle)
    
    def is_upright(self):
        return opcodes.is_car_upright(self.__handle)

    def is_upside_down(self):
        return opcodes.is_car_upsidedown(self.__handle)
    
    def is_visibly_damanged(self):
        return opcodes.is_car_visibly_damaged(self.__handle)

    def mark_no_longer_needed(self):
        opcodes.mark_car_as_no_longer_needed(self.__handle)
        self.__handle = 0
        self.__pointer = 0

    def remove(self):
        opcodes.delete_car(self.__handle)
        self.__handle = 0
        self.__pointer = 0
    
    def set_coordinates(self, x: float, y: float, z: float):
        opcodes.set_car_coordinates(self.__handle, x, y, z)
    
    def set_color(self, primary: int, secondary: int):
        opcodes.change_car_colour(self.__handle, primary, secondary)

    def set_can_be_damaged(self):
        opcodes.set_car_can_be_damaged(self.__handle, True)
    
    def set_can_be_visibly_damaged(self):
        opcodes.set_car_can_be_visibly_damaged(self.__handle, True)

    def set_cruise_speed(self, speed: float):
        opcodes.set_car_cruise_speed(self.__handle, speed)
    
    def set_door_lock(self, lockStatus: CarLock):
        opcodes.lock_door(self.__handle, lockStatus)

    def set_driver(self, ped: int):
        opcodes.warp_char_into_car(ped, self.__handle)

    def set_driving_style(self, style : DrivingStyle):
        opcodes.set_car_driving_style(self.__handle, style)

    def set_forward_speed(self, speed: float):
        opcodes.set_car_forward_speed(self.__handle, speed)

    def set_heading(self, heading: float):
        opcodes.set_car_heading(self.__handle, heading)
    
    def set_health(self, health: float):
        opcodes.set_car_health(self.__handle, health)
    
    def set_heavy(self, flag: bool):
        opcodes.set_car_heavy(self.__handle, flag)

    def set_idle(self):
        opcodes.car_set_idle(self.__handle)

    def set_mission(self, mission : CarMission):
        opcodes.set_car_mission(self.__handle, mission)
    
    def set_on_fire(self):
        opcodes.start_car_fire(self.__handle)
    
    def set_passenger(self, ped: int, seatID: int):
        opcodes.warp_char_into_car_as_passenger(ped, self.__handle, seatID)
    
    def set_perfect_handling_affected(self, flag: bool):
        opcodes.improve_car_by_cheating(self.__handle, flag)
    
    def set_proofs(self, bullet: bool, fire: bool, explosion: bool, collision: bool, melee: bool):
        opcodes.set_car_proofs(self.__handle, bullet, fire, explosion, collision, melee)

    def set_respray_state(self, flag: bool):
        opcodes.set_can_respray_car(self.__handle, flag)
    
    def set_siren(self, flag: bool):
        opcodes.switch_car_siren(self.__handle, flag)
    
    def set_strong(self, flag: bool):
        opcodes.set_car_strong(self.__handle, flag)
    
    def set_visibility(self, flag: bool):
        opcodes.set_car_visible(self.__handle, flag)
    
    def set_watertight(self, flag: bool):
        opcodes.set_car_watertight(self.__handle, flag)

    def wander_randomly(self):
        opcodes.car_wander_randomly(self.handle)
    

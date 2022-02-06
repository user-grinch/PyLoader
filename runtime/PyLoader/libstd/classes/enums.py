# This file contains all the enums used in the standrad library.

class Town():
   LS = 0
   SF = 1
   LV = 2
   CS = 3

class RelationshipType():
   Respect = 0
   Like = 1
   Neutral = 2
   Dislike = 3
   Hate = 4

class WeaponSlot():
   Slot1 = 1
   Melee = 2
   Pistols = 3
   Shotguns = 4
   SMG = 5
   Assault = 6
   Rifles = 7
   Heavy = 8
   Thrown = 9
   Slot10 = 10
   Gift = 11
   Special = 12
   Detonator = 13

class PedType():
   Player1 = 0
   Player2 = 1
   PlayerNetwork = 2
   PlayerUnused = 3
   CivMale = 4
   CivFemale = 5
   Cop = 6
   Gang1 = 7
   Gang2 = 8
   Gang3 = 9
   Gang4 = 10
   Gang5 = 11
   Gang6 = 12
   Gang7 = 13
   Gang8 = 14
   Gang9 = 15
   Gang10 = 16
   Dealer = 17
   Emergency = 18
   Fireman = 19
   Criminal = 20
   Bum = 21
   Prostitute = 22
   Special = 23
   Mission1 = 24
   Mission2 = 25
   Mission3 = 26
   Mission4 = 27
   Mission5 = 28
   Mission6 = 29
   Mission7 = 30
   Mission8 = 31

class TempAction():
   None_ = 0
   Wait = 1
   Reverse = 2
   HandbrakeTurnLeft = 3
   HandbrakeTurnRight = 4
   HandbrakeStraight = 5
   TurnLeft = 6
   TurnRight = 7
   GoForward = 8
   SwerveLeft = 9
   SwerveRight = 10

class EntityStatus():
   Player = 0
   PlayerPlaybackFromBuffer = 1
   Simple = 2
   Physics = 3
   Abandoned = 4
   Wrecked = 5
   TrainMoving = 6
   TrainNotMoving = 7
   Heli = 8
   Plane = 9
   PlayerRemote = 10
   PlayerDisabled = 11

class BombType():
   None_ = 0
   Timed = 1
   OnIgnition = 2
   Remote = 3
   TimedActive = 4
   OnIgnitionActive = 5

class CarMission():
   None_ = 0
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

class CarLock():
   NotUsed = 0
   Unlocked = 1
   Locked = 2
   LockoutPlayerOnly = 3
   LockedPlayerInside = 4
   LockedInitially = 5
   ForceShutDoors = 6
   SkipShutDoors = 7

class CarDrivingStyle():
   StopForCars = 0
   SlowDownForCars = 1
   AvoidCars = 2
   PloughThrough = 3
   StopForCarsIgnoreLights = 4

class CarDoor():
   Hood = 0
   Trunk = 1
   LeftFrontDoor = 2
   RightFrontDoor = 3
   LeftRearDoor = 4
   RightRearDoor = 5

class GarageType():
   None_ = 0
   Mission = 1
   BombShop1 = 2
   BombShop2 = 3
   BombShop3 = 4
   Respray = 5
   HideoutOne = 16
   HideoutTwo = 17
   HideoutThree = 18
   HideoutFour = 24
   HideoutFive = 25
   HideoutSix = 26
   HideoutSeven = 27
   HideoutEight = 28
   HideoutNine = 29
   HideoutTen = 30
   HideoutEleven = 31
   HideoutTwelve = 32
   ImpoundLS = 33
   ImpoundSF = 34
   ImpoundLV = 35
   LocoLowCo = 36
   WheelArchAngels = 37
   Transfender = 38
   HideoutThirteen = 39
   HideoutFourteen = 40
   HideoutFifteen = 41
   HideoutSixteen = 42
   Burglary = 43
   At400Hangar = 44
   VerdantMeadowsHangar = 45

class GarageName():
   Amumis = "amumis"
   Beacsv = "beacsv"
   Blob1 = "blob1"
   Blob2 = "blob2"
   Blob6 = "blob6"
   Blob69 = "blob69"
   Blob7 = "blob7"
   BodLAwN = "bodLAwN"
   BrgSfse = "brgSFSE"
   Burbdo2 = "burbdo2"
   Burbdoo = "burbdoo"
   Burg_Lk = "burg_lk"
   Carlas1 = "carlas1"
   CEsafe1 = "CEsafe1"
   CEspray = "CEspray"
   Cjsafe = "cjsafe"
   Cn2Gar1 = "cn2gar1"
   Cn2Spry = "CN2spry"
   CNspray = "CNspray"
   Dhangar = "dhangar"
   Duf_Las = "duf_LAS"
   Fdorsfe = "fdorsfe"
   Ghostdr = "ghostdr"
   HbgdSfs = "hbgdSFS"
   Imp_La = "imp_la"
   Imp_Sf = "imp_sf"
   Imp_Lv = "imp_lv"
   Lasbomb = "lasbomb"
   LckSfse = "LCKSfse"
   Mds1Sfs = "mds1SFS"
   MdsSfSe = "mdsSFSe"
   Michdr = "michdr"
   ModgLas = "modgLAS"
   Mul_Lan = "mul_lan"
   Modlast = "modlast"
   Sav1Sfe = "sav1sfe"
   Sav1Sfw = "sav1sfw"
   SprLAe = "sprLAe"
   SpLAw2 = "spLAw2"
   Sprsfse = "sprsfse"
   Sprsfw = "sprsfw"
   Svgsfs1 = "svgsfs1"
   Tbon = "tbon"
   Timy1 = "timy1"
   VEcmod = "vEcmod"
   VEsvgrg = "vEsvgrg"
   VgElock = "vgElock"
   Vgshngr = "vgshngr"
   Cn2Gar2 = "cn2gar2"

class FlareType():
   None_ = 0
   Sun = 1
   Headlights = 2

class ExplosionType():
   Grenade = 0
   Molotov = 1
   Rocket = 2
   WeakRocket = 3
   Car = 4
   QuickCar = 5
   Boat = 6
   Aircraft = 7
   Mine = 8
   Object = 9
   TankFire = 10
   Small = 11
   RcVehicle = 12

class ShadowTextureType():
   None_ = 0
   Car = 1
   Ped = 2
   Explosion = 3
   Heli = 4
   Headlights = 5
   Blood = 6

class CoronaType():
   Star = 0
   Normal = 1
   Moon = 2
   Reflect = 3
   Headlight = 4
   Hex = 5
   Circle = 6
   Ring = 7
   Streak = 8

class PickupType():
   None_ = 0
   InShop = 1
   OnStreet = 2
   Once = 3
   OnceTimeout = 4
   OnceTimeoutSlow = 5
   Collectable1 = 6
   InShopOutOfStock = 7
   Money = 8
   MineInactive = 9
   MineArmed = 10
   NauticalMineInactive = 11
   NauticalMineArmed = 12
   FloatingPackage = 13
   FloatingPackageFloating = 14
   OnStreetSlow = 15
   AssetRevenue = 16
   PropertyLocked = 17
   PropertyForSale = 18
   MoneyDoesntdisappear = 19
   Snapshot = 20
   _2P = 21
   OnceForMission = 22

class HudObject():
   Armor = 3
   Health = 4
   Radar = 8
   Breathbar = 10

class CounterDisplay():
   Number = 0
   Bar = 1

class TimerDirection():
   Up = 0
   Down = 1

class Font():
   Gothic = 0
   Subtitles = 1
   Menu = 2
   Pricedown = 3

class TextStyle():
   Middle = 1
   BottomRight = 2
   WhiteMiddle = 3
   MiddleSmaller = 4
   MiddleSmallerHigher = 5
   WhiteMiddleSmaller = 6
   LightBlueTop = 7

class ModSlot():
   Hood = 0
   Vents = 1
   Spoilers = 2
   SideSkirts = 3
   FrontBullbars = 4
   RearBullbars = 5
   Lights = 6
   Roof = 7
   Nitro = 8
   Hydraulics = 9
   CarStereo = 10
   P11 = 11
   Wheels = 12
   Exhausts = 13
   FrontBumper = 14
   RearBumper = 15
   P16 = 16

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

class WeatherType():
   ExtraSunnyLa = 0
   SunnyLa = 1
   ExtraSunnySmogLa = 2
   SunnySmogLa = 3
   CloudyLa = 4
   SunnySf = 5
   ExtraSunnySf = 6
   CloudySf = 7
   RainySf = 8
   FoggySf = 9
   SunnyVegas = 10
   ExtraSunnyVegas = 11
   CloudyVegas = 12
   ExtraSunnyCountryside = 13
   SunnyCountryside = 14
   CloudyCountryside = 15
   RainyCountryside = 16
   ExtraSunnyDesert = 17
   SunnyDesert = 18
   SandstormDesert = 19
   Underwater = 20
   ExtraColours1 = 21
   ExtraColours2 = 22

class RadioChannel():
   PlaybackFM = 0
   KRose = 1
   KDST = 2
   BounceFM = 3
   SFUR = 4
   RadioLosSantos = 5
   RadioX = 6
   CSR = 7
   KJahWest = 8
   MasterSounds = 9
   WCTR = 10
   UserTracks = 11
   None_ = 12

class MissionAudioSlot():
   Slot1 = 1
   Slot2 = 2
   Slot3 = 3
   Slot4 = 4

class GangType():
   Ballas = 0
   Grove = 1
   Vagos = 2
   Rifa = 3
   DaNangBoys = 4
   Mafia = 5
   Triad = 6
   Aztecas = 7
   Gang9 = 8
   Gang10 = 9

class PedType():
   Player1 = 0
   Player2 = 1
   PlayerNetwork = 2
   PlayerUnused = 3
   CivMale = 4
   CivFemale = 5
   Cop = 6
   Gang1 = 7
   Gang2 = 8
   Gang3 = 9
   Gang4 = 10
   Gang5 = 11
   Gang6 = 12
   Gang7 = 13
   Gang8 = 14
   Gang9 = 15
   Gang10 = 16
   Dealer = 17
   Emergency = 18
   Fireman = 19
   Criminal = 20
   Bum = 21
   Prostitute = 22
   Special = 23
   Mission1 = 24
   Mission2 = 25
   Mission3 = 26
   Mission4 = 27
   Mission5 = 28
   Mission6 = 29
   Mission7 = 30
   Mission8 = 31
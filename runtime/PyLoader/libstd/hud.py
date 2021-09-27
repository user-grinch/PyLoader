# Function definations for the intellisense
# Author: Grinch_
# Last updated on: 27/09/2021

import ctypes, cleo

class Hud:
    m_BigMessage = ctypes.c_char.from_address(0xBAACC0) # char[128]
    bScriptDontDisplayAreaName = ctypes.c_bool.from_address(0xBAA3F8)
    bScriptDontDisplayVehicleName = ctypes.c_bool.from_address(0xBAA3F9)
    bScriptForceDisplayWithCounters = ctypes.c_bool.from_address(0xBAA3FA)
    m_LastBreathTime = ctypes.c_int.from_address(0xBAA3FC)
    bDrawClock = ctypes.c_bool.from_address(0xBAA400)
    m_WeaponState = ctypes.c_int.from_address(0xBAA404)
    m_WeaponFadeTimer = ctypes.c_int.from_address(0xBAA408)
    m_WeaponTimer = ctypes.c_int.from_address(0xBAA40C)
    m_LastWeapon = ctypes.c_int.from_address(0xBAA410)
    m_WantedState = ctypes.c_int.from_address(0xBAA414)
    m_WantedFadeTimer = ctypes.c_int.from_address(0xBAA418)
    m_WantedTimer = ctypes.c_int.from_address(0xBAA41C)
    m_LastWanted = ctypes.c_int.from_address(0xBAA420)
    m_DisplayScoreState = ctypes.c_int.from_address(0xBAA424)
    m_DisplayScoreFadeTimer = ctypes.c_int.from_address(0xBAA428)
    m_DisplayScoreTimer = ctypes.c_int.from_address(0xBAA42C)
    m_LastDisplayScore = ctypes.c_int.from_address(0xBAA430)
    m_EnergyLostState = ctypes.c_int.from_address(0xBAA434)
    m_EnergyLostFadeTimer = ctypes.c_int.from_address(0xBAA438)
    m_EnergyLostTimer = ctypes.c_int.from_address(0xBAA43C)
    m_LastTimeEnergyLost = ctypes.c_int.from_address(0xBAA440)
    # char *&m_pVehicleNameToPrint = *(char **)0xBAA444;
    m_VehicleState = ctypes.c_int.from_address(0xBAA448)
    m_VehicleFadeTimer = ctypes.c_int.from_address(0xBAA44C)
    m_VehicleNameTimer = ctypes.c_int.from_address(0xBAA450)
    # char *&m_pLastVehicleName = *(char **)0xBAA454;
    m_bDraw3dMarkers = ctypes.c_bool.from_address(0xBAA45C)
    m_Wants_To_Draw_Hud = ctypes.c_bool.from_address(0xBAA45D)
    m_fHelpMessageTime = ctypes.c_float.from_address(0xBAA460)
    m_fHelpMessageBoxWidth = ctypes.c_float.from_address(0x8D0934)
    m_bHelpMessagePermanent = ctypes.c_bool.from_address(0xBAA464)
    m_fHelpMessageStatUpdateValue = ctypes.c_float.from_address(0xBAA468)
    m_nHelpMessageMaxStatValue = ctypes.c_ushort.from_address(0xBAA46C)
    m_nHelpMessageStatId = ctypes.c_ushort.from_address(0xBAA470)
    m_bHelpMessageQuick = ctypes.c_bool.from_address(0xBAA472)
    m_nHelpMessageState = ctypes.c_int.from_address(0xBAA474)
    m_nHelpMessageFadeTimer = ctypes.c_int.from_address(0xBAA478)
    m_nHelpMessageTimer = ctypes.c_int.from_address(0xBAA47C)
    m_pHelpMessageToPrint = ctypes.c_char.from_address(0xBAA480)
    m_pLastHelpMessage = ctypes.c_char.from_address(0xBAA610)
    m_pHelpMessage = ctypes.c_char.from_address(0xBAA7A0)
    m_ZoneState = ctypes.c_int.from_address(0xBAA930)
    m_ZoneFadeTimer = ctypes.c_int.from_address(0xBAA934)
    m_ZoneNameTimer = ctypes.c_int.from_address(0xBAA938)
    m_Message = ctypes.c_char.from_address(0xBAB040)
    # char *&m_ZoneToPrint = *(char **)0xBAB1D0;
    # char *&m_pLastZoneName = *(char **)0xBAB1D4;
    # char *&m_pZoneName = *(char **)0xBAB1D8;
    m_ItemToFlash = ctypes.c_short.from_address(0xBAB1DC)
    bDrawingVitalStats = ctypes.c_bool.from_address(0xBAB1DE)
    # CSprite2d *Sprites = (CSprite2d *)0xBAB1FC;
    TimerMainCounterHideState = ctypes.c_short.from_address(0xBAA388)
    TimerMainCounterWasDisplayed = ctypes.c_bool.from_address(0xBAA38A)
    TimerCounterHideState = ctypes.c_short.from_address(0xBAA38C)
    TimerCounterWasDisplayed = ctypes.c_short.from_address(0xBAA394)
    OddJob2OffTimer = ctypes.c_int.from_address(0xBAA398)
    OddJob2Timer = ctypes.c_int.from_address(0xBAA3A0)
    OddJob2XOffset = ctypes.c_float.from_address(0xBAA39C)
    BigMessageAlpha = ctypes.c_float.from_address(0xBAA3A4)
    BigMessageInUse = ctypes.c_float.from_address(0xBAA3C0)
    BigMessageX = ctypes.c_float.from_address(0xBAA3DC)
    LastBigMessage = ctypes.c_float.from_address(0xBAABC0)
    OddJob2On = ctypes.c_ushort.from_address(0xBAB1E0)
    PagerXOffset = ctypes.c_float.from_address(0x8D0938)
    
    def draw():
        cleo.call_function(0x58FAE0)
    
    def draw_after_fade():
        cleo.call_function(0x58D490)
    
    def draw_area_name():
        cleo.call_function(0x58AA50)
    
    def draw_busted_wasted_message():
        cleo.call_function(0x58CA50)

    def draw_crosshairs():
        cleo.call_function(0x58E020)

    def draw_fade_state(fade_state: int, arg1 :int):
        cleo.call_function(0x58D580, 2, 0, fade_state, arg1)

    def draw_help_text():
        cleo.call_function(0x58B6E0)

    def draw_mission_timers():
        cleo.call_function(0x58B180)

    def draw_mission_title():
        cleo.call_function(0x58D240)

    def draw_oddjob_message(priority : int):
        cleo.call_function(0x58CC80, 1, 0, priority)

    def draw_radar():
        cleo.call_function(0x58A330)

    def draw_script_text(priority : int):
        cleo.call_function(0x58C080, 1, 0, priority)

    def draw_subtitles():
        cleo.call_function(0x58C250)

    def draw_success_failed_message():
        cleo.call_function(0x58C6A0)

    def draw_vehicle_names():
        cleo.call_function(0x58AEA0)

    def draw_vital_stats():
        cleo.call_function(0x589650)

    def get_rid_off_all_hud_messages(arg1 :int):
        cleo.call_function(0x588A50, 1, 0, arg1)
    
    def get_posY_based_on_health(playerId :int, pos :float, offset: int): 
        cleo.call_function(0x588B60, 3, 0, playerId, pos, offset)

    def help_message_displayed():
        cleo.call_function(0x588B50)

    def initialize():
        cleo.call_function(0x5BA850)

    def reinitialize():
        cleo.call_function(0x588880)

    def reset_wasted_text():
        cleo.call_function(0x589070)

    def set_big_message(message :str, style: int):
        cleo.call_function(0x588FC0, 2, 0, message, style)

    def set_help_message(message :str,  quick_msg :bool = False, permanent :bool = False, add_to_brief :bool = False) -> None:
        '''Shows a game hud help popup on top left corner of the screen with provided message string'''
        cleo.call_function(0x588BE0, 4, 0, message, quick_msg, permanent, add_to_brief)

    def set_help_message_stat_update(state :int, statId :int, diff :float, max :float):
        cleo.call_function(0x588D40, 4, 0, state, statId, diff, max)
    
    def set_help_message_with_number(message :str,  number :int, quick_msg :bool = False, permanent :bool = False, add_to_brief :bool = False) -> None:
        '''Shows a game hud help popup on top left corner of the screen with provided message string & number'''
        cleo.call_function(0x588E30, 4, 0, message, number, quick_msg, permanent, add_to_brief)
    
    def set_message(message :str):
        cleo.call_function(0x588F60, 1, 0, message)
    
    def set_vehicle_name(name :str):
        cleo.call_function(0x588F50, 1, 0, name)
    
    def set_zone_name(name :str, state :int):
        cleo.call_function(0x588BB0, 2, 0, name, state)

    def shutdown():
        cleo.call_function(0x588850)

    def draw_ammo( pPed :int, x :int, y :int, alpha :float):
        cleo.call_function(0x5893B0, 4, 0, pPed, x, y, alpha) 

    def draw_player_info():
        cleo.call_function(0x58EAF0)

    def draw_trip_skip():
        cleo.call_function(0x58A160)

    def draw_wanted():
        cleo.call_function(0x58D9A0)

    def draw_waeapon_icon( pPed :int, x :int, y :int, alpha :float):
        cleo.call_function(0x58D7D0, 4, 0, pPed, x, y, alpha) 
    
    def render_armour_bar( playerId :int, x :int, y :int):
        cleo.call_function(0x5890A0, 4, 0, playerId, x, y) 
    
    def render_breath_bar( playerId :int, x :int, y :int):
        cleo.call_function(0x589190, 4, 0, playerId, x, y) 
    
    def render_health_bar( playerId :int, x :int, y :int):
        cleo.call_function(0x589270, 4, 0, playerId, x, y) 

    

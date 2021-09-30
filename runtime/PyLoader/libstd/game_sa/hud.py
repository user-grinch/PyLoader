import cleo
from libstd.game_sa._cppinterface import mem_handler

class CHud(object):
    m_bScriptDontDisplayAreaName = mem_handler(0xBAA3F8, 1)
    m_bScriptDontDisplayVehicleName = mem_handler(0xBAA3F9, 1)
    m_bScriptForceDisplayWithCounters = mem_handler(0xBAA3FA, 1)
    m_bDrawClock = mem_handler(0xBAA400, 1)
    m_bDraw3dMarkers = mem_handler(0xBAA45C, 1)
    m_bWants_To_Draw_Hud = mem_handler(0xBAA45D, 1)
    m_bDrawVitalStats = mem_handler(0xBAB1DE, 1)
    m_LastWeapon = mem_handler(0xBAA410, 4)
    
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

# Create instance
CHud = CHud()

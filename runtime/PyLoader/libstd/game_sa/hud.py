import memory
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
    
    def draw(self):
        memory.call_function(0x58FAE0)
    
    def draw_after_fade(self):
        memory.call_function(0x58D490)
    
    def draw_area_name(self):
        memory.call_function(0x58AA50)
    
    def draw_busted_wasted_message(self):
        memory.call_function(0x58CA50)

    def draw_crosshairs(self):
        memory.call_function(0x58E020)

    def draw_fade_state(self, fade_state: int, arg1 :int):
        memory.call_function(0x58D580, 2, 0, fade_state, arg1)

    def draw_help_text(self):
        memory.call_function(0x58B6E0)

    def draw_mission_timers(self):
        memory.call_function(0x58B180)

    def draw_mission_title(self):
        memory.call_function(0x58D240)

    def draw_oddjob_message(self, priority : int):
        memory.call_function(0x58CC80, 1, 0, priority)

    def draw_radar(self):
        memory.call_function(0x58A330)

    def draw_script_text(self, priority : int):
        memory.call_function(0x58C080, 1, 0, priority)

    def draw_subtitles(self):
        memory.call_function(0x58C250)

    def draw_success_failed_message(self):
        memory.call_function(0x58C6A0)

    def draw_vehicle_names(self):
        memory.call_function(0x58AEA0)

    def draw_vital_stats(self):
        memory.call_function(0x589650)

    def get_rid_off_all_hud_messages(self, arg1 :int):
        memory.call_function(0x588A50, 1, 0, arg1)
    
    def get_posY_based_on_health(self, playerId :int, pos :float, offset: int): 
        memory.call_function(0x588B60, 3, 0, playerId, pos, offset)

    def help_message_displayed(self):
        memory.call_function(0x588B50)

    def initialize(self):
        memory.call_function(0x5BA850)

    def reinitialize(self):
        memory.call_function(0x588880)

    def reset_wasted_text(self):
        memory.call_function(0x589070)

    def set_big_message(self, message :str, style: int):
        memory.call_function(0x588FC0, 2, 0, message, style)

    def set_help_message(self, message :str,  quick_msg :bool = False, permanent :bool = False, add_to_brief :bool = False) -> None:
        '''Shows a game hud help popup on top left corner of the screen with provided message string'''
        memory.call_function(0x588BE0, 4, 0, message, quick_msg, permanent, add_to_brief)

    def set_help_message_stat_update(self, state :int, statId :int, diff :float, max :float):
        memory.call_function(0x588D40, 4, 0, state, statId, diff, max)
    
    def set_help_message_with_number(self, message :str,  number :int, quick_msg :bool = False, permanent :bool = False, add_to_brief :bool = False) -> None:
        '''Shows a game hud help popup on top left corner of the screen with provided message string & number'''
        memory.call_function(0x588E30, 4, 0, message, number, quick_msg, permanent, add_to_brief)
    
    def set_message(self, message :str):
        memory.call_function(0x588F60, 1, 0, message)
    
    def set_vehicle_name(self, name :str):
        memory.call_function(0x588F50, 1, 0, name)
    
    def set_zone_name(self, name :str, state :int):
        memory.call_function(0x588BB0, 2, 0, name, state)

    def shutdown(self):
        memory.call_function(0x588850)

    def draw_ammo(self, pPed :int, x :int, y :int, alpha :float):
        memory.call_function(0x5893B0, 4, 0, pPed, x, y, alpha) 

    def draw_player_info(self):
        memory.call_function(0x58EAF0)

    def draw_trip_skip(self):
        memory.call_function(0x58A160)

    def draw_wanted(self):
        memory.call_function(0x58D9A0)

    def draw_waeapon_icon(self, pPed :int, x :int, y :int, alpha :float):
        memory.call_function(0x58D7D0, 4, 0, pPed, x, y, alpha) 
    
    def render_armour_bar(self, playerId :int, x :int, y :int):
        memory.call_function(0x5890A0, 4, 0, playerId, x, y) 
    
    def render_breath_bar(self, playerId :int, x :int, y :int):
        memory.call_function(0x589190, 4, 0, playerId, x, y) 
    
    def render_health_bar(self, playerId :int, x :int, y :int):
        memory.call_function(0x589270, 4, 0, playerId, x, y) 

# Create instance
CHud = CHud()

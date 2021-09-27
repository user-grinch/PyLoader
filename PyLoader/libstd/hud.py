# Function definations for the intellisense
# Author: Grinch_
# Last updated on: 05/06/2021

import ctypes, cleo

class CHud:
    m_BigMessage = ctypes.c_char.from_address(0xBAACC0)
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
    
    def set_help_message(message :str,  quick_msg :bool = False, permanent :bool = False, add_to_brief :bool = False) -> None:
        '''Shows a game hud help popup on top left corner of the screen with provided message string'''
        cleo.call_function(0x588BE0, 4, 0, message, quick_msg, permanent, add_to_brief)

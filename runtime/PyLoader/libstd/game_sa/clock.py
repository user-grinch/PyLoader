from typing import List
import cleo
from libstd.game_sa._cppinterface import mem_handler

class CClock:
    m_daysInMonth :list = mem_handler(0x8CCF24, 1, list) # arr[12]
    m_bClockHasBeenStored = mem_handler(0xB70144, 1)
    ms_Stored_nGameClockSeconds = mem_handler(0xB70148, 2)
    ms_Stored_nGameClockMinutes = mem_handler(0xB7014A, 1)
    ms_Stored_nGameClockHours = mem_handler(0xB7014B, 1)
    ms_Stored_nGameClockDays = mem_handler(0xB7014C, 1)
    ms_Stored_nGameClockMonths = mem_handler(0xB7014D, 1)
    m_CurrentDay = mem_handler(0xB7014E, 1)
    ms_nGameClockSeconds = mem_handler(0xB70150, 2)
    ms_nGameClockMinutes = mem_handler(0xB70152, 1)
    ms_nGameClockHours = mem_handler(0xB70153, 1)
    ms_nGameClockDays = mem_handler(0xB70154, 1)
    ms_nGameClockMonth = mem_handler(0xB70155, 1)
    ms_nLastClockTick = mem_handler(0xB70158, 4)
    ms_nMillisecondsPerGameMinute = mem_handler(0xB7015C, 4) 

    # Returns number of minutes to specified hour & minute.
    def GetGameClockMinutesUntil(hours :int, minutes :int):
        return cleo.call_function(0x52CEB0, 2, 0, hours, minutes)

    # Returns true current hour is in range of two specified hours.
    def GetIsTimeInRange(hourA :int, hourB :int):
        return cleo.call_function(0x52CEE0, 2, 0, hourA, hourB)

    def Initialise(milisecondsPerGameMinute :int):
        cleo.call_function(0x52CD90, 1, 0, milisecondsPerGameMinute)

    # Normalizes game clock
    # For example hour of 24 means new day and hour 1.
    def NormaliseGameClock():
        cleo.call_function(0x52CDE0, 1, 0)

    # Sets new day
    # Directions (0 = one day backwards, 1 = one day forwards)
    def OffsetClockByADay(timeDirection :int):
        cleo.call_function(0x52D0B0, 1, 0, timeDirection)

    def RestoreClock(): 
        cleo.call_function(0x52D070, 0, 0)

    def SetGameClock(hours, minutes, day):
        cleo.call_function(0x52D150, 3, 0, hours, minutes, day)

    def StoreClock():
        cleo.call_function(0x52D020, 0, 0)

    def Update():
        cleo.call_function(0x52CF10, 0, 0)

# Create instance
CClock = CClock()

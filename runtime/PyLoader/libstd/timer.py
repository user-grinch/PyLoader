import cleo
from libstd.game_sa._cppinterface import mem_handler

class CTimer:
    m_bSkipProcessThisFrame = mem_handler(0xB7CB89, 1)
    m_bSlowMotionActive = mem_handler(0xB7CB88, 1)
    m_fGame_FPS = mem_handler(0xB7CB50, 4, float)
    m_CodePause = mem_handler(0xB7CB48, 1)
    m_UserPause = mem_handler(0xB7CB49, 1)
    m_FrameCounter = mem_handler(0xB7CB4C, 4)
    ms_fTimeStepNonClipped = mem_handler(0xB7CB58, 4, float)
    ms_fTimeStep = mem_handler(0xB7CB5C, 4, float)

    m_snPPPPreviousTimeInMilliseconds = mem_handler(0xB7CB6C, 4)
    m_snPPPreviousTimeInMilliseconds = mem_handler(0xB7CB70, 4)
    m_snPPreviousTimeInMilliseconds = mem_handler(0xB7CB74, 4)
    m_snPreviousTimeInMillisecondsNonClipped = mem_handler(0xB7CB68, 4)
    ms_fOldTimeStep = mem_handler(0xB7CB54, 4, float)
    ms_fSlowMotionScale = mem_handler(0xB7CB60, 4, float)

    # game speed
    ms_fTimeScale = mem_handler(0xB7CB64, 4, float)
    m_snPreviousTimeInMilliseconds = mem_handler(0xB7CB78, 4)
    m_snTimeInMillisecondsPauseMode = mem_handler(0xB7CB7C, 4)
    m_snTimeInMillisecondsNonClipped = mem_handler(0xB7CB80, 4)
    m_snTimeInMilliseconds = mem_handler(0xB7CB84, 4)

    def Initialise(self):
        cleo.call_function(0x5617E0)
    
    def Shutdown(self):
        cleo.call_function(0x5618C0)
    
    def UpdateVariables(self, timeStep :float):
        cleo.call_function(0x5618D0, 1, 0, timeStep)

    def Suspend(self):
        cleo.call_function(0x5619D0)

    def Resume(self):
        cleo.call_function(0x561A00)

    def GetCyclesPerMillisecond(self) -> int:
        return cleo.call_function(0x561A40)

    def GetCurrentTimeInCycles(self) -> int:
        return cleo.call_function(0x561A80)
    
    # cycles per ms * 20
    def GetCyclesPerFrame(self) -> int:
        return cleo.call_function(0x561A50)

    def Stop(self):
        cleo.call_function(0x561AA0)

    def GetIsSlowMotionActive(self) -> bool:
        return cleo.call_function(0x561AD0)

    def StartUserPause(self):
        cleo.call_function(0x561AF0)

    def EndUserPause(self):
        cleo.call_function(0x561B00)

    def Update(self):
        cleo.call_function(0x561B10)
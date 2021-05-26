from pathlib import Path
import dataclasses
import platform
import ctypes
import sys

from .codes import errors
from .codes import config
from .codes.errors import get_description
from .structs.info import BASS_INFO, BASS_DEVICEINFO

BASSVERSION = 0x204
BASSVERSIONTEXT = '2.4'

HERE = Path(__file__).parent
BASS_DLL = HERE / "vendor" / "bass"

# Carry over from pybass, TODO remove?
if sys.hexversion < 0x02060000:
    ctypes.c_bool = ctypes.c_byte

if platform.system().lower() == "windows":
    bass_module = ctypes.WinDLL(BASS_DLL.as_posix())
    func_type = ctypes.WINFUNCTYPE
else:
    bass_module = ctypes.CDLL(
        './libbass.so',
        mode=ctypes.RTLD_GLOBAL)
    func_type = ctypes.CFUNCTYPE

BASS_Init = func_type(
    ctypes.c_bool,
    ctypes.c_int,
    ctypes.c_ulong,
    ctypes.c_ulong,
    ctypes.c_ulong,
    ctypes.c_void_p)(('BASS_Init', bass_module))

BASS_IsStarted = func_type(ctypes.c_bool)(("BASS_IsStarted", bass_module))

BASS_Free = func_type(ctypes.c_bool)(('BASS_Free', bass_module))

BASS_ErrorGetCode = func_type(ctypes.c_int)(('BASS_ErrorGetCode', bass_module))

BASS_GetCPU = func_type(ctypes.c_float)(('BASS_GetCPU', bass_module))

BASS_SetVolume = func_type(ctypes.c_bool, ctypes.c_float)(('BASS_SetVolume', bass_module))
BASS_GetVolume = func_type(ctypes.c_float)(('BASS_GetVolume', bass_module))

BASS_SetConfig = func_type(ctypes.c_bool,
                           ctypes.c_ulong,
                           ctypes.c_ulong)(('BASS_SetConfig', bass_module))

BASS_GetConfig = func_type(ctypes.c_ulong, ctypes.c_ulong)(('BASS_GetConfig', bass_module))

BASS_GetVersion = func_type(ctypes.c_ulong)(('BASS_GetVersion', bass_module))

BASS_GetInfo = func_type(ctypes.c_bool, ctypes.POINTER(BASS_INFO))(('BASS_GetInfo', bass_module))

BASS_GetDevice = func_type(ctypes.c_ulong)(('BASS_GetDevice', bass_module))
BASS_SetDevice = func_type(ctypes.c_bool, ctypes.c_ulong)(('BASS_SetDevice', bass_module))

BASS_GetDeviceInfo = func_type(ctypes.c_bool, ctypes.c_ulong, ctypes.POINTER(BASS_DEVICEINFO))(('BASS_GetDeviceInfo', bass_module))

# Master play controls
BASS_Pause =  func_type(ctypes.c_bool)(("BASS_Pause", bass_module))
BASS_Start = func_type(ctypes.c_bool)(("BASS_Start", bass_module))
BASS_Stop = func_type(ctypes.c_bool)(("BASS_Stop", bass_module))



@dataclasses.dataclass
class BassError:
    code: int
    desc: str


class BassException(Exception):
    def __init__(self, code, desc, detail: str = None):
        self.code = code
        self.desc = desc
        self.detail = detail

    def __str__(self):
        return f"{self.code=}: {self.desc=} - {self.detail=}"

    def __repr__(self):
        return f"{self.code=}: {self.desc=} - {self.detail=}"

class BassMissingDevice(Exception):
    def __init__(self, device_id):
        self.device_id = device_id

    def __repr__(self):
        return f"{self.device_id} device doesn't exist"

class Bass:
    LIB_INITED = False
    LAST_ERROR = None

    @classmethod
    def GetError(cls) -> BassError:
        code = BASS_ErrorGetCode()
        return BassError(code, get_description(code))

    @classmethod
    def RaiseError(cls, detail = None) -> None:
        """

        Raises:
            BassException
        """
        error = cls.GetError()
        if error.code != errors.OK:
            raise BassException(error.code, error.desc, detail)

    @classmethod
    def Init(cls, device: int = -1,
             freq: int = 44100,
             flags: int = 0,
             win: int = 0,
             clsid: int = 0,
             enable_ogg_prescan: bool = True) -> bool:
        """
        Initializes the BASS library if it hasn't already been started.


        Args:
            device: -1 = default

            freq: Output sample rate

            flags: TODO

            win: The application's main window.  0 == desktop window.   This is only needed when using directsound output

            clsid: Class identifier of the object to create, will be used to initialize DirectSound.  None/Null == use default

            enable_ogg_prescan: If set to True, by default, this pre-scans ogg files so they can be seeked/repositioned.  Otherwise seeking on
             an ogg file will reset to position 0.

        Returns:

        """

        if cls.LIB_INITED is True:
            return True

        code = BASS_Init(device, freq, flags, win, clsid)
        if code == errors.OK:
            cls.LIB_INITED = True

            if enable_ogg_prescan:
                retval = Bass.SetConfig(config.OGG_PRESCAN, True)
                if retval != errors.OK:
                    # raise BassError
                    pass

            return True

        cls.RaiseError()
        return False

    @classmethod
    def Free(cls):
        """
            Closes down the BASS library
        :return:
        """
        retval = BASS_Free()
        if retval is not True:
            cls.RaiseError()

        cls.LIB_INITED = False


    @classmethod
    def GetCPU(cls) -> float:
        """
        Get the current CPU usage by Bass Lib.  This either works or it doesn't and I don't care right now.

        Returns: CPU usage as a floating point between 0 and 1


        """
        return BASS_GetCPU()

    @classmethod
    def GetVolumeLevel(cls) -> float:
        return BASS_GetVolume()

    @classmethod
    def SetVolumeLevel(cls, level: float):
        """

        Args:
            level: Valid input is between 0 and 1.0

        Returns:

        """
        BASS_SetVolume(level)

    @classmethod
    def GetVolumePerc(cls):
        volume = cls.GetVolumeLevel()
        return 100 * volume

    @classmethod
    def SetVolumePerc(cls, perc):
        assert perc >= 0
        assert perc <= 100
        volume = perc / 100
        cls.SetVolumeLevel(volume)


    @classmethod
    def SetConfig(cls, config_flag, value):
        return BASS_SetConfig(config_flag, value)

    @classmethod
    def GetConfig(cls, config_flag):
        return BASS_GetConfig(config_flag)

    @classmethod
    def EnableOggPrescan(cls):
        """
        Necessary for seeking position with opus/ogg files
        Returns:
        """
        return cls.SetConfig(config.OGG_PRESCAN, True)

    @classmethod
    def GetVersion(cls):
        return BASS_GetVersion()

    @classmethod
    def GetLibInfo(cls) -> BASS_INFO:
        """
            This could be a memory leak vector if called too often and not del'd

        Returns:

        """
        bi = BASS_INFO()
        retval = BASS_GetInfo(bi)
        if retval is not True:
            cls.RaiseError()

        return bi

    @classmethod
    def GetCurrentDeviceID(cls) -> ctypes.c_ulong:
        return BASS_GetDevice()

    @classmethod
    def SetCurrentDevice(cls, device_id):
        retval = BASS_SetDevice(device_id)
        if retval is not True:
            raise BassMissingDevice(device_id)

    @classmethod
    def GetDeviceInfo(cls, device_id = None) -> BASS_DEVICEINFO:
        """
            Just like GetLibInfo, this could be a potential memory leak of the BASS_DEVICEINFO struct isn't freed
            between uses.
        Args:
            device_id:

        Returns:

        """
        if device_id is None:
            device_id = cls.GetCurrentDeviceID()

        bd = BASS_DEVICEINFO()
        retval = BASS_GetDeviceInfo(device_id, bd)
        if retval is not True:
            cls.RaiseError()

        return bd

    @classmethod
    def Pause(cls) -> bool:
        """
        Stops the output, pausing all musics/samples/streams on it.

        :return:
        """

        return BASS_Pause()

    @classmethod
    def Start(cls) -> bool:
        """
        Starts (or resumes) the output.

        :return:
        """
        return BASS_Start()

    @classmethod
    def Stop(cls) -> bool:
        """
        Stops the output, stopping all musics/samples/streams on it.

        :return:
        """
        return BASS_Stop()




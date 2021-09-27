import ctypes
import platform
import pathlib

from datatypes import HANDLE

HERE = pathlib.Path(__file__).parent
TAG_FILE = HERE / "vendor" / "tags"


if platform.system().lower() == "windows":
    tags_module = ctypes.WinDLL(TAG_FILE)
    func_type = ctypes.WINFUNCTYPE
else:
    tags_module = ctypes.CDLL(TAG_FILE)
    func_type = ctypes.CFUNCTYPE

TAG_VERSION = 18

TAGS_GetLastErrorDesc = func_type(ctypes.c_char_p)(('TAGS_GetLastErrorDesc', tags_module))
TAGS_Read = func_type(ctypes.c_char_p, ctypes.c_ulong, ctypes.c_char_p)(('TAGS_Read', tags_module))
TAGS_GetVersion = func_type(ctypes.c_ulong)(('TAGS_GetVersion', tags_module))


class BassTags:

    @classmethod
    def GetTags(cls, handle: HANDLE, format: str):
        return TAGS_Read(handle, format)

    @classmethod
    def GetDefaultTags(cls, handle):
        """
            TODO I have no idea what this format does
        :param handle:
        :return:
        """
        fmt_str = '%IFV1(%ITRM(%TRCK),%ITRM(%TRCK). )%IFV2(%ITRM(%ARTI),%ICAP(%ITRM(%ARTI)),no artist) - %IFV2(%ITRM(%TITL),%ICAP(%ITRM(%TITL)),no title)%IFV1(%ITRM(%ALBM), - %IUPC(%ITRM(%ALBM)))%IFV1(%YEAR, %(%YEAR%))%IFV1(%ITRM(%GNRE), {%ITRM(%GNRE)})%IFV1(%ITRM(%CMNT), [%ITRM(%CMNT)])'
        return cls.GetTags(handle, fmt_str)


    @classmethod
    def GetVersion(cls):
        return TAGS_GetVersion()

    @classmethod
    def GetLastErrorDesc(cls):
        return TAGS_GetLastErrorDesc()

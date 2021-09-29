from __future__ import annotations
from libstd.game_sa.__cppinterface import *
from libstd.game_sa.rw.rwplcore import RwLLLink
from raster import RwRaster
from texdict import RwTexDictionary


class RwTexture(GTAClass):
    # region RwTexture_baseinfo

    SIZE = 0x58  # 88 bytes
    LLLINK_OFFSET = 0x8

    def write_to_address(self, address: int):
        super(RwTexture, self).write_to_address(address)
        write_memory(address + 0x00, 4, self.m_pRaster.address, True)
        write_memory(address + 0x04, 4, self.m_pTexDictionary.address, True)
        self.m_lInDictionary.write_to_address(address + 0x08)
        write_string_to_memory(address + 0x10, self.m_sName, 32)
        write_string_to_memory(address + 0x30, self.m_sMaskName, 32)
        write_memory(address + 0x50, 4, self.m_nFilterAddressing, True)
        write_memory(address + 0x54, 4, self.m_nRefCount, True)

    def __init__(self, address: Optional[int] = None):
        super(RwTexture, self).__init__(address)

    # endregion

    # region RwTexture_fields

    @property  # RwRaster* m_pRaster  @0x0_4
    def m_pRaster(self) -> RwRaster:
        return RwRaster(read_memory(self.address, 4, True))

    @m_pRaster.setter
    def m_pRaster(self, val: RwRaster):
        static_type_check(RwRaster, val)
        write_memory(self.address, 4, val.address, True)

    @property  # RwTexDictionary* m_pTexDictionary  @0x4_4
    def m_pTexDictionary(self) -> RwTexDictionary:
        return RwTexDictionary(read_memory(self.address + 0x4, 4, True))

    @m_pTexDictionary.setter
    def m_pTexDictionary(self, val: RwTexDictionary):
        static_type_check(RwTexDictionary, val)
        write_memory(self.address, 4, val.address, True)

    @property  # RwLLLink m_InDictionary  @0x8_8
    def m_lInDictionary(self) -> RwLLLink[RwTexture]:
        return RwLLLink(self.address + 0x8)

    @m_lInDictionary.setter
    def m_lInDictionary(self, val: RwLLLink[RwTexture]):
        static_type_check(RwLLLink[RwTexture], val)
        val.write_to_address(self.address + 0x8)

    @property  # RwChar m_sName[32]  @0x10_32
    def m_sName(self) -> str:
        return read_string_from_memory(self.address + 0x10, 32)

    @m_sName.setter
    def m_sName(self, val: str):
        static_type_check(str, val)
        write_string_to_memory(self.address + 0x10, val, 32)

    @property  # RwChar m_sMaskName[32]  @0x30_32
    def m_sMaskName(self) -> str:
        return read_string_from_memory(self.address + 0x30, 32)

    @m_sMaskName.setter
    def m_sMaskName(self, val: str):
        static_type_check(str, val)
        write_string_to_memory(self.address + 0x30, val, 32)

    @property  # RwUInt32 m_nFilterAddressing  @0x50_4
    def m_nFilterAddressing(self) -> int:
        return read_memory(self.address + 0x50, 4, True)

    @m_nFilterAddressing.setter
    def m_nFilterAddressing(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x50, 4, val, True)

    @property  # RwInt32 m_nRefCount  @0x54_4
    def m_nRefCount(self) -> int:
        return read_memory(self.address + 0x54, 4, True)

    @m_nRefCount.setter
    def m_nRefCount(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x54, 4, val, True)

    # endregion

    # region RwTexture_APImacros

    def GetRaster(self) -> RwRaster:
        return self.m_pRaster

    def AddRef(self):
        self.m_nRefCount += 1

    def GetName(self) -> str:
        return self.m_sName

    def GetMaskName(self) -> str:
        return self.m_sMaskName

    def GetDictionary(self) -> RwTexDictionary:
        return self.m_pTexDictionary

    def SetFilterMode(self, filtering: int):
        static_type_check(int, filtering)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x000000FF) | (filtering & 0x000000FF)

    def GetFilterMode(self) -> int:
        return self.m_nFilterAddressing & 0x000000FF

    def SetAddressing(self, addressing: int):
        static_type_check(int, addressing)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x0000FF00) | \
                                   ((addressing << 8) & 0x00000F00) | \
                                   ((addressing << 12) & 0x0000F000)

    def SetAddressingU(self, addressingU: int):
        static_type_check(int, addressingU)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x00000F00) | ((addressingU << 8) & 0x00000F00)

    def SetAddressingV(self, addressingV: int):
        static_type_check(int, addressingV)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x0000F000) | ((addressingV << 12) & 0x0000F000)

    def GetAddressing(self) -> int:
        if (self.m_nFilterAddressing & 0x00000F00) >> 8 == (self.m_nFilterAddressing & 0x0000F000) >> 12:
            return (self.m_nFilterAddressing & 0x0000F000) >> 12
        return 0

    def GetAddressingU(self) -> int:
        return (self.m_nFilterAddressing & 0x00000F00) >> 8

    def GetAddressingV(self) -> int:
        return (self.m_nFilterAddressing & 0x0000F000) >> 12

    # endregion

    # region RwTexture_APIfunctions

    @staticmethod
    def Create(raster: RwRaster) -> RwTexture:
        static_type_check(RwRaster, raster)
        return RwTexture(call_function(0x7F37C0, 1, 1, raster.address))

    def Destroy(self) -> bool:
        return bool(call_function(0x7F3820, 1, 1, self.address))

    def SetRaster(self, raster: RwRaster) -> RwTexture:
        static_type_check(RwRaster, raster)
        return RwTexture(call_function(0x7F35D0, 2, 2, self.address, raster.address))

    # endregion

from __future__ import annotations
from libstd.game_sa._cppinterface import *
from libstd.game_sa.rw.rwplcore import *

# TYPEDEFS (only for further references)
RwRaster = type()
RwTexDictionary = type()
RwTexture = type()
# END_TYPEDEFS


class RwRaster(gtaclass):
    SIZE = None

    def __init__(self, addr):
        super().__init__(addr)
    
    def write_to_address(self, address):
        pass


class RwTexDictionary(gtaclass):
    ######################
    # RwTexDictionary base info
    ######################
    SIZE = 0x18  # 24 bytes
    LLLINK_OFFSET = 0x10

    def __init__(self, addr):
        super().__init__(addr)
    
    def write_to_address(self, address):
        self.m_Object.write_to_address(address + 0x00)
        self.m_TexturesInDict.write_to_address(address + 0x08)
        self.m_lInInstance.write_to_address(address + 0x10)


    ######################
    # RwTexDictionary class fields
    ######################
    @property  # RwObject m_Object  @0x0_8
    def m_Object(self) -> RwObject:
        return RwObject(self.address)
    @m_Object.setter
    def m_Object(self, val: RwObject):
        check_func_type(RwObject, val)
        val.write_to_address(self.address)
    
    @property  # RwLinkList m_TexturesInDict  @0x8_8
    def m_TexturesInDict(self) -> RwLinkList[RwTexture]:
        return RwLinkList(self.address + 0x8)
    @m_TexturesInDict.setter
    def m_TexturesInDict(self, val: RwLinkList[RwTexture]):
        check_func_type(RwLinkList[RwTexture], val)
        val.write_to_address(self.address + 0x8)
    
    @property  # RwLLLink m_InInstance  @0x10_8
    def m_lInInstance(self) -> RwLLLink[RwTexDictionary]:
        return RwLLLink(self.address + 0x10)
    @m_lInInstance.setter
    def m_lInInstance(self, val: RwLLLink[RwTexDictionary]):
        check_func_type(RwLinkList[RwTexture], val)
        val.write_to_address(self.address + 0x10)


class RwTexture(gtaclass):
    ######################
    # RwTexture base info
    ######################
    SIZE = 0x58  # 88 bytes
    LLLINK_OFFSET = 0x8

    def __init__(self, addr):
        super().__init__(addr)
    
    def write_to_address(self, address):
        write_memory(address + 0x00, 4, self.m_pRaster, True)
        write_memory(address + 0x04, 4, self.m_pTexDictionary, True)
        self.m_lInDictionary.write_to_address(address + 0x08)
        write_string_to_memory(address + 0x10, self.m_sName, 32)
        write_string_to_memory(address + 0x30, self.m_sMaskName, 32)
        write_memory(address + 0x50, 4, self.m_nFilterAddressing, True)
        write_memory(address + 0x54, 4, self.m_nRefCount, True)


    ######################
    # RwTexture class fields
    ######################
    @property  # RwRaster* m_pRaster  @0x0_4
    def m_pRaster(self) -> RwRaster:
        return RwRaster(read_memory(self.address, 4, True))
    @m_pRaster.setter
    def m_pRaster(self, val: RwRaster):
        check_func_type(RwRaster, val)
        write_memory(self.address, 4, val.address, True)
    
    @property  # RwTexDictionary* m_pTexDictionary  @0x4_4
    def m_pTexDictionary(self) -> RwTexDictionary:
        return RwTexDictionary(read_memory(self.address + 0x4, 4, True))
    @m_pTexDictionary.setter
    def m_pTexDictionary(self, val: RwTexDictionary):
        check_func_type(RwTexDictionary, val)
        write_memory(self.address, 4, val.address, True)
    
    @property  # RwLLLink m_InDictionary  @0x8_8
    def m_lInDictionary(self) -> RwLLLink[RwTexture]:
        return RwLLLink(self.address + 0x8)
    @m_lInDictionary.setter
    def m_lInDictionary(self, val: RwLLLink[RwTexture]):
        check_func_type(RwLLLink[RwTexture], val)
        val.write_to_address(self.address + 0x8)
    
    @property  # RwChar m_sName[32]  @0x10_32
    def m_sName(self) -> str:
        return read_string_from_memory(self.address + 0x10, 32)
    @m_sName.setter
    def m_sName(self, val: str):
        check_func_type(str, val)
        write_string_to_memory(self.address + 0x10, val, 32)
    
    @property  # RwChar m_sMaskName[32]  @0x30_32
    def m_sMaskName(self) -> str:
        return read_string_from_memory(self.address + 0x30, 32)
    @m_sMaskName.setter
    def m_sMaskName(self, val: str):
        check_func_type(str, val)
        write_string_to_memory(self.address + 0x30, val, 32)
    
    @property  # RwUInt32 m_nFilterAddressing  @0x50_4
    def m_nFilterAddressing(self) -> int:
        return read_memory(self.address + 0x50, 4, True)
    @m_nFilterAddressing.setter
    def m_nFilterAddressing(self, val: int):
        check_func_type(int, val)
        write_memory(self.address + 0x50, 4, val, True)
    
    @property  # RwInt32 m_nRefCount  @0x54_4
    def m_nRefCount(self) -> int:
        return read_memory(self.address + 0x54, 4, True)
    @m_nRefCount.setter
    def m_nRefCount(self, val: int):
        check_func_type(int, val)
        write_memory(self.address + 0x54, 4, val, True)


    ######################
    # RwTexture RenderWare API Macros
    ######################
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
        check_func_type(int, filtering)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x000000FF) | (filtering & 0x000000FF)
    
    def GetFilterMode(self) -> int:
        return self.m_nFilterAddressing & 0x000000FF
    
    def SetAddressing(self, addressing: int):
        check_func_type(int, addressing)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x0000FF00) | \
            ((addressing <<  8) & 0x00000F00) |                              \
            ((addressing << 12) & 0x0000F000)
    
    def SetAddressingU(self, addressingU: int):
        check_func_type(int, addressingU)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x00000F00) | ((addressingU << 8) & 0x00000F00)
    
    def SetAddressingV(self, addressingV: int):
        check_func_type(int, addressingV)
        self.m_nFilterAddressing = (self.m_nFilterAddressing & ~0x0000F000) | ((addressingV << 12) & 0x0000F000)

    def GetAddressing(self) -> int:
        if (self.m_nFilterAddressing & 0x00000F00) >> 8 == (self.m_nFilterAddressing & 0x0000F000) >> 12:
            return (self.m_nFilterAddressing & 0x0000F000) >> 12
        return 0
    
    def GetAddressingU(self) -> int:
        return (self.m_nFilterAddressing & 0x00000F00) >> 8
    
    def GetAddressingV(self) -> int:
        return (self.m_nFilterAddressing & 0x0000F000) >> 12


    ######################
    # RwTexture RenderWare API functions
    ######################
    @classmethod
    def Create(cls, raster: RwRaster) -> RwTexture:
        check_func_type(RwRaster, raster)
        return RwTexture(call_function(0x7F37C0, 1, 1, raster.address))
    
    def Destroy(self) -> bool:
        return bool(call_function(0x7F3820, 1, 1, self.address))
    
    def SetRaster(self, raster: RwRaster) -> RwTexture:
        check_func_type(RwRaster, raster)
        return RwTexture(call_function(0x7F35D0, 2, 2, self.address, raster.address))

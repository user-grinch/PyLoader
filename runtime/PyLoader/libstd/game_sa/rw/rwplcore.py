from __future__ import annotations
from libstd.game_sa._cppinterface import *

# TYPEDEFS (only for further references)
class RwObject: pass
class RwLLLink: pass
class RwLinkList: pass
# END_TYPEDEFS


class RwObject(gtaclass):
    ######################
    # RwObject base info
    ######################
    SIZE = 0x8  # 8 bytes

    def __init__(self, addr):
        super().__init__(addr)

    def write_to_address(self, address):
        write_memory(address + 0x0, 1, self.m_nType, True)
        write_memory(address + 0x1, 1, self.m_nSubType, True)
        write_memory(address + 0x2, 1, self.m_nFlags, True)
        write_memory(address + 0x3, 1, self.m_nPrivateFlags, True)
        write_memory(address + 0x4, 4, self.m_nParent, True)
    

    ######################
    # RwObject class fields
    ######################
    @property  # RwUInt8 m_nType  @0x0_1
    def m_nType(self) -> int:
        return read_memory(self.address, 1, True)
    @m_nType.setter
    def m_nType(self, val: int):
        check_func_type(int, val)
        write_memory(self.address, 1, val, True)
    
    @property  # RwUInt8 m_nSubType  @0x1_1
    def m_nSubType(self) -> int:
        return read_memory(self.address + 0x1, 1 , True)
    @m_nSubType.setter
    def m_nSubType(self, val: int):
        check_func_type(int, val)
        write_memory(self.address + 0x1, 1, val, True)
    
    @property  # RwUInt8 m_nFlags  @0x2_1
    def m_nFlags(self) -> int:
        return read_memory(self.address + 0x2, 1, True)
    @m_nFlags.setter
    def m_nFlags(self, val: int):
        check_func_type(int, val)
        write_memory(self.address + 0x2, 1, val, True)
    
    @property  # RwUint8 m_nPrivateFlags  @0x3_1
    def m_nPrivateFlags(self) -> int:
        return read_memory(self.address + 0x3, 1, True)
    @m_nPrivateFlags.setter
    def m_nPrivateFlags(self, val: int):
        check_func_type(int, val)
        write_memory(self.address + 0x4, 1, val, True)

    @property  # void* m_pParent
    def m_nParent(self) -> pointer:
        return read_memory(self.address + 0x4, 4, True)
    @m_nParent.setter
    def m_nParent(self, val: pointer):
        check_func_type(pointer, val)
        write_memory(self.address + 0x4, 4, val, True)


    ######################
    # RwObject RenderWare API Macros
    ######################
    def Copy(self, dest: RwObject):
        check_func_type(RwObject, dest)
        self.write_to_address(dest)
        write_memory(dest.address + 0x4, 4, 0, True)
    
    def Initialise(self, T: int, subT: int):
        check_func_type(int, T)
        check_func_type(int, subT)
        self.m_nType = T
        self.m_nSubType = subT
        self.m_nFlags = 0x0
        self.m_nPrivateFlags = 0x0
        self.m_nParent = 0
    
    def GetType(self) -> int:
        return self.m_nType
    
    def SetType(self, T: int):
        self.m_nType = T
    
    def GetSubType(self) -> int:
        return self.m_nSubType
    
    def SetSubType(self, subT: int):
        self.m_nSubType = subT
    
    def GetFlags(self) -> int:
        return self.m_nFlags
    
    def SetFlags(self, flags: int):
        self.m_nFlags = flags
    
    def TestFlags(self, flags: int) -> bool:
        check_func_type(int, flags)
        return bool(self.GetFlags & flags)
    
    def GetPrivateFlags(self) -> int:
        return self.m_nPrivateFlags
    
    def SetPrivateFlags(self, flags: int):
        self.m_nPrivateFlags = flags
    
    def TestPrivateFlags(self, flags: int) -> bool:
        check_func_type(int, flags)
        return bool(self.m_nPrivateFlags & flags)
    
    def GetParent(self) -> pointer:
        return self.m_nParent
    
    def SetParent(self, parent: pointer):
        self.m_nParent = parent


class RwLLLink(gtaclass, Generic[T]):
    ######################
    # RwLLLink base info
    ######################
    SIZE = 0x8  # 8 bytes

    def __init__(self, addr):
        super().__init__(addr)
    
    def write_to_address(self, address):
        write_memory(address + 0x0, 4, self.m_pNext, True)
        write_memory(address + 0x4, 4, self.m_pPrev, True)


    ######################
    # RwLLLink class fields
    ######################
    @property  # RwLLLink* m_pNext  @0x0_4
    def m_pNext(self) -> RwLLLink[T]:
        return RwLLLink[T](read_memory(self.address, 4, True))
    @m_pNext.setter
    def m_pNext(self, val: RwLLLink[T]):
        check_func_type(RwLLLink[T], val)
        write_memory(self.address, 4, val.address)
    
    @property  # RwLLLink* m_pPrev  @0x4_4
    def m_pPrev(self) -> RwLLLink[T]:
        return RwLLLink[T](read_memory(self.address + 0x4, 4, True))
    @m_pPrev.setter
    def m_pPrev(self, val: RwLLLink[T]):
        check_func_type(RwLLLink[T], val)
        write_memory(self.address + 0x4, 4, val.address)

    ######################
    # RwLLLink RenderWare API Macros
    ######################
    def GetData(self, T: gtaclass) -> T:
        try:
            return T(self.address - T.LLLINK_OFFSET)
        except AttributeError:
            raise TypeError("Can't get data from a class without a RwLLLink field")
    
    def GetNext(self) -> RwLLLink[T]:
        return self.m_pNext
    
    def GetPrevious(self) -> RwLLLink[T]:
        return self.m_pPrev

    def Initialise(self):
        self.m_pNext = 0x0
        self.m_pPrev = 0x0
    
    def Unlink(self):
        self.m_pPrev.m_pNext = self.m_pNext
        self.m_pNext.m_pPrev = self.m_pPrev


class RwLinkList(gtaclass, Generic[T]):
    ######################
    # RwLinkList base info
    ######################
    SIZE = 0x8  # 8 bytes

    def __init__(self, addr):
        super().__init__(addr)
    
    def write_to_address(self, address):
        self.m_Link.write_to_address(address)
    

    ######################
    # RwLinkList class fields
    ######################
    @property  # RwLLLink m_Link  @0x0_8
    def m_Link(self) -> RwLLLink[T]:
        return RwLLLink(self.address)
    @m_Link.setter
    def m_Link(self, val: RwLLLink[T]):
        check_func_type(RwLLLink[T], val)
        val.write_to_address(self.address)
    
    ######################
    # RwLinkList RenderWare API Macros
    ######################
    def Initialise(self):
        self.m_Link.m_pNext = self.m_Link
        self.m_Link.m_pPrev = self.m_Link
    
    def Empty(self):
        self.m_Link.m_pNext = self.m_Link
    
    def AddLLLink(self, link: RwLLLink[T]):
        check_func_type(RwLLLink[T], link)
        link.m_pNext = self.m_Link.m_pNext
        link.m_pPrev = self.m_Link
        self.m_Link.m_pNext.m_pPrev = link
        self.m_Link.m_pNext = link
    
    def GetFirstLLLink(self) -> RwLLLink[T]:
        return self.m_Link.m_pNext
    
    def GetLastLLLink(self) -> RwLLLink[T]:
        return self.m_Link.m_pPrev
    
    def GetTerminator(self) -> RwLLLink[T]:
        return self.m_Link


class RwTextureAddressMode(Enum):
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0
    rwTEXTUREADDRESSWRAP = 1
    rwTEXTUREADDRESSMIRROR = 2
    rwTEXTUREADDRESSCLAMP = 3
    rwTEXTUREADDRESSBORDER = 4
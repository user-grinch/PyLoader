from __future__ import annotations
from libstd.game_sa.__cppinterface import *


class RwObject(GTAClass):
    # region RwObject_baseinfo

    SIZE = 0x8  # 8 bytes

    def __init__(self, address: Optional[int] = None):
        super(RwObject, self).__init__(address)
    
    def write_to_address(self, address: int):
        super(RwObject, self).write_to_address(address)
        write_memory(address + 0x0, 1, self.m_nType, True)
        write_memory(address + 0x1, 1, self.m_nSubType, True)
        write_memory(address + 0x2, 1, self.m_nFlags, True)
        write_memory(address + 0x3, 1, self.m_nPrivateFlags, True)
        write_memory(address + 0x4, 4, self.m_nParent, True)
    
    # endregion

    # region RwObject_fields

    @property  # RwUInt8 m_nType  @0x0_1
    def m_nType(self) -> int:
        return read_memory(self.address, 1, True)

    @m_nType.setter
    def m_nType(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        write_memory(self.address, 1, val, True)

    @property  # RwUInt8 m_nSubType  @0x1_1
    def m_nSubType(self) -> int:
        return read_memory(self.address + 0x1, 1, True)

    @m_nSubType.setter
    def m_nSubType(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        write_memory(self.address + 0x1, 1, val, True)

    @property  # RwUInt8 m_nFlags  @0x2_1
    def m_nFlags(self) -> int:
        return read_memory(self.address + 0x2, 1, True)

    @m_nFlags.setter
    def m_nFlags(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        write_memory(self.address + 0x2, 1, val, True)

    @property  # RwUint8 m_nPrivateFlags  @0x3_1
    def m_nPrivateFlags(self) -> int:
        return read_memory(self.address + 0x3, 1, True)

    @m_nPrivateFlags.setter
    def m_nPrivateFlags(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        write_memory(self.address + 0x4, 1, val, True)

    @property  # void* m_pParent
    def m_nParent(self) -> pointer:
        return read_memory(self.address + 0x4, 4, True)

    @m_nParent.setter
    def m_nParent(self, val: pointer):
        static_type_check(pointer, val); static_int_check('p', val)
        write_memory(self.address + 0x4, 4, val, True)

    # endregion

    # region RwObject_APIMacros

    def Copy(self, dest: RwObject):
        static_type_check(RwObject, dest)
        self.write_to_address(dest.address)
        write_memory(dest.address + 0x4, 4, 0, True)

    def Initialise(self, T: int, subT: int):
        static_type_check(int, T)
        static_type_check(int, subT)
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
        static_type_check(int, flags)
        return bool(self.m_nFlags & flags)

    def GetPrivateFlags(self) -> int:
        return self.m_nPrivateFlags

    def SetPrivateFlags(self, flags: int):
        self.m_nPrivateFlags = flags

    def TestPrivateFlags(self, flags: int) -> bool:
        static_type_check(int, flags)
        return bool(self.m_nPrivateFlags & flags)

    def GetParent(self) -> pointer:
        return self.m_nParent

    def SetParent(self, parent: pointer):
        self.m_nParent = parent

    # endregion

from __future__ import annotations
from libstd.game_sa.__cppinterface import *


class RwLLLink(GTAClass, Generic[T]):
    # region RwLLLink_baseinfo

    SIZE = 0x8

    def __init__(self, address: Optional[int] = None):
        super(RwLLLink, self).__init__(address)

    def write_to_address(self, address: int):
        super(RwLLLink, self).write_to_address(address)
        write_memory(address + 0x0, 4, self.m_pNext.address, True)
        write_memory(address + 0x4, 4, self.m_pPrev.address, True)

    # endregion

    # region RwLLLink_fields

    @property  # RwLLLink* m_pNext  @0x0_4
    def m_pNext(self) -> RwLLLink[T]:
        return RwLLLink[T](read_memory(self.address, 4, True))

    @m_pNext.setter
    def m_pNext(self, val: RwLLLink[T]):
        static_type_check(RwLLLink[T], val)
        write_memory(self.address, 4, val.address, True)

    @property  # RwLLLink* m_pPrev  @0x4_4
    def m_pPrev(self) -> RwLLLink[T]:
        return RwLLLink[T](read_memory(self.address + 0x4, 4, True))

    @m_pPrev.setter
    def m_pPrev(self, val: RwLLLink[T]):
        static_type_check(RwLLLink[T], val)
        write_memory(self.address + 0x4, 4, val.address, True)

    # endregion

    # region RwLLLink_APIMacros

    def GetData(self, T) -> T:
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

    # endregion


class RwLinkList(GTAClass, Generic[T]):
    # region RwLLLink_baseinfo

    SIZE = 0x8  # 8 bytes

    def __init__(self, address: Optional[int] = None):
        super().__init__(address)

    def write_to_address(self, address):
        self.m_Link.write_to_address(address)

    # endregion

    # region RwLinkList_fields

    @property  # RwLLLink m_Link  @0x0_8
    def m_Link(self) -> RwLLLink[T]:
        return RwLLLink(self.address)

    @m_Link.setter
    def m_Link(self, val: RwLLLink[T]):
        static_type_check(RwLLLink[T], val)
        val.write_to_address(self.address)

    # endregion

    # region RwLinkList_APIMacros

    def Initialise(self):
        self.m_Link.m_pNext = self.m_Link
        self.m_Link.m_pPrev = self.m_Link

    def Empty(self):
        self.m_Link.m_pNext = self.m_Link

    def AddLLLink(self, link: RwLLLink[T]):
        static_type_check(RwLLLink[T], link)
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

    # endregion

from __future__ import annotations
from libstd.game_sa.__cppinterface import *
from libstd.game_sa.rw.rwplcore import RwLLLink, RwLinkList, RwObject
from texture import RwTexture


class RwTexDictionary(GTAClass):
    # region RwTexDictionary_baseinfo

    SIZE = 0x18  # 24 bytes
    LLLINK_OFFSET = 0x10

    def __init__(self, address: Optional[int] = None):
        super(RwTexDictionary, self).__init__(address)

    def write_to_address(self, address: int):
        super(RwTexDictionary, self).write_to_address(address)
        self.m_Object.write_to_address(address + 0x00)
        self.m_TexturesInDict.write_to_address(address + 0x08)
        self.m_lInInstance.write_to_address(address + 0x10)

    # endregion

    # region RwTexDictionary_fields

    @property  # RwObject m_Object  @0x0_8
    def m_Object(self) -> RwObject:
        return RwObject(self.address)

    @m_Object.setter
    def m_Object(self, val: RwObject):
        static_type_check(RwObject, val)
        val.write_to_address(self.address)

    @property  # RwLinkList m_TexturesInDict  @0x8_8
    def m_TexturesInDict(self) -> RwLinkList[RwTexture]:
        return RwLinkList(self.address + 0x8)

    @m_TexturesInDict.setter
    def m_TexturesInDict(self, val: RwLinkList[RwTexture]):
        static_type_check(RwLinkList[RwTexture], val)
        val.write_to_address(self.address + 0x8)

    @property  # RwLLLink m_InInstance  @0x10_8
    def m_lInInstance(self) -> RwLLLink[RwTexDictionary]:
        return RwLLLink(self.address + 0x10)

    @m_lInInstance.setter
    def m_lInInstance(self, val: RwLLLink[RwTexDictionary]):
        static_type_check(RwLinkList[RwTexture], val)
        val.write_to_address(self.address + 0x10)

    # endregion

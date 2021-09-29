from __future__ import annotations
from libstd.game_sa.__cppinterface import *


class CRGBA(GTAClass):
    # region CRGBA_baseinfo

    SIZE = 0x4  # 4 bytes

    def __init__(self, address: Optional[int] = None):
        super(CRGBA, self).__init__(address)

    def write_to_address(self, address: int):
        super(CRGBA, self).write_to_address(address)
        write_memory(self.address + 0x0, 1, self.m_nRed, True)
        write_memory(self.address + 0x1, 1, self.m_nGreen, True)
        write_memory(self.address + 0x2, 1, self.m_nBlue, True)
        write_memory(self.address + 0x3, 1, self.m_nAlpha, True)

    # endregion

    # region CRGBA_fields

    @property  # uint8 m_nRed  @0x0_1
    def m_nRed(self) -> int:
        return read_memory(self.address, 1, True)

    @m_nRed.setter
    def m_nRed(self, val: int):
        static_type_check(int, val)
        static_int_check('C', val)
        write_memory(self.address, 1, val, True)

    @property  # uint8 m_nGreen  @0x1_1
    def m_nGreen(self) -> int:
        return read_memory(self.address + 0x1, 1, True)

    @m_nGreen.setter
    def m_nGreen(self, val: int):
        static_type_check(int, val)
        static_int_check('C', val)
        write_memory(self.address + 0x1, 1, val, True)

    @property  # uint8 m_nBlue  @0x2_1
    def m_nBlue(self) -> int:
        return read_memory(self.address + 0x2, 1, True)

    @m_nBlue.setter
    def m_nBlue(self, val: int):
        static_type_check(int, val)
        static_int_check('C', val)
        write_memory(self.address + 0x2, 1, val, True)

    @property  # uint8 m_nAlpha  @0x3_1
    def m_nAlpha(self) -> int:
        return read_memory(self.address + 0x3, 1, True)

    @m_nAlpha.setter
    def m_nAlpha(self, val: int):
        static_type_check(int, val)
        static_int_check('C', val)
        write_memory(self.address + 0x3, 1, val, True)

    # endregion

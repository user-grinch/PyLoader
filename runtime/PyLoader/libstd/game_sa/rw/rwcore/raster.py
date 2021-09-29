from __future__ import annotations
from libstd.game_sa.__cppinterface import *


class RwRaster(GTAClass):
    # region RwRaster_basinfo

    SIZE = 0x34  # 52 bytes

    def __init__(self, address: Optional[int] = None):
        super(RwRaster, self).__init__(address)

    def write_to_address(self, address: int):
        super(RwRaster, self).write_to_address(address)
        write_memory(address + 0x00, 4, self.m_pParent.address, True)
        write_memory(address + 0x04, 4, self.m_apPixels, True)
        write_memory(address + 0x08, 4, self.m_apPalette, True)
        write_memory(address + 0x0C, 4, self.m_nWidth, True)
        write_memory(address + 0x10, 4, self.m_nHeight, True)
        write_memory(address + 0x14, 4, self.m_nDepth, True)
        write_memory(address + 0x18, 4, self.m_nStride, True)
        write_memory(address + 0x1C, 2, self.m_nOffsetX, True)
        write_memory(address + 0x1E, 2, self.m_nOffsetY, True)
        write_memory(address + 0x20, 1, self.m_nType, True)
        write_memory(address + 0x21, 1, self.m_nFlags, True)
        write_memory(address + 0x22, 1, self.m_nPrivateFlags, True)
        write_memory(address + 0x23, 1, self.m_nFormat, True)
        write_memory(address + 0x24, 4, self.m_apOriginalPixels, True)
        write_memory(address + 0x28, 4, self.m_nOriginalWidth, True)
        write_memory(address + 0x2C, 4, self.m_nOriginalHeight, True)
        write_memory(address + 0x30, 4, self.m_nOriginalStride, True)

    # endregion

    # region RwRaster_fields

    @property  # RwRaster* m_pParent  @0x0_4
    def m_pParent(self) -> RwRaster:
        return RwRaster(read_memory(self.address, 4, True))

    @m_pParent.setter
    def m_pParent(self, val: RwRaster):
        static_type_check(RwRaster, val)
        write_memory(self.address, 4, val.address, True)

    @property  # RwUInt8* m_apPixels  @0x4_4
    def m_apPixels(self) -> pointer:
        return read_memory(self.address + 0x4, 4, True)

    @m_apPixels.setter
    def m_apPixels(self, val: pointer):
        static_type_check(pointer, val)
        write_memory(self.address + 0x4, 4, val, True)

    @property  # RwUInt8* m_apPalette  @0x8_4
    def m_apPalette(self) -> pointer:
        return read_memory(self.address + 0x8, 4, True)

    @m_apPalette.setter
    def m_apPalette(self, val: pointer):
        static_type_check(pointer, val)
        write_memory(self.address + 0x8, 4, val, True)

    @property  # RwInt32 m_nWidth  @0xC_4
    def m_nWidth(self) -> int:
        return read_memory(self.address + 0xC, 4, True)

    @m_nWidth.setter
    def m_nWidth(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0xC, 4, val, True)

    @property  # RwInt32 m_nHeight  @0x10_4
    def m_nHeight(self) -> int:
        return read_memory(self.address + 0x10, 4, True)

    @m_nHeight.setter
    def m_nHeight(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x10, 4, val, True)

    @property  # RwInt32 m_nDepth  @0x14_4
    def m_nDepth(self) -> int:
        return read_memory(self.address + 0x14, 4, True)

    @m_nDepth.setter
    def m_nDepth(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x14, 4, val, True)

    @property  # RwInt32 m_nStride  @0x18_4
    def m_nStride(self) -> int:
        return read_memory(self.address + 0x18, 4, True)

    @m_nStride.setter
    def m_nStride(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x18, 4, val, True)

    @property  # RwInt16 m_nOffsetX  @0x1C_2
    def m_nOffsetX(self) -> int:
        return read_memory(self.address + 0x1C, 2, True)

    @m_nOffsetX.setter
    def m_nOffsetX(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x1C, 2, val, True)

    @property  # RwInt16 m_nOffsetY  @0x1E_2
    def m_nOffsetY(self) -> int:
        return read_memory(self.address + 0x1E, 2, True)

    @m_nOffsetY.setter
    def m_nOffsetY(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x1E, 2, val, True)

    @property  # RwUInt8 m_nType  @0x20_1
    def m_nType(self) -> int:
        return read_memory(self.address + 0x20, 1, True)

    @m_nType.setter
    def m_nType(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x20, 1, val, True)

    @property  # RwUInt8 m_nFlags  @0x21_1
    def m_nFlags(self) -> int:
        return read_memory(self.address + 0x21, 1, True)

    @m_nFlags.setter
    def m_nFlags(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x21, 1, val, True)

    @property  # RwUInt8 m_nPrivateFlags  @0x22_1
    def m_nPrivateFlags(self) -> int:
        return read_memory(self.address + 0x22, 1, True)

    @m_nPrivateFlags.setter
    def m_nPrivateFlags(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x22, 1, val, True)

    @property  # RwUInt8 m_nFormat  @0x23_1
    def m_nFormat(self) -> int:
        return read_memory(self.address + 0x23, 1, True)

    @m_nFormat.setter
    def m_nFormat(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x23, 1, val, True)

    @property  # RwUInt8* m_apOriginalPixels  @0x24_4
    def m_apOriginalPixels(self) -> pointer:
        return read_memory(self.address + 0x24, 4, True)

    @m_apOriginalPixels.setter
    def m_apOriginalPixels(self, val: pointer):
        static_type_check(pointer, val)
        write_memory(self.address + 0x4, 24, val, True)

    @property  # RwInt32 m_nOriginalWidth  @0x28_4
    def m_nOriginalWidth(self) -> int:
        return read_memory(self.address + 0x28, 4, True)

    @m_nOriginalWidth.setter
    def m_nOriginalWidth(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x28, 4, val, True)

    @property  # RwInt32 m_nOriginalHeight  @0x2C_4
    def m_nOriginalHeight(self) -> int:
        return read_memory(self.address + 0x2C, 4, True)

    @m_nOriginalHeight.setter
    def m_nOriginalHeight(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x2C, 4, val, True)

    @property  # RwInt32 m_nOriginalStride  @0x30_4
    def m_nOriginalStride(self) -> int:
        return read_memory(self.address + 0x30, 4, True)

    @m_nOriginalStride.setter
    def m_nOriginalStride(self, val: int):
        static_type_check(int, val)
        write_memory(self.address + 0x30, 4, val, True)

    # endregion

    # region RwRaster_APIfunctions

    @staticmethod
    def Create(width: int, height: int, depth: int, flags: int) -> RwRaster:
        static_type_check(int, width)
        static_type_check(int, height)
        static_type_check(int, depth)
        static_type_check(int, flags)
        return RwRaster(call_function(0x7FB230, 4, 4, width, height, depth, flags))

    def Destroy(self) -> bool:
        return bool(call_function(0x7FB020, 1, 1, self.address))

    # endregion
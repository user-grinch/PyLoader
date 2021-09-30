from __future__ import annotations
from libstd.game_sa.__cppinterface import *


class CRGBA(GTAClass):
    # region CRGBA_baseinfo

    SIZE = 0x4  # 4 bytes

    def __init__(self, address: Optional[int] = None):
        super(CRGBA, self).__init__(address)
        if not self.address:
            self.__red: int = 0
            self.__green: int = 0
            self.__blue: int = 0
            self.__alpha: int = 0

    def write_to_address(self, address: int):
        super(CRGBA, self).write_to_address(address)
        write_memory(self.address + 0x0, 1, self.m_nRed, True)
        write_memory(self.address + 0x1, 1, self.m_nGreen, True)
        write_memory(self.address + 0x2, 1, self.m_nBlue, True)
        write_memory(self.address + 0x3, 1, self.m_nAlpha, True)

    # endregion

    # region CRGBA_PYTHONconstructore

    @staticmethod
    def New() -> CRGBA: return CRGBA()

    @staticmethod
    def New_RGB(red: int, green: int, blue: int) -> CRGBA:
        cls = CRGBA()
        cls.FromRGB(red, green, blue)
        return cls

    @staticmethod
    def New_RGBA(red: int, green: int, blue: int, alpha: int) -> CRGBA:
        cls = CRGBA()
        cls.FromRGBA(red, green, blue, alpha)
        return cls

    @staticmethod
    def New_CRGBA(cls: CRGBA):
        cls = CRGBA()
        cls.FromCRGBA(cls)
        return cls

    @staticmethod
    def New_Int(value: int):
        cls = CRGBA()
        cls.FromInt(value)
        return cls

    # def New_RwRGBA  # TODO

    # endregion

    # region CRGBA_fields

    @property  # uint8 m_nRed  @0x0_1
    def m_nRed(self) -> int:
        if self.address:
            return read_memory(self.address, 1, True)
        return self.__red

    @m_nRed.setter
    def m_nRed(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        if self.address:
            write_memory(self.address, 1, val, True)
            return
        self.__red = val

    @property  # uint8 m_nGreen  @0x1_1
    def m_nGreen(self) -> int:
        if self.address:
            return read_memory(self.address + 0x1, 1, True)
        return self.__green

    @m_nGreen.setter
    def m_nGreen(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        if self.address:
            write_memory(self.address + 0x1, 1, val, True)
            return
        self.__green = val

    @property  # uint8 m_nBlue  @0x2_1
    def m_nBlue(self) -> int:
        if self.address:
            return read_memory(self.address + 0x2, 1, True)
        return self.__blue

    @m_nBlue.setter
    def m_nBlue(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        if self.address:
            write_memory(self.address + 0x2, 1, val, True)
            return
        self.__blue = val

    @property  # uint8 m_nAlpha  @0x3_1
    def m_nAlpha(self) -> int:
        if self.address:
            return read_memory(self.address + 0x3, 1, True)
        return self.__alpha

    @m_nAlpha.setter
    def m_nAlpha(self, val: int):
        static_type_check(int, val); static_int_check('C', val)
        if self.address:
            write_memory(self.address + 0x3, 1, val, True)
            return
        self.__alpha = val

    # endregion

    # region CRGBA_methods

    def FromRGB(self, red: int, green: int, blue: int):
        static_type_check(int, red); static_int_check('C', red)
        static_type_check(int, green); static_int_check('C', green)
        static_type_check(int, blue); static_int_check('C', blue)
        self.m_nRed, self.m_nGreen, self.m_nBlue = red, green, blue

    def FromRGBA(self, red: int, green: int, blue: int, alpha: int):
        static_type_check(int, alpha); static_int_check('C', alpha)
        self.FromRGB(red, green, blue)
        self.m_nAlpha = alpha

    def FromInt(self, value: int):
        static_type_check(int, value); static_int_check('I', value)
        self.m_nRed = (value >> 24) & 0xFF
        self.m_nGreen = (value >> 16) & 0xFF
        self.m_nBlue = (value >> 8) & 0xFF
        self.m_nAlpha = value & 0xFF

    def FromCRGBA(self, cls: CRGBA):
        static_type_check(CRGBA, cls)
        self.FromRGBA(cls.m_nRed, cls.m_nGreen, cls.m_nBlue, cls.m_nAlpha)

    def FromCRGBACustomAlpha(self, cls: CRGBA, alpha: int):
        static_type_check(CRGBA, cls)
        static_type_check(int, alpha); static_int_check('C', alpha)
        self.FromRGBA(cls.m_nRed, cls.m_nGreen, cls.m_nBlue, alpha)

    def FromARGB(self, value: int):
        static_type_check(int, value); static_int_check('I', value)
        self.m_nAlpha = (value >> 24) & 0xFF
        self.m_nRed = (value >> 16) & 0xFF
        self.m_nGreen = (value >> 8) & 0xFF
        self.m_nBlue = value & 0xFF

    # def FromRwRGBA  # TODO
    # def ToRwRGBA    # TODO

    def ToInt(self) -> int:
        return self.m_nAlpha | (self.m_nBlue << 8) | (self.m_nGreen << 16) | (self.m_nRed << 24)

    def ToIntARGB(self) -> int:
        return self.m_nBlue | (self.m_nGreen << 8) | (self.m_nRed << 16) | (self.m_nAlpha << 24)

    def Invert(self):
        self.FromRGB(255 - self.m_nRed, 255 - self.m_nGreen, 255 - self.m_nBlue)

    def Inverted(self) -> CRGBA:
        cls = self.Clone()
        cls.Invert()
        return cls

    def __eq__(self, other: CRGBA) -> bool:
        return self.m_nRed == other.m_nRed and \
               self.m_nGreen == other.m_nGreen and \
               self.m_nBlue == other.m_nBlue and \
               self.m_nAlpha == other.m_nAlpha

    def Clone(self) -> CRGBA:
        cls = CRGBA()
        cls.FromCRGBA(self)
        return cls

    def ToRGB(self) -> CRGBA:
        cls = self.Clone()
        cls.m_nAlpha = 255
        return cls

    # endregion

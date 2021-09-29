from __future__ import annotations
from libstd.game_sa.__cppinterface import *
from libstd.game_sa.rw import RwTexture, RwTextureAddressMode


class CSprite2d(GTAClass):
    # region CSprite2d_baseinfo

    SIZE = 0x4  # 4 bytes

    def __init__(self, address: Optional[int] = None):
        super(CSprite2d, self).__init__(address)

    def write_to_address(self, address: int):
        super(CSprite2d, self).write_to_address(address)
        write_memory(address + 0x0, 4, self.m_pTexture.address, True)

    # endregion

    # region CSprite2d_fields

    @property
    def m_pTexture(self) -> RwTexture:
        return RwTexture(read_memory(self.address + 0x0, 4, True))

    @m_pTexture.setter
    def m_pTexture(self, value: RwTexture):
        static_type_check(RwTexture, value)
        write_memory(self.address + 0x0, 4, value.address, True)

    # endregion

    # region CSprite2d_methods

    def _Constructor(self):
        call_method(0x727230, self.address)

    def _Destructor(self):
        call_method(0x7281E0, self.address)

    def Delete(self):
        call_method(0x727240, self.address)

    def SetTexture(self, name: str, mask: Optional[str] = None):
        static_type_check(str, name)
        if mask:
            static_type_check(str, mask)
            call_method(0x7272B0, self.address, 2, 2, name, mask)
        else:
            call_method(0x727270, self.address, 1, 1, name)

    def SetAddressingUV(self,
                        modeU: Union[RwTextureAddressMode, int],
                        modeV: Union[RwTextureAddressMode, int]):
        static_type_check(RwTextureAddressMode, modeU)
        static_type_check(RwTextureAddressMode, modeV)
        call_method(0x727270, self.address, 2, 2, integer_or_enum(modeU), integer_or_enum((modeV)))

    def SetAddressing(self, modeUV: Union[RwTextureAddressMode, int]):
        static_type_check(RwTextureAddressMode, modeUV)
        call_method(0x727320, self.address, 1, 1, modeUV)

    def SetRenderState(self):
        call_method(0x727B30, self.address)

    # endregion

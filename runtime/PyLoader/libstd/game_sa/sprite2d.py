from libstd.game_sa._cppinterface import *
from libstd.game_sa.rw.rwcore import RwTexture


class CSprite2d(gtaclass):
    SIZE = 0x4  # 4 bytes

    def __init__(self, addr):
        super().__init__(addr)
    
    def write_to_address(self, address):
        pass

    @property  # RwTexture* m_pTexture  @0x0_4
    def m_pTexture(self):
        return RwTexture(read_memory(self.address, 4, True))
    @m_pTexture.setter
    def m_pTexture(self, val: RwTexture):
        check_func_type(RwTexture, val)
        write_memory(self.address, 4, val.address, True)
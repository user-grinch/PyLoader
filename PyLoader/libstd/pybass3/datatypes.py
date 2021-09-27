import ctypes

QWORD = ctypes.c_int64
def LOBYTE(a): return (ctypes.c_byte)(a)
def HIBYTE(a): return (ctypes.c_byte)((a)>>8)
def LOWORD(a): return (ctypes.c_ushort)(a)
def HIWORD(a): return (ctypes.c_ushort)((a)>>16)
def MAKEWORD(a,b): return (ctypes.c_ushort)(((a)&0xff)|((b)<<8))
def MAKELONG(a,b): return (ctypes.c_ulong)(((a)&0xffff)|((b)<<16))


HANDLE = ctypes.c_ulong
HMUSIC = ctypes.c_ulong	  # MOD music handle
HSAMPLE = ctypes.c_ulong  # sample handle
HCHANNEL = ctypes.c_ulong # playing sample's channel handle
HSTREAM = ctypes.c_ulong  # sample stream handle
HRECORD = ctypes.c_ulong  # recording handle
HSYNC = ctypes.c_ulong  # synchronizer handle
HDSP = ctypes.c_ulong  # DSP handle
HFX = ctypes.c_ulong		# DX8 effect handle
HPLUGIN = ctypes.c_ulong	# Plugin handle
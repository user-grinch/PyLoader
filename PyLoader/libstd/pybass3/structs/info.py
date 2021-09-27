import ctypes


class BASS_INFO(ctypes.Structure):
    _fields_ = [('flags', ctypes.c_ulong),  # device capabilities (DSCAPS_xxx flags)
                ('hwsize', ctypes.c_ulong),  # size of total device hardware memory
                ('hwfree', ctypes.c_ulong),  # size of free device hardware memory
                ('freesam', ctypes.c_ulong),  # number of free sample slots in the hardware
                ('free3d', ctypes.c_ulong),  # number of free 3D sample slots in the hardware
                ('minrate', ctypes.c_ulong),  # min sample rate supported by the hardware
                ('maxrate', ctypes.c_ulong),  # max sample rate supported by the hardware
                ('eax', ctypes.c_bool),  # device supports EAX? (always FALSE if BASS_DEVICE_3D was not used)
                ('minbuf', ctypes.c_ulong),  # recommended minimum buffer length in ms (requires BASS_DEVICE_LATENCY)
                ('dsver', ctypes.c_ulong),  # DirectSound version
                ('latency', ctypes.c_ulong),  # delay (in ms) before start of playback (requires BASS_DEVICE_LATENCY)
                ('initflags', ctypes.c_ulong),  # BASS_Init "flags" parameter
                ('speakers', ctypes.c_ulong),  # number of speakers available
                ('freq', ctypes.c_ulong)  # current output rate (Vista/OSX only)
                ]


# Device info structure
class BASS_DEVICEINFO(ctypes.Structure):
    _fields_ = [('name', ctypes.c_char_p),  # description
                ('driver', ctypes.c_char_p),  # driver
                ('flags', ctypes.c_ulong)
                ]

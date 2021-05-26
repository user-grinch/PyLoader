# BASS_ChannelIsActive return values
ACTIVE_STOPPED = 0
ACTIVE_PLAYING = 1
ACTIVE_STALLED = 2
ACTIVE_PAUSED = 3
ACTIVE_PAUSED_DEVICE = 4

# BASS_ChannelGetLength/GetPosition/SetPosition modes
POS_BYTE	=		0		# byte position
POS_MUSIC_ORDER	= 1		# order.row position, MAKELONG(order,row)
POS_OGG			= 3		# OGG bitstream number
POS_RESET		=	0x2000000 # flag: reset user file buffers
POS_RELATIVE	=	0x4000000 # flag: seek relative to the current position
POS_INEXACT	=	0x8000000 # flag: allow seeking to inexact position
POS_DECODE	=		0x10000000 # flag: get the decoding (not playing) position
POS_DECODETO	=	0x20000000 # flag: decode to the position instead of seeking
POS_SCAN		=	0x40000000 # flag: scan to the position

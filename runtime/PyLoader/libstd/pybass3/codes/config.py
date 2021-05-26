THREE_D_ALGORITHM = 10 # The 3D algorithm for software mixed 3D channels

# BASS_SetConfig options
BUFFER = 0 # Playback buffer length.
UPDATEPERIOD = 1 # Update period of playback buffers
GVOL_SAMPLE = 4 # Global sample volume.
GVOL_STREAM = 5 # Global stream volume
GVOL_MUSIC = 6 # Global MOD music volume.
CURVE_VOL = 7 # Volume translation curve.
CURVE_PAN = 8 # Panning translation curve.
FLOATDSP = 9 # Pass 32-bit floating-point sample data to all DSP functions?

NET_TIMEOUT = 11 #  Time to wait for a server to respond to a connection request
NET_BUFFER = 12 # Internet download buffer length.
PAUSE_NOPLAY = 13 # Prevent channels being played when the output is paused?
NET_PREBUF = 15 # Amount to pre-buffer before playing internet streams.
NET_PASSIVE = 18 # Use passive mode in FTP connections?
REC_BUFFER = 19 # Recording buffer length.
NET_PLAYLIST = 21 # Process URLs in playlists?
MUSIC_VIRTUAL = 22 # IT virtual channels.
VERIFY = 23 #  File format verification length.
UPDATETHREADS = 24 # Number of update threads.
DEV_BUFFER = 27 # Output device buffer length.
VISTA_TRUEPOS = 30 # Enable true play position mode on Windows Vista and newer?
IOS_MIXAUDIO = 34 #
DEV_DEFAULT = 36 # Include a "Default" entry in the output device list?
NET_READTIMEOUT = 37 # Time to wait for a server to deliver more data.
VISTA_SPEAKERS = 38 # Enable speaker assignment with panning/balance control on Windows Vista and newer?
IOS_SPEAKER = 39 #
HANDLES = 41 # Number of existing HMUSIC / HRECORD / HSAMPLE / HSTREAM handles.
UNICODE = 42 # Unicode device information?
SRC = 43 #  Default sample rate conversion quality.
SRC_SAMPLE = 44 # Default sample rate conversion quality for samples.
ASYNCFILE_BUFFER = 45 # Asynchronous file reading buffer length.
OGG_PRESCAN = 47 # Pre-scan chained OGG files?

# BASS_SetConfigPtr options
NET_AGENT = 16 # "User-Agent" header.
NET_PROXY = 17 # Proxy server settings.
IOS_NOTIFY = 46
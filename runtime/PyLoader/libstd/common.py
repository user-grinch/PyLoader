import _common
from .vk_codes import keys

def key_pressed(vk_code :keys = -1) -> bool:
    '''Checks whether a key is pressed. For a list of virtual keys check here http://www.kbdedit.com/manual/low_level_vk_list.html'''
    
    return _common.key_pressed(vk_code)

def get_pyloader_version() -> str:
    '''Returns internal PyLoader version string'''
    
    return _common.get_pyloader_version()

def get_working_dir() -> str:
    '''Returns PyLoader directory path string'''
    
    return _common.get_working_dir()

def get_game_dir() -> str:
    '''Returns game directory path string'''
    
    return _common.get_game_dir()

def wait(time_ms: int = 0):
    '''Freezes the script for specified amount of time. Must be used inside each loop'''
    
    _common.wait(time_ms)

def test_cheat(cheat :str) -> bool:
	'''Checks whether the particular character sequence was pressed'''

	return _common.test_cheat(cheat)

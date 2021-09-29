# Function definations for the intellisense
# Author: Grinch_
# Last updated on: 29/09/2021

import _events

def on_script_terminate(error_occured: bool):
    '''Called after a script has been terminated'''
    pass
        
def on_veh_create(hveh :int) -> None:
    '''Called after a new vehicle is created'''
    pass

def on_veh_render(hveh :int) -> None:
    '''Called when a vehicle is being rendered'''
    pass

def on_veh_destroy(hveh :int) -> None:
    '''Called before a vehicle is destroyed'''
    pass

def on_ped_create(hped :int) -> None:
    '''Called after a new ped is created'''
    pass

def on_ped_render(hped :int) -> None:
    '''Called when a ped is being rendered'''
    pass

def on_ped_destroy(hped :int) -> None:
    '''Called before a ped is destroyed'''
    pass

def on_obj_create(hobj :int) -> None:
    '''Called after a new object is created'''
    pass

def on_obj_render(hobj :int) -> None:
    '''Called when a object is being rendered'''
    pass

def on_obj_destroy(hobj :int) -> None:
    '''Called before a object is destroyed'''
    pass

def on_game_restart() -> None:
    '''Called when a game is restarted(newgame & savegame)'''
    pass

def on_save_load() -> None:
    '''Called when a save game is loaded'''
    pass
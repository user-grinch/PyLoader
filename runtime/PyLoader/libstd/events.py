# Function definations for the intellisense
# Author: Grinch_
# Last updated on: 07/06/2021

import _events

def on_script_terminate(error_occured: bool):
	'''Callback function, is called after a script has been terminated'''
    pass
        
def on_veh_create(hveh :int) -> None:
    '''Callback function, is called after a new vehicle is created'''
    pass

def on_veh_render(hveh :int) -> None:
    '''Callback function, is called when a vehicle is being rendered'''
    pass

def on_veh_destroy(hveh :int) -> None:
    '''Callback function, is called before a vehicle is destroyed'''
    pass

def on_ped_create(hped :int) -> None:
    '''Callback function, is called after a new ped is created'''
    pass

def on_ped_render(hped :int) -> None:
    '''Callback function, is called when a ped is being rendered'''
    pass

def on_ped_destroy(hped :int) -> None:
    '''Callback function, is called before a ped is destroyed'''
    pass

def on_obj_create(hobj :int) -> None:
    '''Callback function, is called after a new object is created'''
    pass

def on_obj_render(hobj :int) -> None:
    '''Callback function, is called when a object is being rendered'''
    pass

def on_obj_destroy(hobj :int) -> None:
    '''Callback function, is called before a object is destroyed'''
    pass

from typing import Tuple
import _addition

def get_car_handle(pVeh :int) -> int:
	'''Get vehicle handle from pointer'''

	return _addition.get_car_handle(pVeh)

def get_car_pointer(hveh :int) -> int:
	'''Get vehicle pointer from handle'''

	return _addition.get_car_pointer(hveh)

def get_char_handle(pPed :int) -> int:
	'''Get char handle from pointer'''

	return _addition.get_char_handle(pPed)

def get_char_pointer(hped :int) -> int:
	'''Get char pointer from handle'''

	return _addition.get_char_pointer(hped)

def get_closest_ped() -> int:
	'''Returns the closest ped to player'''

	return _addition.get_closest_ped()

def get_closest_vehicle() -> int:
	'''Returns the closest vehicle to player'''

	return _addition.get_closest_vehicle()

def get_largest_gangid_in_zone() -> int:
	'''Returns the gang id of the largest gang in player's current zone'''

	return _addition.get_largest_gangid_in_zone()

def get_object_handle(pObj :int) -> int:
	'''Get object handle from pointer'''

	return _addition.get_object_handle(pObj)

def get_object_pointer(hObj :int) -> int:
	'''Get object pointer from handle'''

	return _addition.get_object_pointer(hObj)

def get_player_targeted_char() -> int:
	'''Get the char player is targetting with a weapon'''

	return _addition.get_player_targeted_char()

def get_target_marker_coords() -> Tuple[float, float, float]:
	'''Get coordinates of target marker. Returns -1, -1, -1 on failure'''

	return _addition.get_target_marker_coords()

def get_vehicle_current_gear(hveh :int) -> int:
	'''Get the current gear of the vehicle'''

	return _addition.get_vehicle_current_gear(hveh)

def get_vehicle_model_from_name(name :str) -> int:
	'''Get vehicle model from name'''

	return _addition.get_vehicle_model_from_name(name)

def get_vehicle_model_name(model :int) -> str:
	'''Get vehicle name from model'''

	return _addition.get_vehicle_model_name(model)

def get_vehicle_number_of_gears(hveh :int) -> int:
	'''Get number of total vehicle gears'''

	return _addition.get_vehicle_number_of_gears(hveh)

def is_on_cutscene() -> bool:
	'''Is a cutscene being played'''

	return _addition.is_on_cutscene()

def is_on_mission() -> bool:
	'''Is a mission running'''

	return _addition.is_on_mission()

def is_vehicle_engine_on(hveh :int) -> bool:
	'''Is vehicle engine is turned on'''

	return _addition.is_vehicle_engine_on(hveh)

def is_vehicle_siren_on(hveh: int) -> bool:
	'''Is vehicle siren is on'''

	return _addition.is_vehicle_siren_on(hveh)

def set_vehicle_engine_state(hveh :int, state: bool) -> None:
	'''Sets the engine state of the vehicle'''

	_addition.set_vehicle_engine_state(hveh, state)


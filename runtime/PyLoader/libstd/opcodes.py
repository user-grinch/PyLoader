# Function definations for the intellisense
# Author: Grinch_
# Last updated on: 06/06/2021

from typing import Tuple
import _opcodes

def shake_cam(time: int) -> None:
	'''More info: https://gtamods.com/wiki/0003/ https://gtagmodding.com/opcode-database/opcode/0003/'''
	_opcodes.shake_cam(time)

def line(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/0052/ https://gtagmodding.com/opcode-database/opcode/0052/'''
	_opcodes.line(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def create_player(unknown1: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/0053/ https://gtagmodding.com/opcode-database/opcode/0053/'''
	return _opcodes.create_player(unknown1, x_coord, y_coord, z_coord)

def create_char(unknown1: int, unknown2: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/009a/ https://gtagmodding.com/opcode-database/opcode/009A/'''
	return _opcodes.create_char(unknown1, unknown2, x_coord, y_coord, z_coord)

def delete_char(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/009b/ https://gtagmodding.com/opcode-database/opcode/009B/'''
	_opcodes.delete_char(hchar)

def get_char_coordinates(hchar: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/00a0/ https://gtagmodding.com/opcode-database/opcode/00A0/'''
	return _opcodes.get_char_coordinates(hchar)

def set_char_coordinates(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/00a1/ https://gtagmodding.com/opcode-database/opcode/00A1/'''
	_opcodes.set_char_coordinates(hchar, x_coord, y_coord, z_coord)

def is_char_in_area_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/00a3/ https://gtagmodding.com/opcode-database/opcode/00A3/'''
	return _opcodes.is_char_in_area_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, state)

def is_char_in_area_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/00a4/ https://gtagmodding.com/opcode-database/opcode/00A4/'''
	return _opcodes.is_char_in_area_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def create_car(unknown1: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/00a5/ https://gtagmodding.com/opcode-database/opcode/00A5/'''
	return _opcodes.create_car(unknown1, x_coord, y_coord, z_coord)

def delete_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/00a6/ https://gtagmodding.com/opcode-database/opcode/00A6/'''
	_opcodes.delete_car(hveh)

def car_goto_coordinates(hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/00a7/ https://gtagmodding.com/opcode-database/opcode/00A7/'''
	_opcodes.car_goto_coordinates(hveh, x_coord, y_coord, z_coord)

def car_wander_randomly(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/00a8/ https://gtagmodding.com/opcode-database/opcode/00A8/'''
	_opcodes.car_wander_randomly(hveh)

def car_set_idle(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/00a9/ https://gtagmodding.com/opcode-database/opcode/00A9/'''
	_opcodes.car_set_idle(hveh)

def get_car_coordinates(hveh: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/00aa/ https://gtagmodding.com/opcode-database/opcode/00AA/'''
	return _opcodes.get_car_coordinates(hveh)

def set_car_coordinates(hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/00ab/ https://gtagmodding.com/opcode-database/opcode/00AB/'''
	_opcodes.set_car_coordinates(hveh, x_coord, y_coord, z_coord)

def set_car_cruise_speed(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/00ad/ https://gtagmodding.com/opcode-database/opcode/00AD/'''
	_opcodes.set_car_cruise_speed(hveh, unknown2)

def set_car_driving_style(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/00ae/ https://gtagmodding.com/opcode-database/opcode/00AE/'''
	_opcodes.set_car_driving_style(hveh, unknown2)

def set_car_mission(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/00af/ https://gtagmodding.com/opcode-database/opcode/00AF/'''
	_opcodes.set_car_mission(hveh, unknown2)

def is_car_in_area_2d(hveh: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/00b0/ https://gtagmodding.com/opcode-database/opcode/00B0/'''
	return _opcodes.is_car_in_area_2d(hveh, x_coord, y_coord, x_coord4, y_coord5, state)

def is_car_in_area_3d(hveh: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/00b1/ https://gtagmodding.com/opcode-database/opcode/00B1/'''
	return _opcodes.is_car_in_area_3d(hveh, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def print_big(unknown1: str, time: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/00ba/ https://gtagmodding.com/opcode-database/opcode/00BA/'''
	_opcodes.print_big(unknown1, time, unknown3)

def print(unknown1: str, time: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/00bb/ https://gtagmodding.com/opcode-database/opcode/00BB/'''
	_opcodes.print(unknown1, time, unknown3)

def print_now(unknown1: str, time: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/00bc/ https://gtagmodding.com/opcode-database/opcode/00BC/'''
	_opcodes.print_now(unknown1, time, unknown3)

def clear_prints() -> None:
	'''More info: https://gtamods.com/wiki/00be/ https://gtagmodding.com/opcode-database/opcode/00BE/'''
	_opcodes.clear_prints()

def get_time_of_day() -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/00bf/ https://gtagmodding.com/opcode-database/opcode/00BF/'''
	return _opcodes.get_time_of_day()

def set_time_of_day(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/00c0/ https://gtagmodding.com/opcode-database/opcode/00C0/'''
	_opcodes.set_time_of_day(unknown1, unknown2)

def get_minutes_to_time_of_day(unknown1: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/00c1/ https://gtagmodding.com/opcode-database/opcode/00C1/'''
	return _opcodes.get_minutes_to_time_of_day(unknown1, unknown2)

def is_point_on_screen(x_coord: float, y_coord: float, z_coord: float, radius: float) -> bool:
	'''More info: https://gtamods.com/wiki/00c2/ https://gtagmodding.com/opcode-database/opcode/00C2/'''
	return _opcodes.is_point_on_screen(x_coord, y_coord, z_coord, radius)

def launch_mission(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/00d7/ https://gtagmodding.com/opcode-database/opcode/00D7/'''
	_opcodes.launch_mission(unknown1)

def mission_has_finished() -> None:
	'''More info: https://gtamods.com/wiki/00d8/ https://gtagmodding.com/opcode-database/opcode/00D8/'''
	_opcodes.mission_has_finished()

def store_car_char_is_in(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/00d9/ https://gtagmodding.com/opcode-database/opcode/00D9/'''
	return _opcodes.store_car_char_is_in(hchar)

def is_char_in_car(hchar: int, hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/00db/ https://gtagmodding.com/opcode-database/opcode/00DB/'''
	return _opcodes.is_char_in_car(hchar, hveh)

def is_char_in_model(hchar: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/00dd/ https://gtagmodding.com/opcode-database/opcode/00DD/'''
	return _opcodes.is_char_in_model(hchar, unknown2)

def is_char_in_any_car(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/00df/ https://gtagmodding.com/opcode-database/opcode/00DF/'''
	return _opcodes.is_char_in_any_car(hchar)

def is_button_pressed(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/00e1/ https://gtagmodding.com/opcode-database/opcode/00E1/'''
	return _opcodes.is_button_pressed(unknown1, unknown2)

def get_pad_state(unknown1: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/00e2/ https://gtagmodding.com/opcode-database/opcode/00E2/'''
	return _opcodes.get_pad_state(unknown1, unknown2)

def locate_char_any_means_2d(hchar: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00ec/ https://gtagmodding.com/opcode-database/opcode/00EC/'''
	_opcodes.locate_char_any_means_2d(hchar, x_coord, y_coord, x_radius, y_radius, state)

def locate_char_on_foot_2d(hchar: int, x_coord: float, y_coord: float, unknown4: float, unknown5: float, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/00ed/ https://gtagmodding.com/opcode-database/opcode/00ED/'''
	_opcodes.locate_char_on_foot_2d(hchar, x_coord, y_coord, unknown4, unknown5, unknown6)

def locate_char_in_car_2d(hchar: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00ee/ https://gtagmodding.com/opcode-database/opcode/00EE/'''
	_opcodes.locate_char_in_car_2d(hchar, x_coord, y_coord, x_radius, y_radius, state)

def locate_stopped_char_any_means_2d(hchar: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00ef/ https://gtagmodding.com/opcode-database/opcode/00EF/'''
	_opcodes.locate_stopped_char_any_means_2d(hchar, x_coord, y_coord, x_radius, y_radius, state)

def locate_stopped_char_on_foot_2d(hchar: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00f0/ https://gtagmodding.com/opcode-database/opcode/00F0/'''
	_opcodes.locate_stopped_char_on_foot_2d(hchar, x_coord, y_coord, x_radius, y_radius, state)

def locate_stopped_char_in_car_2d(hchar: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00f1/ https://gtagmodding.com/opcode-database/opcode/00F1/'''
	_opcodes.locate_stopped_char_in_car_2d(hchar, x_coord, y_coord, x_radius, y_radius, state)

def locate_char_any_means_char_2d(hchar: int, hchar2: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00f2/ https://gtagmodding.com/opcode-database/opcode/00F2/'''
	_opcodes.locate_char_any_means_char_2d(hchar, hchar2, x_radius, y_radius, state)

def locate_char_on_foot_char_2d(hchar: int, hchar2: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00f3/ https://gtagmodding.com/opcode-database/opcode/00F3/'''
	_opcodes.locate_char_on_foot_char_2d(hchar, hchar2, x_radius, y_radius, state)

def locate_char_in_car_char_2d(hchar: int, hchar2: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00f4/ https://gtagmodding.com/opcode-database/opcode/00F4/'''
	_opcodes.locate_char_in_car_char_2d(hchar, hchar2, x_radius, y_radius, state)

def locate_char_any_means_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00fe/ https://gtagmodding.com/opcode-database/opcode/00FE/'''
	_opcodes.locate_char_any_means_3d(hchar, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def locate_char_on_foot_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/00ff/ https://gtagmodding.com/opcode-database/opcode/00FF/'''
	_opcodes.locate_char_on_foot_3d(hchar, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def locate_char_in_car_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0100/ https://gtagmodding.com/opcode-database/opcode/0100/'''
	_opcodes.locate_char_in_car_3d(hchar, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def locate_stopped_char_any_means_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0101/ https://gtagmodding.com/opcode-database/opcode/0101/'''
	_opcodes.locate_stopped_char_any_means_3d(hchar, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def locate_stopped_char_on_foot_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0102/ https://gtagmodding.com/opcode-database/opcode/0102/'''
	_opcodes.locate_stopped_char_on_foot_3d(hchar, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def locate_stopped_char_in_car_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0103/ https://gtagmodding.com/opcode-database/opcode/0103/'''
	_opcodes.locate_stopped_char_in_car_3d(hchar, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def locate_char_any_means_char_3d(hchar: int, hchar2: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0104/ https://gtagmodding.com/opcode-database/opcode/0104/'''
	_opcodes.locate_char_any_means_char_3d(hchar, hchar2, x_radius, y_radius, z_radius, state)

def locate_char_on_foot_char_3d(hchar: int, hchar2: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0105/ https://gtagmodding.com/opcode-database/opcode/0105/'''
	_opcodes.locate_char_on_foot_char_3d(hchar, hchar2, x_radius, y_radius, z_radius, state)

def locate_char_in_car_char_3d(hchar: int, hchar2: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0106/ https://gtagmodding.com/opcode-database/opcode/0106/'''
	_opcodes.locate_char_in_car_char_3d(hchar, hchar2, x_radius, y_radius, z_radius, state)

def create_object(unknown1: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/0107/ https://gtagmodding.com/opcode-database/opcode/0107/'''
	return _opcodes.create_object(unknown1, x_coord, y_coord, z_coord)

def delete_object(hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/0108/ https://gtagmodding.com/opcode-database/opcode/0108/'''
	_opcodes.delete_object(hobj)

def add_score(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0109/ https://gtagmodding.com/opcode-database/opcode/0109/'''
	_opcodes.add_score(player, unknown2)

def is_score_greater(player: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/010a/ https://gtagmodding.com/opcode-database/opcode/010A/'''
	return _opcodes.is_score_greater(player, unknown2)

def store_score(player: int) -> int:
	'''More info: https://gtamods.com/wiki/010b/ https://gtagmodding.com/opcode-database/opcode/010B/'''
	return _opcodes.store_score(player)

def alter_wanted_level(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/010d/ https://gtagmodding.com/opcode-database/opcode/010D/'''
	_opcodes.alter_wanted_level(player, unknown2)

def alter_wanted_level_no_drop(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/010e/ https://gtagmodding.com/opcode-database/opcode/010E/'''
	_opcodes.alter_wanted_level_no_drop(player, unknown2)

def is_wanted_level_greater(player: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/010f/ https://gtagmodding.com/opcode-database/opcode/010F/'''
	return _opcodes.is_wanted_level_greater(player, unknown2)

def clear_wanted_level(player: int) -> None:
	'''More info: https://gtamods.com/wiki/0110/ https://gtagmodding.com/opcode-database/opcode/0110/'''
	_opcodes.clear_wanted_level(player)

def set_deatharrest_state(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0111/ https://gtagmodding.com/opcode-database/opcode/0111/'''
	_opcodes.set_deatharrest_state(state)

def has_deatharrest_been_executed() -> bool:
	'''More info: https://gtamods.com/wiki/0112/ https://gtagmodding.com/opcode-database/opcode/0112/'''
	return _opcodes.has_deatharrest_been_executed()

def add_ammo_to_char(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0114/ https://gtagmodding.com/opcode-database/opcode/0114/'''
	_opcodes.add_ammo_to_char(hchar, unknown2, unknown3)

def is_player_dead(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0117/ https://gtagmodding.com/opcode-database/opcode/0117/'''
	return _opcodes.is_player_dead(player)

def is_char_dead(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0118/ https://gtagmodding.com/opcode-database/opcode/0118/'''
	return _opcodes.is_char_dead(hchar)

def is_car_dead(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0119/ https://gtagmodding.com/opcode-database/opcode/0119/'''
	return _opcodes.is_car_dead(hveh)

def is_player_pressing_horn(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0122/ https://gtagmodding.com/opcode-database/opcode/0122/'''
	return _opcodes.is_player_pressing_horn(player)

def create_char_inside_car(hveh: int, unknown2: int, unknown3: int) -> int:
	'''More info: https://gtamods.com/wiki/0129/ https://gtagmodding.com/opcode-database/opcode/0129/'''
	return _opcodes.create_char_inside_car(hveh, unknown2, unknown3)

def is_car_model(hveh: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0137/ https://gtagmodding.com/opcode-database/opcode/0137/'''
	return _opcodes.is_car_model(hveh, unknown2)

def create_car_generator(x_coord: float, y_coord: float, z_coord: float, angle: float, unknown5: int, unknown6: int, unknown7: int, state: int, unknown9: int, unknown10: int, time: int, time12: int) -> int:
	'''More info: https://gtamods.com/wiki/014b/ https://gtagmodding.com/opcode-database/opcode/014B/'''
	return _opcodes.create_car_generator(x_coord, y_coord, z_coord, angle, unknown5, unknown6, unknown7, state, unknown9, unknown10, time, time12)

def switch_car_generator(car_generator: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/014c/ https://gtagmodding.com/opcode-database/opcode/014C/'''
	_opcodes.switch_car_generator(car_generator, unknown2)

def display_onscreen_timer(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/014e/ https://gtagmodding.com/opcode-database/opcode/014E/'''
	_opcodes.display_onscreen_timer(unknown1, unknown2)

def clear_onscreen_timer(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/014f/ https://gtagmodding.com/opcode-database/opcode/014F/'''
	_opcodes.clear_onscreen_timer(unknown1)

def clear_onscreen_counter(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0151/ https://gtagmodding.com/opcode-database/opcode/0151/'''
	_opcodes.clear_onscreen_counter(unknown1)

def is_char_in_zone(hchar: int, unknown2: str) -> bool:
	'''More info: https://gtamods.com/wiki/0154/ https://gtagmodding.com/opcode-database/opcode/0154/'''
	return _opcodes.is_char_in_zone(hchar, unknown2)

def point_camera_at_car(hveh: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0158/ https://gtagmodding.com/opcode-database/opcode/0158/'''
	_opcodes.point_camera_at_car(hveh, unknown2, unknown3)

def point_camera_at_char(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0159/ https://gtagmodding.com/opcode-database/opcode/0159/'''
	_opcodes.point_camera_at_char(hchar, unknown2, unknown3)

def restore_camera() -> None:
	'''More info: https://gtamods.com/wiki/015a/ https://gtagmodding.com/opcode-database/opcode/015A/'''
	_opcodes.restore_camera()

def shake_pad(unknown1: int, time: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/015b/ https://gtagmodding.com/opcode-database/opcode/015B/'''
	_opcodes.shake_pad(unknown1, time, unknown3)

def set_time_scale(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/015d/ https://gtagmodding.com/opcode-database/opcode/015D/'''
	_opcodes.set_time_scale(unknown1)

def set_fixed_camera_position(x_coord: float, y_coord: float, z_coord: float, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/015f/ https://gtagmodding.com/opcode-database/opcode/015F/'''
	_opcodes.set_fixed_camera_position(x_coord, y_coord, z_coord, x_rotation, y_rotation, z_rotation)

def point_camera_at_point(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0160/ https://gtagmodding.com/opcode-database/opcode/0160/'''
	_opcodes.point_camera_at_point(x_coord, y_coord, z_coord, unknown4)

def add_blip_for_car_old(hveh: int, unknown2: int, unknown3: int) -> int:
	'''More info: https://gtamods.com/wiki/0161/ https://gtagmodding.com/opcode-database/opcode/0161/'''
	return _opcodes.add_blip_for_car_old(hveh, unknown2, unknown3)

def remove_blip(blip: int) -> None:
	'''More info: https://gtamods.com/wiki/0164/ https://gtagmodding.com/opcode-database/opcode/0164/'''
	_opcodes.remove_blip(blip)

def change_blip_colour(blip: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0165/ https://gtagmodding.com/opcode-database/opcode/0165/'''
	_opcodes.change_blip_colour(blip, unknown2)

def add_blip_for_coord_old(x_coord: float, y_coord: float, z_coord: float, unknown4: int, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/0167/ https://gtagmodding.com/opcode-database/opcode/0167/'''
	return _opcodes.add_blip_for_coord_old(x_coord, y_coord, z_coord, unknown4, unknown5)

def change_blip_scale(blip: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0168/ https://gtagmodding.com/opcode-database/opcode/0168/'''
	_opcodes.change_blip_scale(blip, unknown2)

def set_fading_colour(red: int, green: int, blue: int) -> None:
	'''More info: https://gtamods.com/wiki/0169/ https://gtagmodding.com/opcode-database/opcode/0169/'''
	_opcodes.set_fading_colour(red, green, blue)

def do_fade(time: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/016a/ https://gtagmodding.com/opcode-database/opcode/016A/'''
	_opcodes.do_fade(time, unknown2)

def get_fading_status() -> None:
	'''More info: https://gtamods.com/wiki/016b/ https://gtagmodding.com/opcode-database/opcode/016B/'''
	_opcodes.get_fading_status()

def add_hospital_restart(x_coord: float, y_coord: float, z_coord: float, angle: float, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/016c/ https://gtagmodding.com/opcode-database/opcode/016C/'''
	_opcodes.add_hospital_restart(x_coord, y_coord, z_coord, angle, unknown5)

def add_police_restart(x_coord: float, y_coord: float, z_coord: float, angle: float, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/016d/ https://gtagmodding.com/opcode-database/opcode/016D/'''
	_opcodes.add_police_restart(x_coord, y_coord, z_coord, angle, unknown5)

def override_next_restart(x_coord: float, y_coord: float, z_coord: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/016e/ https://gtagmodding.com/opcode-database/opcode/016E/'''
	_opcodes.override_next_restart(x_coord, y_coord, z_coord, angle)

def draw_shadow(unknown1: int, x_coord: float, y_coord: float, z_coord: float, angle: float, unknown6: float, unknown7: int, red: int, green: int, blue: int) -> None:
	'''More info: https://gtamods.com/wiki/016f/ https://gtagmodding.com/opcode-database/opcode/016F/'''
	_opcodes.draw_shadow(unknown1, x_coord, y_coord, z_coord, angle, unknown6, unknown7, red, green, blue)

def get_char_heading(hchar: int) -> float:
	'''More info: https://gtamods.com/wiki/0172/ https://gtagmodding.com/opcode-database/opcode/0172/'''
	return _opcodes.get_char_heading(hchar)

def set_char_heading(hchar: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0173/ https://gtagmodding.com/opcode-database/opcode/0173/'''
	_opcodes.set_char_heading(hchar, angle)

def get_car_heading(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/0174/ https://gtagmodding.com/opcode-database/opcode/0174/'''
	return _opcodes.get_car_heading(hveh)

def set_car_heading(hveh: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0175/ https://gtagmodding.com/opcode-database/opcode/0175/'''
	_opcodes.set_car_heading(hveh, angle)

def get_object_heading(hobj: int) -> float:
	'''More info: https://gtamods.com/wiki/0176/ https://gtagmodding.com/opcode-database/opcode/0176/'''
	return _opcodes.get_object_heading(hobj)

def set_object_heading(hobj: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0177/ https://gtagmodding.com/opcode-database/opcode/0177/'''
	_opcodes.set_object_heading(hobj, angle)

def is_char_touching_object(hchar: int, hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0179/ https://gtagmodding.com/opcode-database/opcode/0179/'''
	return _opcodes.is_char_touching_object(hchar, hobj)

def set_char_ammo(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/017b/ https://gtagmodding.com/opcode-database/opcode/017B/'''
	_opcodes.set_char_ammo(hchar, unknown2, unknown3)

def declare_mission_flag(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0180/ https://gtagmodding.com/opcode-database/opcode/0180/'''
	_opcodes.declare_mission_flag(unknown1)

def is_char_health_greater(hchar: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0184/ https://gtagmodding.com/opcode-database/opcode/0184/'''
	return _opcodes.is_char_health_greater(hchar, unknown2)

def is_car_health_greater(hveh: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0185/ https://gtagmodding.com/opcode-database/opcode/0185/'''
	return _opcodes.is_car_health_greater(hveh, unknown2)

def add_blip_for_car(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0186/ https://gtagmodding.com/opcode-database/opcode/0186/'''
	return _opcodes.add_blip_for_car(hveh)

def add_blip_for_char(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0187/ https://gtagmodding.com/opcode-database/opcode/0187/'''
	return _opcodes.add_blip_for_char(hchar)

def add_blip_for_object(hobj: int) -> int:
	'''More info: https://gtamods.com/wiki/0188/ https://gtagmodding.com/opcode-database/opcode/0188/'''
	return _opcodes.add_blip_for_object(hobj)

def add_blip_for_coord(x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/018a/ https://gtagmodding.com/opcode-database/opcode/018A/'''
	return _opcodes.add_blip_for_coord(x_coord, y_coord, z_coord)

def change_blip_display(blip: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/018b/ https://gtagmodding.com/opcode-database/opcode/018B/'''
	_opcodes.change_blip_display(blip, unknown2)

def add_one_off_sound(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/018c/ https://gtagmodding.com/opcode-database/opcode/018C/'''
	_opcodes.add_one_off_sound(x_coord, y_coord, z_coord, unknown4)

def add_continuous_sound(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/018d/ https://gtagmodding.com/opcode-database/opcode/018D/'''
	return _opcodes.add_continuous_sound(x_coord, y_coord, z_coord, unknown4)

def remove_sound(sound: int) -> None:
	'''More info: https://gtamods.com/wiki/018e/ https://gtagmodding.com/opcode-database/opcode/018E/'''
	_opcodes.remove_sound(sound)

def is_car_stuck_on_roof(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/018f/ https://gtagmodding.com/opcode-database/opcode/018F/'''
	return _opcodes.is_car_stuck_on_roof(hveh)

def add_upsidedown_car_check(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0190/ https://gtagmodding.com/opcode-database/opcode/0190/'''
	_opcodes.add_upsidedown_car_check(hveh)

def remove_upsidedown_car_check(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0191/ https://gtagmodding.com/opcode-database/opcode/0191/'''
	_opcodes.remove_upsidedown_car_check(hveh)

def is_char_in_area_on_foot_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a1/ https://gtagmodding.com/opcode-database/opcode/01A1/'''
	return _opcodes.is_char_in_area_on_foot_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, state)

def is_char_in_area_in_car_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a2/ https://gtagmodding.com/opcode-database/opcode/01A2/'''
	return _opcodes.is_char_in_area_in_car_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, state)

def is_char_stopped_in_area_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a3/ https://gtagmodding.com/opcode-database/opcode/01A3/'''
	return _opcodes.is_char_stopped_in_area_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, state)

def is_char_stopped_in_area_on_foot_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a4/ https://gtagmodding.com/opcode-database/opcode/01A4/'''
	return _opcodes.is_char_stopped_in_area_on_foot_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, state)

def is_char_stopped_in_area_in_car_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a5/ https://gtagmodding.com/opcode-database/opcode/01A5/'''
	return _opcodes.is_char_stopped_in_area_in_car_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, state)

def is_char_in_area_on_foot_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a6/ https://gtagmodding.com/opcode-database/opcode/01A6/'''
	return _opcodes.is_char_in_area_on_foot_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def is_char_in_area_in_car_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a7/ https://gtagmodding.com/opcode-database/opcode/01A7/'''
	return _opcodes.is_char_in_area_in_car_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def is_char_stopped_in_area_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a8/ https://gtagmodding.com/opcode-database/opcode/01A8/'''
	return _opcodes.is_char_stopped_in_area_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def is_char_stopped_in_area_on_foot_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01a9/ https://gtagmodding.com/opcode-database/opcode/01A9/'''
	return _opcodes.is_char_stopped_in_area_on_foot_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def is_char_stopped_in_area_in_car_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01aa/ https://gtagmodding.com/opcode-database/opcode/01AA/'''
	return _opcodes.is_char_stopped_in_area_in_car_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def is_car_stopped_in_area_2d(hveh: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01ab/ https://gtagmodding.com/opcode-database/opcode/01AB/'''
	return _opcodes.is_car_stopped_in_area_2d(hveh, x_coord, y_coord, x_coord4, y_coord5, state)

def is_car_stopped_in_area_3d(hveh: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/01ac/ https://gtagmodding.com/opcode-database/opcode/01AC/'''
	return _opcodes.is_car_stopped_in_area_3d(hveh, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def locate_car_2d(hveh: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01ad/ https://gtagmodding.com/opcode-database/opcode/01AD/'''
	_opcodes.locate_car_2d(hveh, x_coord, y_coord, x_radius, y_radius, state)

def locate_stopped_car_2d(hveh: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01ae/ https://gtagmodding.com/opcode-database/opcode/01AE/'''
	_opcodes.locate_stopped_car_2d(hveh, x_coord, y_coord, x_radius, y_radius, state)

def locate_car_3d(hveh: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01af/ https://gtagmodding.com/opcode-database/opcode/01AF/'''
	_opcodes.locate_car_3d(hveh, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def locate_stopped_car_3d(hveh: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01b0/ https://gtagmodding.com/opcode-database/opcode/01B0/'''
	_opcodes.locate_stopped_car_3d(hveh, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def give_weapon_to_char(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/01b2/ https://gtagmodding.com/opcode-database/opcode/01B2/'''
	_opcodes.give_weapon_to_char(hchar, unknown2, unknown3)

def set_player_control(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01b4/ https://gtagmodding.com/opcode-database/opcode/01B4/'''
	_opcodes.set_player_control(player, state)

def force_weather(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/01b5/ https://gtagmodding.com/opcode-database/opcode/01B5/'''
	_opcodes.force_weather(unknown1)

def force_weather_now(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/01b6/ https://gtagmodding.com/opcode-database/opcode/01B6/'''
	_opcodes.force_weather_now(unknown1)

def release_weather() -> None:
	'''More info: https://gtamods.com/wiki/01b7/ https://gtagmodding.com/opcode-database/opcode/01B7/'''
	_opcodes.release_weather()

def set_current_char_weapon(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/01b9/ https://gtagmodding.com/opcode-database/opcode/01B9/'''
	_opcodes.set_current_char_weapon(hchar, unknown2)

def get_object_coordinates(hobj: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/01bb/ https://gtagmodding.com/opcode-database/opcode/01BB/'''
	return _opcodes.get_object_coordinates(hobj)

def set_object_coordinates(hobj: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/01bc/ https://gtagmodding.com/opcode-database/opcode/01BC/'''
	_opcodes.set_object_coordinates(hobj, x_coord, y_coord, z_coord)

def get_game_timer() -> int:
	'''More info: https://gtamods.com/wiki/01bd/ https://gtagmodding.com/opcode-database/opcode/01BD/'''
	return _opcodes.get_game_timer()

def store_wanted_level(player: int) -> int:
	'''More info: https://gtamods.com/wiki/01c0/ https://gtagmodding.com/opcode-database/opcode/01C0/'''
	return _opcodes.store_wanted_level(player)

def is_car_stopped(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/01c1/ https://gtagmodding.com/opcode-database/opcode/01C1/'''
	return _opcodes.is_car_stopped(hveh)

def mark_char_as_no_longer_needed(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/01c2/ https://gtagmodding.com/opcode-database/opcode/01C2/'''
	_opcodes.mark_char_as_no_longer_needed(hchar)

def mark_car_as_no_longer_needed(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/01c3/ https://gtagmodding.com/opcode-database/opcode/01C3/'''
	_opcodes.mark_car_as_no_longer_needed(hveh)

def mark_object_as_no_longer_needed(hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/01c4/ https://gtagmodding.com/opcode-database/opcode/01C4/'''
	_opcodes.mark_object_as_no_longer_needed(hobj)

def dont_remove_char(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/01c5/ https://gtagmodding.com/opcode-database/opcode/01C5/'''
	_opcodes.dont_remove_char(hchar)

def dont_remove_object(hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/01c7/ https://gtagmodding.com/opcode-database/opcode/01C7/'''
	_opcodes.dont_remove_object(hobj)

def create_char_as_passenger(hveh: int, unknown2: int, unknown3: int, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/01c8/ https://gtagmodding.com/opcode-database/opcode/01C8/'''
	return _opcodes.create_char_as_passenger(hveh, unknown2, unknown3, unknown4)

def print_with_number_big(unknown1: str, unknown2: int, time: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/01e3/ https://gtagmodding.com/opcode-database/opcode/01E3/'''
	_opcodes.print_with_number_big(unknown1, unknown2, time, unknown4)

def print_with_number(unknown1: str, unknown2: int, time: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/01e4/ https://gtagmodding.com/opcode-database/opcode/01E4/'''
	_opcodes.print_with_number(unknown1, unknown2, time, unknown4)

def print_with_number_now(unknown1: str, unknown2: int, time: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/01e5/ https://gtagmodding.com/opcode-database/opcode/01E5/'''
	_opcodes.print_with_number_now(unknown1, unknown2, time, unknown4)

def switch_roads_on(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/01e7/ https://gtagmodding.com/opcode-database/opcode/01E7/'''
	_opcodes.switch_roads_on(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def switch_roads_off(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/01e8/ https://gtagmodding.com/opcode-database/opcode/01E8/'''
	_opcodes.switch_roads_off(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def get_number_of_passengers(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/01e9/ https://gtagmodding.com/opcode-database/opcode/01E9/'''
	return _opcodes.get_number_of_passengers(hveh)

def get_maximum_number_of_passengers(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/01ea/ https://gtagmodding.com/opcode-database/opcode/01EA/'''
	return _opcodes.get_maximum_number_of_passengers(hveh)

def set_car_density_multiplier(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/01eb/ https://gtagmodding.com/opcode-database/opcode/01EB/'''
	_opcodes.set_car_density_multiplier(unknown1)

def set_car_heavy(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01ec/ https://gtagmodding.com/opcode-database/opcode/01EC/'''
	_opcodes.set_car_heavy(hveh, state)

def set_max_wanted_level(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/01f0/ https://gtagmodding.com/opcode-database/opcode/01F0/'''
	_opcodes.set_max_wanted_level(unknown1)

def is_car_in_air_proper(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/01f3/ https://gtagmodding.com/opcode-database/opcode/01F3/'''
	return _opcodes.is_car_in_air_proper(hveh)

def is_car_upsidedown(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/01f4/ https://gtagmodding.com/opcode-database/opcode/01F4/'''
	return _opcodes.is_car_upsidedown(hveh)

def get_player_char(player: int) -> int:
	'''More info: https://gtamods.com/wiki/01f5/ https://gtagmodding.com/opcode-database/opcode/01F5/'''
	return _opcodes.get_player_char(player)

def cancel_override_restart() -> None:
	'''More info: https://gtamods.com/wiki/01f6/ https://gtagmodding.com/opcode-database/opcode/01F6/'''
	_opcodes.cancel_override_restart()

def set_police_ignore_player(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01f7/ https://gtagmodding.com/opcode-database/opcode/01F7/'''
	_opcodes.set_police_ignore_player(player, state)

def start_kill_frenzy(unknown1: str, unknown2: int, time: int, unknown4: int, unknown5: int, unknown6: int, unknown7: int, unknown8: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/01f9/ https://gtagmodding.com/opcode-database/opcode/01F9/'''
	_opcodes.start_kill_frenzy(unknown1, unknown2, time, unknown4, unknown5, unknown6, unknown7, unknown8, state)

def read_kill_frenzy_status() -> int:
	'''More info: https://gtamods.com/wiki/01fa/ https://gtagmodding.com/opcode-database/opcode/01FA/'''
	return _opcodes.read_kill_frenzy_status()

def sqrt(unknown1: float) -> float:
	'''More info: https://gtamods.com/wiki/01fb/ https://gtagmodding.com/opcode-database/opcode/01FB/'''
	return _opcodes.sqrt(unknown1)

def locate_char_any_means_car_2d(hchar: int, hveh: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0202/ https://gtagmodding.com/opcode-database/opcode/0202/'''
	_opcodes.locate_char_any_means_car_2d(hchar, hveh, x_radius, y_radius, state)

def locate_char_on_foot_car_2d(hchar: int, hveh: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0203/ https://gtagmodding.com/opcode-database/opcode/0203/'''
	_opcodes.locate_char_on_foot_car_2d(hchar, hveh, x_radius, y_radius, state)

def locate_char_in_car_car_2d(hchar: int, hveh: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0204/ https://gtagmodding.com/opcode-database/opcode/0204/'''
	_opcodes.locate_char_in_car_car_2d(hchar, hveh, x_radius, y_radius, state)

def locate_char_any_means_car_3d(hchar: int, hveh: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0205/ https://gtagmodding.com/opcode-database/opcode/0205/'''
	_opcodes.locate_char_any_means_car_3d(hchar, hveh, x_radius, y_radius, z_radius, state)

def locate_char_on_foot_car_3d(hchar: int, hveh: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0206/ https://gtagmodding.com/opcode-database/opcode/0206/'''
	_opcodes.locate_char_on_foot_car_3d(hchar, hveh, x_radius, y_radius, z_radius, state)

def locate_char_in_car_car_3d(hchar: int, hveh: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0207/ https://gtagmodding.com/opcode-database/opcode/0207/'''
	_opcodes.locate_char_in_car_car_3d(hchar, hveh, x_radius, y_radius, z_radius, state)

def generate_random_float_in_range(unknown1: float, unknown2: float) -> float:
	'''More info: https://gtamods.com/wiki/0208/ https://gtagmodding.com/opcode-database/opcode/0208/'''
	return _opcodes.generate_random_float_in_range(unknown1, unknown2)

def generate_random_int_in_range(unknown1: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/0209/ https://gtagmodding.com/opcode-database/opcode/0209/'''
	return _opcodes.generate_random_int_in_range(unknown1, unknown2)

def lock_car_doors(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/020a/ https://gtagmodding.com/opcode-database/opcode/020A/'''
	_opcodes.lock_car_doors(hveh, unknown2)

def explode_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/020b/ https://gtagmodding.com/opcode-database/opcode/020B/'''
	_opcodes.explode_car(hveh)

def add_explosion(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/020c/ https://gtagmodding.com/opcode-database/opcode/020C/'''
	_opcodes.add_explosion(x_coord, y_coord, z_coord, unknown4)

def is_car_upright(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/020d/ https://gtagmodding.com/opcode-database/opcode/020D/'''
	return _opcodes.is_car_upright(hveh)

def create_pickup(unknown1: int, unknown2: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/0213/ https://gtagmodding.com/opcode-database/opcode/0213/'''
	return _opcodes.create_pickup(unknown1, unknown2, x_coord, y_coord, z_coord)

def has_pickup_been_collected(pickup: int) -> bool:
	'''More info: https://gtamods.com/wiki/0214/ https://gtagmodding.com/opcode-database/opcode/0214/'''
	return _opcodes.has_pickup_been_collected(pickup)

def remove_pickup(pickup: int) -> None:
	'''More info: https://gtamods.com/wiki/0215/ https://gtagmodding.com/opcode-database/opcode/0215/'''
	_opcodes.remove_pickup(pickup)

def set_taxi_lights(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0216/ https://gtagmodding.com/opcode-database/opcode/0216/'''
	_opcodes.set_taxi_lights(hveh, state)

def print_big_q(unknown1: str, time: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0217/ https://gtagmodding.com/opcode-database/opcode/0217/'''
	_opcodes.print_big_q(unknown1, time, unknown3)

def set_target_car_for_mission_garage(unknown1: str, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/021b/ https://gtagmodding.com/opcode-database/opcode/021B/'''
	_opcodes.set_target_car_for_mission_garage(unknown1, hveh)

def apply_brakes_to_players_car(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0221/ https://gtagmodding.com/opcode-database/opcode/0221/'''
	_opcodes.apply_brakes_to_players_car(player, state)

def set_char_health(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0223/ https://gtagmodding.com/opcode-database/opcode/0223/'''
	_opcodes.set_char_health(hchar, unknown2)

def set_car_health(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0224/ https://gtagmodding.com/opcode-database/opcode/0224/'''
	_opcodes.set_car_health(hveh, unknown2)

def get_char_health(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0226/ https://gtagmodding.com/opcode-database/opcode/0226/'''
	return _opcodes.get_char_health(hchar)

def get_car_health(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0227/ https://gtagmodding.com/opcode-database/opcode/0227/'''
	return _opcodes.get_car_health(hveh)

def change_car_colour(hveh: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0229/ https://gtagmodding.com/opcode-database/opcode/0229/'''
	_opcodes.change_car_colour(hveh, unknown2, unknown3)

def switch_ped_roads_on(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/022a/ https://gtagmodding.com/opcode-database/opcode/022A/'''
	_opcodes.switch_ped_roads_on(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def switch_ped_roads_off(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/022b/ https://gtagmodding.com/opcode-database/opcode/022B/'''
	_opcodes.switch_ped_roads_off(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def set_gang_weapons(unknown1: int, unknown2: int, unknown3: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0237/ https://gtagmodding.com/opcode-database/opcode/0237/'''
	_opcodes.set_gang_weapons(unknown1, unknown2, unknown3, unknown4)

def is_char_touching_object_on_foot(hchar: int, hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/023b/ https://gtagmodding.com/opcode-database/opcode/023B/'''
	return _opcodes.is_char_touching_object_on_foot(hchar, hobj)

def load_special_character(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/023c/ https://gtagmodding.com/opcode-database/opcode/023C/'''
	_opcodes.load_special_character(unknown1, unknown2)

def has_special_character_loaded(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/023d/ https://gtagmodding.com/opcode-database/opcode/023D/'''
	return _opcodes.has_special_character_loaded(unknown1)

def is_player_in_remote_mode(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0241/ https://gtagmodding.com/opcode-database/opcode/0241/'''
	return _opcodes.is_player_in_remote_mode(player)

def set_cutscene_offset(x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/0244/ https://gtagmodding.com/opcode-database/opcode/0244/'''
	_opcodes.set_cutscene_offset(x_coord, y_coord, z_coord)

def set_anim_group_for_char(hchar: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/0245/ https://gtagmodding.com/opcode-database/opcode/0245/'''
	_opcodes.set_anim_group_for_char(hchar, unknown2)

def request_model(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0247/ https://gtagmodding.com/opcode-database/opcode/0247/'''
	_opcodes.request_model(unknown1)

def has_model_loaded(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0248/ https://gtagmodding.com/opcode-database/opcode/0248/'''
	return _opcodes.has_model_loaded(unknown1)

def mark_model_as_no_longer_needed(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0249/ https://gtagmodding.com/opcode-database/opcode/0249/'''
	_opcodes.mark_model_as_no_longer_needed(unknown1)

def draw_corona(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, unknown6: int, red: int, green: int, blue: int) -> None:
	'''More info: https://gtamods.com/wiki/024f/ https://gtagmodding.com/opcode-database/opcode/024F/'''
	_opcodes.draw_corona(x_coord, y_coord, z_coord, radius, unknown5, unknown6, red, green, blue)

def store_clock() -> None:
	'''More info: https://gtamods.com/wiki/0253/ https://gtagmodding.com/opcode-database/opcode/0253/'''
	_opcodes.store_clock()

def restore_clock() -> None:
	'''More info: https://gtamods.com/wiki/0254/ https://gtagmodding.com/opcode-database/opcode/0254/'''
	_opcodes.restore_clock()

def is_player_playing(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0256/ https://gtagmodding.com/opcode-database/opcode/0256/'''
	return _opcodes.is_player_playing(player)

def get_controller_mode() -> int:
	'''More info: https://gtamods.com/wiki/0293/ https://gtagmodding.com/opcode-database/opcode/0293/'''
	return _opcodes.get_controller_mode()

def set_can_respray_car(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0294/ https://gtagmodding.com/opcode-database/opcode/0294/'''
	_opcodes.set_can_respray_car(hveh, state)

def unload_special_character(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0296/ https://gtagmodding.com/opcode-database/opcode/0296/'''
	_opcodes.unload_special_character(unknown1)

def reset_num_of_models_killed_by_player(player: int) -> None:
	'''More info: https://gtamods.com/wiki/0297/ https://gtagmodding.com/opcode-database/opcode/0297/'''
	_opcodes.reset_num_of_models_killed_by_player(player)

def get_num_of_models_killed_by_player(player: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/0298/ https://gtagmodding.com/opcode-database/opcode/0298/'''
	return _opcodes.get_num_of_models_killed_by_player(player, unknown2)

def activate_garage(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0299/ https://gtagmodding.com/opcode-database/opcode/0299/'''
	_opcodes.activate_garage(unknown1)

def create_object_no_offset(unknown1: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/029b/ https://gtagmodding.com/opcode-database/opcode/029B/'''
	return _opcodes.create_object_no_offset(unknown1, x_coord, y_coord, z_coord)

def is_char_stopped(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/02a0/ https://gtagmodding.com/opcode-database/opcode/02A0/'''
	return _opcodes.is_char_stopped(hchar)

def switch_widescreen(state: int) -> None:
	'''More info: https://gtamods.com/wiki/02a3/ https://gtagmodding.com/opcode-database/opcode/02A3/'''
	_opcodes.switch_widescreen(state)

def add_sprite_blip_for_contact_point(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/02a7/ https://gtagmodding.com/opcode-database/opcode/02A7/'''
	return _opcodes.add_sprite_blip_for_contact_point(x_coord, y_coord, z_coord, unknown4)

def add_sprite_blip_for_coord(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/02a8/ https://gtagmodding.com/opcode-database/opcode/02A8/'''
	return _opcodes.add_sprite_blip_for_coord(x_coord, y_coord, z_coord, unknown4)

def set_char_only_damaged_by_player(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/02a9/ https://gtagmodding.com/opcode-database/opcode/02A9/'''
	_opcodes.set_char_only_damaged_by_player(hchar, state)

def set_car_only_damaged_by_player(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/02aa/ https://gtagmodding.com/opcode-database/opcode/02AA/'''
	_opcodes.set_car_only_damaged_by_player(hveh, state)

def set_char_proofs(hchar: int, state: int, state3: int, state4: int, state5: int, state6: int) -> None:
	'''More info: https://gtamods.com/wiki/02ab/ https://gtagmodding.com/opcode-database/opcode/02AB/'''
	_opcodes.set_char_proofs(hchar, state, state3, state4, state5, state6)

def set_car_proofs(hveh: int, state: int, state3: int, state4: int, state5: int, state6: int) -> None:
	'''More info: https://gtamods.com/wiki/02ac/ https://gtagmodding.com/opcode-database/opcode/02AC/'''
	_opcodes.set_car_proofs(hveh, state, state3, state4, state5, state6)

def deactivate_garage(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/02b9/ https://gtagmodding.com/opcode-database/opcode/02B9/'''
	_opcodes.deactivate_garage(unknown1)

def is_car_in_water(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/02bf/ https://gtagmodding.com/opcode-database/opcode/02BF/'''
	return _opcodes.is_car_in_water(hveh)

def get_closest_char_node(x_coord: float, y_coord: float, z_coord: float) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/02c0/ https://gtagmodding.com/opcode-database/opcode/02C0/'''
	return _opcodes.get_closest_char_node(x_coord, y_coord, z_coord)

def get_closest_car_node(x_coord: float, y_coord: float, z_coord: float) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/02c1/ https://gtagmodding.com/opcode-database/opcode/02C1/'''
	return _opcodes.get_closest_car_node(x_coord, y_coord, z_coord)

def car_goto_coordinates_accurate(hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/02c2/ https://gtagmodding.com/opcode-database/opcode/02C2/'''
	_opcodes.car_goto_coordinates_accurate(hveh, x_coord, y_coord, z_coord)

def is_car_on_screen(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/02ca/ https://gtagmodding.com/opcode-database/opcode/02CA/'''
	return _opcodes.is_car_on_screen(hveh)

def is_char_on_screen(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/02cb/ https://gtagmodding.com/opcode-database/opcode/02CB/'''
	return _opcodes.is_char_on_screen(hchar)

def is_object_on_screen(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/02cc/ https://gtagmodding.com/opcode-database/opcode/02CC/'''
	return _opcodes.is_object_on_screen(hobj)

def get_ground_z_for_3d_coord(x_coord: float, y_coord: float, z_coord: float) -> float:
	'''More info: https://gtamods.com/wiki/02ce/ https://gtagmodding.com/opcode-database/opcode/02CE/'''
	return _opcodes.get_ground_z_for_3d_coord(x_coord, y_coord, z_coord)

def start_script_fire(x_coord: float, y_coord: float, z_coord: float, unknown4: int, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/02cf/ https://gtagmodding.com/opcode-database/opcode/02CF/'''
	return _opcodes.start_script_fire(x_coord, y_coord, z_coord, unknown4, unknown5)

def is_script_fire_extinguished(script_fire: int) -> bool:
	'''More info: https://gtamods.com/wiki/02d0/ https://gtagmodding.com/opcode-database/opcode/02D0/'''
	return _opcodes.is_script_fire_extinguished(script_fire)

def remove_script_fire(script_fire: int) -> None:
	'''More info: https://gtamods.com/wiki/02d1/ https://gtagmodding.com/opcode-database/opcode/02D1/'''
	_opcodes.remove_script_fire(script_fire)

def boat_goto_coords(hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/02d3/ https://gtagmodding.com/opcode-database/opcode/02D3/'''
	_opcodes.boat_goto_coords(hveh, x_coord, y_coord, z_coord)

def boat_stop(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/02d4/ https://gtagmodding.com/opcode-database/opcode/02D4/'''
	_opcodes.boat_stop(hveh)

def is_char_shooting_in_area(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, unknown6: int) -> bool:
	'''More info: https://gtamods.com/wiki/02d6/ https://gtagmodding.com/opcode-database/opcode/02D6/'''
	return _opcodes.is_char_shooting_in_area(hchar, x_coord, y_coord, x_coord4, y_coord5, unknown6)

def is_current_char_weapon(hchar: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/02d8/ https://gtagmodding.com/opcode-database/opcode/02D8/'''
	return _opcodes.is_current_char_weapon(hchar, unknown2)

def set_boat_cruise_speed(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/02db/ https://gtagmodding.com/opcode-database/opcode/02DB/'''
	_opcodes.set_boat_cruise_speed(hveh, unknown2)

def get_random_char_in_zone(unknown1: str, state: int, state3: int, state4: int) -> int:
	'''More info: https://gtamods.com/wiki/02dd/ https://gtagmodding.com/opcode-database/opcode/02DD/'''
	return _opcodes.get_random_char_in_zone(unknown1, state, state3, state4)

def is_char_shooting(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/02e0/ https://gtagmodding.com/opcode-database/opcode/02E0/'''
	return _opcodes.is_char_shooting(hchar)

def create_money_pickup(unknown1: float, unknown2: float, unknown3: float, unknown4: int, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/02e1/ https://gtagmodding.com/opcode-database/opcode/02E1/'''
	return _opcodes.create_money_pickup(unknown1, unknown2, unknown3, unknown4, unknown5)

def set_char_accuracy(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/02e2/ https://gtagmodding.com/opcode-database/opcode/02E2/'''
	_opcodes.set_char_accuracy(hchar, unknown2)

def get_car_speed(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/02e3/ https://gtagmodding.com/opcode-database/opcode/02E3/'''
	return _opcodes.get_car_speed(hveh)

def load_cutscene(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/02e4/ https://gtagmodding.com/opcode-database/opcode/02E4/'''
	_opcodes.load_cutscene(unknown1)

def start_cutscene() -> None:
	'''More info: https://gtamods.com/wiki/02e7/ https://gtagmodding.com/opcode-database/opcode/02E7/'''
	_opcodes.start_cutscene()

def get_cutscene_time() -> int:
	'''More info: https://gtamods.com/wiki/02e8/ https://gtagmodding.com/opcode-database/opcode/02E8/'''
	return _opcodes.get_cutscene_time()

def has_cutscene_finished() -> bool:
	'''More info: https://gtamods.com/wiki/02e9/ https://gtagmodding.com/opcode-database/opcode/02E9/'''
	return _opcodes.has_cutscene_finished()

def clear_cutscene() -> None:
	'''More info: https://gtamods.com/wiki/02ea/ https://gtagmodding.com/opcode-database/opcode/02EA/'''
	_opcodes.clear_cutscene()

def restore_camera_jumpcut() -> None:
	'''More info: https://gtamods.com/wiki/02eb/ https://gtagmodding.com/opcode-database/opcode/02EB/'''
	_opcodes.restore_camera_jumpcut()

def create_collectable1(x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/02ec/ https://gtagmodding.com/opcode-database/opcode/02EC/'''
	_opcodes.create_collectable1(x_coord, y_coord, z_coord)

def set_collectable1_total(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/02ed/ https://gtagmodding.com/opcode-database/opcode/02ED/'''
	_opcodes.set_collectable1_total(unknown1)

def is_projectile_in_area(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> bool:
	'''More info: https://gtamods.com/wiki/02ee/ https://gtagmodding.com/opcode-database/opcode/02EE/'''
	return _opcodes.is_projectile_in_area(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def is_char_model(hchar: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/02f2/ https://gtagmodding.com/opcode-database/opcode/02F2/'''
	return _opcodes.is_char_model(hchar, unknown2)

def sin(angle: float) -> float:
	'''More info: https://gtamods.com/wiki/02f6/ https://gtagmodding.com/opcode-database/opcode/02F6/'''
	return _opcodes.sin(angle)

def cos(angle: float) -> float:
	'''More info: https://gtamods.com/wiki/02f7/ https://gtagmodding.com/opcode-database/opcode/02F7/'''
	return _opcodes.cos(angle)

def get_car_forward_x(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/02f8/ https://gtagmodding.com/opcode-database/opcode/02F8/'''
	return _opcodes.get_car_forward_x(hveh)

def get_car_forward_y(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/02f9/ https://gtagmodding.com/opcode-database/opcode/02F9/'''
	return _opcodes.get_car_forward_y(hveh)

def change_garage_type(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/02fa/ https://gtagmodding.com/opcode-database/opcode/02FA/'''
	_opcodes.change_garage_type(unknown1, unknown2)

def print_with_2_numbers_now(unknown1: str, unknown2: int, unknown3: int, time: int, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/02fd/ https://gtagmodding.com/opcode-database/opcode/02FD/'''
	_opcodes.print_with_2_numbers_now(unknown1, unknown2, unknown3, time, unknown5)

def print_with_3_numbers(unknown1: str, unknown2: int, unknown3: int, unknown4: int, time: int, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/02ff/ https://gtagmodding.com/opcode-database/opcode/02FF/'''
	_opcodes.print_with_3_numbers(unknown1, unknown2, unknown3, unknown4, time, unknown6)

def print_with_4_numbers(unknown1: str, unknown2: int, unknown3: int, unknown4: int, unknown5: int, time: int, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/0302/ https://gtagmodding.com/opcode-database/opcode/0302/'''
	_opcodes.print_with_4_numbers(unknown1, unknown2, unknown3, unknown4, unknown5, time, unknown7)

def print_with_4_numbers_now(unknown1: str, unknown2: int, unknown3: int, unknown4: int, unknown5: int, time: int, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/0303/ https://gtagmodding.com/opcode-database/opcode/0303/'''
	_opcodes.print_with_4_numbers_now(unknown1, unknown2, unknown3, unknown4, unknown5, time, unknown7)

def print_with_6_numbers(unknown1: str, unknown2: int, unknown3: int, unknown4: int, unknown5: int, unknown6: int, unknown7: int, time: int, unknown9: int) -> None:
	'''More info: https://gtamods.com/wiki/0308/ https://gtagmodding.com/opcode-database/opcode/0308/'''
	_opcodes.print_with_6_numbers(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, time, unknown9)

def player_made_progress(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/030c/ https://gtagmodding.com/opcode-database/opcode/030C/'''
	_opcodes.player_made_progress(unknown1)

def set_progress_total(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/030d/ https://gtagmodding.com/opcode-database/opcode/030D/'''
	_opcodes.set_progress_total(unknown1)

def register_mission_given() -> None:
	'''More info: https://gtamods.com/wiki/0317/ https://gtagmodding.com/opcode-database/opcode/0317/'''
	_opcodes.register_mission_given()

def register_mission_passed(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0318/ https://gtagmodding.com/opcode-database/opcode/0318/'''
	_opcodes.register_mission_passed(unknown1)

def remove_all_script_fires() -> None:
	'''More info: https://gtamods.com/wiki/031a/ https://gtagmodding.com/opcode-database/opcode/031A/'''
	_opcodes.remove_all_script_fires()

def has_char_been_damaged_by_weapon(hchar: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/031d/ https://gtagmodding.com/opcode-database/opcode/031D/'''
	return _opcodes.has_char_been_damaged_by_weapon(hchar, unknown2)

def has_car_been_damaged_by_weapon(hveh: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/031e/ https://gtagmodding.com/opcode-database/opcode/031E/'''
	return _opcodes.has_car_been_damaged_by_weapon(hveh, unknown2)

def explode_char_head(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0321/ https://gtagmodding.com/opcode-database/opcode/0321/'''
	_opcodes.explode_char_head(hchar)

def anchor_boat(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0323/ https://gtagmodding.com/opcode-database/opcode/0323/'''
	_opcodes.anchor_boat(hveh, state)

def start_car_fire(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0325/ https://gtagmodding.com/opcode-database/opcode/0325/'''
	return _opcodes.start_car_fire(hveh)

def start_char_fire(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0326/ https://gtagmodding.com/opcode-database/opcode/0326/'''
	return _opcodes.start_char_fire(hchar)

def get_random_car_of_type_in_area(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/0327/ https://gtagmodding.com/opcode-database/opcode/0327/'''
	return _opcodes.get_random_car_of_type_in_area(x_coord, y_coord, x_coord3, y_coord4, unknown5)

def set_camera_zoom(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/032a/ https://gtagmodding.com/opcode-database/opcode/032A/'''
	_opcodes.set_camera_zoom(unknown1)

def create_pickup_with_ammo(unknown1: int, unknown2: int, unknown3: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/032b/ https://gtagmodding.com/opcode-database/opcode/032B/'''
	return _opcodes.create_pickup_with_ammo(unknown1, unknown2, unknown3, x_coord, y_coord, z_coord)

def set_player_never_gets_tired(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0330/ https://gtagmodding.com/opcode-database/opcode/0330/'''
	_opcodes.set_player_never_gets_tired(player, state)

def set_player_fast_reload(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0331/ https://gtagmodding.com/opcode-database/opcode/0331/'''
	_opcodes.set_player_fast_reload(player, state)

def set_char_bleeding(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0332/ https://gtagmodding.com/opcode-database/opcode/0332/'''
	_opcodes.set_char_bleeding(hchar, state)

def set_free_resprays(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0335/ https://gtagmodding.com/opcode-database/opcode/0335/'''
	_opcodes.set_free_resprays(state)

def set_char_visible(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0337/ https://gtagmodding.com/opcode-database/opcode/0337/'''
	_opcodes.set_char_visible(hchar, state)

def set_car_visible(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0338/ https://gtagmodding.com/opcode-database/opcode/0338/'''
	_opcodes.set_car_visible(hveh, state)

def is_area_occupied(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, state: int, state8: int, state9: int, state10: int, state11: int) -> bool:
	'''More info: https://gtamods.com/wiki/0339/ https://gtagmodding.com/opcode-database/opcode/0339/'''
	return _opcodes.is_area_occupied(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, state, state8, state9, state10, state11)

def display_text(unknown1: float, unknown2: float, unknown3: str) -> None:
	'''More info: https://gtamods.com/wiki/033e/ https://gtagmodding.com/opcode-database/opcode/033E/'''
	_opcodes.display_text(unknown1, unknown2, unknown3)

def set_text_scale(unknown1: float, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/033f/ https://gtagmodding.com/opcode-database/opcode/033F/'''
	_opcodes.set_text_scale(unknown1, unknown2)

def set_text_colour(red: int, green: int, blue: int, alpha: int) -> None:
	'''More info: https://gtamods.com/wiki/0340/ https://gtagmodding.com/opcode-database/opcode/0340/'''
	_opcodes.set_text_colour(red, green, blue, alpha)

def set_text_justify(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0341/ https://gtagmodding.com/opcode-database/opcode/0341/'''
	_opcodes.set_text_justify(state)

def set_text_centre(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0342/ https://gtagmodding.com/opcode-database/opcode/0342/'''
	_opcodes.set_text_centre(state)

def set_text_wrapx(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/0343/ https://gtagmodding.com/opcode-database/opcode/0343/'''
	_opcodes.set_text_wrapx(unknown1)

def set_text_centre_size(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/0344/ https://gtagmodding.com/opcode-database/opcode/0344/'''
	_opcodes.set_text_centre_size(unknown1)

def set_text_background(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0345/ https://gtagmodding.com/opcode-database/opcode/0345/'''
	_opcodes.set_text_background(state)

def set_text_proportional(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0348/ https://gtagmodding.com/opcode-database/opcode/0348/'''
	_opcodes.set_text_proportional(state)

def set_text_font(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0349/ https://gtagmodding.com/opcode-database/opcode/0349/'''
	_opcodes.set_text_font(unknown1)

def rotate_object(hobj: int, angle: float, angle3: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/034d/ https://gtagmodding.com/opcode-database/opcode/034D/'''
	_opcodes.rotate_object(hobj, angle, angle3, state)

def slide_object(hobj: int, x_coord: float, y_coord: float, z_coord: float, unknown5: float, unknown6: float, unknown7: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/034e/ https://gtagmodding.com/opcode-database/opcode/034E/'''
	_opcodes.slide_object(hobj, x_coord, y_coord, z_coord, unknown5, unknown6, unknown7, state)

def remove_char_elegantly(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/034f/ https://gtagmodding.com/opcode-database/opcode/034F/'''
	_opcodes.remove_char_elegantly(hchar)

def set_char_stay_in_same_place(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0350/ https://gtagmodding.com/opcode-database/opcode/0350/'''
	_opcodes.set_char_stay_in_same_place(hchar, state)

def is_explosion_in_area(unknown1: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float) -> bool:
	'''More info: https://gtamods.com/wiki/0356/ https://gtagmodding.com/opcode-database/opcode/0356/'''
	return _opcodes.is_explosion_in_area(unknown1, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7)

def place_object_relative_to_car(hobj: int, hveh: int, x_offset: float, y_offset: float, z_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/035c/ https://gtagmodding.com/opcode-database/opcode/035C/'''
	_opcodes.place_object_relative_to_car(hobj, hveh, x_offset, y_offset, z_offset)

def make_object_targettable(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/035d/ https://gtagmodding.com/opcode-database/opcode/035D/'''
	_opcodes.make_object_targettable(hobj, state)

def add_armour_to_char(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/035f/ https://gtagmodding.com/opcode-database/opcode/035F/'''
	_opcodes.add_armour_to_char(hchar, unknown2)

def open_garage(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0360/ https://gtagmodding.com/opcode-database/opcode/0360/'''
	_opcodes.open_garage(unknown1)

def close_garage(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0361/ https://gtagmodding.com/opcode-database/opcode/0361/'''
	_opcodes.close_garage(unknown1)

def warp_char_from_car_to_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/0362/ https://gtagmodding.com/opcode-database/opcode/0362/'''
	_opcodes.warp_char_from_car_to_coord(hchar, x_coord, y_coord, z_coord)

def set_visibility_of_closest_object_of_type(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0363/ https://gtagmodding.com/opcode-database/opcode/0363/'''
	_opcodes.set_visibility_of_closest_object_of_type(x_coord, y_coord, z_coord, radius, unknown5, state)

def has_char_spotted_char(hchar: int, hchar2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0364/ https://gtagmodding.com/opcode-database/opcode/0364/'''
	return _opcodes.has_char_spotted_char(hchar, hchar2)

def has_object_been_damaged(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0366/ https://gtagmodding.com/opcode-database/opcode/0366/'''
	return _opcodes.has_object_been_damaged(hobj)

def warp_char_into_car(hchar: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/036a/ https://gtagmodding.com/opcode-database/opcode/036A/'''
	_opcodes.warp_char_into_car(hchar, hveh)

def print_with_2_numbers_big(unknown1: str, unknown2: int, unknown3: int, time: int, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/036d/ https://gtagmodding.com/opcode-database/opcode/036D/'''
	_opcodes.print_with_2_numbers_big(unknown1, unknown2, unknown3, time, unknown5)

def set_camera_behind_player() -> None:
	'''More info: https://gtamods.com/wiki/0373/ https://gtagmodding.com/opcode-database/opcode/0373/'''
	_opcodes.set_camera_behind_player()

def create_random_char(x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/0376/ https://gtagmodding.com/opcode-database/opcode/0376/'''
	return _opcodes.create_random_char(x_coord, y_coord, z_coord)

def set_object_velocity(hobj: int, x_offset: float, y_offset: float, z_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/0381/ https://gtagmodding.com/opcode-database/opcode/0381/'''
	_opcodes.set_object_velocity(hobj, x_offset, y_offset, z_offset)

def set_object_collision(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0382/ https://gtagmodding.com/opcode-database/opcode/0382/'''
	_opcodes.set_object_collision(hobj, state)

def print_string_in_string_now(unknown1: str, unknown2: str, time: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0384/ https://gtagmodding.com/opcode-database/opcode/0384/'''
	_opcodes.print_string_in_string_now(unknown1, unknown2, time, unknown4)

def is_point_obscured_by_a_mission_entity(x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float) -> bool:
	'''More info: https://gtamods.com/wiki/038a/ https://gtagmodding.com/opcode-database/opcode/038A/'''
	return _opcodes.is_point_obscured_by_a_mission_entity(x_coord, y_coord, z_coord, x_radius, y_radius, z_radius)

def load_all_models_now() -> None:
	'''More info: https://gtamods.com/wiki/038b/ https://gtagmodding.com/opcode-database/opcode/038B/'''
	_opcodes.load_all_models_now()

def add_to_object_velocity(hobj: int, x_offset: float, y_offset: float, z_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/038c/ https://gtagmodding.com/opcode-database/opcode/038C/'''
	_opcodes.add_to_object_velocity(hobj, x_offset, y_offset, z_offset)

def draw_sprite(unknown1: int, unknown2: float, unknown3: float, unknown4: float, unknown5: float, red: int, green: int, blue: int, alpha: int) -> None:
	'''More info: https://gtamods.com/wiki/038d/ https://gtagmodding.com/opcode-database/opcode/038D/'''
	_opcodes.draw_sprite(unknown1, unknown2, unknown3, unknown4, unknown5, red, green, blue, alpha)

def draw_rect(unknown1: float, unknown2: float, unknown3: float, unknown4: float, red: int, green: int, blue: int, alpha: int) -> None:
	'''More info: https://gtamods.com/wiki/038e/ https://gtagmodding.com/opcode-database/opcode/038E/'''
	_opcodes.draw_rect(unknown1, unknown2, unknown3, unknown4, red, green, blue, alpha)

def load_sprite(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/038f/ https://gtagmodding.com/opcode-database/opcode/038F/'''
	_opcodes.load_sprite(unknown1, unknown2)

def load_texture_dictionary(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0390/ https://gtagmodding.com/opcode-database/opcode/0390/'''
	_opcodes.load_texture_dictionary(unknown1)

def remove_texture_dictionary() -> None:
	'''More info: https://gtamods.com/wiki/0391/ https://gtagmodding.com/opcode-database/opcode/0391/'''
	_opcodes.remove_texture_dictionary()

def set_object_dynamic(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0392/ https://gtagmodding.com/opcode-database/opcode/0392/'''
	_opcodes.set_object_dynamic(hobj, state)

def set_char_anim_speed(hchar: int, unknown2: str, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/0393/ https://gtagmodding.com/opcode-database/opcode/0393/'''
	_opcodes.set_char_anim_speed(hchar, unknown2, unknown3)

def play_mission_passed_tune(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0394/ https://gtagmodding.com/opcode-database/opcode/0394/'''
	_opcodes.play_mission_passed_tune(unknown1)

def clear_area(x_coord: float, y_coord: float, z_coord: float, radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0395/ https://gtagmodding.com/opcode-database/opcode/0395/'''
	_opcodes.clear_area(x_coord, y_coord, z_coord, radius, state)

def freeze_onscreen_timer(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0396/ https://gtagmodding.com/opcode-database/opcode/0396/'''
	_opcodes.freeze_onscreen_timer(state)

def switch_car_siren(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0397/ https://gtagmodding.com/opcode-database/opcode/0397/'''
	_opcodes.switch_car_siren(hveh, state)

def set_car_watertight(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/039c/ https://gtagmodding.com/opcode-database/opcode/039C/'''
	_opcodes.set_car_watertight(hveh, state)

def set_char_cant_be_dragged_out(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/039e/ https://gtagmodding.com/opcode-database/opcode/039E/'''
	_opcodes.set_char_cant_be_dragged_out(hchar, state)

def turn_car_to_face_coord(hveh: int, x_coord: float, y_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/039f/ https://gtagmodding.com/opcode-database/opcode/039F/'''
	_opcodes.turn_car_to_face_coord(hveh, x_coord, y_coord)

def draw_sphere(x_coord: float, y_coord: float, z_coord: float, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/03a1/ https://gtagmodding.com/opcode-database/opcode/03A1/'''
	_opcodes.draw_sphere(x_coord, y_coord, z_coord, radius)

def set_car_status(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/03a2/ https://gtagmodding.com/opcode-database/opcode/03A2/'''
	_opcodes.set_car_status(hveh, unknown2)

def is_char_male(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/03a3/ https://gtagmodding.com/opcode-database/opcode/03A3/'''
	return _opcodes.is_char_male(hchar)

def script_name(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/03a4/ https://gtagmodding.com/opcode-database/opcode/03A4/'''
	_opcodes.script_name(unknown1)

def save_int_to_debug_file(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/03a7/ https://gtagmodding.com/opcode-database/opcode/03A7/'''
	_opcodes.save_int_to_debug_file(unknown1)

def save_float_to_debug_file(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/03a8/ https://gtagmodding.com/opcode-database/opcode/03A8/'''
	_opcodes.save_float_to_debug_file(unknown1)

def save_newline_to_debug_file() -> None:
	'''More info: https://gtamods.com/wiki/03a9/ https://gtagmodding.com/opcode-database/opcode/03A9/'''
	_opcodes.save_newline_to_debug_file()

def police_radio_message(x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/03aa/ https://gtagmodding.com/opcode-database/opcode/03AA/'''
	_opcodes.police_radio_message(x_coord, y_coord, z_coord)

def set_car_strong(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/03ab/ https://gtagmodding.com/opcode-database/opcode/03AB/'''
	_opcodes.set_car_strong(hveh, state)

def switch_rubbish(state: int) -> None:
	'''More info: https://gtamods.com/wiki/03ad/ https://gtagmodding.com/opcode-database/opcode/03AD/'''
	_opcodes.switch_rubbish(state)

def switch_streaming(state: int) -> None:
	'''More info: https://gtamods.com/wiki/03af/ https://gtagmodding.com/opcode-database/opcode/03AF/'''
	_opcodes.switch_streaming(state)

def is_garage_open(unknown1: str) -> bool:
	'''More info: https://gtamods.com/wiki/03b0/ https://gtagmodding.com/opcode-database/opcode/03B0/'''
	return _opcodes.is_garage_open(unknown1)

def is_garage_closed(unknown1: str) -> bool:
	'''More info: https://gtamods.com/wiki/03b1/ https://gtagmodding.com/opcode-database/opcode/03B1/'''
	return _opcodes.is_garage_closed(unknown1)

def swap_nearest_building_model(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/03b6/ https://gtagmodding.com/opcode-database/opcode/03B6/'''
	_opcodes.swap_nearest_building_model(x_coord, y_coord, z_coord, radius, unknown5, unknown6)

def switch_world_processing(state: int) -> None:
	'''More info: https://gtamods.com/wiki/03b7/ https://gtagmodding.com/opcode-database/opcode/03B7/'''
	_opcodes.switch_world_processing(state)

def clear_area_of_cars(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/03ba/ https://gtagmodding.com/opcode-database/opcode/03BA/'''
	_opcodes.clear_area_of_cars(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def add_sphere(x_coord: float, y_coord: float, z_coord: float, radius: float) -> int:
	'''More info: https://gtamods.com/wiki/03bc/ https://gtagmodding.com/opcode-database/opcode/03BC/'''
	return _opcodes.add_sphere(x_coord, y_coord, z_coord, radius)

def remove_sphere(sphere: int) -> None:
	'''More info: https://gtamods.com/wiki/03bd/ https://gtagmodding.com/opcode-database/opcode/03BD/'''
	_opcodes.remove_sphere(sphere)

def set_everyone_ignore_player(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/03bf/ https://gtagmodding.com/opcode-database/opcode/03BF/'''
	_opcodes.set_everyone_ignore_player(player, state)

def store_car_char_is_in_no_save(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/03c0/ https://gtagmodding.com/opcode-database/opcode/03C0/'''
	return _opcodes.store_car_char_is_in_no_save(hchar)

def display_onscreen_timer_with_string(unknown1: int, unknown2: int, unknown3: str) -> None:
	'''More info: https://gtamods.com/wiki/03c3/ https://gtagmodding.com/opcode-database/opcode/03C3/'''
	_opcodes.display_onscreen_timer_with_string(unknown1, unknown2, unknown3)

def display_onscreen_counter_with_string(unknown1: int, unknown2: int, unknown3: str) -> None:
	'''More info: https://gtamods.com/wiki/03c4/ https://gtagmodding.com/opcode-database/opcode/03C4/'''
	_opcodes.display_onscreen_counter_with_string(unknown1, unknown2, unknown3)

def create_random_car_for_car_park(x_coord: float, y_coord: float, z_coord: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/03c5/ https://gtagmodding.com/opcode-database/opcode/03C5/'''
	_opcodes.create_random_car_for_car_park(x_coord, y_coord, z_coord, angle)

def set_wanted_multiplier(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/03c7/ https://gtagmodding.com/opcode-database/opcode/03C7/'''
	_opcodes.set_wanted_multiplier(unknown1)

def set_camera_in_front_of_player() -> None:
	'''More info: https://gtamods.com/wiki/03c8/ https://gtagmodding.com/opcode-database/opcode/03C8/'''
	_opcodes.set_camera_in_front_of_player()

def is_car_visibly_damaged(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/03c9/ https://gtagmodding.com/opcode-database/opcode/03C9/'''
	return _opcodes.is_car_visibly_damaged(hveh)

def does_object_exist(hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/03ca/ https://gtagmodding.com/opcode-database/opcode/03CA/'''
	_opcodes.does_object_exist(hobj)

def load_scene(x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/03cb/ https://gtagmodding.com/opcode-database/opcode/03CB/'''
	_opcodes.load_scene(x_coord, y_coord, z_coord)

def add_stuck_car_check(hveh: int, radius: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/03cc/ https://gtagmodding.com/opcode-database/opcode/03CC/'''
	_opcodes.add_stuck_car_check(hveh, radius, time)

def remove_stuck_car_check(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/03cd/ https://gtagmodding.com/opcode-database/opcode/03CD/'''
	_opcodes.remove_stuck_car_check(hveh)

def is_car_stuck(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/03ce/ https://gtagmodding.com/opcode-database/opcode/03CE/'''
	return _opcodes.is_car_stuck(hveh)

def load_mission_audio(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/03cf/ https://gtagmodding.com/opcode-database/opcode/03CF/'''
	_opcodes.load_mission_audio(unknown1, unknown2)

def has_mission_audio_loaded(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/03d0/ https://gtagmodding.com/opcode-database/opcode/03D0/'''
	return _opcodes.has_mission_audio_loaded(unknown1)

def play_mission_audio(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/03d1/ https://gtagmodding.com/opcode-database/opcode/03D1/'''
	_opcodes.play_mission_audio(unknown1)

def has_mission_audio_finished(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/03d2/ https://gtagmodding.com/opcode-database/opcode/03D2/'''
	return _opcodes.has_mission_audio_finished(unknown1)

def get_closest_car_node_with_heading(x_coord: float, y_coord: float, z_coord: float) -> Tuple[float, float, float, float]:
	'''More info: https://gtamods.com/wiki/03d3/ https://gtagmodding.com/opcode-database/opcode/03D3/'''
	return _opcodes.get_closest_car_node_with_heading(x_coord, y_coord, z_coord)

def clear_this_print(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/03d5/ https://gtagmodding.com/opcode-database/opcode/03D5/'''
	_opcodes.clear_this_print(unknown1)

def clear_this_big_print(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/03d6/ https://gtagmodding.com/opcode-database/opcode/03D6/'''
	_opcodes.clear_this_big_print(unknown1)

def set_mission_audio_position(unknown1: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/03d7/ https://gtagmodding.com/opcode-database/opcode/03D7/'''
	_opcodes.set_mission_audio_position(unknown1, x_coord, y_coord, z_coord)

def activate_save_menu() -> None:
	'''More info: https://gtamods.com/wiki/03d8/ https://gtagmodding.com/opcode-database/opcode/03D8/'''
	_opcodes.activate_save_menu()

def has_save_game_finished() -> bool:
	'''More info: https://gtamods.com/wiki/03d9/ https://gtagmodding.com/opcode-database/opcode/03D9/'''
	return _opcodes.has_save_game_finished()

def add_blip_for_pickup(pickup: int) -> int:
	'''More info: https://gtamods.com/wiki/03dc/ https://gtagmodding.com/opcode-database/opcode/03DC/'''
	return _opcodes.add_blip_for_pickup(pickup)

def set_ped_density_multiplier(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/03de/ https://gtagmodding.com/opcode-database/opcode/03DE/'''
	_opcodes.set_ped_density_multiplier(unknown1)

def set_text_draw_before_fade(state: int) -> None:
	'''More info: https://gtamods.com/wiki/03e0/ https://gtagmodding.com/opcode-database/opcode/03E0/'''
	_opcodes.set_text_draw_before_fade(state)

def set_sprites_draw_before_fade(state: int) -> None:
	'''More info: https://gtamods.com/wiki/03e3/ https://gtagmodding.com/opcode-database/opcode/03E3/'''
	_opcodes.set_sprites_draw_before_fade(state)

def set_text_right_justify(state: int) -> None:
	'''More info: https://gtamods.com/wiki/03e4/ https://gtagmodding.com/opcode-database/opcode/03E4/'''
	_opcodes.set_text_right_justify(state)

def print_help(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/03e5/ https://gtagmodding.com/opcode-database/opcode/03E5/'''
	_opcodes.print_help(unknown1)

def clear_help() -> None:
	'''More info: https://gtamods.com/wiki/03e6/ https://gtagmodding.com/opcode-database/opcode/03E6/'''
	_opcodes.clear_help()

def flash_hud_object(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/03e7/ https://gtagmodding.com/opcode-database/opcode/03E7/'''
	_opcodes.flash_hud_object(unknown1)

def clear_small_prints() -> None:
	'''More info: https://gtamods.com/wiki/03eb/ https://gtagmodding.com/opcode-database/opcode/03EB/'''
	_opcodes.clear_small_prints()

def set_upsidedown_car_not_damaged(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/03ed/ https://gtagmodding.com/opcode-database/opcode/03ED/'''
	_opcodes.set_upsidedown_car_not_damaged(hveh, state)

def can_player_start_mission(player: int) -> None:
	'''More info: https://gtamods.com/wiki/03ee/ https://gtagmodding.com/opcode-database/opcode/03EE/'''
	_opcodes.can_player_start_mission(player)

def make_player_safe_for_cutscene(player: int) -> None:
	'''More info: https://gtamods.com/wiki/03ef/ https://gtagmodding.com/opcode-database/opcode/03EF/'''
	_opcodes.make_player_safe_for_cutscene(player)

def use_text_commands(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/03f0/ https://gtagmodding.com/opcode-database/opcode/03F0/'''
	_opcodes.use_text_commands(unknown1)

def get_car_colours(hveh: int) -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/03f3/ https://gtagmodding.com/opcode-database/opcode/03F3/'''
	return _opcodes.get_car_colours(hveh)

def set_all_cars_can_be_damaged(state: int) -> None:
	'''More info: https://gtamods.com/wiki/03f4/ https://gtagmodding.com/opcode-database/opcode/03F4/'''
	_opcodes.set_all_cars_can_be_damaged(state)

def set_car_can_be_damaged(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/03f5/ https://gtagmodding.com/opcode-database/opcode/03F5/'''
	_opcodes.set_car_can_be_damaged(hveh, state)

def set_drunk_input_delay(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/03fd/ https://gtagmodding.com/opcode-database/opcode/03FD/'''
	_opcodes.set_drunk_input_delay(player, unknown2)

def set_char_money(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/03fe/ https://gtagmodding.com/opcode-database/opcode/03FE/'''
	_opcodes.set_char_money(hchar, unknown2)

def get_offset_from_object_in_world_coords(hobj: int, x_offset: float, y_offset: float, z_offset: float) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/0400/ https://gtagmodding.com/opcode-database/opcode/0400/'''
	return _opcodes.get_offset_from_object_in_world_coords(hobj, x_offset, y_offset, z_offset)

def get_offset_from_car_in_world_coords(hveh: int, x_offset: float, y_offset: float, z_offset: float) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/0407/ https://gtagmodding.com/opcode-database/opcode/0407/'''
	return _opcodes.get_offset_from_car_in_world_coords(hveh, x_offset, y_offset, z_offset)

def is_german_game() -> bool:
	'''More info: https://gtamods.com/wiki/040c/ https://gtagmodding.com/opcode-database/opcode/040C/'''
	return _opcodes.is_german_game()

def clear_mission_audio(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/040d/ https://gtagmodding.com/opcode-database/opcode/040D/'''
	_opcodes.clear_mission_audio(unknown1)

def set_free_health_care(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0414/ https://gtagmodding.com/opcode-database/opcode/0414/'''
	_opcodes.set_free_health_care(player, state)

def load_and_launch_mission(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0416/ https://gtagmodding.com/opcode-database/opcode/0416/'''
	_opcodes.load_and_launch_mission(unknown1)

def load_and_launch_mission_internal(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0417/ https://gtagmodding.com/opcode-database/opcode/0417/'''
	_opcodes.load_and_launch_mission_internal(unknown1)

def set_object_draw_last(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0418/ https://gtagmodding.com/opcode-database/opcode/0418/'''
	_opcodes.set_object_draw_last(hobj, state)

def get_ammo_in_char_weapon(hchar: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/041a/ https://gtagmodding.com/opcode-database/opcode/041A/'''
	return _opcodes.get_ammo_in_char_weapon(hchar, unknown2)

def set_near_clip(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/041d/ https://gtagmodding.com/opcode-database/opcode/041D/'''
	_opcodes.set_near_clip(unknown1)

def set_radio_channel(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/041e/ https://gtagmodding.com/opcode-database/opcode/041E/'''
	_opcodes.set_radio_channel(unknown1)

def set_car_traction(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0423/ https://gtagmodding.com/opcode-database/opcode/0423/'''
	_opcodes.set_car_traction(hveh, unknown2)

def are_measurements_in_metres() -> None:
	'''More info: https://gtamods.com/wiki/0424/ https://gtagmodding.com/opcode-database/opcode/0424/'''
	_opcodes.are_measurements_in_metres()

def convert_metres_to_feet(unknown1: float) -> float:
	'''More info: https://gtamods.com/wiki/0425/ https://gtagmodding.com/opcode-database/opcode/0425/'''
	return _opcodes.convert_metres_to_feet(unknown1)

def set_car_avoid_level_transitions(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0428/ https://gtagmodding.com/opcode-database/opcode/0428/'''
	_opcodes.set_car_avoid_level_transitions(hveh, state)

def clear_area_of_chars(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/042b/ https://gtagmodding.com/opcode-database/opcode/042B/'''
	_opcodes.clear_area_of_chars(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def set_total_number_of_missions(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/042c/ https://gtagmodding.com/opcode-database/opcode/042C/'''
	_opcodes.set_total_number_of_missions(unknown1)

def convert_metres_to_feet_int(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/042d/ https://gtagmodding.com/opcode-database/opcode/042D/'''
	return _opcodes.convert_metres_to_feet_int(unknown1)

def register_fastest_time(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/042e/ https://gtagmodding.com/opcode-database/opcode/042E/'''
	_opcodes.register_fastest_time(unknown1, unknown2)

def warp_char_into_car_as_passenger(hchar: int, hveh: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0430/ https://gtagmodding.com/opcode-database/opcode/0430/'''
	_opcodes.warp_char_into_car_as_passenger(hchar, hveh, unknown3)

def is_car_passenger_seat_free(hveh: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0431/ https://gtagmodding.com/opcode-database/opcode/0431/'''
	return _opcodes.is_car_passenger_seat_free(hveh, unknown2)

def get_char_in_car_passenger_seat(hveh: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/0432/ https://gtagmodding.com/opcode-database/opcode/0432/'''
	return _opcodes.get_char_in_car_passenger_seat(hveh, unknown2)

def set_char_is_chris_criminal(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0433/ https://gtagmodding.com/opcode-database/opcode/0433/'''
	_opcodes.set_char_is_chris_criminal(hchar, state)

def start_credits() -> None:
	'''More info: https://gtamods.com/wiki/0434/ https://gtagmodding.com/opcode-database/opcode/0434/'''
	_opcodes.start_credits()

def stop_credits() -> None:
	'''More info: https://gtamods.com/wiki/0435/ https://gtagmodding.com/opcode-database/opcode/0435/'''
	_opcodes.stop_credits()

def are_credits_finished() -> None:
	'''More info: https://gtamods.com/wiki/0436/ https://gtagmodding.com/opcode-database/opcode/0436/'''
	_opcodes.are_credits_finished()

def set_music_does_fade(state: int) -> None:
	'''More info: https://gtamods.com/wiki/043c/ https://gtagmodding.com/opcode-database/opcode/043C/'''
	_opcodes.set_music_does_fade(state)

def get_car_model(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0441/ https://gtagmodding.com/opcode-database/opcode/0441/'''
	return _opcodes.get_car_model(hveh)

def are_any_car_cheats_activated() -> None:
	'''More info: https://gtamods.com/wiki/0445/ https://gtagmodding.com/opcode-database/opcode/0445/'''
	_opcodes.are_any_car_cheats_activated()

def set_char_suffers_critical_hits(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0446/ https://gtagmodding.com/opcode-database/opcode/0446/'''
	_opcodes.set_char_suffers_critical_hits(hchar, state)

def is_char_sitting_in_car(hchar: int, hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0448/ https://gtagmodding.com/opcode-database/opcode/0448/'''
	return _opcodes.is_char_sitting_in_car(hchar, hveh)

def is_char_sitting_in_any_car(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0449/ https://gtagmodding.com/opcode-database/opcode/0449/'''
	return _opcodes.is_char_sitting_in_any_car(hchar)

def is_char_on_foot(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/044b/ https://gtagmodding.com/opcode-database/opcode/044B/'''
	return _opcodes.is_char_on_foot(hchar)

def set_object_rotation(hobj: int, x_rotation: float, y_rotation: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0453/ https://gtagmodding.com/opcode-database/opcode/0453/'''
	_opcodes.set_object_rotation(hobj, x_rotation, y_rotation, angle)

def get_debug_camera_coordinates() -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/0454/ https://gtagmodding.com/opcode-database/opcode/0454/'''
	return _opcodes.get_debug_camera_coordinates()

def is_player_targetting_char(player: int, hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0457/ https://gtagmodding.com/opcode-database/opcode/0457/'''
	return _opcodes.is_player_targetting_char(player, hchar)

def is_player_targetting_object(player: int, hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0458/ https://gtagmodding.com/opcode-database/opcode/0458/'''
	return _opcodes.is_player_targetting_object(player, hobj)

def terminate_all_scripts_with_this_name(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0459/ https://gtagmodding.com/opcode-database/opcode/0459/'''
	_opcodes.terminate_all_scripts_with_this_name(unknown1)

def display_text_with_number(unknown1: float, unknown2: float, unknown3: str, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/045a/ https://gtagmodding.com/opcode-database/opcode/045A/'''
	_opcodes.display_text_with_number(unknown1, unknown2, unknown3, unknown4)

def display_text_with_2_numbers(unknown1: float, unknown2: float, unknown3: str, unknown4: int, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/045b/ https://gtagmodding.com/opcode-database/opcode/045B/'''
	_opcodes.display_text_with_2_numbers(unknown1, unknown2, unknown3, unknown4, unknown5)

def fail_current_mission() -> None:
	'''More info: https://gtamods.com/wiki/045c/ https://gtagmodding.com/opcode-database/opcode/045C/'''
	_opcodes.fail_current_mission()

def set_interpolation_parameters(unknown1: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0460/ https://gtagmodding.com/opcode-database/opcode/0460/'''
	_opcodes.set_interpolation_parameters(unknown1, time)

def get_debug_camera_point_at() -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/0463/ https://gtagmodding.com/opcode-database/opcode/0463/'''
	return _opcodes.get_debug_camera_point_at()

def attach_char_to_car(hchar: int, hveh: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int, angle: float, unknown8: int) -> None:
	'''More info: https://gtamods.com/wiki/0464/ https://gtagmodding.com/opcode-database/opcode/0464/'''
	_opcodes.attach_char_to_car(hchar, hveh, x_offset, y_offset, z_offset, unknown6, angle, unknown8)

def detach_char_from_car(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0465/ https://gtagmodding.com/opcode-database/opcode/0465/'''
	_opcodes.detach_char_from_car(hchar)

def set_car_stay_in_fast_lane(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0466/ https://gtagmodding.com/opcode-database/opcode/0466/'''
	_opcodes.set_car_stay_in_fast_lane(hveh, state)

def clear_char_last_weapon_damage(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0467/ https://gtagmodding.com/opcode-database/opcode/0467/'''
	_opcodes.clear_char_last_weapon_damage(hchar)

def clear_car_last_weapon_damage(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0468/ https://gtagmodding.com/opcode-database/opcode/0468/'''
	_opcodes.clear_car_last_weapon_damage(hveh)

def get_driver_of_car(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/046c/ https://gtagmodding.com/opcode-database/opcode/046C/'''
	return _opcodes.get_driver_of_car(hveh)

def get_number_of_followers(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/046d/ https://gtagmodding.com/opcode-database/opcode/046D/'''
	return _opcodes.get_number_of_followers(hchar)

def give_remote_controlled_model_to_player(player: int, x_coord: float, y_coord: float, z_coord: float, angle: float, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/046e/ https://gtagmodding.com/opcode-database/opcode/046E/'''
	_opcodes.give_remote_controlled_model_to_player(player, x_coord, y_coord, z_coord, angle, unknown6)

def get_current_char_weapon(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0470/ https://gtagmodding.com/opcode-database/opcode/0470/'''
	return _opcodes.get_current_char_weapon(hchar)

def locate_char_any_means_object_2d(hchar: int, hobj: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0471/ https://gtagmodding.com/opcode-database/opcode/0471/'''
	_opcodes.locate_char_any_means_object_2d(hchar, hobj, x_radius, y_radius, state)

def locate_char_on_foot_object_2d(hchar: int, hobj: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0472/ https://gtagmodding.com/opcode-database/opcode/0472/'''
	_opcodes.locate_char_on_foot_object_2d(hchar, hobj, x_radius, y_radius, state)

def locate_char_in_car_object_2d(hchar: int, hobj: int, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0473/ https://gtagmodding.com/opcode-database/opcode/0473/'''
	_opcodes.locate_char_in_car_object_2d(hchar, hobj, x_radius, y_radius, state)

def locate_char_any_means_object_3d(hchar: int, hobj: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0474/ https://gtagmodding.com/opcode-database/opcode/0474/'''
	_opcodes.locate_char_any_means_object_3d(hchar, hobj, x_radius, y_radius, z_radius, state)

def locate_char_on_foot_object_3d(hchar: int, hobj: int, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0475/ https://gtagmodding.com/opcode-database/opcode/0475/'''
	_opcodes.locate_char_on_foot_object_3d(hchar, hobj, x_radius, y_radius, z_radius, state)

def locate_char_in_car_object_3d(hchar: int, hobj: int, x_coord: float, y_coord: float, z_coord: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0476/ https://gtagmodding.com/opcode-database/opcode/0476/'''
	_opcodes.locate_char_in_car_object_3d(hchar, hobj, x_coord, y_coord, z_coord, state)

def set_car_temp_action(hveh: int, unknown2: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0477/ https://gtagmodding.com/opcode-database/opcode/0477/'''
	_opcodes.set_car_temp_action(hveh, unknown2, time)

def is_char_on_any_bike(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/047a/ https://gtagmodding.com/opcode-database/opcode/047A/'''
	return _opcodes.is_char_on_any_bike(hchar)

def can_char_see_dead_char(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0480/ https://gtagmodding.com/opcode-database/opcode/0480/'''
	_opcodes.can_char_see_dead_char(hchar, unknown2)

def get_remote_controlled_car(player: int) -> int:
	'''More info: https://gtamods.com/wiki/0484/ https://gtagmodding.com/opcode-database/opcode/0484/'''
	return _opcodes.get_remote_controlled_car(player)

def is_pc_version() -> bool:
	'''More info: https://gtamods.com/wiki/0485/ https://gtagmodding.com/opcode-database/opcode/0485/'''
	return _opcodes.is_pc_version()

def is_model_available(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0488/ https://gtagmodding.com/opcode-database/opcode/0488/'''
	return _opcodes.is_model_available(unknown1)

def shut_char_up(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0489/ https://gtagmodding.com/opcode-database/opcode/0489/'''
	_opcodes.shut_char_up(hchar, state)

def set_enable_rc_detonate(state: int) -> None:
	'''More info: https://gtamods.com/wiki/048a/ https://gtagmodding.com/opcode-database/opcode/048A/'''
	_opcodes.set_enable_rc_detonate(state)

def set_car_random_route_seed(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/048b/ https://gtagmodding.com/opcode-database/opcode/048B/'''
	_opcodes.set_car_random_route_seed(hveh, unknown2)

def is_any_pickup_at_coords(x_coord: float, y_coord: float, z_coord: float) -> bool:
	'''More info: https://gtamods.com/wiki/048c/ https://gtagmodding.com/opcode-database/opcode/048C/'''
	return _opcodes.is_any_pickup_at_coords(x_coord, y_coord, z_coord)

def remove_all_char_weapons(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/048f/ https://gtagmodding.com/opcode-database/opcode/048F/'''
	_opcodes.remove_all_char_weapons(hchar)

def has_char_got_weapon(hchar: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0491/ https://gtagmodding.com/opcode-database/opcode/0491/'''
	return _opcodes.has_char_got_weapon(hchar, unknown2)

def get_position_of_analogue_sticks(unknown1: int) -> Tuple[int, int, int, int]:
	'''More info: https://gtamods.com/wiki/0494/ https://gtagmodding.com/opcode-database/opcode/0494/'''
	return _opcodes.get_position_of_analogue_sticks(unknown1)

def is_car_on_fire(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0495/ https://gtagmodding.com/opcode-database/opcode/0495/'''
	return _opcodes.is_car_on_fire(hveh)

def is_car_tyre_burst(hveh: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0496/ https://gtagmodding.com/opcode-database/opcode/0496/'''
	return _opcodes.is_car_tyre_burst(hveh, unknown2)

def heli_goto_coords(hveh: int, x_coord: float, y_coord: float, z_coord: float, z_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/04a2/ https://gtagmodding.com/opcode-database/opcode/04A2/'''
	_opcodes.heli_goto_coords(hveh, x_coord, y_coord, z_coord, z_coord5, z_coord6)

def get_dead_char_pickup_coords(hchar: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/04a5/ https://gtagmodding.com/opcode-database/opcode/04A5/'''
	return _opcodes.get_dead_char_pickup_coords(hchar)

def create_protection_pickup(x_coord: float, y_coord: float, z_coord: float, unknown4: int, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/04a6/ https://gtagmodding.com/opcode-database/opcode/04A6/'''
	return _opcodes.create_protection_pickup(x_coord, y_coord, z_coord, unknown4, unknown5)

def is_char_in_any_boat(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/04a7/ https://gtagmodding.com/opcode-database/opcode/04A7/'''
	return _opcodes.is_char_in_any_boat(hchar)

def is_char_in_any_heli(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/04a9/ https://gtagmodding.com/opcode-database/opcode/04A9/'''
	return _opcodes.is_char_in_any_heli(hchar)

def is_char_in_any_plane(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/04ab/ https://gtagmodding.com/opcode-database/opcode/04AB/'''
	return _opcodes.is_char_in_any_plane(hchar)

def is_char_in_water(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/04ad/ https://gtagmodding.com/opcode-database/opcode/04AD/'''
	return _opcodes.is_char_in_water(hchar)

def get_char_weapon_in_slot(hchar: int, unknown2: int) -> Tuple[int, int, int]:
	'''More info: https://gtamods.com/wiki/04b8/ https://gtagmodding.com/opcode-database/opcode/04B8/'''
	return _opcodes.get_char_weapon_in_slot(hchar, unknown2)

def get_closest_straight_road(x_coord: float, y_coord: float, z_coord: float, z_coord4: float, unknown5: float) -> Tuple[float, float, float, float, float, float, float]:
	'''More info: https://gtamods.com/wiki/04b9/ https://gtagmodding.com/opcode-database/opcode/04B9/'''
	return _opcodes.get_closest_straight_road(x_coord, y_coord, z_coord, z_coord4, unknown5)

def set_car_forward_speed(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/04ba/ https://gtagmodding.com/opcode-database/opcode/04BA/'''
	_opcodes.set_car_forward_speed(hveh, unknown2)

def set_area_visible(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/04bb/ https://gtagmodding.com/opcode-database/opcode/04BB/'''
	_opcodes.set_area_visible(unknown1)

def mark_car_as_convoy_car(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04bd/ https://gtagmodding.com/opcode-database/opcode/04BD/'''
	_opcodes.mark_car_as_convoy_car(hveh, state)

def create_script_roadblock(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/04c0/ https://gtagmodding.com/opcode-database/opcode/04C0/'''
	_opcodes.create_script_roadblock(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, unknown7)

def clear_all_script_roadblocks() -> None:
	'''More info: https://gtamods.com/wiki/04c1/ https://gtagmodding.com/opcode-database/opcode/04C1/'''
	_opcodes.clear_all_script_roadblocks()

def get_offset_from_char_in_world_coords(hchar: int, x_offset: float, y_offset: float, z_offset: float) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/04c4/ https://gtagmodding.com/opcode-database/opcode/04C4/'''
	return _opcodes.get_offset_from_char_in_world_coords(hchar, x_offset, y_offset, z_offset)

def has_char_been_photographed(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/04c5/ https://gtagmodding.com/opcode-database/opcode/04C5/'''
	return _opcodes.has_char_been_photographed(hchar)

def is_char_in_flying_vehicle(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/04c8/ https://gtagmodding.com/opcode-database/opcode/04C8/'''
	return _opcodes.is_char_in_flying_vehicle(hchar)

def add_short_range_sprite_blip_for_coord(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/04ce/ https://gtagmodding.com/opcode-database/opcode/04CE/'''
	return _opcodes.add_short_range_sprite_blip_for_coord(x_coord, y_coord, z_coord, unknown4)

def set_heli_orientation(hveh: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/04d0/ https://gtagmodding.com/opcode-database/opcode/04D0/'''
	_opcodes.set_heli_orientation(hveh, angle)

def clear_heli_orientation(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/04d1/ https://gtagmodding.com/opcode-database/opcode/04D1/'''
	_opcodes.clear_heli_orientation(hveh)

def plane_goto_coords(hveh: int, x_coord: float, y_coord: float, z_coord: float, z_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/04d2/ https://gtagmodding.com/opcode-database/opcode/04D2/'''
	_opcodes.plane_goto_coords(hveh, x_coord, y_coord, z_coord, z_coord5, z_coord6)

def get_nth_closest_car_node(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/04d3/ https://gtagmodding.com/opcode-database/opcode/04D3/'''
	return _opcodes.get_nth_closest_car_node(x_coord, y_coord, z_coord, unknown4)

def draw_weaponshop_corona(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, unknown6: int, red: int, green: int, blue: int) -> None:
	'''More info: https://gtamods.com/wiki/04d5/ https://gtagmodding.com/opcode-database/opcode/04D5/'''
	_opcodes.draw_weaponshop_corona(x_coord, y_coord, z_coord, radius, unknown5, unknown6, red, green, blue)

def set_enable_rc_detonate_on_contact(state: int) -> None:
	'''More info: https://gtamods.com/wiki/04d6/ https://gtagmodding.com/opcode-database/opcode/04D6/'''
	_opcodes.set_enable_rc_detonate_on_contact(state)

def freeze_char_position(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04d7/ https://gtagmodding.com/opcode-database/opcode/04D7/'''
	_opcodes.freeze_char_position(hchar, state)

def set_char_drowns_in_water(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04d8/ https://gtagmodding.com/opcode-database/opcode/04D8/'''
	_opcodes.set_char_drowns_in_water(hchar, state)

def set_object_records_collisions(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04d9/ https://gtagmodding.com/opcode-database/opcode/04D9/'''
	_opcodes.set_object_records_collisions(hobj, state)

def has_object_collided_with_anything(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/04da/ https://gtagmodding.com/opcode-database/opcode/04DA/'''
	return _opcodes.has_object_collided_with_anything(hobj)

def remove_rc_buggy() -> None:
	'''More info: https://gtamods.com/wiki/04db/ https://gtagmodding.com/opcode-database/opcode/04DB/'''
	_opcodes.remove_rc_buggy()

def get_char_armour(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/04dd/ https://gtagmodding.com/opcode-database/opcode/04DD/'''
	return _opcodes.get_char_armour(hchar)

def set_heli_stabiliser(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04df/ https://gtagmodding.com/opcode-database/opcode/04DF/'''
	_opcodes.set_heli_stabiliser(hveh, state)

def set_car_straight_line_distance(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/04e0/ https://gtagmodding.com/opcode-database/opcode/04E0/'''
	_opcodes.set_car_straight_line_distance(hveh, unknown2)

def pop_car_boot(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/04e1/ https://gtagmodding.com/opcode-database/opcode/04E1/'''
	_opcodes.pop_car_boot(hveh)

def shut_player_up(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04e2/ https://gtagmodding.com/opcode-database/opcode/04E2/'''
	_opcodes.shut_player_up(player, state)

def set_player_mood(player: int, unknown2: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/04e3/ https://gtagmodding.com/opcode-database/opcode/04E3/'''
	_opcodes.set_player_mood(player, unknown2, time)

def request_collision(x_coord: float, y_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/04e4/ https://gtagmodding.com/opcode-database/opcode/04E4/'''
	_opcodes.request_collision(x_coord, y_coord)

def locate_object_2d(hobj: int, x_coord: float, y_coord: float, x_radius: float, y_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04e5/ https://gtagmodding.com/opcode-database/opcode/04E5/'''
	_opcodes.locate_object_2d(hobj, x_coord, y_coord, x_radius, y_radius, state)

def locate_object_3d(hobj: int, x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04e6/ https://gtagmodding.com/opcode-database/opcode/04E6/'''
	_opcodes.locate_object_3d(hobj, x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, state)

def is_object_in_water(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/04e7/ https://gtagmodding.com/opcode-database/opcode/04E7/'''
	return _opcodes.is_object_in_water(hobj)

def is_object_in_area_2d(hobj: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/04e9/ https://gtagmodding.com/opcode-database/opcode/04E9/'''
	return _opcodes.is_object_in_area_2d(hobj, x_coord, y_coord, x_coord4, y_coord5, state)

def is_object_in_area_3d(hobj: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/04ea/ https://gtagmodding.com/opcode-database/opcode/04EA/'''
	return _opcodes.is_object_in_area_3d(hobj, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, state)

def task_toggle_duck(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04eb/ https://gtagmodding.com/opcode-database/opcode/04EB/'''
	_opcodes.task_toggle_duck(hchar, state)

def request_animation(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/04ed/ https://gtagmodding.com/opcode-database/opcode/04ED/'''
	_opcodes.request_animation(unknown1)

def has_animation_loaded(unknown1: str) -> bool:
	'''More info: https://gtamods.com/wiki/04ee/ https://gtagmodding.com/opcode-database/opcode/04EE/'''
	return _opcodes.has_animation_loaded(unknown1)

def remove_animation(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/04ef/ https://gtagmodding.com/opcode-database/opcode/04EF/'''
	_opcodes.remove_animation(unknown1)

def is_char_waiting_for_world_collision(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/04f0/ https://gtagmodding.com/opcode-database/opcode/04F0/'''
	return _opcodes.is_char_waiting_for_world_collision(hchar)

def is_car_waiting_for_world_collision(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/04f1/ https://gtagmodding.com/opcode-database/opcode/04F1/'''
	return _opcodes.is_car_waiting_for_world_collision(hveh)

def attach_char_to_object(hchar: int, hobj: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int, angle: float, unknown8: int) -> None:
	'''More info: https://gtamods.com/wiki/04f4/ https://gtagmodding.com/opcode-database/opcode/04F4/'''
	_opcodes.attach_char_to_object(hchar, hobj, x_offset, y_offset, z_offset, unknown6, angle, unknown8)

def display_nth_onscreen_counter_with_string(unknown1: int, unknown2: int, unknown3: int, unknown4: str) -> None:
	'''More info: https://gtamods.com/wiki/04f7/ https://gtagmodding.com/opcode-database/opcode/04F7/'''
	_opcodes.display_nth_onscreen_counter_with_string(unknown1, unknown2, unknown3, unknown4)

def add_set_piece(unknown1: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, x_coord6: float, y_coord7: float, x_coord8: float, y_coord9: float, x_coord10: float, y_coord11: float, x_coord12: float, y_coord13: float) -> None:
	'''More info: https://gtamods.com/wiki/04f8/ https://gtagmodding.com/opcode-database/opcode/04F8/'''
	_opcodes.add_set_piece(unknown1, x_coord, y_coord, x_coord4, y_coord5, x_coord6, y_coord7, x_coord8, y_coord9, x_coord10, y_coord11, x_coord12, y_coord13)

def set_extra_colours(unknown1: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/04f9/ https://gtagmodding.com/opcode-database/opcode/04F9/'''
	_opcodes.set_extra_colours(unknown1, state)

def clear_extra_colours(state: int) -> None:
	'''More info: https://gtamods.com/wiki/04fa/ https://gtagmodding.com/opcode-database/opcode/04FA/'''
	_opcodes.clear_extra_colours(state)

def get_wheelie_stats(player: int) -> Tuple[int, float, int, float, int, float]:
	'''More info: https://gtamods.com/wiki/04fc/ https://gtagmodding.com/opcode-database/opcode/04FC/'''
	return _opcodes.get_wheelie_stats(player)

def burst_car_tyre(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/04fe/ https://gtagmodding.com/opcode-database/opcode/04FE/'''
	_opcodes.burst_car_tyre(hveh, unknown2)

def is_player_wearing(player: int, unknown2: int, unknown3: str) -> bool:
	'''More info: https://gtamods.com/wiki/0500/ https://gtagmodding.com/opcode-database/opcode/0500/'''
	return _opcodes.is_player_wearing(player, unknown2, unknown3)

def set_player_can_do_drive_by(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0501/ https://gtagmodding.com/opcode-database/opcode/0501/'''
	_opcodes.set_player_can_do_drive_by(player, state)

def create_swat_rope(unknown1: int, unknown2: int, x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/0503/ https://gtagmodding.com/opcode-database/opcode/0503/'''
	return _opcodes.create_swat_rope(unknown1, unknown2, x_coord, y_coord, z_coord)

def set_car_model_components(unknown1: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0506/ https://gtagmodding.com/opcode-database/opcode/0506/'''
	_opcodes.set_car_model_components(unknown1, unknown2, unknown3)

def close_all_car_doors(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0508/ https://gtagmodding.com/opcode-database/opcode/0508/'''
	_opcodes.close_all_car_doors(hveh)

def get_distance_between_coords_2d(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float) -> float:
	'''More info: https://gtamods.com/wiki/0509/ https://gtagmodding.com/opcode-database/opcode/0509/'''
	return _opcodes.get_distance_between_coords_2d(x_coord, y_coord, x_coord3, y_coord4)

def get_distance_between_coords_3d(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> float:
	'''More info: https://gtamods.com/wiki/050a/ https://gtagmodding.com/opcode-database/opcode/050A/'''
	return _opcodes.get_distance_between_coords_3d(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def sort_out_object_collision_with_car(hobj: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/050e/ https://gtagmodding.com/opcode-database/opcode/050E/'''
	_opcodes.sort_out_object_collision_with_car(hobj, hveh)

def get_max_wanted_level() -> int:
	'''More info: https://gtamods.com/wiki/050f/ https://gtagmodding.com/opcode-database/opcode/050F/'''
	return _opcodes.get_max_wanted_level()

def print_help_forever(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0512/ https://gtagmodding.com/opcode-database/opcode/0512/'''
	_opcodes.print_help_forever(unknown1)

def print_help_forever_with_number(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0513/ https://gtagmodding.com/opcode-database/opcode/0513/'''
	_opcodes.print_help_forever_with_number(unknown1, unknown2)

def create_locked_property_pickup(x_coord: float, y_coord: float, z_coord: float, unknown4: str) -> int:
	'''More info: https://gtamods.com/wiki/0517/ https://gtagmodding.com/opcode-database/opcode/0517/'''
	return _opcodes.create_locked_property_pickup(x_coord, y_coord, z_coord, unknown4)

def create_forsale_property_pickup(x_coord: float, y_coord: float, z_coord: float, unknown4: int, unknown5: str) -> int:
	'''More info: https://gtamods.com/wiki/0518/ https://gtagmodding.com/opcode-database/opcode/0518/'''
	return _opcodes.create_forsale_property_pickup(x_coord, y_coord, z_coord, unknown4, unknown5)

def freeze_car_position(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0519/ https://gtagmodding.com/opcode-database/opcode/0519/'''
	_opcodes.freeze_car_position(hveh, state)

def has_char_been_damaged_by_char(hchar: int, hchar2: int) -> bool:
	'''More info: https://gtamods.com/wiki/051a/ https://gtagmodding.com/opcode-database/opcode/051A/'''
	return _opcodes.has_char_been_damaged_by_char(hchar, hchar2)

def has_char_been_damaged_by_car(hchar: int, hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/051b/ https://gtagmodding.com/opcode-database/opcode/051B/'''
	return _opcodes.has_char_been_damaged_by_car(hchar, hveh)

def has_car_been_damaged_by_char(hveh: int, hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/051c/ https://gtagmodding.com/opcode-database/opcode/051C/'''
	return _opcodes.has_car_been_damaged_by_char(hveh, hchar)

def has_car_been_damaged_by_car(hveh: int, hveh2: int) -> bool:
	'''More info: https://gtamods.com/wiki/051d/ https://gtagmodding.com/opcode-database/opcode/051D/'''
	return _opcodes.has_car_been_damaged_by_car(hveh, hveh2)

def get_radio_channel() -> int:
	'''More info: https://gtamods.com/wiki/051e/ https://gtagmodding.com/opcode-database/opcode/051E/'''
	return _opcodes.get_radio_channel()

def set_char_stay_in_car_when_jacked(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0526/ https://gtagmodding.com/opcode-database/opcode/0526/'''
	_opcodes.set_char_stay_in_car_when_jacked(hchar, state)

def set_player_drunkenness(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/052c/ https://gtagmodding.com/opcode-database/opcode/052C/'''
	_opcodes.set_player_drunkenness(player, unknown2)

def get_random_car_of_type_in_area_no_save(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/053e/ https://gtagmodding.com/opcode-database/opcode/053E/'''
	return _opcodes.get_random_car_of_type_in_area_no_save(x_coord, y_coord, x_coord3, y_coord4, unknown5)

def set_can_burst_car_tyres(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/053f/ https://gtagmodding.com/opcode-database/opcode/053F/'''
	_opcodes.set_can_burst_car_tyres(hveh, state)

def fire_hunter_gun(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0541/ https://gtagmodding.com/opcode-database/opcode/0541/'''
	_opcodes.fire_hunter_gun(hveh)

def is_char_touching_vehicle(hchar: int, hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0547/ https://gtagmodding.com/opcode-database/opcode/0547/'''
	return _opcodes.is_char_touching_vehicle(hchar, hveh)

def set_char_can_be_shot_in_vehicle(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/054a/ https://gtagmodding.com/opcode-database/opcode/054A/'''
	_opcodes.set_char_can_be_shot_in_vehicle(hchar, state)

def load_mission_text(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/054c/ https://gtagmodding.com/opcode-database/opcode/054C/'''
	_opcodes.load_mission_text(unknown1)

def clear_char_last_damage_entity(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/054e/ https://gtagmodding.com/opcode-database/opcode/054E/'''
	_opcodes.clear_char_last_damage_entity(hchar)

def clear_car_last_damage_entity(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/054f/ https://gtagmodding.com/opcode-database/opcode/054F/'''
	_opcodes.clear_car_last_damage_entity(hveh)

def freeze_object_position(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0550/ https://gtagmodding.com/opcode-database/opcode/0550/'''
	_opcodes.freeze_object_position(hobj, state)

def remove_weapon_from_char(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0555/ https://gtagmodding.com/opcode-database/opcode/0555/'''
	_opcodes.remove_weapon_from_char(hchar, unknown2)

def make_player_fire_proof(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/055d/ https://gtagmodding.com/opcode-database/opcode/055D/'''
	_opcodes.make_player_fire_proof(player, state)

def increase_player_max_health(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/055e/ https://gtagmodding.com/opcode-database/opcode/055E/'''
	_opcodes.increase_player_max_health(player, unknown2)

def increase_player_max_armour(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/055f/ https://gtagmodding.com/opcode-database/opcode/055F/'''
	_opcodes.increase_player_max_armour(player, unknown2)

def create_random_char_as_driver(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0560/ https://gtagmodding.com/opcode-database/opcode/0560/'''
	return _opcodes.create_random_char_as_driver(hveh)

def create_random_char_as_passenger(hveh: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/0561/ https://gtagmodding.com/opcode-database/opcode/0561/'''
	return _opcodes.create_random_char_as_passenger(hveh, unknown2)

def ensure_player_has_drive_by_weapon(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0563/ https://gtagmodding.com/opcode-database/opcode/0563/'''
	_opcodes.ensure_player_has_drive_by_weapon(player, unknown2)

def make_heli_come_crashing_down(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0564/ https://gtagmodding.com/opcode-database/opcode/0564/'''
	_opcodes.make_heli_come_crashing_down(hveh)

def add_explosion_no_sound(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0565/ https://gtagmodding.com/opcode-database/opcode/0565/'''
	_opcodes.add_explosion_no_sound(x_coord, y_coord, z_coord, unknown4)

def set_object_area_visible(hobj: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0566/ https://gtagmodding.com/opcode-database/opcode/0566/'''
	_opcodes.set_object_area_visible(hobj, unknown2)

def set_char_never_targetted(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0568/ https://gtagmodding.com/opcode-database/opcode/0568/'''
	_opcodes.set_char_never_targetted(hchar, state)

def was_cutscene_skipped() -> None:
	'''More info: https://gtamods.com/wiki/056a/ https://gtagmodding.com/opcode-database/opcode/056A/'''
	_opcodes.was_cutscene_skipped()

def is_char_in_any_police_vehicle(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/056c/ https://gtagmodding.com/opcode-database/opcode/056C/'''
	return _opcodes.is_char_in_any_police_vehicle(hchar)

def does_char_exist(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/056d/ https://gtagmodding.com/opcode-database/opcode/056D/'''
	_opcodes.does_char_exist(hchar)

def does_vehicle_exist(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/056e/ https://gtagmodding.com/opcode-database/opcode/056E/'''
	_opcodes.does_vehicle_exist(hveh)

def add_short_range_sprite_blip_for_contact_point(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/0570/ https://gtagmodding.com/opcode-database/opcode/0570/'''
	return _opcodes.add_short_range_sprite_blip_for_contact_point(x_coord, y_coord, z_coord, unknown4)

def set_all_taxis_have_nitro(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0572/ https://gtagmodding.com/opcode-database/opcode/0572/'''
	_opcodes.set_all_taxis_have_nitro(state)

def freeze_car_position_and_dont_load_collision(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0574/ https://gtagmodding.com/opcode-database/opcode/0574/'''
	_opcodes.freeze_car_position_and_dont_load_collision(hveh, state)

def freeze_char_position_and_dont_load_collision(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0575/ https://gtagmodding.com/opcode-database/opcode/0575/'''
	_opcodes.freeze_char_position_and_dont_load_collision(hchar, state)

def set_player_is_in_stadium(state: int) -> None:
	'''More info: https://gtamods.com/wiki/057e/ https://gtagmodding.com/opcode-database/opcode/057E/'''
	_opcodes.set_player_is_in_stadium(state)

def display_radar(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0581/ https://gtagmodding.com/opcode-database/opcode/0581/'''
	_opcodes.display_radar(state)

def register_best_position(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0582/ https://gtagmodding.com/opcode-database/opcode/0582/'''
	_opcodes.register_best_position(unknown1, unknown2)

def is_player_in_info_zone(player: int, unknown2: str) -> bool:
	'''More info: https://gtamods.com/wiki/0583/ https://gtagmodding.com/opcode-database/opcode/0583/'''
	return _opcodes.is_player_in_info_zone(player, unknown2)

def set_load_collision_for_car_flag(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0587/ https://gtagmodding.com/opcode-database/opcode/0587/'''
	_opcodes.set_load_collision_for_car_flag(hveh, state)

def set_load_collision_for_char_flag(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0588/ https://gtagmodding.com/opcode-database/opcode/0588/'''
	_opcodes.set_load_collision_for_char_flag(hchar, state)

def add_big_gun_flash(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/058a/ https://gtagmodding.com/opcode-database/opcode/058A/'''
	_opcodes.add_big_gun_flash(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def get_progress_percentage() -> float:
	'''More info: https://gtamods.com/wiki/058c/ https://gtagmodding.com/opcode-database/opcode/058C/'''
	return _opcodes.get_progress_percentage()

def set_vehicle_to_fade_in(hveh: int, alpha: int) -> None:
	'''More info: https://gtamods.com/wiki/0594/ https://gtagmodding.com/opcode-database/opcode/0594/'''
	_opcodes.set_vehicle_to_fade_in(hveh, alpha)

def register_oddjob_mission_passed() -> None:
	'''More info: https://gtamods.com/wiki/0595/ https://gtagmodding.com/opcode-database/opcode/0595/'''
	_opcodes.register_oddjob_mission_passed()

def is_player_in_shortcut_taxi(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0596/ https://gtagmodding.com/opcode-database/opcode/0596/'''
	return _opcodes.is_player_in_shortcut_taxi(player)

def is_char_ducking(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0597/ https://gtagmodding.com/opcode-database/opcode/0597/'''
	return _opcodes.is_char_ducking(hchar)

def is_australian_game() -> bool:
	'''More info: https://gtamods.com/wiki/059a/ https://gtagmodding.com/opcode-database/opcode/059A/'''
	return _opcodes.is_australian_game()

def set_onscreen_counter_flash_when_first_displayed(unknown1: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/059c/ https://gtagmodding.com/opcode-database/opcode/059C/'''
	_opcodes.set_onscreen_counter_flash_when_first_displayed(unknown1, state)

def shuffle_card_decks(state: int) -> None:
	'''More info: https://gtamods.com/wiki/059d/ https://gtagmodding.com/opcode-database/opcode/059D/'''
	_opcodes.shuffle_card_decks(state)

def fetch_next_card() -> int:
	'''More info: https://gtamods.com/wiki/059e/ https://gtagmodding.com/opcode-database/opcode/059E/'''
	return _opcodes.fetch_next_card()

def get_object_velocity(hobj: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/059f/ https://gtagmodding.com/opcode-database/opcode/059F/'''
	return _opcodes.get_object_velocity(hobj)

def is_debug_camera_on() -> bool:
	'''More info: https://gtamods.com/wiki/05a0/ https://gtagmodding.com/opcode-database/opcode/05A0/'''
	return _opcodes.is_debug_camera_on()

def add_to_object_rotation_velocity(hobj: int, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/05a1/ https://gtagmodding.com/opcode-database/opcode/05A1/'''
	_opcodes.add_to_object_rotation_velocity(hobj, x_rotation, y_rotation, z_rotation)

def set_object_rotation_velocity(hobj: int, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/05a2/ https://gtagmodding.com/opcode-database/opcode/05A2/'''
	_opcodes.set_object_rotation_velocity(hobj, x_rotation, y_rotation, z_rotation)

def is_object_static(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/05a3/ https://gtagmodding.com/opcode-database/opcode/05A3/'''
	return _opcodes.is_object_static(hobj)

def get_angle_between_2d_vectors(x_offset: float, y_offset: float, x_offset3: float, y_offset4: float) -> float:
	'''More info: https://gtamods.com/wiki/05a4/ https://gtagmodding.com/opcode-database/opcode/05A4/'''
	return _opcodes.get_angle_between_2d_vectors(x_offset, y_offset, x_offset3, y_offset4)

def do_2d_rectangles_collide(unknown1: float, unknown2: float, unknown3: float, unknown4: float, unknown5: float, unknown6: float, unknown7: float, unknown8: float) -> None:
	'''More info: https://gtamods.com/wiki/05a5/ https://gtagmodding.com/opcode-database/opcode/05A5/'''
	_opcodes.do_2d_rectangles_collide(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, unknown8)

def get_object_rotation_velocity(hobj: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/05a6/ https://gtagmodding.com/opcode-database/opcode/05A6/'''
	return _opcodes.get_object_rotation_velocity(hobj)

def add_velocity_relative_to_object_velocity(hobj: int, unknown2: float, unknown3: float, unknown4: float) -> None:
	'''More info: https://gtamods.com/wiki/05a7/ https://gtagmodding.com/opcode-database/opcode/05A7/'''
	_opcodes.add_velocity_relative_to_object_velocity(hobj, unknown2, unknown3, unknown4)

def get_object_speed(hobj: int) -> float:
	'''More info: https://gtamods.com/wiki/05a8/ https://gtagmodding.com/opcode-database/opcode/05A8/'''
	return _opcodes.get_object_speed(hobj)

def set_var_text_label(unknown1: str, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/05a9/ https://gtagmodding.com/opcode-database/opcode/05A9/'''
	_opcodes.set_var_text_label(unknown1, unknown2)

def set_lvar_text_label(unknown1: str, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/05aa/ https://gtagmodding.com/opcode-database/opcode/05AA/'''
	_opcodes.set_lvar_text_label(unknown1, unknown2)

def is_var_text_label_equal_to_text_label(unknown1: str, unknown2: str) -> bool:
	'''More info: https://gtamods.com/wiki/05ad/ https://gtagmodding.com/opcode-database/opcode/05AD/'''
	return _opcodes.is_var_text_label_equal_to_text_label(unknown1, unknown2)

def is_lvar_text_label_equal_to_text_label(unknown1: str, unknown2: str) -> bool:
	'''More info: https://gtamods.com/wiki/05ae/ https://gtagmodding.com/opcode-database/opcode/05AE/'''
	return _opcodes.is_lvar_text_label_equal_to_text_label(unknown1, unknown2)

def get_2d_lines_intersect_point(unknown1: float, unknown2: float, unknown3: float, unknown4: float, unknown5: float, unknown6: float, unknown7: float, unknown8: float) -> Tuple[float, float]:
	'''More info: https://gtamods.com/wiki/05b0/ https://gtagmodding.com/opcode-database/opcode/05B0/'''
	return _opcodes.get_2d_lines_intersect_point(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, unknown8)

def task_pause(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05b9/ https://gtagmodding.com/opcode-database/opcode/05B9/'''
	_opcodes.task_pause(hchar, time)

def task_stand_still(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05ba/ https://gtagmodding.com/opcode-database/opcode/05BA/'''
	_opcodes.task_stand_still(hchar, time)

def task_fall_and_get_up(hchar: int, state: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05bb/ https://gtagmodding.com/opcode-database/opcode/05BB/'''
	_opcodes.task_fall_and_get_up(hchar, state, time)

def task_jump(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/05bc/ https://gtagmodding.com/opcode-database/opcode/05BC/'''
	_opcodes.task_jump(hchar, state)

def task_tired(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05bd/ https://gtagmodding.com/opcode-database/opcode/05BD/'''
	_opcodes.task_tired(hchar, time)

def task_die(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/05be/ https://gtagmodding.com/opcode-database/opcode/05BE/'''
	_opcodes.task_die(hchar)

def task_look_at_char(hchar: int, hchar2: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05bf/ https://gtagmodding.com/opcode-database/opcode/05BF/'''
	_opcodes.task_look_at_char(hchar, hchar2, time)

def task_look_at_vehicle(hchar: int, hveh: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05c0/ https://gtagmodding.com/opcode-database/opcode/05C0/'''
	_opcodes.task_look_at_vehicle(hchar, hveh, time)

def task_say(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/05c1/ https://gtagmodding.com/opcode-database/opcode/05C1/'''
	_opcodes.task_say(hchar, unknown2)

def task_shake_fist(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/05c2/ https://gtagmodding.com/opcode-database/opcode/05C2/'''
	_opcodes.task_shake_fist(hchar)

def task_cower(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/05c3/ https://gtagmodding.com/opcode-database/opcode/05C3/'''
	_opcodes.task_cower(hchar)

def task_hands_up(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05c4/ https://gtagmodding.com/opcode-database/opcode/05C4/'''
	_opcodes.task_hands_up(hchar, time)

def task_duck(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05c5/ https://gtagmodding.com/opcode-database/opcode/05C5/'''
	_opcodes.task_duck(hchar, time)

def task_use_atm(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/05c7/ https://gtagmodding.com/opcode-database/opcode/05C7/'''
	_opcodes.task_use_atm(hchar)

def task_scratch_head(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/05c8/ https://gtagmodding.com/opcode-database/opcode/05C8/'''
	_opcodes.task_scratch_head(hchar)

def task_look_about(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05c9/ https://gtagmodding.com/opcode-database/opcode/05C9/'''
	_opcodes.task_look_about(hchar, time)

def task_enter_car_as_passenger(hchar: int, hveh: int, unknown3: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05ca/ https://gtagmodding.com/opcode-database/opcode/05CA/'''
	_opcodes.task_enter_car_as_passenger(hchar, hveh, unknown3, time)

def task_enter_car_as_driver(hchar: int, hveh: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05cb/ https://gtagmodding.com/opcode-database/opcode/05CB/'''
	_opcodes.task_enter_car_as_driver(hchar, hveh, time)

def task_leave_car(hchar: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/05cd/ https://gtagmodding.com/opcode-database/opcode/05CD/'''
	_opcodes.task_leave_car(hchar, hveh)

def task_leave_car_and_flee(hchar: int, hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/05cf/ https://gtagmodding.com/opcode-database/opcode/05CF/'''
	_opcodes.task_leave_car_and_flee(hchar, hveh, x_coord, y_coord, z_coord)

def task_car_drive_to_coord(hchar: int, hveh: int, x_coord: float, y_coord: float, z_coord: float, unknown6: float, unknown7: int, unknown8: int, unknown9: int) -> None:
	'''More info: https://gtamods.com/wiki/05d1/ https://gtagmodding.com/opcode-database/opcode/05D1/'''
	_opcodes.task_car_drive_to_coord(hchar, hveh, x_coord, y_coord, z_coord, unknown6, unknown7, unknown8, unknown9)

def task_car_drive_wander(hchar: int, hveh: int, unknown3: float, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/05d2/ https://gtagmodding.com/opcode-database/opcode/05D2/'''
	_opcodes.task_car_drive_wander(hchar, hveh, unknown3, unknown4)

def task_go_straight_to_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float, unknown5: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05d3/ https://gtagmodding.com/opcode-database/opcode/05D3/'''
	_opcodes.task_go_straight_to_coord(hchar, x_coord, y_coord, z_coord, unknown5, time)

def task_achieve_heading(hchar: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/05d4/ https://gtagmodding.com/opcode-database/opcode/05D4/'''
	_opcodes.task_achieve_heading(hchar, angle)

def flush_route() -> None:
	'''More info: https://gtamods.com/wiki/05d6/ https://gtagmodding.com/opcode-database/opcode/05D6/'''
	_opcodes.flush_route()

def extend_route(x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/05d7/ https://gtagmodding.com/opcode-database/opcode/05D7/'''
	_opcodes.extend_route(x_coord, y_coord, z_coord)

def task_follow_point_route(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/05d8/ https://gtagmodding.com/opcode-database/opcode/05D8/'''
	_opcodes.task_follow_point_route(hchar, unknown2, unknown3)

def task_goto_char(hchar: int, hchar2: int, time: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/05d9/ https://gtagmodding.com/opcode-database/opcode/05D9/'''
	_opcodes.task_goto_char(hchar, hchar2, time, radius)

def task_flee_point(hchar: int, x_coord: float, y_coord: float, z_coord: float, radius: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05da/ https://gtagmodding.com/opcode-database/opcode/05DA/'''
	_opcodes.task_flee_point(hchar, x_coord, y_coord, z_coord, radius, time)

def task_flee_char(hchar: int, hchar2: int, radius: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05db/ https://gtagmodding.com/opcode-database/opcode/05DB/'''
	_opcodes.task_flee_char(hchar, hchar2, radius, time)

def task_smart_flee_point(hchar: int, x_coord: float, y_coord: float, z_coord: float, radius: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05dc/ https://gtagmodding.com/opcode-database/opcode/05DC/'''
	_opcodes.task_smart_flee_point(hchar, x_coord, y_coord, z_coord, radius, time)

def task_smart_flee_char(hchar: int, hchar2: int, radius: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05dd/ https://gtagmodding.com/opcode-database/opcode/05DD/'''
	_opcodes.task_smart_flee_char(hchar, hchar2, radius, time)

def task_wander_standard(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/05de/ https://gtagmodding.com/opcode-database/opcode/05DE/'''
	_opcodes.task_wander_standard(hchar)

def task_kill_char_on_foot(hchar: int, hchar2: int) -> None:
	'''More info: https://gtamods.com/wiki/05e2/ https://gtagmodding.com/opcode-database/opcode/05E2/'''
	_opcodes.task_kill_char_on_foot(hchar, hchar2)

def start_recording_car(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/05e9/ https://gtagmodding.com/opcode-database/opcode/05E9/'''
	_opcodes.start_recording_car(hveh, unknown2)

def start_playback_recorded_car(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/05eb/ https://gtagmodding.com/opcode-database/opcode/05EB/'''
	_opcodes.start_playback_recorded_car(hveh, unknown2)

def stop_playback_recorded_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/05ec/ https://gtagmodding.com/opcode-database/opcode/05EC/'''
	_opcodes.stop_playback_recorded_car(hveh)

def pause_playback_recorded_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/05ed/ https://gtagmodding.com/opcode-database/opcode/05ED/'''
	_opcodes.pause_playback_recorded_car(hveh)

def unpause_playback_recorded_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/05ee/ https://gtagmodding.com/opcode-database/opcode/05EE/'''
	_opcodes.unpause_playback_recorded_car(hveh)

def set_car_escort_car_left(hveh: int, hveh2: int) -> None:
	'''More info: https://gtamods.com/wiki/05f1/ https://gtagmodding.com/opcode-database/opcode/05F1/'''
	_opcodes.set_car_escort_car_left(hveh, hveh2)

def set_car_escort_car_right(hveh: int, hveh2: int) -> None:
	'''More info: https://gtamods.com/wiki/05f2/ https://gtagmodding.com/opcode-database/opcode/05F2/'''
	_opcodes.set_car_escort_car_right(hveh, hveh2)

def set_car_escort_car_rear(hveh: int, hveh2: int) -> None:
	'''More info: https://gtamods.com/wiki/05f3/ https://gtagmodding.com/opcode-database/opcode/05F3/'''
	_opcodes.set_car_escort_car_rear(hveh, hveh2)

def set_car_escort_car_front(hveh: int, hveh2: int) -> None:
	'''More info: https://gtamods.com/wiki/05f4/ https://gtagmodding.com/opcode-database/opcode/05F4/'''
	_opcodes.set_car_escort_car_front(hveh, hveh2)

def task_follow_path_nodes_to_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float, unknown5: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/05f5/ https://gtagmodding.com/opcode-database/opcode/05F5/'''
	_opcodes.task_follow_path_nodes_to_coord(hchar, x_coord, y_coord, z_coord, unknown5, time)

def is_char_in_angled_area_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05f6/ https://gtagmodding.com/opcode-database/opcode/05F6/'''
	return _opcodes.is_char_in_angled_area_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, angle, state)

def is_char_in_angled_area_on_foot_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05f7/ https://gtagmodding.com/opcode-database/opcode/05F7/'''
	return _opcodes.is_char_in_angled_area_on_foot_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, angle, state)

def is_char_in_angled_area_in_car_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05f8/ https://gtagmodding.com/opcode-database/opcode/05F8/'''
	return _opcodes.is_char_in_angled_area_in_car_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, angle, state)

def is_char_stopped_in_angled_area_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05f9/ https://gtagmodding.com/opcode-database/opcode/05F9/'''
	return _opcodes.is_char_stopped_in_angled_area_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, angle, state)

def is_char_stopped_in_angled_area_on_foot_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05fa/ https://gtagmodding.com/opcode-database/opcode/05FA/'''
	return _opcodes.is_char_stopped_in_angled_area_on_foot_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, angle, state)

def is_char_stopped_in_angled_area_in_car_2d(hchar: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05fb/ https://gtagmodding.com/opcode-database/opcode/05FB/'''
	return _opcodes.is_char_stopped_in_angled_area_in_car_2d(hchar, x_coord, y_coord, x_coord4, y_coord5, angle, state)

def is_char_in_angled_area_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05fc/ https://gtagmodding.com/opcode-database/opcode/05FC/'''
	return _opcodes.is_char_in_angled_area_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, angle, state)

def is_char_in_angled_area_on_foot_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05fd/ https://gtagmodding.com/opcode-database/opcode/05FD/'''
	return _opcodes.is_char_in_angled_area_on_foot_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, angle, state)

def is_char_in_angled_area_in_car_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, unknown8: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05fe/ https://gtagmodding.com/opcode-database/opcode/05FE/'''
	return _opcodes.is_char_in_angled_area_in_car_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, unknown8, state)

def is_char_stopped_in_angled_area_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/05ff/ https://gtagmodding.com/opcode-database/opcode/05FF/'''
	return _opcodes.is_char_stopped_in_angled_area_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, angle, state)

def is_char_stopped_in_angled_area_on_foot_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/0600/ https://gtagmodding.com/opcode-database/opcode/0600/'''
	return _opcodes.is_char_stopped_in_angled_area_on_foot_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, angle, state)

def is_char_stopped_in_angled_area_in_car_3d(hchar: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/0601/ https://gtagmodding.com/opcode-database/opcode/0601/'''
	return _opcodes.is_char_stopped_in_angled_area_in_car_3d(hchar, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, angle, state)

def is_char_in_taxi(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0602/ https://gtagmodding.com/opcode-database/opcode/0602/'''
	return _opcodes.is_char_in_taxi(hchar)

def task_go_to_coord_any_means(hchar: int, x_coord: float, y_coord: float, z_coord: float, unknown5: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0603/ https://gtagmodding.com/opcode-database/opcode/0603/'''
	_opcodes.task_go_to_coord_any_means(hchar, x_coord, y_coord, z_coord, unknown5, hveh)

def get_heading_from_vector_2d(x_coord: float, y_coord: float) -> float:
	'''More info: https://gtamods.com/wiki/0604/ https://gtagmodding.com/opcode-database/opcode/0604/'''
	return _opcodes.get_heading_from_vector_2d(x_coord, y_coord)

def task_play_anim(hchar: int, unknown2: str, unknown3: str, unknown4: float, state: int, state6: int, state7: int, state8: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0605/ https://gtagmodding.com/opcode-database/opcode/0605/'''
	_opcodes.task_play_anim(hchar, unknown2, unknown3, unknown4, state, state6, state7, state8, time)

def load_path_nodes_in_area(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float) -> None:
	'''More info: https://gtamods.com/wiki/0606/ https://gtagmodding.com/opcode-database/opcode/0606/'''
	_opcodes.load_path_nodes_in_area(x_coord, y_coord, x_coord3, y_coord4)

def release_path_nodes() -> None:
	'''More info: https://gtamods.com/wiki/0607/ https://gtagmodding.com/opcode-database/opcode/0607/'''
	_opcodes.release_path_nodes()

def load_char_decision_maker(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/060a/ https://gtagmodding.com/opcode-database/opcode/060A/'''
	return _opcodes.load_char_decision_maker(unknown1)

def set_char_decision_maker(hchar: int, decision_maker: int) -> None:
	'''More info: https://gtamods.com/wiki/060b/ https://gtagmodding.com/opcode-database/opcode/060B/'''
	_opcodes.set_char_decision_maker(hchar, decision_maker)

def set_text_dropshadow(unknown1: int, red: int, green: int, blue: int, alpha: int) -> None:
	'''More info: https://gtamods.com/wiki/060d/ https://gtagmodding.com/opcode-database/opcode/060D/'''
	_opcodes.set_text_dropshadow(unknown1, red, green, blue, alpha)

def is_playback_going_on_for_car(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/060e/ https://gtagmodding.com/opcode-database/opcode/060E/'''
	return _opcodes.is_playback_going_on_for_car(hveh)

def set_sense_range(hchar: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/060f/ https://gtagmodding.com/opcode-database/opcode/060F/'''
	_opcodes.set_sense_range(hchar, unknown2)

def is_char_playing_anim(hchar: int, unknown2: str) -> bool:
	'''More info: https://gtamods.com/wiki/0611/ https://gtagmodding.com/opcode-database/opcode/0611/'''
	return _opcodes.is_char_playing_anim(hchar, unknown2)

def set_char_anim_playing_flag(hchar: int, unknown2: str, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0612/ https://gtagmodding.com/opcode-database/opcode/0612/'''
	_opcodes.set_char_anim_playing_flag(hchar, unknown2, state)

def get_char_anim_current_time(hchar: int, unknown2: str) -> float:
	'''More info: https://gtamods.com/wiki/0613/ https://gtagmodding.com/opcode-database/opcode/0613/'''
	return _opcodes.get_char_anim_current_time(hchar, unknown2)

def set_char_anim_current_time(hchar: int, unknown2: str, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/0614/ https://gtagmodding.com/opcode-database/opcode/0614/'''
	_opcodes.set_char_anim_current_time(hchar, unknown2, unknown3)

def open_sequence_task() -> int:
	'''More info: https://gtamods.com/wiki/0615/ https://gtagmodding.com/opcode-database/opcode/0615/'''
	return _opcodes.open_sequence_task()

def close_sequence_task(sequence_task: int) -> None:
	'''More info: https://gtamods.com/wiki/0616/ https://gtagmodding.com/opcode-database/opcode/0616/'''
	_opcodes.close_sequence_task(sequence_task)

def perform_sequence_task(hchar: int, sequence_task: int) -> None:
	'''More info: https://gtamods.com/wiki/0618/ https://gtagmodding.com/opcode-database/opcode/0618/'''
	_opcodes.perform_sequence_task(hchar, sequence_task)

def set_char_collision(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0619/ https://gtagmodding.com/opcode-database/opcode/0619/'''
	_opcodes.set_char_collision(hchar, state)

def get_char_anim_total_time(hchar: int, unknown2: str) -> float:
	'''More info: https://gtamods.com/wiki/061a/ https://gtagmodding.com/opcode-database/opcode/061A/'''
	return _opcodes.get_char_anim_total_time(hchar, unknown2)

def clear_sequence_task(sequence_task: int) -> None:
	'''More info: https://gtamods.com/wiki/061b/ https://gtagmodding.com/opcode-database/opcode/061B/'''
	_opcodes.clear_sequence_task(sequence_task)

def add_attractor(x_coord: float, y_coord: float, z_coord: float, angle: float, unknown5: float, sequence_task: int) -> int:
	'''More info: https://gtamods.com/wiki/061d/ https://gtagmodding.com/opcode-database/opcode/061D/'''
	return _opcodes.add_attractor(x_coord, y_coord, z_coord, angle, unknown5, sequence_task)

def clear_attractor(attractor: int) -> None:
	'''More info: https://gtamods.com/wiki/061e/ https://gtagmodding.com/opcode-database/opcode/061E/'''
	_opcodes.clear_attractor(attractor)

def create_char_at_attractor(unknown1: int, unknown2: int, attractor: int, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/0621/ https://gtagmodding.com/opcode-database/opcode/0621/'''
	return _opcodes.create_char_at_attractor(unknown1, unknown2, attractor, unknown4)

def task_leave_car_immediately(hchar: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0622/ https://gtagmodding.com/opcode-database/opcode/0622/'''
	_opcodes.task_leave_car_immediately(hchar, hveh)

def increment_int_stat(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0623/ https://gtagmodding.com/opcode-database/opcode/0623/'''
	_opcodes.increment_int_stat(unknown1, unknown2)

def increment_float_stat(unknown1: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0624/ https://gtagmodding.com/opcode-database/opcode/0624/'''
	_opcodes.increment_float_stat(unknown1, unknown2)

def decrement_int_stat(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0625/ https://gtagmodding.com/opcode-database/opcode/0625/'''
	_opcodes.decrement_int_stat(unknown1, unknown2)

def decrement_float_stat(unknown1: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0626/ https://gtagmodding.com/opcode-database/opcode/0626/'''
	_opcodes.decrement_float_stat(unknown1, unknown2)

def register_int_stat(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0627/ https://gtagmodding.com/opcode-database/opcode/0627/'''
	_opcodes.register_int_stat(unknown1, unknown2)

def register_float_stat(unknown1: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0628/ https://gtagmodding.com/opcode-database/opcode/0628/'''
	_opcodes.register_float_stat(unknown1, unknown2)

def set_int_stat(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0629/ https://gtagmodding.com/opcode-database/opcode/0629/'''
	_opcodes.set_int_stat(unknown1, unknown2)

def set_float_stat(unknown1: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/062a/ https://gtagmodding.com/opcode-database/opcode/062A/'''
	_opcodes.set_float_stat(unknown1, unknown2)

def get_script_task_status(hchar: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/062e/ https://gtagmodding.com/opcode-database/opcode/062E/'''
	return _opcodes.get_script_task_status(hchar, unknown2)

def create_group(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/062f/ https://gtagmodding.com/opcode-database/opcode/062F/'''
	return _opcodes.create_group(unknown1)

def set_group_leader(group: int, hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0630/ https://gtagmodding.com/opcode-database/opcode/0630/'''
	_opcodes.set_group_leader(group, hchar)

def set_group_member(group: int, hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0631/ https://gtagmodding.com/opcode-database/opcode/0631/'''
	_opcodes.set_group_member(group, hchar)

def remove_group(group: int) -> None:
	'''More info: https://gtamods.com/wiki/0632/ https://gtagmodding.com/opcode-database/opcode/0632/'''
	_opcodes.remove_group(group)

def task_leave_any_car(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0633/ https://gtagmodding.com/opcode-database/opcode/0633/'''
	_opcodes.task_leave_any_car(hchar)

def task_kill_char_on_foot_while_ducking(hchar: int, hchar2: int, unknown3: int, unknown4: int, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/0634/ https://gtagmodding.com/opcode-database/opcode/0634/'''
	_opcodes.task_kill_char_on_foot_while_ducking(hchar, hchar2, unknown3, unknown4, unknown5)

def task_aim_gun_at_char(hchar: int, hchar2: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0635/ https://gtagmodding.com/opcode-database/opcode/0635/'''
	_opcodes.task_aim_gun_at_char(hchar, hchar2, time)

def task_go_to_coord_while_shooting(hchar: int, x_coord: float, y_coord: float, z_coord: float, unknown5: int, unknown6: float, unknown7: float, hchar8: int) -> None:
	'''More info: https://gtamods.com/wiki/0637/ https://gtagmodding.com/opcode-database/opcode/0637/'''
	_opcodes.task_go_to_coord_while_shooting(hchar, x_coord, y_coord, z_coord, unknown5, unknown6, unknown7, hchar8)

def task_stay_in_same_place(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0638/ https://gtagmodding.com/opcode-database/opcode/0638/'''
	_opcodes.task_stay_in_same_place(hchar, state)

def task_turn_char_to_face_char(hchar: int, hchar2: int) -> None:
	'''More info: https://gtamods.com/wiki/0639/ https://gtagmodding.com/opcode-database/opcode/0639/'''
	_opcodes.task_turn_char_to_face_char(hchar, hchar2)

def is_char_at_scripted_attractor(hchar: int, attractor: int) -> bool:
	'''More info: https://gtamods.com/wiki/0642/ https://gtagmodding.com/opcode-database/opcode/0642/'''
	return _opcodes.is_char_at_scripted_attractor(hchar, attractor)

def set_sequence_to_repeat(sequence_task: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0643/ https://gtagmodding.com/opcode-database/opcode/0643/'''
	_opcodes.set_sequence_to_repeat(sequence_task, state)

def get_sequence_progress(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0646/ https://gtagmodding.com/opcode-database/opcode/0646/'''
	return _opcodes.get_sequence_progress(hchar)

def clear_look_at(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0647/ https://gtagmodding.com/opcode-database/opcode/0647/'''
	_opcodes.clear_look_at(hchar)

def set_follow_node_threshold_distance(hchar: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0648/ https://gtagmodding.com/opcode-database/opcode/0648/'''
	_opcodes.set_follow_node_threshold_distance(hchar, radius)

def create_fx_system(unknown1: str, x_coord: float, y_coord: float, z_coord: float, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/064b/ https://gtagmodding.com/opcode-database/opcode/064B/'''
	return _opcodes.create_fx_system(unknown1, x_coord, y_coord, z_coord, unknown5)

def play_fx_system(fx_system: int) -> None:
	'''More info: https://gtamods.com/wiki/064c/ https://gtagmodding.com/opcode-database/opcode/064C/'''
	_opcodes.play_fx_system(fx_system)

def stop_fx_system(fx_system: int) -> None:
	'''More info: https://gtamods.com/wiki/064e/ https://gtagmodding.com/opcode-database/opcode/064E/'''
	_opcodes.stop_fx_system(fx_system)

def play_and_kill_fx_system(fx_system: int) -> None:
	'''More info: https://gtamods.com/wiki/064f/ https://gtagmodding.com/opcode-database/opcode/064F/'''
	_opcodes.play_and_kill_fx_system(fx_system)

def kill_fx_system(fx_system: int) -> None:
	'''More info: https://gtamods.com/wiki/0650/ https://gtagmodding.com/opcode-database/opcode/0650/'''
	_opcodes.kill_fx_system(fx_system)

def get_int_stat(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/0652/ https://gtagmodding.com/opcode-database/opcode/0652/'''
	return _opcodes.get_int_stat(unknown1)

def get_float_stat(unknown1: int) -> float:
	'''More info: https://gtamods.com/wiki/0653/ https://gtagmodding.com/opcode-database/opcode/0653/'''
	return _opcodes.get_float_stat(unknown1)

def set_object_render_scorched(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0654/ https://gtagmodding.com/opcode-database/opcode/0654/'''
	_opcodes.set_object_render_scorched(hobj, state)

def task_look_at_object(hchar: int, hobj: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0655/ https://gtagmodding.com/opcode-database/opcode/0655/'''
	_opcodes.task_look_at_object(hchar, hobj, time)

def limit_angle(angle: float) -> float:
	'''More info: https://gtamods.com/wiki/0656/ https://gtagmodding.com/opcode-database/opcode/0656/'''
	return _opcodes.limit_angle(angle)

def open_car_door(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0657/ https://gtagmodding.com/opcode-database/opcode/0657/'''
	_opcodes.open_car_door(hveh, unknown2)

def get_pickup_coordinates(pickup: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/065b/ https://gtagmodding.com/opcode-database/opcode/065B/'''
	return _opcodes.get_pickup_coordinates(pickup)

def remove_decision_maker(decision_maker: int) -> None:
	'''More info: https://gtamods.com/wiki/065c/ https://gtagmodding.com/opcode-database/opcode/065C/'''
	_opcodes.remove_decision_maker(decision_maker)

def view_integer_variable(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/065d/ https://gtagmodding.com/opcode-database/opcode/065D/'''
	_opcodes.view_integer_variable(unknown1, unknown2)

def view_float_variable(unknown1: float, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/065e/ https://gtagmodding.com/opcode-database/opcode/065E/'''
	_opcodes.view_float_variable(unknown1, unknown2)

def watch_integer_variable(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/065f/ https://gtagmodding.com/opcode-database/opcode/065F/'''
	_opcodes.watch_integer_variable(unknown1, unknown2)

def watch_float_variable(unknown1: float, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/0660/ https://gtagmodding.com/opcode-database/opcode/0660/'''
	_opcodes.watch_float_variable(unknown1, unknown2)

def breakpoint(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0661/ https://gtagmodding.com/opcode-database/opcode/0661/'''
	_opcodes.breakpoint(unknown1)

def write_debug(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0662/ https://gtagmodding.com/opcode-database/opcode/0662/'''
	_opcodes.write_debug(unknown1)

def write_debug_with_int(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0663/ https://gtagmodding.com/opcode-database/opcode/0663/'''
	_opcodes.write_debug_with_int(unknown1, unknown2)

def write_debug_with_float(unknown1: str, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0664/ https://gtagmodding.com/opcode-database/opcode/0664/'''
	_opcodes.write_debug_with_float(unknown1, unknown2)

def get_char_model(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0665/ https://gtagmodding.com/opcode-database/opcode/0665/'''
	return _opcodes.get_char_model(hchar)

def task_aim_gun_at_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0667/ https://gtagmodding.com/opcode-database/opcode/0667/'''
	_opcodes.task_aim_gun_at_coord(hchar, x_coord, y_coord, z_coord, time)

def task_shoot_at_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0668/ https://gtagmodding.com/opcode-database/opcode/0668/'''
	_opcodes.task_shoot_at_coord(hchar, x_coord, y_coord, z_coord, time)

def create_fx_system_on_char(unknown1: str, hchar: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int) -> int:
	'''More info: https://gtamods.com/wiki/0669/ https://gtagmodding.com/opcode-database/opcode/0669/'''
	return _opcodes.create_fx_system_on_char(unknown1, hchar, x_offset, y_offset, z_offset, unknown6)

def create_fx_system_on_char_with_direction(unknown1: str, hchar: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float, unknown9: int) -> int:
	'''More info: https://gtamods.com/wiki/066a/ https://gtagmodding.com/opcode-database/opcode/066A/'''
	return _opcodes.create_fx_system_on_char_with_direction(unknown1, hchar, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation, unknown9)

def create_fx_system_on_car(unknown1: str, hveh: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int) -> int:
	'''More info: https://gtamods.com/wiki/066b/ https://gtagmodding.com/opcode-database/opcode/066B/'''
	return _opcodes.create_fx_system_on_car(unknown1, hveh, x_offset, y_offset, z_offset, unknown6)

def create_fx_system_on_car_with_direction(unknown1: str, hveh: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float, unknown9: int) -> int:
	'''More info: https://gtamods.com/wiki/066c/ https://gtagmodding.com/opcode-database/opcode/066C/'''
	return _opcodes.create_fx_system_on_car_with_direction(unknown1, hveh, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation, unknown9)

def create_fx_system_on_object(unknown1: str, hobj: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int) -> int:
	'''More info: https://gtamods.com/wiki/066d/ https://gtagmodding.com/opcode-database/opcode/066D/'''
	return _opcodes.create_fx_system_on_object(unknown1, hobj, x_offset, y_offset, z_offset, unknown6)

def create_fx_system_on_object_with_direction(unknown1: str, hobj: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float, unknown9: int) -> int:
	'''More info: https://gtamods.com/wiki/066e/ https://gtagmodding.com/opcode-database/opcode/066E/'''
	return _opcodes.create_fx_system_on_object_with_direction(unknown1, hobj, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation, unknown9)

def task_destroy_car(hchar: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0672/ https://gtagmodding.com/opcode-database/opcode/0672/'''
	_opcodes.task_destroy_car(hchar, hveh)

def task_dive_and_get_up(hchar: int, unknown2: float, unknown3: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0673/ https://gtagmodding.com/opcode-database/opcode/0673/'''
	_opcodes.task_dive_and_get_up(hchar, unknown2, unknown3, time)

def custom_plate_for_next_car(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/0674/ https://gtagmodding.com/opcode-database/opcode/0674/'''
	_opcodes.custom_plate_for_next_car(unknown1, unknown2)

def task_shuffle_to_next_car_seat(hchar: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0676/ https://gtagmodding.com/opcode-database/opcode/0676/'''
	_opcodes.task_shuffle_to_next_car_seat(hchar, hveh)

def task_chat_with_char(hchar: int, hchar2: int, state: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0677/ https://gtagmodding.com/opcode-database/opcode/0677/'''
	_opcodes.task_chat_with_char(hchar, hchar2, state, unknown4)

def attach_camera_to_vehicle(hveh: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float, rotation: float, unknown9: int) -> None:
	'''More info: https://gtamods.com/wiki/0679/ https://gtagmodding.com/opcode-database/opcode/0679/'''
	_opcodes.attach_camera_to_vehicle(hveh, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation, rotation, unknown9)

def attach_camera_to_vehicle_look_at_vehicle(hveh: int, x_offset: float, y_offset: float, z_offset: float, hveh5: int, radius: float, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/067a/ https://gtagmodding.com/opcode-database/opcode/067A/'''
	_opcodes.attach_camera_to_vehicle_look_at_vehicle(hveh, x_offset, y_offset, z_offset, hveh5, radius, unknown7)

def attach_camera_to_vehicle_look_at_char(hveh: int, x_offset: float, y_offset: float, z_offset: float, hchar: int, radius: float, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/067b/ https://gtagmodding.com/opcode-database/opcode/067B/'''
	_opcodes.attach_camera_to_vehicle_look_at_char(hveh, x_offset, y_offset, z_offset, hchar, radius, unknown7)

def attach_camera_to_char(hchar: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float, rotation: float, unknown9: int) -> None:
	'''More info: https://gtamods.com/wiki/067c/ https://gtagmodding.com/opcode-database/opcode/067C/'''
	_opcodes.attach_camera_to_char(hchar, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation, rotation, unknown9)

def attach_camera_to_char_look_at_char(hchar: int, x_offset: float, y_offset: float, z_offset: float, hchar5: int, radius: float, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/067e/ https://gtagmodding.com/opcode-database/opcode/067E/'''
	_opcodes.attach_camera_to_char_look_at_char(hchar, x_offset, y_offset, z_offset, hchar5, radius, unknown7)

def force_car_lights(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/067f/ https://gtagmodding.com/opcode-database/opcode/067F/'''
	_opcodes.force_car_lights(hveh, unknown2)

def add_pedtype_as_attractor_user(attractor: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0680/ https://gtagmodding.com/opcode-database/opcode/0680/'''
	_opcodes.add_pedtype_as_attractor_user(attractor, unknown2)

def attach_object_to_car(hobj: int, hveh: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/0681/ https://gtagmodding.com/opcode-database/opcode/0681/'''
	_opcodes.attach_object_to_car(hobj, hveh, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation)

def detach_object(hobj: int, x_coord: float, y_coord: float, z_coord: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0682/ https://gtagmodding.com/opcode-database/opcode/0682/'''
	_opcodes.detach_object(hobj, x_coord, y_coord, z_coord, state)

def attach_car_to_car(hveh: int, hveh2: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/0683/ https://gtagmodding.com/opcode-database/opcode/0683/'''
	_opcodes.attach_car_to_car(hveh, hveh2, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation)

def detach_car(hveh: int, x_coord: float, y_coord: float, z_coord: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0684/ https://gtagmodding.com/opcode-database/opcode/0684/'''
	_opcodes.detach_car(hveh, x_coord, y_coord, z_coord, state)

def is_object_attached(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0685/ https://gtagmodding.com/opcode-database/opcode/0685/'''
	return _opcodes.is_object_attached(hobj)

def is_vehicle_attached(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0686/ https://gtagmodding.com/opcode-database/opcode/0686/'''
	return _opcodes.is_vehicle_attached(hveh)

def clear_char_tasks(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0687/ https://gtagmodding.com/opcode-database/opcode/0687/'''
	_opcodes.clear_char_tasks(hchar)

def task_toggle_ped_threat_scanner(hchar: int, state: int, state3: int, state4: int) -> None:
	'''More info: https://gtamods.com/wiki/0688/ https://gtagmodding.com/opcode-database/opcode/0688/'''
	_opcodes.task_toggle_ped_threat_scanner(hchar, state, state3, state4)

def pop_car_door(hveh: int, unknown2: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0689/ https://gtagmodding.com/opcode-database/opcode/0689/'''
	_opcodes.pop_car_door(hveh, unknown2, state)

def fix_car_door(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/068a/ https://gtagmodding.com/opcode-database/opcode/068A/'''
	_opcodes.fix_car_door(hveh, unknown2)

def task_everyone_leave_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/068b/ https://gtagmodding.com/opcode-database/opcode/068B/'''
	_opcodes.task_everyone_leave_car(hveh)

def is_player_targetting_anything(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/068c/ https://gtagmodding.com/opcode-database/opcode/068C/'''
	return _opcodes.is_player_targetting_anything(player)

def get_active_camera_coordinates() -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/068d/ https://gtagmodding.com/opcode-database/opcode/068D/'''
	return _opcodes.get_active_camera_coordinates()

def get_active_camera_point_at() -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/068e/ https://gtagmodding.com/opcode-database/opcode/068E/'''
	return _opcodes.get_active_camera_point_at()

def pop_car_panel(hveh: int, unknown2: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0697/ https://gtagmodding.com/opcode-database/opcode/0697/'''
	_opcodes.pop_car_panel(hveh, unknown2, state)

def fix_car_panel(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0698/ https://gtagmodding.com/opcode-database/opcode/0698/'''
	_opcodes.fix_car_panel(hveh, unknown2)

def fix_car_tyre(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0699/ https://gtagmodding.com/opcode-database/opcode/0699/'''
	_opcodes.fix_car_tyre(hveh, unknown2)

def attach_object_to_object(hobj: int, hobj2: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/069a/ https://gtagmodding.com/opcode-database/opcode/069A/'''
	_opcodes.attach_object_to_object(hobj, hobj2, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation)

def attach_object_to_char(hobj: int, hchar: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/069b/ https://gtagmodding.com/opcode-database/opcode/069B/'''
	_opcodes.attach_object_to_char(hobj, hchar, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation)

def get_car_speed_vector(hveh: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/06a2/ https://gtagmodding.com/opcode-database/opcode/06A2/'''
	return _opcodes.get_car_speed_vector(hveh)

def get_car_mass(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/06a3/ https://gtagmodding.com/opcode-database/opcode/06A3/'''
	return _opcodes.get_car_mass(hveh)

def task_dive_from_attachment_and_get_up(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/06a5/ https://gtagmodding.com/opcode-database/opcode/06A5/'''
	_opcodes.task_dive_from_attachment_and_get_up(hchar, time)

def attach_char_to_bike(hchar: int, hveh: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int, angle: float, angle8: float, unknown9: int) -> None:
	'''More info: https://gtamods.com/wiki/06a7/ https://gtagmodding.com/opcode-database/opcode/06A7/'''
	_opcodes.attach_char_to_bike(hchar, hveh, x_offset, y_offset, z_offset, unknown6, angle, angle8, unknown9)

def task_goto_char_offset(hchar: int, hchar2: int, time: int, radius: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/06a8/ https://gtagmodding.com/opcode-database/opcode/06A8/'''
	_opcodes.task_goto_char_offset(hchar, hchar2, time, radius, angle)

def task_look_at_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/06a9/ https://gtagmodding.com/opcode-database/opcode/06A9/'''
	_opcodes.task_look_at_coord(hchar, x_coord, y_coord, z_coord, time)

def is_recording_going_on_for_car(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/06aa/ https://gtagmodding.com/opcode-database/opcode/06AA/'''
	return _opcodes.is_recording_going_on_for_car(hveh)

def hide_char_weapon_for_scripted_cutscene(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/06ab/ https://gtagmodding.com/opcode-database/opcode/06AB/'''
	_opcodes.hide_char_weapon_for_scripted_cutscene(hchar, state)

def get_char_speed(hchar: int) -> float:
	'''More info: https://gtamods.com/wiki/06ac/ https://gtagmodding.com/opcode-database/opcode/06AC/'''
	return _opcodes.get_char_speed(hchar)

def set_group_decision_maker(group: int, decision_maker: int) -> None:
	'''More info: https://gtamods.com/wiki/06ad/ https://gtagmodding.com/opcode-database/opcode/06AD/'''
	_opcodes.set_group_decision_maker(group, decision_maker)

def load_group_decision_maker(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/06ae/ https://gtagmodding.com/opcode-database/opcode/06AE/'''
	return _opcodes.load_group_decision_maker(unknown1)

def disable_player_sprint(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/06af/ https://gtagmodding.com/opcode-database/opcode/06AF/'''
	_opcodes.disable_player_sprint(player, state)

def task_sit_down(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/06b0/ https://gtagmodding.com/opcode-database/opcode/06B0/'''
	_opcodes.task_sit_down(hchar, time)

def create_searchlight(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, radius: float, radius8: float) -> int:
	'''More info: https://gtamods.com/wiki/06b1/ https://gtagmodding.com/opcode-database/opcode/06B1/'''
	return _opcodes.create_searchlight(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, radius, radius8)

def delete_searchlight(searchlight: int) -> None:
	'''More info: https://gtamods.com/wiki/06b2/ https://gtagmodding.com/opcode-database/opcode/06B2/'''
	_opcodes.delete_searchlight(searchlight)

def does_searchlight_exist(searchlight: int) -> None:
	'''More info: https://gtamods.com/wiki/06b3/ https://gtagmodding.com/opcode-database/opcode/06B3/'''
	_opcodes.does_searchlight_exist(searchlight)

def move_searchlight_between_coords(searchlight: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, unknown8: float) -> None:
	'''More info: https://gtamods.com/wiki/06b4/ https://gtagmodding.com/opcode-database/opcode/06B4/'''
	_opcodes.move_searchlight_between_coords(searchlight, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, unknown8)

def point_searchlight_at_coord(searchlight: int, x_coord: float, y_coord: float, z_coord: float, unknown5: float) -> None:
	'''More info: https://gtamods.com/wiki/06b5/ https://gtagmodding.com/opcode-database/opcode/06B5/'''
	_opcodes.point_searchlight_at_coord(searchlight, x_coord, y_coord, z_coord, unknown5)

def point_searchlight_at_char(searchlight: int, hchar: int, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/06b6/ https://gtagmodding.com/opcode-database/opcode/06B6/'''
	_opcodes.point_searchlight_at_char(searchlight, hchar, unknown3)

def is_char_in_searchlight(searchlight: int, hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/06b7/ https://gtagmodding.com/opcode-database/opcode/06B7/'''
	return _opcodes.is_char_in_searchlight(searchlight, hchar)

def has_cutscene_loaded() -> bool:
	'''More info: https://gtamods.com/wiki/06b9/ https://gtagmodding.com/opcode-database/opcode/06B9/'''
	return _opcodes.has_cutscene_loaded()

def task_turn_char_to_face_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/06ba/ https://gtagmodding.com/opcode-database/opcode/06BA/'''
	_opcodes.task_turn_char_to_face_coord(hchar, x_coord, y_coord, z_coord)

def task_drive_point_route(hchar: int, hveh: int, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/06bb/ https://gtagmodding.com/opcode-database/opcode/06BB/'''
	_opcodes.task_drive_point_route(hchar, hveh, unknown3)

def fire_single_bullet(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/06bc/ https://gtagmodding.com/opcode-database/opcode/06BC/'''
	_opcodes.fire_single_bullet(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, unknown7)

def is_line_of_sight_clear(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, state: int, state8: int, state9: int, state10: int, state11: int) -> bool:
	'''More info: https://gtamods.com/wiki/06bd/ https://gtagmodding.com/opcode-database/opcode/06BD/'''
	return _opcodes.is_line_of_sight_clear(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, state, state8, state9, state10, state11)

def get_car_roll(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/06be/ https://gtagmodding.com/opcode-database/opcode/06BE/'''
	return _opcodes.get_car_roll(hveh)

def point_searchlight_at_vehicle(searchlight: int, hveh: int, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/06bf/ https://gtagmodding.com/opcode-database/opcode/06BF/'''
	_opcodes.point_searchlight_at_vehicle(searchlight, hveh, unknown3)

def is_vehicle_in_searchlight(searchlight: int, hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/06c0/ https://gtagmodding.com/opcode-database/opcode/06C0/'''
	return _opcodes.is_vehicle_in_searchlight(searchlight, hveh)

def create_searchlight_on_vehicle(hveh: int, x_offset: float, y_offset: float, z_offset: float, x_coord: float, y_coord: float, z_coord: float, radius: float, radius9: float) -> int:
	'''More info: https://gtamods.com/wiki/06c1/ https://gtagmodding.com/opcode-database/opcode/06C1/'''
	return _opcodes.create_searchlight_on_vehicle(hveh, x_offset, y_offset, z_offset, x_coord, y_coord, z_coord, radius, radius9)

def task_go_to_coord_while_aiming(hchar: int, x_coord: float, y_coord: float, z_coord: float, unknown5: int, radius: float, radius7: float, hchar8: int, x_offset: float, y_offset: float, z_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/06c2/ https://gtagmodding.com/opcode-database/opcode/06C2/'''
	_opcodes.task_go_to_coord_while_aiming(hchar, x_coord, y_coord, z_coord, unknown5, radius, radius7, hchar8, x_offset, y_offset, z_offset)

def get_number_of_fires_in_range(x_coord: float, y_coord: float, z_coord: float, radius: float) -> int:
	'''More info: https://gtamods.com/wiki/06c3/ https://gtagmodding.com/opcode-database/opcode/06C3/'''
	return _opcodes.get_number_of_fires_in_range(x_coord, y_coord, z_coord, radius)

def add_blip_for_searchlight(searchlight: int) -> int:
	'''More info: https://gtamods.com/wiki/06c4/ https://gtagmodding.com/opcode-database/opcode/06C4/'''
	return _opcodes.add_blip_for_searchlight(searchlight)

def skip_to_end_and_stop_playback_recorded_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/06c5/ https://gtagmodding.com/opcode-database/opcode/06C5/'''
	_opcodes.skip_to_end_and_stop_playback_recorded_car(hveh)

def task_car_temp_action(hchar: int, hveh: int, unknown3: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/06c7/ https://gtagmodding.com/opcode-database/opcode/06C7/'''
	_opcodes.task_car_temp_action(hchar, hveh, unknown3, time)

def set_la_riots(state: int) -> None:
	'''More info: https://gtamods.com/wiki/06c8/ https://gtagmodding.com/opcode-database/opcode/06C8/'''
	_opcodes.set_la_riots(state)

def remove_char_from_group(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/06c9/ https://gtagmodding.com/opcode-database/opcode/06C9/'''
	_opcodes.remove_char_from_group(hchar)

def attach_searchlight_to_searchlight_object(searchlight: int, hobj: int, hobj3: int, hobj4: int, x_offset: float, y_offset: float, z_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/06ca/ https://gtagmodding.com/opcode-database/opcode/06CA/'''
	_opcodes.attach_searchlight_to_searchlight_object(searchlight, hobj, hobj3, hobj4, x_offset, y_offset, z_offset)

def display_timer_bars(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/06cf/ https://gtagmodding.com/opcode-database/opcode/06CF/'''
	_opcodes.display_timer_bars(unknown1)

def switch_emergency_services(state: int) -> None:
	'''More info: https://gtamods.com/wiki/06d0/ https://gtagmodding.com/opcode-database/opcode/06D0/'''
	_opcodes.switch_emergency_services(state)

def create_checkpoint(unknown1: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, radius: float) -> int:
	'''More info: https://gtamods.com/wiki/06d5/ https://gtagmodding.com/opcode-database/opcode/06D5/'''
	return _opcodes.create_checkpoint(unknown1, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, radius)

def delete_checkpoint(checkpoint: int) -> None:
	'''More info: https://gtamods.com/wiki/06d6/ https://gtagmodding.com/opcode-database/opcode/06D6/'''
	_opcodes.delete_checkpoint(checkpoint)

def switch_random_trains(state: int) -> None:
	'''More info: https://gtamods.com/wiki/06d7/ https://gtagmodding.com/opcode-database/opcode/06D7/'''
	_opcodes.switch_random_trains(state)

def create_mission_train(unknown1: int, x_coord: float, y_coord: float, z_coord: float, state: int) -> int:
	'''More info: https://gtamods.com/wiki/06d8/ https://gtagmodding.com/opcode-database/opcode/06D8/'''
	return _opcodes.create_mission_train(unknown1, x_coord, y_coord, z_coord, state)

def delete_mission_trains() -> None:
	'''More info: https://gtamods.com/wiki/06d9/ https://gtagmodding.com/opcode-database/opcode/06D9/'''
	_opcodes.delete_mission_trains()

def mark_mission_trains_as_no_longer_needed() -> None:
	'''More info: https://gtamods.com/wiki/06da/ https://gtagmodding.com/opcode-database/opcode/06DA/'''
	_opcodes.mark_mission_trains_as_no_longer_needed()

def delete_all_trains() -> None:
	'''More info: https://gtamods.com/wiki/06db/ https://gtagmodding.com/opcode-database/opcode/06DB/'''
	_opcodes.delete_all_trains()

def set_train_speed(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/06dc/ https://gtagmodding.com/opcode-database/opcode/06DC/'''
	_opcodes.set_train_speed(hveh, unknown2)

def set_train_cruise_speed(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/06dd/ https://gtagmodding.com/opcode-database/opcode/06DD/'''
	_opcodes.set_train_cruise_speed(hveh, unknown2)

def get_train_caboose(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/06de/ https://gtagmodding.com/opcode-database/opcode/06DE/'''
	return _opcodes.get_train_caboose(hveh)

def delete_player(player: int) -> None:
	'''More info: https://gtamods.com/wiki/06df/ https://gtagmodding.com/opcode-database/opcode/06DF/'''
	_opcodes.delete_player(player)

def set_two_player_camera_mode(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/06e0/ https://gtagmodding.com/opcode-database/opcode/06E0/'''
	_opcodes.set_two_player_camera_mode(unknown1)

def task_car_mission(hchar: int, hveh: int, hveh3: int, unknown4: int, unknown5: float, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/06e1/ https://gtagmodding.com/opcode-database/opcode/06E1/'''
	_opcodes.task_car_mission(hchar, hveh, hveh3, unknown4, unknown5, unknown6)

def task_go_to_object(hchar: int, hobj: int, time: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/06e2/ https://gtagmodding.com/opcode-database/opcode/06E2/'''
	_opcodes.task_go_to_object(hchar, hobj, time, radius)

def task_weapon_roll(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/06e3/ https://gtagmodding.com/opcode-database/opcode/06E3/'''
	_opcodes.task_weapon_roll(hchar, state)

def task_char_arrest_char(hchar: int, hchar2: int) -> None:
	'''More info: https://gtamods.com/wiki/06e4/ https://gtagmodding.com/opcode-database/opcode/06E4/'''
	_opcodes.task_char_arrest_char(hchar, hchar2)

def get_available_vehicle_mod(hveh: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/06e5/ https://gtagmodding.com/opcode-database/opcode/06E5/'''
	return _opcodes.get_available_vehicle_mod(hveh, unknown2)

def get_vehicle_mod_type(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/06e6/ https://gtagmodding.com/opcode-database/opcode/06E6/'''
	return _opcodes.get_vehicle_mod_type(unknown1)

def add_vehicle_mod(hveh: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/06e7/ https://gtagmodding.com/opcode-database/opcode/06E7/'''
	return _opcodes.add_vehicle_mod(hveh, unknown2)

def remove_vehicle_mod(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/06e8/ https://gtagmodding.com/opcode-database/opcode/06E8/'''
	_opcodes.remove_vehicle_mod(hveh, unknown2)

def request_vehicle_mod(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/06e9/ https://gtagmodding.com/opcode-database/opcode/06E9/'''
	_opcodes.request_vehicle_mod(unknown1)

def has_vehicle_mod_loaded(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/06ea/ https://gtagmodding.com/opcode-database/opcode/06EA/'''
	return _opcodes.has_vehicle_mod_loaded(unknown1)

def mark_vehicle_mod_as_no_longer_needed(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/06eb/ https://gtagmodding.com/opcode-database/opcode/06EB/'''
	_opcodes.mark_vehicle_mod_as_no_longer_needed(unknown1)

def get_num_available_paintjobs(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/06ec/ https://gtagmodding.com/opcode-database/opcode/06EC/'''
	return _opcodes.get_num_available_paintjobs(hveh)

def give_vehicle_paintjob(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/06ed/ https://gtagmodding.com/opcode-database/opcode/06ED/'''
	_opcodes.give_vehicle_paintjob(hveh, unknown2)

def is_group_member(hchar: int, group: int) -> bool:
	'''More info: https://gtamods.com/wiki/06ee/ https://gtagmodding.com/opcode-database/opcode/06EE/'''
	return _opcodes.is_group_member(hchar, group)

def is_group_leader(hchar: int, group: int) -> bool:
	'''More info: https://gtamods.com/wiki/06ef/ https://gtagmodding.com/opcode-database/opcode/06EF/'''
	return _opcodes.is_group_leader(hchar, group)

def set_group_separation_range(group: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/06f0/ https://gtagmodding.com/opcode-database/opcode/06F0/'''
	_opcodes.set_group_separation_range(group, unknown2)

def limit_two_player_distance(radius: float) -> None:
	'''More info: https://gtamods.com/wiki/06f1/ https://gtagmodding.com/opcode-database/opcode/06F1/'''
	_opcodes.limit_two_player_distance(radius)

def release_two_player_distance() -> None:
	'''More info: https://gtamods.com/wiki/06f2/ https://gtagmodding.com/opcode-database/opcode/06F2/'''
	_opcodes.release_two_player_distance()

def set_player_player_targetting(state: int) -> None:
	'''More info: https://gtamods.com/wiki/06f3/ https://gtagmodding.com/opcode-database/opcode/06F3/'''
	_opcodes.set_player_player_targetting(state)

def get_script_fire_coords(script_fire: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/06f5/ https://gtagmodding.com/opcode-database/opcode/06F5/'''
	return _opcodes.get_script_fire_coords(script_fire)

def get_nth_closest_car_node_with_heading(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> Tuple[float, float, float, float]:
	'''More info: https://gtamods.com/wiki/06f8/ https://gtagmodding.com/opcode-database/opcode/06F8/'''
	return _opcodes.get_nth_closest_car_node_with_heading(x_coord, y_coord, z_coord, unknown4)

def set_players_can_be_in_separate_cars(state: int) -> None:
	'''More info: https://gtamods.com/wiki/06fa/ https://gtagmodding.com/opcode-database/opcode/06FA/'''
	_opcodes.set_players_can_be_in_separate_cars(state)

def does_car_have_stuck_car_check(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/06fc/ https://gtagmodding.com/opcode-database/opcode/06FC/'''
	_opcodes.does_car_have_stuck_car_check(hveh)

def set_playback_speed(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/06fd/ https://gtagmodding.com/opcode-database/opcode/06FD/'''
	_opcodes.set_playback_speed(hveh, unknown2)

def are_any_chars_near_char(hchar: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/06ff/ https://gtagmodding.com/opcode-database/opcode/06FF/'''
	_opcodes.are_any_chars_near_char(hchar, radius)

def skip_cutscene_start() -> None:
	'''More info: https://gtamods.com/wiki/0700/ https://gtagmodding.com/opcode-database/opcode/0700/'''
	_opcodes.skip_cutscene_start()

def skip_cutscene_end() -> None:
	'''More info: https://gtamods.com/wiki/0701/ https://gtagmodding.com/opcode-database/opcode/0701/'''
	_opcodes.skip_cutscene_end()

def get_percentage_tagged_in_area(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float) -> int:
	'''More info: https://gtamods.com/wiki/0702/ https://gtagmodding.com/opcode-database/opcode/0702/'''
	return _opcodes.get_percentage_tagged_in_area(x_coord, y_coord, x_coord3, y_coord4)

def set_tag_status_in_area(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0703/ https://gtagmodding.com/opcode-database/opcode/0703/'''
	_opcodes.set_tag_status_in_area(x_coord, y_coord, x_coord3, y_coord4, state)

def car_goto_coordinates_racing(hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/0704/ https://gtagmodding.com/opcode-database/opcode/0704/'''
	_opcodes.car_goto_coordinates_racing(hveh, x_coord, y_coord, z_coord)

def start_playback_recorded_car_using_ai(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0705/ https://gtagmodding.com/opcode-database/opcode/0705/'''
	_opcodes.start_playback_recorded_car_using_ai(hveh, unknown2)

def skip_in_playback_recorded_car(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0706/ https://gtagmodding.com/opcode-database/opcode/0706/'''
	_opcodes.skip_in_playback_recorded_car(hveh, unknown2)

def skip_cutscene_start_internal(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0707/ https://gtagmodding.com/opcode-database/opcode/0707/'''
	_opcodes.skip_cutscene_start_internal(unknown1)

def clear_char_decision_maker_event_response(decision_maker: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0708/ https://gtagmodding.com/opcode-database/opcode/0708/'''
	_opcodes.clear_char_decision_maker_event_response(decision_maker, unknown2)

def add_char_decision_maker_event_response(decision_maker: int, unknown2: int, unknown3: int, unknown4: float, unknown5: float, unknown6: float, unknown7: float, state: int, state9: int) -> None:
	'''More info: https://gtamods.com/wiki/0709/ https://gtagmodding.com/opcode-database/opcode/0709/'''
	_opcodes.add_char_decision_maker_event_response(decision_maker, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, state, state9)

def task_pick_up_object(hchar: int, hobj: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int, unknown7: int, unknown8: str, unknown9: str, time: int) -> None:
	'''More info: https://gtamods.com/wiki/070a/ https://gtagmodding.com/opcode-database/opcode/070A/'''
	_opcodes.task_pick_up_object(hchar, hobj, x_offset, y_offset, z_offset, unknown6, unknown7, unknown8, unknown9, time)

def drop_object(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/070b/ https://gtagmodding.com/opcode-database/opcode/070B/'''
	_opcodes.drop_object(hchar, state)

def explode_car_in_cutscene(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/070c/ https://gtagmodding.com/opcode-database/opcode/070C/'''
	_opcodes.explode_car_in_cutscene(hveh)

def build_player_model(player: int) -> None:
	'''More info: https://gtamods.com/wiki/070d/ https://gtagmodding.com/opcode-database/opcode/070D/'''
	_opcodes.build_player_model(player)

def plane_attack_player(hveh: int, player: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/070e/ https://gtagmodding.com/opcode-database/opcode/070E/'''
	_opcodes.plane_attack_player(hveh, player, radius)

def plane_fly_in_direction(hveh: int, angle: float, z_coord: float, z_coord4: float) -> None:
	'''More info: https://gtamods.com/wiki/070f/ https://gtagmodding.com/opcode-database/opcode/070F/'''
	_opcodes.plane_fly_in_direction(hveh, angle, z_coord, z_coord4)

def plane_follow_entity(hveh: int, hchar: int, hveh3: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0710/ https://gtagmodding.com/opcode-database/opcode/0710/'''
	_opcodes.plane_follow_entity(hveh, hchar, hveh3, radius)

def task_drive_by(hchar: int, hchar2: int, hveh: int, x_coord: float, y_coord: float, z_coord: float, radius: float, unknown8: int, state: int, unknown10: int) -> None:
	'''More info: https://gtamods.com/wiki/0713/ https://gtagmodding.com/opcode-database/opcode/0713/'''
	_opcodes.task_drive_by(hchar, hchar2, hveh, x_coord, y_coord, z_coord, radius, unknown8, state, unknown10)

def set_car_stay_in_slow_lane(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0714/ https://gtagmodding.com/opcode-database/opcode/0714/'''
	_opcodes.set_car_stay_in_slow_lane(hveh, state)

def take_remote_control_of_car(player: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0715/ https://gtagmodding.com/opcode-database/opcode/0715/'''
	_opcodes.take_remote_control_of_car(player, hveh)

def is_closest_object_of_type_smashed_or_damaged(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, state: int, state7: int) -> bool:
	'''More info: https://gtamods.com/wiki/0716/ https://gtagmodding.com/opcode-database/opcode/0716/'''
	return _opcodes.is_closest_object_of_type_smashed_or_damaged(x_coord, y_coord, z_coord, radius, unknown5, state, state7)

def start_setting_up_conversation(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0717/ https://gtagmodding.com/opcode-database/opcode/0717/'''
	_opcodes.start_setting_up_conversation(hchar)

def finish_setting_up_conversation() -> None:
	'''More info: https://gtamods.com/wiki/0719/ https://gtagmodding.com/opcode-database/opcode/0719/'''
	_opcodes.finish_setting_up_conversation()

def is_conversation_at_node(hchar: int, unknown2: str) -> bool:
	'''More info: https://gtamods.com/wiki/071a/ https://gtagmodding.com/opcode-database/opcode/071A/'''
	return _opcodes.is_conversation_at_node(hchar, unknown2)

def get_object_health(hobj: int) -> int:
	'''More info: https://gtamods.com/wiki/071e/ https://gtagmodding.com/opcode-database/opcode/071E/'''
	return _opcodes.get_object_health(hobj)

def set_object_health(hobj: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/071f/ https://gtagmodding.com/opcode-database/opcode/071F/'''
	_opcodes.set_object_health(hobj, unknown2)

def break_object(hobj: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0723/ https://gtagmodding.com/opcode-database/opcode/0723/'''
	_opcodes.break_object(hobj, unknown2)

def heli_attack_player(hveh: int, player: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0724/ https://gtagmodding.com/opcode-database/opcode/0724/'''
	_opcodes.heli_attack_player(hveh, player, radius)

def heli_follow_entity(hveh: int, hchar: int, hveh3: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0726/ https://gtagmodding.com/opcode-database/opcode/0726/'''
	_opcodes.heli_follow_entity(hveh, hchar, hveh3, radius)

def police_heli_chase_entity(hveh: int, hchar: int, hveh3: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0727/ https://gtagmodding.com/opcode-database/opcode/0727/'''
	_opcodes.police_heli_chase_entity(hveh, hchar, hveh3, radius)

def task_use_mobile_phone(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0729/ https://gtagmodding.com/opcode-database/opcode/0729/'''
	_opcodes.task_use_mobile_phone(hchar, state)

def task_warp_char_into_car_as_driver(hchar: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/072a/ https://gtagmodding.com/opcode-database/opcode/072A/'''
	_opcodes.task_warp_char_into_car_as_driver(hchar, hveh)

def task_warp_char_into_car_as_passenger(hchar: int, hveh: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/072b/ https://gtagmodding.com/opcode-database/opcode/072B/'''
	_opcodes.task_warp_char_into_car_as_passenger(hchar, hveh, unknown3)

def switch_cops_on_bikes(state: int) -> None:
	'''More info: https://gtamods.com/wiki/072c/ https://gtagmodding.com/opcode-database/opcode/072C/'''
	_opcodes.switch_cops_on_bikes(state)

def is_flame_in_angled_area_2d(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/072d/ https://gtagmodding.com/opcode-database/opcode/072D/'''
	return _opcodes.is_flame_in_angled_area_2d(x_coord, y_coord, x_coord3, y_coord4, angle, state)

def is_flame_in_angled_area_3d(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/072e/ https://gtagmodding.com/opcode-database/opcode/072E/'''
	return _opcodes.is_flame_in_angled_area_3d(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, angle, state)

def add_stuck_car_check_with_warp(hveh: int, unknown2: float, time: int, state: int, state5: int, state6: int, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/072f/ https://gtagmodding.com/opcode-database/opcode/072F/'''
	_opcodes.add_stuck_car_check_with_warp(hveh, unknown2, time, state, state5, state6, unknown7)

def damage_car_panel(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0730/ https://gtagmodding.com/opcode-database/opcode/0730/'''
	_opcodes.damage_car_panel(hveh, unknown2)

def set_car_roll(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/0731/ https://gtagmodding.com/opcode-database/opcode/0731/'''
	return _opcodes.set_car_roll(hveh)

def suppress_car_model(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0732/ https://gtagmodding.com/opcode-database/opcode/0732/'''
	_opcodes.suppress_car_model(unknown1)

def dont_suppress_car_model(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0733/ https://gtagmodding.com/opcode-database/opcode/0733/'''
	_opcodes.dont_suppress_car_model(unknown1)

def dont_suppress_any_car_models() -> None:
	'''More info: https://gtamods.com/wiki/0734/ https://gtagmodding.com/opcode-database/opcode/0734/'''
	_opcodes.dont_suppress_any_car_models()

def is_ps2_keyboard_key_pressed(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0735/ https://gtagmodding.com/opcode-database/opcode/0735/'''
	return _opcodes.is_ps2_keyboard_key_pressed(unknown1)

def is_ps2_keyboard_key_just_pressed(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0736/ https://gtagmodding.com/opcode-database/opcode/0736/'''
	return _opcodes.is_ps2_keyboard_key_just_pressed(unknown1)

def is_char_holding_object(hchar: int, hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0737/ https://gtagmodding.com/opcode-database/opcode/0737/'''
	return _opcodes.is_char_holding_object(hchar, hobj)

def set_car_can_go_against_traffic(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/073b/ https://gtagmodding.com/opcode-database/opcode/073B/'''
	_opcodes.set_car_can_go_against_traffic(hveh, state)

def damage_car_door(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/073c/ https://gtagmodding.com/opcode-database/opcode/073C/'''
	_opcodes.damage_car_door(hveh, unknown2)

def get_random_car_in_sphere_no_save(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int) -> int:
	'''More info: https://gtamods.com/wiki/073e/ https://gtagmodding.com/opcode-database/opcode/073E/'''
	return _opcodes.get_random_car_in_sphere_no_save(x_coord, y_coord, z_coord, radius, unknown5)

def get_random_char_in_sphere(x_coord: float, y_coord: float, z_coord: float, radius: float, state: int, state6: int, state7: int) -> int:
	'''More info: https://gtamods.com/wiki/073f/ https://gtagmodding.com/opcode-database/opcode/073F/'''
	return _opcodes.get_random_char_in_sphere(x_coord, y_coord, z_coord, radius, state, state6, state7)

def has_char_been_arrested(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0741/ https://gtagmodding.com/opcode-database/opcode/0741/'''
	return _opcodes.has_char_been_arrested(hchar)

def set_plane_throttle(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0742/ https://gtagmodding.com/opcode-database/opcode/0742/'''
	_opcodes.set_plane_throttle(hveh, unknown2)

def heli_land_at_coords(hveh: int, x_coord: float, y_coord: float, z_coord: float, z_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/0743/ https://gtagmodding.com/opcode-database/opcode/0743/'''
	_opcodes.heli_land_at_coords(hveh, x_coord, y_coord, z_coord, z_coord5, z_coord6)

def plane_starts_in_air(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0745/ https://gtagmodding.com/opcode-database/opcode/0745/'''
	_opcodes.plane_starts_in_air(hveh)

def set_relationship(unknown1: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0746/ https://gtagmodding.com/opcode-database/opcode/0746/'''
	_opcodes.set_relationship(unknown1, unknown2, unknown3)

def clear_relationship(unknown1: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0747/ https://gtagmodding.com/opcode-database/opcode/0747/'''
	_opcodes.clear_relationship(unknown1, unknown2, unknown3)

def clear_group_decision_maker_event_response(decision_maker: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0749/ https://gtagmodding.com/opcode-database/opcode/0749/'''
	_opcodes.clear_group_decision_maker_event_response(decision_maker, unknown2)

def add_group_decision_maker_event_response(decision_maker: int, unknown2: int, unknown3: int, unknown4: float, unknown5: float, unknown6: float, unknown7: float, state: int, state9: int) -> None:
	'''More info: https://gtamods.com/wiki/074a/ https://gtagmodding.com/opcode-database/opcode/074A/'''
	_opcodes.add_group_decision_maker_event_response(decision_maker, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, state, state9)

def draw_sprite_with_rotation(unknown1: int, unknown2: float, unknown3: float, height: float, width: float, rotation: float, red: int, green: int, blue: int, alpha: int) -> None:
	'''More info: https://gtamods.com/wiki/074b/ https://gtagmodding.com/opcode-database/opcode/074B/'''
	_opcodes.draw_sprite_with_rotation(unknown1, unknown2, unknown3, height, width, rotation, red, green, blue, alpha)

def task_use_attractor(hchar: int, attractor: int) -> None:
	'''More info: https://gtamods.com/wiki/074c/ https://gtagmodding.com/opcode-database/opcode/074C/'''
	_opcodes.task_use_attractor(hchar, attractor)

def task_shoot_at_char(hchar: int, hchar2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/074d/ https://gtagmodding.com/opcode-database/opcode/074D/'''
	_opcodes.task_shoot_at_char(hchar, hchar2, unknown3)

def set_inform_respected_friends(hchar: int, unknown2: float, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/074e/ https://gtagmodding.com/opcode-database/opcode/074E/'''
	_opcodes.set_inform_respected_friends(hchar, unknown2, unknown3)

def is_char_responding_to_event(hchar: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/074f/ https://gtagmodding.com/opcode-database/opcode/074F/'''
	return _opcodes.is_char_responding_to_event(hchar, unknown2)

def set_object_visible(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0750/ https://gtagmodding.com/opcode-database/opcode/0750/'''
	_opcodes.set_object_visible(hobj, state)

def task_flee_char_any_means(hchar: int, hchar2: int, radius: float, time: int, state: int, time6: int, time7: int, radius8: float) -> None:
	'''More info: https://gtamods.com/wiki/0751/ https://gtagmodding.com/opcode-database/opcode/0751/'''
	_opcodes.task_flee_char_any_means(hchar, hchar2, radius, time, state, time6, time7, radius8)

def stop_recording_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0752/ https://gtagmodding.com/opcode-database/opcode/0752/'''
	_opcodes.stop_recording_car(hveh)

def flush_patrol_route() -> None:
	'''More info: https://gtamods.com/wiki/0754/ https://gtagmodding.com/opcode-database/opcode/0754/'''
	_opcodes.flush_patrol_route()

def extend_patrol_route(x_coord: float, y_coord: float, z_coord: float, unknown4: str, unknown5: str) -> None:
	'''More info: https://gtamods.com/wiki/0755/ https://gtagmodding.com/opcode-database/opcode/0755/'''
	_opcodes.extend_patrol_route(x_coord, y_coord, z_coord, unknown4, unknown5)

def play_object_anim(hobj: int, unknown2: str, unknown3: str, unknown4: float, state: int, state6: int) -> None:
	'''More info: https://gtamods.com/wiki/075a/ https://gtagmodding.com/opcode-database/opcode/075A/'''
	_opcodes.play_object_anim(hobj, unknown2, unknown3, unknown4, state, state6)

def set_radar_zoom(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/075b/ https://gtagmodding.com/opcode-database/opcode/075B/'''
	_opcodes.set_radar_zoom(unknown1)

def does_blip_exist(blip: int) -> None:
	'''More info: https://gtamods.com/wiki/075c/ https://gtagmodding.com/opcode-database/opcode/075C/'''
	_opcodes.does_blip_exist(blip)

def load_prices(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/075d/ https://gtagmodding.com/opcode-database/opcode/075D/'''
	_opcodes.load_prices(unknown1)

def load_shop(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/075e/ https://gtagmodding.com/opcode-database/opcode/075E/'''
	_opcodes.load_shop(unknown1)

def get_number_of_items_in_shop() -> int:
	'''More info: https://gtamods.com/wiki/075f/ https://gtagmodding.com/opcode-database/opcode/075F/'''
	return _opcodes.get_number_of_items_in_shop()

def get_item_in_shop(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/0760/ https://gtagmodding.com/opcode-database/opcode/0760/'''
	return _opcodes.get_item_in_shop(unknown1)

def get_price_of_item(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/0761/ https://gtagmodding.com/opcode-database/opcode/0761/'''
	return _opcodes.get_price_of_item(unknown1)

def task_dead(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0762/ https://gtagmodding.com/opcode-database/opcode/0762/'''
	_opcodes.task_dead(hchar)

def set_car_as_mission_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0763/ https://gtagmodding.com/opcode-database/opcode/0763/'''
	_opcodes.set_car_as_mission_car(hveh)

def set_zone_population_type(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0767/ https://gtagmodding.com/opcode-database/opcode/0767/'''
	_opcodes.set_zone_population_type(unknown1, unknown2)

def set_zone_dealer_strength(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/076a/ https://gtagmodding.com/opcode-database/opcode/076A/'''
	_opcodes.set_zone_dealer_strength(unknown1, unknown2)

def get_zone_dealer_strength(unknown1: str) -> int:
	'''More info: https://gtamods.com/wiki/076b/ https://gtagmodding.com/opcode-database/opcode/076B/'''
	return _opcodes.get_zone_dealer_strength(unknown1)

def set_zone_gang_strength(unknown1: str, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/076c/ https://gtagmodding.com/opcode-database/opcode/076C/'''
	_opcodes.set_zone_gang_strength(unknown1, unknown2, unknown3)

def get_zone_gang_strength(unknown1: str, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/076d/ https://gtagmodding.com/opcode-database/opcode/076D/'''
	return _opcodes.get_zone_gang_strength(unknown1, unknown2)

def is_message_being_displayed() -> bool:
	'''More info: https://gtamods.com/wiki/076f/ https://gtagmodding.com/opcode-database/opcode/076F/'''
	return _opcodes.is_message_being_displayed()

def set_char_is_target_priority(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0770/ https://gtagmodding.com/opcode-database/opcode/0770/'''
	_opcodes.set_char_is_target_priority(hchar, state)

def custom_plate_design_for_next_car(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0771/ https://gtagmodding.com/opcode-database/opcode/0771/'''
	_opcodes.custom_plate_design_for_next_car(unknown1, unknown2)

def task_goto_car(hchar: int, hveh: int, time: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0772/ https://gtagmodding.com/opcode-database/opcode/0772/'''
	_opcodes.task_goto_car(hchar, hveh, time, radius)

def request_ipl(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0776/ https://gtagmodding.com/opcode-database/opcode/0776/'''
	_opcodes.request_ipl(unknown1)

def remove_ipl(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0777/ https://gtagmodding.com/opcode-database/opcode/0777/'''
	_opcodes.remove_ipl(unknown1)

def remove_ipl_discreetly(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0778/ https://gtagmodding.com/opcode-database/opcode/0778/'''
	_opcodes.remove_ipl_discreetly(unknown1)

def set_char_relationship(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/077a/ https://gtagmodding.com/opcode-database/opcode/077A/'''
	_opcodes.set_char_relationship(hchar, unknown2, unknown3)

def clear_char_relationship(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/077b/ https://gtagmodding.com/opcode-database/opcode/077B/'''
	_opcodes.clear_char_relationship(hchar, unknown2, unknown3)

def clear_all_char_relationships(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/077c/ https://gtagmodding.com/opcode-database/opcode/077C/'''
	_opcodes.clear_all_char_relationships(hchar, unknown2)

def get_car_pitch(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/077d/ https://gtagmodding.com/opcode-database/opcode/077D/'''
	return _opcodes.get_car_pitch(hveh)

def get_area_visible() -> int:
	'''More info: https://gtamods.com/wiki/077e/ https://gtagmodding.com/opcode-database/opcode/077E/'''
	return _opcodes.get_area_visible()

def heli_keep_entity_in_view(hveh: int, hchar: int, hveh3: int, z_coord: float, z_coord5: float) -> None:
	'''More info: https://gtamods.com/wiki/0780/ https://gtagmodding.com/opcode-database/opcode/0780/'''
	_opcodes.heli_keep_entity_in_view(hveh, hchar, hveh3, z_coord, z_coord5)

def get_weapontype_model(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/0781/ https://gtagmodding.com/opcode-database/opcode/0781/'''
	return _opcodes.get_weapontype_model(unknown1)

def get_weapontype_slot(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/0782/ https://gtagmodding.com/opcode-database/opcode/0782/'''
	return _opcodes.get_weapontype_slot(unknown1)

def get_shopping_extra_info(unknown1: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/0783/ https://gtagmodding.com/opcode-database/opcode/0783/'''
	return _opcodes.get_shopping_extra_info(unknown1, unknown2)

def give_player_clothes(player: int, unknown2: int, unknown3: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0784/ https://gtagmodding.com/opcode-database/opcode/0784/'''
	_opcodes.give_player_clothes(player, unknown2, unknown3, unknown4)

def get_number_of_fires_in_area(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> int:
	'''More info: https://gtamods.com/wiki/0786/ https://gtagmodding.com/opcode-database/opcode/0786/'''
	return _opcodes.get_number_of_fires_in_area(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def attach_winch_to_heli(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0788/ https://gtagmodding.com/opcode-database/opcode/0788/'''
	_opcodes.attach_winch_to_heli(hveh, state)

def release_entity_from_winch(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0789/ https://gtagmodding.com/opcode-database/opcode/0789/'''
	_opcodes.release_entity_from_winch(hveh)

def get_train_carriage(hveh: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/078a/ https://gtagmodding.com/opcode-database/opcode/078A/'''
	return _opcodes.get_train_carriage(hveh, unknown2)

def grab_entity_on_winch(hveh: int) -> Tuple[int, int, int]:
	'''More info: https://gtamods.com/wiki/078b/ https://gtagmodding.com/opcode-database/opcode/078B/'''
	return _opcodes.grab_entity_on_winch(hveh)

def get_name_of_item(unknown1: int) -> str:
	'''More info: https://gtamods.com/wiki/078c/ https://gtagmodding.com/opcode-database/opcode/078C/'''
	return _opcodes.get_name_of_item(unknown1)

def task_climb(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/078f/ https://gtagmodding.com/opcode-database/opcode/078F/'''
	_opcodes.task_climb(hchar, state)

def buy_item(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0790/ https://gtagmodding.com/opcode-database/opcode/0790/'''
	_opcodes.buy_item(unknown1)

def clear_char_tasks_immediately(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0792/ https://gtagmodding.com/opcode-database/opcode/0792/'''
	_opcodes.clear_char_tasks_immediately(hchar)

def store_clothes_state() -> None:
	'''More info: https://gtamods.com/wiki/0793/ https://gtagmodding.com/opcode-database/opcode/0793/'''
	_opcodes.store_clothes_state()

def restore_clothes_state() -> None:
	'''More info: https://gtamods.com/wiki/0794/ https://gtagmodding.com/opcode-database/opcode/0794/'''
	_opcodes.restore_clothes_state()

def get_rope_height_for_object(hobj: int) -> float:
	'''More info: https://gtamods.com/wiki/0796/ https://gtagmodding.com/opcode-database/opcode/0796/'''
	return _opcodes.get_rope_height_for_object(hobj)

def set_rope_height_for_object(hobj: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0797/ https://gtagmodding.com/opcode-database/opcode/0797/'''
	_opcodes.set_rope_height_for_object(hobj, unknown2)

def grab_entity_on_rope_for_object(hobj: int) -> Tuple[int, int, int]:
	'''More info: https://gtamods.com/wiki/0798/ https://gtagmodding.com/opcode-database/opcode/0798/'''
	return _opcodes.grab_entity_on_rope_for_object(hobj)

def release_entity_from_rope_for_object(hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/0799/ https://gtagmodding.com/opcode-database/opcode/0799/'''
	_opcodes.release_entity_from_rope_for_object(hobj)

def player_entered_dock_crane() -> None:
	'''More info: https://gtamods.com/wiki/079d/ https://gtagmodding.com/opcode-database/opcode/079D/'''
	_opcodes.player_entered_dock_crane()

def player_entered_buildingsite_crane() -> None:
	'''More info: https://gtamods.com/wiki/079e/ https://gtagmodding.com/opcode-database/opcode/079E/'''
	_opcodes.player_entered_buildingsite_crane()

def player_left_crane() -> None:
	'''More info: https://gtamods.com/wiki/079f/ https://gtagmodding.com/opcode-database/opcode/079F/'''
	_opcodes.player_left_crane()

def perform_sequence_task_from_progress(hchar: int, sequence_task: int, unknown3: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/07a0/ https://gtagmodding.com/opcode-database/opcode/07A0/'''
	_opcodes.perform_sequence_task_from_progress(hchar, sequence_task, unknown3, unknown4)

def set_next_desired_move_state(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/07a1/ https://gtagmodding.com/opcode-database/opcode/07A1/'''
	_opcodes.set_next_desired_move_state(unknown1)

def task_goto_char_aiming(hchar: int, hchar2: int, radius: float, radius4: float) -> None:
	'''More info: https://gtamods.com/wiki/07a3/ https://gtagmodding.com/opcode-database/opcode/07A3/'''
	_opcodes.task_goto_char_aiming(hchar, hchar2, radius, radius4)

def get_sequence_progress_recursive(hchar: int) -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/07a4/ https://gtagmodding.com/opcode-database/opcode/07A4/'''
	return _opcodes.get_sequence_progress_recursive(hchar)

def task_kill_char_on_foot_timed(hchar: int, hchar2: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/07a5/ https://gtagmodding.com/opcode-database/opcode/07A5/'''
	_opcodes.task_kill_char_on_foot_timed(hchar, hchar2, time)

def get_nearest_tag_position(x_coord: float, y_coord: float, z_coord: float) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/07a6/ https://gtagmodding.com/opcode-database/opcode/07A6/'''
	return _opcodes.get_nearest_tag_position(x_coord, y_coord, z_coord)

def task_jetpack(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/07a7/ https://gtagmodding.com/opcode-database/opcode/07A7/'''
	_opcodes.task_jetpack(hchar)

def set_area51_sam_site(state: int) -> None:
	'''More info: https://gtamods.com/wiki/07a8/ https://gtagmodding.com/opcode-database/opcode/07A8/'''
	_opcodes.set_area51_sam_site(state)

def is_char_in_any_searchlight(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/07a9/ https://gtagmodding.com/opcode-database/opcode/07A9/'''
	return _opcodes.is_char_in_any_searchlight(hchar)

def is_trailer_attached_to_cab(hveh: int, hveh2: int) -> bool:
	'''More info: https://gtamods.com/wiki/07ab/ https://gtagmodding.com/opcode-database/opcode/07AB/'''
	return _opcodes.is_trailer_attached_to_cab(hveh, hveh2)

def detach_trailer_from_cab(hveh: int, hveh2: int) -> None:
	'''More info: https://gtamods.com/wiki/07ac/ https://gtagmodding.com/opcode-database/opcode/07AC/'''
	_opcodes.detach_trailer_from_cab(hveh, hveh2)

def get_player_group(player: int) -> int:
	'''More info: https://gtamods.com/wiki/07af/ https://gtagmodding.com/opcode-database/opcode/07AF/'''
	return _opcodes.get_player_group(player)

def get_loaded_shop() -> str:
	'''More info: https://gtamods.com/wiki/07b0/ https://gtagmodding.com/opcode-database/opcode/07B0/'''
	return _opcodes.get_loaded_shop()

def get_beat_proximity(unknown1: int) -> Tuple[int, int, int]:
	'''More info: https://gtamods.com/wiki/07b1/ https://gtagmodding.com/opcode-database/opcode/07B1/'''
	return _opcodes.get_beat_proximity(unknown1)

def set_group_default_task_allocator(group: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/07b3/ https://gtagmodding.com/opcode-database/opcode/07B3/'''
	_opcodes.set_group_default_task_allocator(group, unknown2)

def set_player_group_recruitment(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07b4/ https://gtagmodding.com/opcode-database/opcode/07B4/'''
	_opcodes.set_player_group_recruitment(player, state)

def activate_heli_speed_cheat(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/07bb/ https://gtagmodding.com/opcode-database/opcode/07BB/'''
	_opcodes.activate_heli_speed_cheat(hveh, unknown2)

def task_set_char_decision_maker(hchar: int, decision_maker: int) -> None:
	'''More info: https://gtamods.com/wiki/07bc/ https://gtagmodding.com/opcode-database/opcode/07BC/'''
	_opcodes.task_set_char_decision_maker(hchar, decision_maker)

def delete_mission_train(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/07bd/ https://gtagmodding.com/opcode-database/opcode/07BD/'''
	_opcodes.delete_mission_train(hveh)

def mark_mission_train_as_no_longer_needed(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/07be/ https://gtagmodding.com/opcode-database/opcode/07BE/'''
	_opcodes.mark_mission_train_as_no_longer_needed(hveh)

def set_blip_always_display_on_zoomed_radar(blip: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07bf/ https://gtagmodding.com/opcode-database/opcode/07BF/'''
	_opcodes.set_blip_always_display_on_zoomed_radar(blip, state)

def request_car_recording(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/07c0/ https://gtagmodding.com/opcode-database/opcode/07C0/'''
	_opcodes.request_car_recording(unknown1)

def has_car_recording_been_loaded(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/07c1/ https://gtagmodding.com/opcode-database/opcode/07C1/'''
	return _opcodes.has_car_recording_been_loaded(unknown1)

def get_object_quaternion(hobj: int) -> Tuple[float, float, float, float]:
	'''More info: https://gtamods.com/wiki/07c3/ https://gtagmodding.com/opcode-database/opcode/07C3/'''
	return _opcodes.get_object_quaternion(hobj)

def set_object_quaternion(hobj: int, unknown2: float, unknown3: float, unknown4: float, unknown5: float) -> None:
	'''More info: https://gtamods.com/wiki/07c4/ https://gtagmodding.com/opcode-database/opcode/07C4/'''
	_opcodes.set_object_quaternion(hobj, unknown2, unknown3, unknown4, unknown5)

def get_vehicle_quaternion(hveh: int) -> Tuple[float, float, float, float]:
	'''More info: https://gtamods.com/wiki/07c5/ https://gtagmodding.com/opcode-database/opcode/07C5/'''
	return _opcodes.get_vehicle_quaternion(hveh)

def set_vehicle_quaternion(hveh: int, unknown2: float, unknown3: float, unknown4: float, unknown5: float) -> None:
	'''More info: https://gtamods.com/wiki/07c6/ https://gtagmodding.com/opcode-database/opcode/07C6/'''
	_opcodes.set_vehicle_quaternion(hveh, unknown2, unknown3, unknown4, unknown5)

def set_mission_train_coordinates(hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/07c7/ https://gtagmodding.com/opcode-database/opcode/07C7/'''
	_opcodes.set_mission_train_coordinates(hveh, x_coord, y_coord, z_coord)

def task_complex_pickup_object(hchar: int, hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/07c9/ https://gtagmodding.com/opcode-database/opcode/07C9/'''
	_opcodes.task_complex_pickup_object(hchar, hobj)

def listen_to_player_group_commands(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07cb/ https://gtagmodding.com/opcode-database/opcode/07CB/'''
	_opcodes.listen_to_player_group_commands(hchar, state)

def set_player_enter_car_button(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07cc/ https://gtagmodding.com/opcode-database/opcode/07CC/'''
	_opcodes.set_player_enter_car_button(player, state)

def task_char_slide_to_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float, angle: float, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/07cd/ https://gtagmodding.com/opcode-database/opcode/07CD/'''
	_opcodes.task_char_slide_to_coord(hchar, x_coord, y_coord, z_coord, angle, radius)

def get_current_day_of_week() -> int:
	'''More info: https://gtamods.com/wiki/07d0/ https://gtagmodding.com/opcode-database/opcode/07D0/'''
	return _opcodes.get_current_day_of_week()

def register_script_brain_for_code_use(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/07d3/ https://gtagmodding.com/opcode-database/opcode/07D3/'''
	_opcodes.register_script_brain_for_code_use(unknown1, unknown2)

def apply_force_to_car(hveh: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/07d5/ https://gtagmodding.com/opcode-database/opcode/07D5/'''
	_opcodes.apply_force_to_car(hveh, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation)

def is_int_lvar_equal_to_int_var(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/07d6/ https://gtagmodding.com/opcode-database/opcode/07D6/'''
	return _opcodes.is_int_lvar_equal_to_int_var(unknown1, unknown2)

def is_float_lvar_equal_to_float_var(unknown1: float, unknown2: float) -> bool:
	'''More info: https://gtamods.com/wiki/07d7/ https://gtagmodding.com/opcode-database/opcode/07D7/'''
	return _opcodes.is_float_lvar_equal_to_float_var(unknown1, unknown2)

def add_to_car_rotation_velocity(hveh: int, unknown2: float, unknown3: float, unknown4: float) -> None:
	'''More info: https://gtamods.com/wiki/07da/ https://gtagmodding.com/opcode-database/opcode/07DA/'''
	_opcodes.add_to_car_rotation_velocity(hveh, unknown2, unknown3, unknown4)

def set_car_rotation_velocity(hveh: int, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/07db/ https://gtagmodding.com/opcode-database/opcode/07DB/'''
	_opcodes.set_car_rotation_velocity(hveh, x_rotation, y_rotation, z_rotation)

def set_char_shoot_rate(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/07dd/ https://gtagmodding.com/opcode-database/opcode/07DD/'''
	_opcodes.set_char_shoot_rate(hchar, unknown2)

def is_model_in_cdimage(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/07de/ https://gtagmodding.com/opcode-database/opcode/07DE/'''
	return _opcodes.is_model_in_cdimage(unknown1)

def remove_oil_puddles_in_area(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float) -> None:
	'''More info: https://gtamods.com/wiki/07df/ https://gtagmodding.com/opcode-database/opcode/07DF/'''
	_opcodes.remove_oil_puddles_in_area(x_coord, y_coord, x_coord3, y_coord4)

def set_blip_as_friendly(blip: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/07e0/ https://gtagmodding.com/opcode-database/opcode/07E0/'''
	_opcodes.set_blip_as_friendly(blip, unknown2)

def task_swim_to_coord(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/07e1/ https://gtagmodding.com/opcode-database/opcode/07E1/'''
	_opcodes.task_swim_to_coord(hchar, x_coord, y_coord, z_coord)

def get_model_dimensions(unknown1: int) -> Tuple[float, float, float, float, float, float]:
	'''More info: https://gtamods.com/wiki/07e4/ https://gtagmodding.com/opcode-database/opcode/07E4/'''
	return _opcodes.get_model_dimensions(unknown1)

def copy_char_decision_maker(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/07e5/ https://gtagmodding.com/opcode-database/opcode/07E5/'''
	return _opcodes.copy_char_decision_maker(unknown1)

def copy_group_decision_maker(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/07e6/ https://gtagmodding.com/opcode-database/opcode/07E6/'''
	return _opcodes.copy_group_decision_maker(unknown1)

def task_drive_point_route_advanced(hchar: int, hveh: int, unknown3: float, unknown4: int, unknown5: int, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/07e7/ https://gtagmodding.com/opcode-database/opcode/07E7/'''
	_opcodes.task_drive_point_route_advanced(hchar, hveh, unknown3, unknown4, unknown5, unknown6)

def is_relationship_set(unknown1: int, unknown2: int, unknown3: int) -> bool:
	'''More info: https://gtamods.com/wiki/07e8/ https://gtagmodding.com/opcode-database/opcode/07E8/'''
	return _opcodes.is_relationship_set(unknown1, unknown2, unknown3)

def set_car_always_create_skids(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07ee/ https://gtagmodding.com/opcode-database/opcode/07EE/'''
	_opcodes.set_car_always_create_skids(hveh, state)

def get_city_from_coords(x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/07ef/ https://gtagmodding.com/opcode-database/opcode/07EF/'''
	return _opcodes.get_city_from_coords(x_coord, y_coord, z_coord)

def has_object_of_type_been_smashed(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int) -> bool:
	'''More info: https://gtamods.com/wiki/07f0/ https://gtagmodding.com/opcode-database/opcode/07F0/'''
	return _opcodes.has_object_of_type_been_smashed(x_coord, y_coord, z_coord, radius, unknown5)

def is_player_performing_wheelie(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/07f1/ https://gtagmodding.com/opcode-database/opcode/07F1/'''
	return _opcodes.is_player_performing_wheelie(player)

def is_player_performing_stoppie(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/07f2/ https://gtagmodding.com/opcode-database/opcode/07F2/'''
	return _opcodes.is_player_performing_stoppie(player)

def set_checkpoint_coords(checkpoint: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/07f3/ https://gtagmodding.com/opcode-database/opcode/07F3/'''
	_opcodes.set_checkpoint_coords(checkpoint, x_coord, y_coord, z_coord)

def control_car_hydraulics(hveh: int, unknown2: float, unknown3: float, unknown4: float, unknown5: float) -> None:
	'''More info: https://gtamods.com/wiki/07f5/ https://gtagmodding.com/opcode-database/opcode/07F5/'''
	_opcodes.control_car_hydraulics(hveh, unknown2, unknown3, unknown4, unknown5)

def get_group_size(group: int) -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/07f6/ https://gtagmodding.com/opcode-database/opcode/07F6/'''
	return _opcodes.get_group_size(group)

def set_object_collision_damage_effect(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07f7/ https://gtagmodding.com/opcode-database/opcode/07F7/'''
	_opcodes.set_object_collision_damage_effect(hobj, state)

def set_car_follow_car(hveh: int, hveh2: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/07f8/ https://gtagmodding.com/opcode-database/opcode/07F8/'''
	_opcodes.set_car_follow_car(hveh, hveh2, radius)

def player_entered_quarry_crane() -> None:
	'''More info: https://gtamods.com/wiki/07f9/ https://gtagmodding.com/opcode-database/opcode/07F9/'''
	_opcodes.player_entered_quarry_crane()

def player_entered_las_vegas_crane() -> None:
	'''More info: https://gtamods.com/wiki/07fa/ https://gtagmodding.com/opcode-database/opcode/07FA/'''
	_opcodes.player_entered_las_vegas_crane()

def switch_entry_exit(unknown1: str, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07fb/ https://gtagmodding.com/opcode-database/opcode/07FB/'''
	_opcodes.switch_entry_exit(unknown1, state)

def display_text_with_float(unknown1: float, unknown2: float, unknown3: str, unknown4: float, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/07fc/ https://gtagmodding.com/opcode-database/opcode/07FC/'''
	_opcodes.display_text_with_float(unknown1, unknown2, unknown3, unknown4, unknown5)

def does_group_exist(group: int) -> None:
	'''More info: https://gtamods.com/wiki/07fd/ https://gtagmodding.com/opcode-database/opcode/07FD/'''
	_opcodes.does_group_exist(group)

def give_melee_attack_to_char(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/07fe/ https://gtagmodding.com/opcode-database/opcode/07FE/'''
	_opcodes.give_melee_attack_to_char(hchar, unknown2, unknown3)

def set_car_hydraulics(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/07ff/ https://gtagmodding.com/opcode-database/opcode/07FF/'''
	_opcodes.set_car_hydraulics(hveh, state)

def is_2player_game_going_on() -> bool:
	'''More info: https://gtamods.com/wiki/0800/ https://gtagmodding.com/opcode-database/opcode/0800/'''
	return _opcodes.is_2player_game_going_on()

def get_camera_fov() -> float:
	'''More info: https://gtamods.com/wiki/0801/ https://gtagmodding.com/opcode-database/opcode/0801/'''
	return _opcodes.get_camera_fov()

def does_car_have_hydraulics(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0803/ https://gtagmodding.com/opcode-database/opcode/0803/'''
	_opcodes.does_car_have_hydraulics(hveh)

def task_char_slide_to_coord_and_play_anim(hchar: int, x_coord: float, y_coord: float, z_coord: float, angle: float, radius: float, unknown7: str, unknown8: str, unknown9: float, state: int, state11: int, state12: int, state13: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0804/ https://gtagmodding.com/opcode-database/opcode/0804/'''
	_opcodes.task_char_slide_to_coord_and_play_anim(hchar, x_coord, y_coord, z_coord, angle, radius, unknown7, unknown8, unknown9, state, state11, state12, state13, time)

def get_total_number_of_peds_killed_by_player(player: int) -> int:
	'''More info: https://gtamods.com/wiki/0806/ https://gtagmodding.com/opcode-database/opcode/0806/'''
	return _opcodes.get_total_number_of_peds_killed_by_player(player)

def get_level_design_coords_for_object(hobj: int, unknown2: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/080a/ https://gtagmodding.com/opcode-database/opcode/080A/'''
	return _opcodes.get_level_design_coords_for_object(hobj, unknown2)

def save_text_label_to_debug_file(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/080b/ https://gtagmodding.com/opcode-database/opcode/080B/'''
	_opcodes.save_text_label_to_debug_file(unknown1)

def get_char_highest_priority_event(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/080e/ https://gtagmodding.com/opcode-database/opcode/080E/'''
	return _opcodes.get_char_highest_priority_event(hchar)

def get_parking_node_in_area(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/0810/ https://gtagmodding.com/opcode-database/opcode/0810/'''
	return _opcodes.get_parking_node_in_area(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def get_car_char_is_using(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0811/ https://gtagmodding.com/opcode-database/opcode/0811/'''
	return _opcodes.get_car_char_is_using(hchar)

def task_play_anim_non_interruptable(hchar: int, unknown2: str, unknown3: str, unknown4: float, state: int, state6: int, state7: int, state8: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0812/ https://gtagmodding.com/opcode-database/opcode/0812/'''
	_opcodes.task_play_anim_non_interruptable(hchar, unknown2, unknown3, unknown4, state, state6, state7, state8, time)

def add_stunt_jump(x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float, x_coord7: float, y_coord8: float, z_coord9: float, x_radius10: float, y_radius11: float, z_radius12: float, x_coord13: float, y_coord14: float, z_coord15: float, unknown16: int) -> None:
	'''More info: https://gtamods.com/wiki/0814/ https://gtagmodding.com/opcode-database/opcode/0814/'''
	_opcodes.add_stunt_jump(x_coord, y_coord, z_coord, x_radius, y_radius, z_radius, x_coord7, y_coord8, z_coord9, x_radius10, y_radius11, z_radius12, x_coord13, y_coord14, z_coord15, unknown16)

def set_object_coordinates_and_velocity(hobj: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/0815/ https://gtagmodding.com/opcode-database/opcode/0815/'''
	_opcodes.set_object_coordinates_and_velocity(hobj, x_coord, y_coord, z_coord)

def set_char_kinda_stay_in_same_place(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0816/ https://gtagmodding.com/opcode-database/opcode/0816/'''
	_opcodes.set_char_kinda_stay_in_same_place(hchar, state)

def task_follow_patrol_route(hchar: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0817/ https://gtagmodding.com/opcode-database/opcode/0817/'''
	_opcodes.task_follow_patrol_route(hchar, unknown2, unknown3)

def is_char_in_air(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0818/ https://gtagmodding.com/opcode-database/opcode/0818/'''
	return _opcodes.is_char_in_air(hchar)

def get_char_height_above_ground(hchar: int) -> float:
	'''More info: https://gtamods.com/wiki/0819/ https://gtagmodding.com/opcode-database/opcode/0819/'''
	return _opcodes.get_char_height_above_ground(hchar)

def set_char_weapon_skill(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/081a/ https://gtagmodding.com/opcode-database/opcode/081A/'''
	_opcodes.set_char_weapon_skill(hchar, unknown2)

def set_text_edge(unknown1: int, red: int, green: int, blue: int, alpha: int) -> None:
	'''More info: https://gtamods.com/wiki/081c/ https://gtagmodding.com/opcode-database/opcode/081C/'''
	_opcodes.set_text_edge(unknown1, red, green, blue, alpha)

def set_car_engine_broken(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/081d/ https://gtagmodding.com/opcode-database/opcode/081D/'''
	_opcodes.set_car_engine_broken(hveh, state)

def is_this_model_a_boat(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/081e/ https://gtagmodding.com/opcode-database/opcode/081E/'''
	return _opcodes.is_this_model_a_boat(unknown1)

def is_this_model_a_plane(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/081f/ https://gtagmodding.com/opcode-database/opcode/081F/'''
	return _opcodes.is_this_model_a_plane(unknown1)

def is_this_model_a_heli(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0820/ https://gtagmodding.com/opcode-database/opcode/0820/'''
	return _opcodes.is_this_model_a_heli(unknown1)

def set_first_person_in_car_camera_mode(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0822/ https://gtagmodding.com/opcode-database/opcode/0822/'''
	_opcodes.set_first_person_in_car_camera_mode(state)

def task_greet_partner(hchar: int, hchar2: int, unknown3: float, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0823/ https://gtagmodding.com/opcode-database/opcode/0823/'''
	_opcodes.task_greet_partner(hchar, hchar2, unknown3, unknown4)

def set_heli_blades_full_speed(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0825/ https://gtagmodding.com/opcode-database/opcode/0825/'''
	_opcodes.set_heli_blades_full_speed(hveh)

def display_hud(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0826/ https://gtagmodding.com/opcode-database/opcode/0826/'''
	_opcodes.display_hud(state)

def connect_lods(hobj: int, hobj2: int) -> None:
	'''More info: https://gtamods.com/wiki/0827/ https://gtagmodding.com/opcode-database/opcode/0827/'''
	_opcodes.connect_lods(hobj, hobj2)

def set_max_fire_generations(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0828/ https://gtagmodding.com/opcode-database/opcode/0828/'''
	_opcodes.set_max_fire_generations(unknown1)

def task_die_named_anim(hchar: int, unknown2: str, unknown3: str, unknown4: float, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0829/ https://gtagmodding.com/opcode-database/opcode/0829/'''
	_opcodes.task_die_named_anim(hchar, unknown2, unknown3, unknown4, time)

def set_player_duck_button(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/082a/ https://gtagmodding.com/opcode-database/opcode/082A/'''
	_opcodes.set_player_duck_button(player, state)

def set_pool_table_coords(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/0830/ https://gtagmodding.com/opcode-database/opcode/0830/'''
	_opcodes.set_pool_table_coords(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def has_object_been_photographed(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0833/ https://gtagmodding.com/opcode-database/opcode/0833/'''
	return _opcodes.has_object_been_photographed(hobj)

def do_camera_bump(x_offset: float, y_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/0834/ https://gtagmodding.com/opcode-database/opcode/0834/'''
	_opcodes.do_camera_bump(x_offset, y_offset)

def get_current_date() -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/0835/ https://gtagmodding.com/opcode-database/opcode/0835/'''
	return _opcodes.get_current_date()

def set_object_anim_speed(hobj: int, unknown2: str, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/0836/ https://gtagmodding.com/opcode-database/opcode/0836/'''
	_opcodes.set_object_anim_speed(hobj, unknown2, unknown3)

def is_object_playing_anim(hobj: int, unknown2: str) -> bool:
	'''More info: https://gtamods.com/wiki/0837/ https://gtagmodding.com/opcode-database/opcode/0837/'''
	return _opcodes.is_object_playing_anim(hobj, unknown2)

def get_object_anim_current_time(hobj: int, unknown2: str) -> float:
	'''More info: https://gtamods.com/wiki/0839/ https://gtagmodding.com/opcode-database/opcode/0839/'''
	return _opcodes.get_object_anim_current_time(hobj, unknown2)

def set_object_anim_current_time(hobj: int, unknown2: str, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/083a/ https://gtagmodding.com/opcode-database/opcode/083A/'''
	_opcodes.set_object_anim_current_time(hobj, unknown2, unknown3)

def set_char_velocity(hchar: int, x_offset: float, y_offset: float, z_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/083c/ https://gtagmodding.com/opcode-database/opcode/083C/'''
	_opcodes.set_char_velocity(hchar, x_offset, y_offset, z_offset)

def get_char_velocity(hchar: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/083d/ https://gtagmodding.com/opcode-database/opcode/083D/'''
	return _opcodes.get_char_velocity(hchar)

def set_char_rotation(hchar: int, x_radius: float, y_radius: float, z_radius: float) -> None:
	'''More info: https://gtamods.com/wiki/083e/ https://gtagmodding.com/opcode-database/opcode/083E/'''
	_opcodes.set_char_rotation(hchar, x_radius, y_radius, z_radius)

def get_car_upright_value(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/083f/ https://gtagmodding.com/opcode-database/opcode/083F/'''
	return _opcodes.get_car_upright_value(hveh)

def set_vehicle_area_visible(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0840/ https://gtagmodding.com/opcode-database/opcode/0840/'''
	return _opcodes.set_vehicle_area_visible(hveh)

def select_weapons_for_vehicle(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0841/ https://gtagmodding.com/opcode-database/opcode/0841/'''
	_opcodes.select_weapons_for_vehicle(hveh, state)

def get_city_player_is_in(player: int) -> int:
	'''More info: https://gtamods.com/wiki/0842/ https://gtagmodding.com/opcode-database/opcode/0842/'''
	return _opcodes.get_city_player_is_in(player)

def get_name_of_zone(x_coord: float, y_coord: float, z_coord: float) -> str:
	'''More info: https://gtamods.com/wiki/0843/ https://gtagmodding.com/opcode-database/opcode/0843/'''
	return _opcodes.get_name_of_zone(x_coord, y_coord, z_coord)

def activate_interior_peds(state: int) -> None:
	'''More info: https://gtamods.com/wiki/084d/ https://gtagmodding.com/opcode-database/opcode/084D/'''
	_opcodes.activate_interior_peds(state)

def set_vehicle_can_be_targetted(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/084e/ https://gtagmodding.com/opcode-database/opcode/084E/'''
	_opcodes.set_vehicle_can_be_targetted(hveh, state)

def task_follow_footsteps(hchar: int, hchar2: int) -> None:
	'''More info: https://gtamods.com/wiki/0850/ https://gtagmodding.com/opcode-database/opcode/0850/'''
	_opcodes.task_follow_footsteps(hchar, hchar2)

def damage_char(hchar: int, unknown2: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0851/ https://gtagmodding.com/opcode-database/opcode/0851/'''
	_opcodes.damage_char(hchar, unknown2, state)

def set_car_can_be_visibly_damaged(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0852/ https://gtagmodding.com/opcode-database/opcode/0852/'''
	_opcodes.set_car_can_be_visibly_damaged(hveh, state)

def set_heli_reached_target_distance(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0853/ https://gtagmodding.com/opcode-database/opcode/0853/'''
	_opcodes.set_heli_reached_target_distance(hveh, unknown2)

def get_sound_level_at_coords(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> float:
	'''More info: https://gtamods.com/wiki/0855/ https://gtagmodding.com/opcode-database/opcode/0855/'''
	return _opcodes.get_sound_level_at_coords(hchar, x_coord, y_coord, z_coord)

def set_char_allowed_to_duck(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0856/ https://gtagmodding.com/opcode-database/opcode/0856/'''
	_opcodes.set_char_allowed_to_duck(hchar, state)

def set_heading_for_attached_player(player: int, angle: float, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/0858/ https://gtagmodding.com/opcode-database/opcode/0858/'''
	_opcodes.set_heading_for_attached_player(player, angle, unknown3)

def task_walk_alongside_char(hchar: int, hchar2: int) -> None:
	'''More info: https://gtamods.com/wiki/0859/ https://gtagmodding.com/opcode-database/opcode/0859/'''
	_opcodes.task_walk_alongside_char(hchar, hchar2)

def create_emergency_services_car(unknown1: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/085a/ https://gtagmodding.com/opcode-database/opcode/085A/'''
	_opcodes.create_emergency_services_car(unknown1, x_coord, y_coord, z_coord)

def task_kinda_stay_in_same_place(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/085b/ https://gtagmodding.com/opcode-database/opcode/085B/'''
	_opcodes.task_kinda_stay_in_same_place(hchar, state)

def start_playback_recorded_car_looped(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/085e/ https://gtagmodding.com/opcode-database/opcode/085E/'''
	_opcodes.start_playback_recorded_car_looped(hveh, unknown2)

def set_char_area_visible(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0860/ https://gtagmodding.com/opcode-database/opcode/0860/'''
	_opcodes.set_char_area_visible(hchar, unknown2)

def is_attached_player_heading_achieved(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0861/ https://gtagmodding.com/opcode-database/opcode/0861/'''
	return _opcodes.is_attached_player_heading_achieved(player)

def enable_entry_exit_player_group_warping(x_coord: float, y_coord: float, radius: float, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0864/ https://gtagmodding.com/opcode-database/opcode/0864/'''
	_opcodes.enable_entry_exit_player_group_warping(x_coord, y_coord, radius, state)

def get_closest_stealable_object(x_coord: float, y_coord: float, z_coord: float, radius: float) -> int:
	'''More info: https://gtamods.com/wiki/0866/ https://gtagmodding.com/opcode-database/opcode/0866/'''
	return _opcodes.get_closest_stealable_object(x_coord, y_coord, z_coord, radius)

def is_procedural_interior_active(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0867/ https://gtagmodding.com/opcode-database/opcode/0867/'''
	return _opcodes.is_procedural_interior_active(unknown1)

def clear_this_view_integer_variable(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0868/ https://gtagmodding.com/opcode-database/opcode/0868/'''
	_opcodes.clear_this_view_integer_variable(unknown1)

def clear_this_view_float_variable(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/0869/ https://gtagmodding.com/opcode-database/opcode/0869/'''
	_opcodes.clear_this_view_float_variable(unknown1)

def clear_all_view_variables() -> None:
	'''More info: https://gtamods.com/wiki/086a/ https://gtagmodding.com/opcode-database/opcode/086A/'''
	_opcodes.clear_all_view_variables()

def clear_this_integer_watchpoint(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/086b/ https://gtagmodding.com/opcode-database/opcode/086B/'''
	_opcodes.clear_this_integer_watchpoint(unknown1)

def clear_this_float_watchpoint(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/086c/ https://gtagmodding.com/opcode-database/opcode/086C/'''
	_opcodes.clear_this_float_watchpoint(unknown1)

def switch_start(unknown1: int, unknown2: int, unknown3: int, unknown4: str, unknown5: int, unknown6: str, unknown7: int, unknown8: str, unknown9: int, unknown10: str, unknown11: int, unknown12: str, unknown13: int, unknown14: str, unknown15: int, unknown16: str, unknown17: int, unknown18: str) -> None:
	'''More info: https://gtamods.com/wiki/0871/ https://gtagmodding.com/opcode-database/opcode/0871/'''
	_opcodes.switch_start(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, unknown8, unknown9, unknown10, unknown11, unknown12, unknown13, unknown14, unknown15, unknown16, unknown17, unknown18)

def switch_continued(unknown1: int, unknown2: str, unknown3: int, unknown4: str, unknown5: int, unknown6: str, unknown7: int, unknown8: str, unknown9: int, unknown10: str, unknown11: int, unknown12: str, unknown13: int, unknown14: str, unknown15: int, unknown16: str, unknown17: int, unknown18: str) -> None:
	'''More info: https://gtamods.com/wiki/0872/ https://gtagmodding.com/opcode-database/opcode/0872/'''
	_opcodes.switch_continued(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, unknown8, unknown9, unknown10, unknown11, unknown12, unknown13, unknown14, unknown15, unknown16, unknown17, unknown18)

def remove_car_recording(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0873/ https://gtagmodding.com/opcode-database/opcode/0873/'''
	_opcodes.remove_car_recording(unknown1)

def set_zone_population_race(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0874/ https://gtagmodding.com/opcode-database/opcode/0874/'''
	_opcodes.set_zone_population_race(unknown1, unknown2)

def set_object_only_damaged_by_player(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0875/ https://gtagmodding.com/opcode-database/opcode/0875/'''
	_opcodes.set_object_only_damaged_by_player(hobj, state)

def create_birds(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, unknown7: int, unknown8: int) -> None:
	'''More info: https://gtamods.com/wiki/0876/ https://gtagmodding.com/opcode-database/opcode/0876/'''
	_opcodes.create_birds(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, unknown7, unknown8)

def set_vehicle_dirt_level(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0878/ https://gtagmodding.com/opcode-database/opcode/0878/'''
	_opcodes.set_vehicle_dirt_level(hveh, unknown2)

def set_gang_wars_active(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0879/ https://gtagmodding.com/opcode-database/opcode/0879/'''
	_opcodes.set_gang_wars_active(state)

def is_gang_war_going_on() -> bool:
	'''More info: https://gtamods.com/wiki/087a/ https://gtagmodding.com/opcode-database/opcode/087A/'''
	return _opcodes.is_gang_war_going_on()

def give_player_clothes_outside_shop(player: int, unknown2: str, unknown3: str, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/087b/ https://gtagmodding.com/opcode-database/opcode/087B/'''
	_opcodes.give_player_clothes_outside_shop(player, unknown2, unknown3, unknown4)

def clear_loaded_shop() -> None:
	'''More info: https://gtamods.com/wiki/087c/ https://gtagmodding.com/opcode-database/opcode/087C/'''
	_opcodes.clear_loaded_shop()

def set_group_sequence(group: int, sequence_task: int) -> None:
	'''More info: https://gtamods.com/wiki/087d/ https://gtagmodding.com/opcode-database/opcode/087D/'''
	_opcodes.set_group_sequence(group, sequence_task)

def set_char_drops_weapons_when_dead(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/087e/ https://gtagmodding.com/opcode-database/opcode/087E/'''
	_opcodes.set_char_drops_weapons_when_dead(hchar, state)

def set_char_never_leaves_group(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/087f/ https://gtagmodding.com/opcode-database/opcode/087F/'''
	_opcodes.set_char_never_leaves_group(hchar, state)

def set_player_fire_button(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0881/ https://gtagmodding.com/opcode-database/opcode/0881/'''
	_opcodes.set_player_fire_button(player, state)

def attach_fx_system_to_char_bone(fx_system: int, hchar: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0883/ https://gtagmodding.com/opcode-database/opcode/0883/'''
	_opcodes.attach_fx_system_to_char_bone(fx_system, hchar, unknown3)

def register_attractor_script_brain_for_code_use(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/0884/ https://gtagmodding.com/opcode-database/opcode/0884/'''
	_opcodes.register_attractor_script_brain_for_code_use(unknown1, unknown2)

def const_int(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0885/ https://gtagmodding.com/opcode-database/opcode/0885/'''
	_opcodes.const_int(unknown1, unknown2)

def const_float(unknown1: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0886/ https://gtagmodding.com/opcode-database/opcode/0886/'''
	_opcodes.const_float(unknown1, unknown2)

def set_heading_limit_for_attached_char(hchar: int, unknown2: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0887/ https://gtagmodding.com/opcode-database/opcode/0887/'''
	_opcodes.set_heading_limit_for_attached_char(hchar, unknown2, angle)

def add_blip_for_dead_char(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0888/ https://gtagmodding.com/opcode-database/opcode/0888/'''
	return _opcodes.add_blip_for_dead_char(hchar)

def get_dead_char_coordinates(hchar: int) -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/0889/ https://gtagmodding.com/opcode-database/opcode/0889/'''
	return _opcodes.get_dead_char_coordinates(hchar)

def task_play_anim_with_flags(hchar: int, unknown2: str, unknown3: str, unknown4: float, state: int, state6: int, state7: int, state8: int, time: int, state10: int, state11: int) -> None:
	'''More info: https://gtamods.com/wiki/088a/ https://gtagmodding.com/opcode-database/opcode/088A/'''
	_opcodes.task_play_anim_with_flags(hchar, unknown2, unknown3, unknown4, state, state6, state7, state8, time, state10, state11)

def set_vehicle_air_resistance_multiplier(hveh: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/088b/ https://gtagmodding.com/opcode-database/opcode/088B/'''
	_opcodes.set_vehicle_air_resistance_multiplier(hveh, unknown2)

def set_car_coordinates_no_offset(hveh: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/088c/ https://gtagmodding.com/opcode-database/opcode/088C/'''
	_opcodes.set_car_coordinates_no_offset(hveh, x_coord, y_coord, z_coord)

def set_uses_collision_of_closest_object_of_type(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/088d/ https://gtagmodding.com/opcode-database/opcode/088D/'''
	_opcodes.set_uses_collision_of_closest_object_of_type(x_coord, y_coord, z_coord, radius, unknown5, state)

def set_time_one_day_forward() -> None:
	'''More info: https://gtamods.com/wiki/088e/ https://gtagmodding.com/opcode-database/opcode/088E/'''
	_opcodes.set_time_one_day_forward()

def set_timer_beep_countdown_time(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0890/ https://gtagmodding.com/opcode-database/opcode/0890/'''
	_opcodes.set_timer_beep_countdown_time(unknown1, unknown2)

def attach_trailer_to_cab(hveh: int, hveh2: int) -> None:
	'''More info: https://gtamods.com/wiki/0893/ https://gtagmodding.com/opcode-database/opcode/0893/'''
	_opcodes.attach_trailer_to_cab(hveh, hveh2)

def is_vehicle_touching_object(hveh: int, hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0897/ https://gtagmodding.com/opcode-database/opcode/0897/'''
	return _opcodes.is_vehicle_touching_object(hveh, hobj)

def enable_crane_controls(state: int, state2: int, state3: int) -> None:
	'''More info: https://gtamods.com/wiki/0898/ https://gtagmodding.com/opcode-database/opcode/0898/'''
	_opcodes.enable_crane_controls(state, state2, state3)

def is_player_in_position_for_conversation(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/089b/ https://gtagmodding.com/opcode-database/opcode/089B/'''
	return _opcodes.is_player_in_position_for_conversation(hchar)

def enable_conversation(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/089c/ https://gtagmodding.com/opcode-database/opcode/089C/'''
	_opcodes.enable_conversation(hchar, state)

def get_random_char_in_sphere_only_drugs_buyers(x_coord: float, y_coord: float, z_coord: float, radius: float) -> int:
	'''More info: https://gtamods.com/wiki/089e/ https://gtagmodding.com/opcode-database/opcode/089E/'''
	return _opcodes.get_random_char_in_sphere_only_drugs_buyers(x_coord, y_coord, z_coord, radius)

def get_ped_type(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/089f/ https://gtagmodding.com/opcode-database/opcode/089F/'''
	return _opcodes.get_ped_type(hchar)

def task_use_closest_map_attractor(hchar: int, radius: float, unknown3: int, x_offset: float, y_offset: float, z_offset: float, unknown7: str) -> None:
	'''More info: https://gtamods.com/wiki/08a0/ https://gtagmodding.com/opcode-database/opcode/08A0/'''
	_opcodes.task_use_closest_map_attractor(hchar, radius, unknown3, x_offset, y_offset, z_offset, unknown7)

def plane_attack_player_using_dog_fight(hveh: int, player: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/08a2/ https://gtagmodding.com/opcode-database/opcode/08A2/'''
	_opcodes.plane_attack_player_using_dog_fight(hveh, player, radius)

def can_trigger_gang_war_when_on_a_mission(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08a3/ https://gtagmodding.com/opcode-database/opcode/08A3/'''
	_opcodes.can_trigger_gang_war_when_on_a_mission(state)

def control_movable_vehicle_part(hveh: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/08a4/ https://gtagmodding.com/opcode-database/opcode/08A4/'''
	_opcodes.control_movable_vehicle_part(hveh, angle)

def winch_can_pick_vehicle_up(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/08a5/ https://gtagmodding.com/opcode-database/opcode/08A5/'''
	_opcodes.winch_can_pick_vehicle_up(hveh, state)

def open_car_door_a_bit(hveh: int, unknown2: int, rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/08a6/ https://gtagmodding.com/opcode-database/opcode/08A6/'''
	_opcodes.open_car_door_a_bit(hveh, unknown2, rotation)

def is_car_door_fully_open(hveh: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08a7/ https://gtagmodding.com/opcode-database/opcode/08A7/'''
	return _opcodes.is_car_door_fully_open(hveh, unknown2)

def set_always_draw_3d_markers(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08a8/ https://gtagmodding.com/opcode-database/opcode/08A8/'''
	_opcodes.set_always_draw_3d_markers(state)

def stream_script(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/08a9/ https://gtagmodding.com/opcode-database/opcode/08A9/'''
	_opcodes.stream_script(unknown1)

def has_streamed_script_loaded(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/08ab/ https://gtagmodding.com/opcode-database/opcode/08AB/'''
	return _opcodes.has_streamed_script_loaded(unknown1)

def set_gang_wars_training_mission(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08ac/ https://gtagmodding.com/opcode-database/opcode/08AC/'''
	_opcodes.set_gang_wars_training_mission(state)

def set_char_has_used_entry_exit(hchar: int, x_coord: float, y_coord: float, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/08ad/ https://gtagmodding.com/opcode-database/opcode/08AD/'''
	_opcodes.set_char_has_used_entry_exit(hchar, x_coord, y_coord, radius)

def set_char_max_health(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08af/ https://gtagmodding.com/opcode-database/opcode/08AF/'''
	_opcodes.set_char_max_health(hchar, unknown2)

def set_night_vision(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08b1/ https://gtagmodding.com/opcode-database/opcode/08B1/'''
	_opcodes.set_night_vision(state)

def set_infrared_vision(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08b2/ https://gtagmodding.com/opcode-database/opcode/08B2/'''
	_opcodes.set_infrared_vision(state)

def set_zone_for_gang_wars_training(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/08b3/ https://gtagmodding.com/opcode-database/opcode/08B3/'''
	_opcodes.set_zone_for_gang_wars_training(unknown1)

def is_global_var_bit_set_const(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08b4/ https://gtagmodding.com/opcode-database/opcode/08B4/'''
	return _opcodes.is_global_var_bit_set_const(unknown1, unknown2)

def is_global_var_bit_set_var(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08b5/ https://gtagmodding.com/opcode-database/opcode/08B5/'''
	return _opcodes.is_global_var_bit_set_var(unknown1, unknown2)

def is_global_var_bit_set_lvar(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08b6/ https://gtagmodding.com/opcode-database/opcode/08B6/'''
	return _opcodes.is_global_var_bit_set_lvar(unknown1, unknown2)

def is_local_var_bit_set_const(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08b7/ https://gtagmodding.com/opcode-database/opcode/08B7/'''
	return _opcodes.is_local_var_bit_set_const(unknown1, unknown2)

def is_local_var_bit_set_var(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08b8/ https://gtagmodding.com/opcode-database/opcode/08B8/'''
	return _opcodes.is_local_var_bit_set_var(unknown1, unknown2)

def is_local_var_bit_set_lvar(unknown1: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08b9/ https://gtagmodding.com/opcode-database/opcode/08B9/'''
	return _opcodes.is_local_var_bit_set_lvar(unknown1, unknown2)

def set_global_var_bit_const(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08ba/ https://gtagmodding.com/opcode-database/opcode/08BA/'''
	_opcodes.set_global_var_bit_const(unknown1, unknown2)

def set_global_var_bit_var(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08bb/ https://gtagmodding.com/opcode-database/opcode/08BB/'''
	_opcodes.set_global_var_bit_var(unknown1, unknown2)

def set_global_var_bit_lvar(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08bc/ https://gtagmodding.com/opcode-database/opcode/08BC/'''
	_opcodes.set_global_var_bit_lvar(unknown1, unknown2)

def set_local_var_bit_const(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08bd/ https://gtagmodding.com/opcode-database/opcode/08BD/'''
	_opcodes.set_local_var_bit_const(unknown1, unknown2)

def set_local_var_bit_var(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08be/ https://gtagmodding.com/opcode-database/opcode/08BE/'''
	_opcodes.set_local_var_bit_var(unknown1, unknown2)

def set_local_var_bit_lvar(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08bf/ https://gtagmodding.com/opcode-database/opcode/08BF/'''
	_opcodes.set_local_var_bit_lvar(unknown1, unknown2)

def clear_global_var_bit_const(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08c0/ https://gtagmodding.com/opcode-database/opcode/08C0/'''
	_opcodes.clear_global_var_bit_const(unknown1, unknown2)

def clear_global_var_bit_var(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08c1/ https://gtagmodding.com/opcode-database/opcode/08C1/'''
	_opcodes.clear_global_var_bit_var(unknown1, unknown2)

def clear_global_var_bit_lvar(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08c2/ https://gtagmodding.com/opcode-database/opcode/08C2/'''
	_opcodes.clear_global_var_bit_lvar(unknown1, unknown2)

def clear_local_var_bit_const(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08c3/ https://gtagmodding.com/opcode-database/opcode/08C3/'''
	_opcodes.clear_local_var_bit_const(unknown1, unknown2)

def clear_local_var_bit_var(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08c4/ https://gtagmodding.com/opcode-database/opcode/08C4/'''
	_opcodes.clear_local_var_bit_var(unknown1, unknown2)

def clear_local_var_bit_lvar(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08c5/ https://gtagmodding.com/opcode-database/opcode/08C5/'''
	_opcodes.clear_local_var_bit_lvar(unknown1, unknown2)

def set_char_can_be_knocked_off_bike(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/08c6/ https://gtagmodding.com/opcode-database/opcode/08C6/'''
	_opcodes.set_char_can_be_knocked_off_bike(hchar, state)

def set_char_coordinates_dont_warp_gang(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/08c7/ https://gtagmodding.com/opcode-database/opcode/08C7/'''
	_opcodes.set_char_coordinates_dont_warp_gang(hchar, x_coord, y_coord, z_coord)

def add_price_modifier(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08c8/ https://gtagmodding.com/opcode-database/opcode/08C8/'''
	_opcodes.add_price_modifier(unknown1, unknown2)

def remove_price_modifier(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/08c9/ https://gtagmodding.com/opcode-database/opcode/08C9/'''
	_opcodes.remove_price_modifier(unknown1)

def init_zone_population_settings() -> None:
	'''More info: https://gtamods.com/wiki/08ca/ https://gtagmodding.com/opcode-database/opcode/08CA/'''
	_opcodes.init_zone_population_settings()

def explode_car_in_cutscene_shake_and_bits(hveh: int, state: int, state3: int, state4: int) -> None:
	'''More info: https://gtamods.com/wiki/08cb/ https://gtagmodding.com/opcode-database/opcode/08CB/'''
	_opcodes.explode_car_in_cutscene_shake_and_bits(hveh, state, state3, state4)

def is_skip_cutscene_button_pressed() -> bool:
	'''More info: https://gtamods.com/wiki/08d0/ https://gtagmodding.com/opcode-database/opcode/08D0/'''
	return _opcodes.is_skip_cutscene_button_pressed()

def get_cutscene_offset() -> Tuple[float, float, float]:
	'''More info: https://gtamods.com/wiki/08d1/ https://gtagmodding.com/opcode-database/opcode/08D1/'''
	return _opcodes.get_cutscene_offset()

def set_object_scale(hobj: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/08d2/ https://gtagmodding.com/opcode-database/opcode/08D2/'''
	_opcodes.set_object_scale(hobj, unknown2)

def get_current_population_zone_type() -> int:
	'''More info: https://gtamods.com/wiki/08d3/ https://gtagmodding.com/opcode-database/opcode/08D3/'''
	return _opcodes.get_current_population_zone_type()

def create_menu(unknown1: str, unknown2: float, unknown3: float, unknown4: float, unknown5: int, state: int, state7: int, unknown8: int) -> int:
	'''More info: https://gtamods.com/wiki/08d4/ https://gtagmodding.com/opcode-database/opcode/08D4/'''
	return _opcodes.create_menu(unknown1, unknown2, unknown3, unknown4, unknown5, state, state7, unknown8)

def set_menu_column_orientation(unknown1: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/08d6/ https://gtagmodding.com/opcode-database/opcode/08D6/'''
	_opcodes.set_menu_column_orientation(unknown1, unknown2, unknown3)

def get_menu_item_selected(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/08d7/ https://gtagmodding.com/opcode-database/opcode/08D7/'''
	return _opcodes.get_menu_item_selected(unknown1)

def get_menu_item_accepted(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/08d8/ https://gtagmodding.com/opcode-database/opcode/08D8/'''
	return _opcodes.get_menu_item_accepted(unknown1)

def activate_menu_item(unknown1: int, unknown2: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/08d9/ https://gtagmodding.com/opcode-database/opcode/08D9/'''
	_opcodes.activate_menu_item(unknown1, unknown2, state)

def delete_menu(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/08da/ https://gtagmodding.com/opcode-database/opcode/08DA/'''
	_opcodes.delete_menu(unknown1)

def set_menu_column(unknown1: int, unknown2: int, unknown3: str, unknown4: str, unknown5: str, unknown6: str, unknown7: str, unknown8: str, unknown9: str, unknown10: str, unknown11: str, unknown12: str, unknown13: str, unknown14: str, unknown15: str) -> None:
	'''More info: https://gtamods.com/wiki/08db/ https://gtagmodding.com/opcode-database/opcode/08DB/'''
	_opcodes.set_menu_column(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6, unknown7, unknown8, unknown9, unknown10, unknown11, unknown12, unknown13, unknown14, unknown15)

def set_blip_entry_exit(blip: int, x_coord: float, y_coord: float, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/08dc/ https://gtagmodding.com/opcode-database/opcode/08DC/'''
	_opcodes.set_blip_entry_exit(blip, x_coord, y_coord, radius)

def switch_death_penalties(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08dd/ https://gtagmodding.com/opcode-database/opcode/08DD/'''
	_opcodes.switch_death_penalties(state)

def switch_arrest_penalties(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08de/ https://gtagmodding.com/opcode-database/opcode/08DE/'''
	_opcodes.switch_arrest_penalties(state)

def set_extra_hospital_restart_point(x_coord: float, y_coord: float, z_coord: float, radius: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/08df/ https://gtagmodding.com/opcode-database/opcode/08DF/'''
	_opcodes.set_extra_hospital_restart_point(x_coord, y_coord, z_coord, radius, angle)

def set_extra_police_station_restart_point(x_coord: float, y_coord: float, z_coord: float, radius: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/08e0/ https://gtagmodding.com/opcode-database/opcode/08E0/'''
	_opcodes.set_extra_police_station_restart_point(x_coord, y_coord, z_coord, radius, angle)

def find_number_tags_tagged() -> int:
	'''More info: https://gtamods.com/wiki/08e1/ https://gtagmodding.com/opcode-database/opcode/08E1/'''
	return _opcodes.find_number_tags_tagged()

def get_territory_under_control_percentage() -> int:
	'''More info: https://gtamods.com/wiki/08e2/ https://gtagmodding.com/opcode-database/opcode/08E2/'''
	return _opcodes.get_territory_under_control_percentage()

def is_object_in_angled_area_2d(hobj: int, x_coord: float, y_coord: float, x_coord4: float, y_coord5: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/08e3/ https://gtagmodding.com/opcode-database/opcode/08E3/'''
	return _opcodes.is_object_in_angled_area_2d(hobj, x_coord, y_coord, x_coord4, y_coord5, angle, state)

def is_object_in_angled_area_3d(hobj: int, x_coord: float, y_coord: float, z_coord: float, x_coord5: float, y_coord6: float, z_coord7: float, angle: float, state: int) -> bool:
	'''More info: https://gtamods.com/wiki/08e4/ https://gtagmodding.com/opcode-database/opcode/08E4/'''
	return _opcodes.is_object_in_angled_area_3d(hobj, x_coord, y_coord, z_coord, x_coord5, y_coord6, z_coord7, angle, state)

def get_random_char_in_sphere_no_brain(x_coord: float, y_coord: float, z_coord: float, radius: float) -> int:
	'''More info: https://gtamods.com/wiki/08e5/ https://gtagmodding.com/opcode-database/opcode/08E5/'''
	return _opcodes.get_random_char_in_sphere_no_brain(x_coord, y_coord, z_coord, radius)

def set_plane_undercarriage_up(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/08e6/ https://gtagmodding.com/opcode-database/opcode/08E6/'''
	_opcodes.set_plane_undercarriage_up(hveh, state)

def disable_all_entry_exits(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08e7/ https://gtagmodding.com/opcode-database/opcode/08E7/'''
	_opcodes.disable_all_entry_exits(state)

def attach_anims_to_model(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/08e8/ https://gtagmodding.com/opcode-database/opcode/08E8/'''
	_opcodes.attach_anims_to_model(unknown1, unknown2)

def set_object_as_stealable(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/08e9/ https://gtagmodding.com/opcode-database/opcode/08E9/'''
	_opcodes.set_object_as_stealable(hobj, state)

def set_create_random_gang_members(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08ea/ https://gtagmodding.com/opcode-database/opcode/08EA/'''
	_opcodes.set_create_random_gang_members(state)

def add_sparks(x_coord: float, y_coord: float, z_coord: float, unknown4: float, unknown5: float, unknown6: float, unknown7: int) -> None:
	'''More info: https://gtamods.com/wiki/08eb/ https://gtagmodding.com/opcode-database/opcode/08EB/'''
	_opcodes.add_sparks(x_coord, y_coord, z_coord, unknown4, unknown5, unknown6, unknown7)

def get_vehicle_class(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/08ec/ https://gtagmodding.com/opcode-database/opcode/08EC/'''
	return _opcodes.get_vehicle_class(hveh)

def clear_conversation_for_char(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/08ed/ https://gtagmodding.com/opcode-database/opcode/08ED/'''
	_opcodes.clear_conversation_for_char(hchar)

def set_menu_item_with_number(unknown1: int, unknown2: int, unknown3: int, unknown4: str, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/08ee/ https://gtagmodding.com/opcode-database/opcode/08EE/'''
	_opcodes.set_menu_item_with_number(unknown1, unknown2, unknown3, unknown4, unknown5)

def set_menu_item_with_2_numbers(unknown1: int, unknown2: int, unknown3: int, unknown4: str, unknown5: int, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/08ef/ https://gtagmodding.com/opcode-database/opcode/08EF/'''
	_opcodes.set_menu_item_with_2_numbers(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6)

def append_to_next_cutscene(unknown1: str, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/08f0/ https://gtagmodding.com/opcode-database/opcode/08F0/'''
	_opcodes.append_to_next_cutscene(unknown1, unknown2)

def get_name_of_info_zone(x_coord: float, y_coord: float, z_coord: float) -> str:
	'''More info: https://gtamods.com/wiki/08f1/ https://gtagmodding.com/opcode-database/opcode/08F1/'''
	return _opcodes.get_name_of_info_zone(x_coord, y_coord, z_coord)

def vehicle_can_be_targetted_by_hs_missile(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/08f2/ https://gtagmodding.com/opcode-database/opcode/08F2/'''
	_opcodes.vehicle_can_be_targetted_by_hs_missile(hveh, state)

def set_freebies_in_vehicle(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/08f3/ https://gtagmodding.com/opcode-database/opcode/08F3/'''
	_opcodes.set_freebies_in_vehicle(hveh, state)

def set_script_limit_to_gang_size(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08f4/ https://gtagmodding.com/opcode-database/opcode/08F4/'''
	_opcodes.set_script_limit_to_gang_size(state)

def make_player_gang_disappear() -> None:
	'''More info: https://gtamods.com/wiki/08f5/ https://gtagmodding.com/opcode-database/opcode/08F5/'''
	_opcodes.make_player_gang_disappear()

def make_player_gang_reappear() -> None:
	'''More info: https://gtamods.com/wiki/08f6/ https://gtagmodding.com/opcode-database/opcode/08F6/'''
	_opcodes.make_player_gang_reappear()

def get_clothes_item(player: int, unknown2: int) -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/08f7/ https://gtagmodding.com/opcode-database/opcode/08F7/'''
	return _opcodes.get_clothes_item(player, unknown2)

def show_update_stats(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08f8/ https://gtagmodding.com/opcode-database/opcode/08F8/'''
	_opcodes.show_update_stats(state)

def set_coord_blip_appearance(blip: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/08fb/ https://gtagmodding.com/opcode-database/opcode/08FB/'''
	_opcodes.set_coord_blip_appearance(blip, unknown2)

def set_heathaze_effect(state: int) -> None:
	'''More info: https://gtamods.com/wiki/08fd/ https://gtagmodding.com/opcode-database/opcode/08FD/'''
	_opcodes.set_heathaze_effect(state)

def is_help_message_being_displayed() -> bool:
	'''More info: https://gtamods.com/wiki/08fe/ https://gtagmodding.com/opcode-database/opcode/08FE/'''
	return _opcodes.is_help_message_being_displayed()

def has_object_been_damaged_by_weapon(hobj: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/08ff/ https://gtagmodding.com/opcode-database/opcode/08FF/'''
	return _opcodes.has_object_been_damaged_by_weapon(hobj, unknown2)

def clear_object_last_weapon_damage(hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/0900/ https://gtagmodding.com/opcode-database/opcode/0900/'''
	_opcodes.clear_object_last_weapon_damage(hobj)

def set_player_jump_button(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0901/ https://gtagmodding.com/opcode-database/opcode/0901/'''
	_opcodes.set_player_jump_button(player, state)

def get_hud_colour(unknown1: int) -> Tuple[int, int, int, int]:
	'''More info: https://gtamods.com/wiki/0904/ https://gtagmodding.com/opcode-database/opcode/0904/'''
	return _opcodes.get_hud_colour(unknown1)

def lock_door(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0905/ https://gtagmodding.com/opcode-database/opcode/0905/'''
	_opcodes.lock_door(hobj, state)

def set_object_mass(hobj: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0906/ https://gtagmodding.com/opcode-database/opcode/0906/'''
	_opcodes.set_object_mass(hobj, unknown2)

def get_object_mass(hobj: int) -> float:
	'''More info: https://gtamods.com/wiki/0907/ https://gtagmodding.com/opcode-database/opcode/0907/'''
	return _opcodes.get_object_mass(hobj)

def set_object_turn_mass(hobj: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0908/ https://gtagmodding.com/opcode-database/opcode/0908/'''
	_opcodes.set_object_turn_mass(hobj, unknown2)

def get_object_turn_mass(hobj: int) -> float:
	'''More info: https://gtamods.com/wiki/0909/ https://gtagmodding.com/opcode-database/opcode/0909/'''
	return _opcodes.get_object_turn_mass(hobj)

def set_specific_zone_to_trigger_gang_war(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/090c/ https://gtagmodding.com/opcode-database/opcode/090C/'''
	_opcodes.set_specific_zone_to_trigger_gang_war(unknown1)

def clear_specific_zones_to_trigger_gang_war() -> None:
	'''More info: https://gtamods.com/wiki/090d/ https://gtagmodding.com/opcode-database/opcode/090D/'''
	_opcodes.clear_specific_zones_to_trigger_gang_war()

def set_active_menu_item(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/090e/ https://gtagmodding.com/opcode-database/opcode/090E/'''
	_opcodes.set_active_menu_item(unknown1, unknown2)

def mark_streamed_script_as_no_longer_needed(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/090f/ https://gtagmodding.com/opcode-database/opcode/090F/'''
	_opcodes.mark_streamed_script_as_no_longer_needed(unknown1)

def remove_streamed_script(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0910/ https://gtagmodding.com/opcode-database/opcode/0910/'''
	_opcodes.remove_streamed_script(unknown1)

def register_streamed_script(unknown1: int, unknown2: str) -> None:
	'''More info: https://gtamods.com/wiki/0911/ https://gtagmodding.com/opcode-database/opcode/0911/'''
	_opcodes.register_streamed_script(unknown1, unknown2)

def set_message_formatting(state: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0912/ https://gtagmodding.com/opcode-database/opcode/0912/'''
	_opcodes.set_message_formatting(state, unknown2, unknown3)

def register_streamed_script_internal(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0914/ https://gtagmodding.com/opcode-database/opcode/0914/'''
	_opcodes.register_streamed_script_internal(unknown1)

def set_weather_to_appropriate_type_now() -> None:
	'''More info: https://gtamods.com/wiki/0915/ https://gtagmodding.com/opcode-database/opcode/0915/'''
	_opcodes.set_weather_to_appropriate_type_now()

def winch_can_pick_object_up(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0916/ https://gtagmodding.com/opcode-database/opcode/0916/'''
	_opcodes.winch_can_pick_object_up(hobj, state)

def switch_audio_zone(unknown1: str, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0917/ https://gtagmodding.com/opcode-database/opcode/0917/'''
	_opcodes.switch_audio_zone(unknown1, state)

def set_car_engine_on(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0918/ https://gtagmodding.com/opcode-database/opcode/0918/'''
	_opcodes.set_car_engine_on(hveh, state)

def set_car_lights_on(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0919/ https://gtagmodding.com/opcode-database/opcode/0919/'''
	_opcodes.set_car_lights_on(hveh, state)

def get_latest_console_command() -> str:
	'''More info: https://gtamods.com/wiki/091a/ https://gtagmodding.com/opcode-database/opcode/091A/'''
	return _opcodes.get_latest_console_command()

def reset_latest_console_command() -> None:
	'''More info: https://gtamods.com/wiki/091b/ https://gtagmodding.com/opcode-database/opcode/091B/'''
	_opcodes.reset_latest_console_command()

def get_user_of_closest_map_attractor(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, unknown6: str) -> int:
	'''More info: https://gtamods.com/wiki/091c/ https://gtagmodding.com/opcode-database/opcode/091C/'''
	return _opcodes.get_user_of_closest_map_attractor(x_coord, y_coord, z_coord, radius, unknown5, unknown6)

def switch_roads_back_to_original(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/091d/ https://gtagmodding.com/opcode-database/opcode/091D/'''
	_opcodes.switch_roads_back_to_original(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def switch_ped_roads_back_to_original(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> None:
	'''More info: https://gtamods.com/wiki/091e/ https://gtagmodding.com/opcode-database/opcode/091E/'''
	_opcodes.switch_ped_roads_back_to_original(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def get_plane_undercarriage_position(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/091f/ https://gtagmodding.com/opcode-database/opcode/091F/'''
	return _opcodes.get_plane_undercarriage_position(hveh)

def camera_set_vector_track(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, time: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0920/ https://gtagmodding.com/opcode-database/opcode/0920/'''
	_opcodes.camera_set_vector_track(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, time, state)

def camera_set_lerp_fov(unknown1: float, unknown2: float, time: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0922/ https://gtagmodding.com/opcode-database/opcode/0922/'''
	_opcodes.camera_set_lerp_fov(unknown1, unknown2, time, state)

def switch_ambient_planes(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0923/ https://gtagmodding.com/opcode-database/opcode/0923/'''
	_opcodes.switch_ambient_planes(state)

def set_darkness_effect(state: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0924/ https://gtagmodding.com/opcode-database/opcode/0924/'''
	_opcodes.set_darkness_effect(state, unknown2)

def camera_reset_new_scriptables() -> None:
	'''More info: https://gtamods.com/wiki/0925/ https://gtagmodding.com/opcode-database/opcode/0925/'''
	_opcodes.camera_reset_new_scriptables()

def get_number_of_instances_of_streamed_script(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/0926/ https://gtagmodding.com/opcode-database/opcode/0926/'''
	return _opcodes.get_number_of_instances_of_streamed_script(unknown1)

def allocate_streamed_script_to_random_ped(unknown1: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0928/ https://gtagmodding.com/opcode-database/opcode/0928/'''
	_opcodes.allocate_streamed_script_to_random_ped(unknown1, unknown2, unknown3)

def allocate_streamed_script_to_object(unknown1: int, unknown2: int, unknown3: int, radius: float, unknown5: int) -> None:
	'''More info: https://gtamods.com/wiki/0929/ https://gtagmodding.com/opcode-database/opcode/0929/'''
	_opcodes.allocate_streamed_script_to_object(unknown1, unknown2, unknown3, radius, unknown5)

def get_group_member(group: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/092b/ https://gtagmodding.com/opcode-database/opcode/092B/'''
	return _opcodes.get_group_member(group, unknown2)

def get_water_height_at_coords(x_coord: float, y_coord: float, state: int) -> float:
	'''More info: https://gtamods.com/wiki/092e/ https://gtagmodding.com/opcode-database/opcode/092E/'''
	return _opcodes.get_water_height_at_coords(x_coord, y_coord, state)

def camera_persist_track(state: int) -> None:
	'''More info: https://gtamods.com/wiki/092f/ https://gtagmodding.com/opcode-database/opcode/092F/'''
	_opcodes.camera_persist_track(state)

def camera_persist_pos(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0930/ https://gtagmodding.com/opcode-database/opcode/0930/'''
	_opcodes.camera_persist_pos(state)

def camera_persist_fov(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0931/ https://gtagmodding.com/opcode-database/opcode/0931/'''
	_opcodes.camera_persist_fov(state)

def camera_is_vector_move_running() -> None:
	'''More info: https://gtamods.com/wiki/0933/ https://gtagmodding.com/opcode-database/opcode/0933/'''
	_opcodes.camera_is_vector_move_running()

def camera_is_vector_track_running() -> None:
	'''More info: https://gtamods.com/wiki/0934/ https://gtagmodding.com/opcode-database/opcode/0934/'''
	_opcodes.camera_is_vector_track_running()

def camera_set_vector_move(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float, time: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0936/ https://gtagmodding.com/opcode-database/opcode/0936/'''
	_opcodes.camera_set_vector_move(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6, time, state)

def draw_window(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float, unknown5: str, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/0937/ https://gtagmodding.com/opcode-database/opcode/0937/'''
	_opcodes.draw_window(x_coord, y_coord, x_coord3, y_coord4, unknown5, unknown6)

def attach_car_to_object(hveh: int, hobj: int, x_offset: float, y_offset: float, z_offset: float, x_rotation: float, y_rotation: float, z_rotation: float) -> None:
	'''More info: https://gtamods.com/wiki/0939/ https://gtagmodding.com/opcode-database/opcode/0939/'''
	_opcodes.attach_car_to_object(hveh, hobj, x_offset, y_offset, z_offset, x_rotation, y_rotation, z_rotation)

def set_garage_respray_free(unknown1: str, state: int) -> None:
	'''More info: https://gtamods.com/wiki/093a/ https://gtagmodding.com/opcode-database/opcode/093A/'''
	_opcodes.set_garage_respray_free(unknown1, state)

def set_char_bulletproof_vest(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/093b/ https://gtagmodding.com/opcode-database/opcode/093B/'''
	_opcodes.set_char_bulletproof_vest(hchar, state)

def set_cinema_camera(state: int) -> None:
	'''More info: https://gtamods.com/wiki/093d/ https://gtagmodding.com/opcode-database/opcode/093D/'''
	_opcodes.set_cinema_camera(state)

def set_char_fire_damage_multiplier(hchar: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/093e/ https://gtagmodding.com/opcode-database/opcode/093E/'''
	_opcodes.set_char_fire_damage_multiplier(hchar, unknown2)

def set_group_follow_status(group: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0940/ https://gtagmodding.com/opcode-database/opcode/0940/'''
	_opcodes.set_group_follow_status(group, state)

def set_searchlight_clip_if_colliding(searchlight: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0941/ https://gtagmodding.com/opcode-database/opcode/0941/'''
	_opcodes.set_searchlight_clip_if_colliding(searchlight, state)

def has_player_bought_item(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0942/ https://gtagmodding.com/opcode-database/opcode/0942/'''
	return _opcodes.has_player_bought_item(unknown1)

def set_camera_in_front_of_char(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0944/ https://gtagmodding.com/opcode-database/opcode/0944/'''
	_opcodes.set_camera_in_front_of_char(hchar)

def get_player_max_armour(player: int) -> int:
	'''More info: https://gtamods.com/wiki/0945/ https://gtagmodding.com/opcode-database/opcode/0945/'''
	return _opcodes.get_player_max_armour(player)

def set_char_uses_upperbody_damage_anims_only(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0946/ https://gtagmodding.com/opcode-database/opcode/0946/'''
	_opcodes.set_char_uses_upperbody_damage_anims_only(hchar, state)

def set_char_say_context(hchar: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/0947/ https://gtagmodding.com/opcode-database/opcode/0947/'''
	return _opcodes.set_char_say_context(hchar, unknown2)

def add_explosion_variable_shake(x_coord: float, y_coord: float, z_coord: float, unknown4: int, unknown5: float) -> None:
	'''More info: https://gtamods.com/wiki/0948/ https://gtagmodding.com/opcode-database/opcode/0948/'''
	_opcodes.add_explosion_variable_shake(x_coord, y_coord, z_coord, unknown4, unknown5)

def attach_mission_audio_to_char(unknown1: int, hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0949/ https://gtagmodding.com/opcode-database/opcode/0949/'''
	_opcodes.attach_mission_audio_to_char(unknown1, hchar)

def update_pickup_money_per_day(pickup: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/094a/ https://gtagmodding.com/opcode-database/opcode/094A/'''
	_opcodes.update_pickup_money_per_day(pickup, unknown2)

def get_name_of_entry_exit_char_used(hchar: int) -> str:
	'''More info: https://gtamods.com/wiki/094b/ https://gtagmodding.com/opcode-database/opcode/094B/'''
	return _opcodes.get_name_of_entry_exit_char_used(hchar)

def get_position_of_entry_exit_char_used(hchar: int) -> Tuple[float, float, float, float]:
	'''More info: https://gtamods.com/wiki/094c/ https://gtagmodding.com/opcode-database/opcode/094C/'''
	return _opcodes.get_position_of_entry_exit_char_used(hchar)

def is_char_talking(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/094d/ https://gtagmodding.com/opcode-database/opcode/094D/'''
	return _opcodes.is_char_talking(hchar)

def disable_char_speech(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/094e/ https://gtagmodding.com/opcode-database/opcode/094E/'''
	_opcodes.disable_char_speech(hchar, state)

def enable_char_speech(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/094f/ https://gtagmodding.com/opcode-database/opcode/094F/'''
	_opcodes.enable_char_speech(hchar)

def set_up_skip(x_coord: float, y_coord: float, z_coord: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0950/ https://gtagmodding.com/opcode-database/opcode/0950/'''
	_opcodes.set_up_skip(x_coord, y_coord, z_coord, angle)

def clear_skip() -> None:
	'''More info: https://gtamods.com/wiki/0951/ https://gtagmodding.com/opcode-database/opcode/0951/'''
	_opcodes.clear_skip()

def preload_beat_track(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0952/ https://gtagmodding.com/opcode-database/opcode/0952/'''
	_opcodes.preload_beat_track(unknown1)

def get_beat_track_status() -> int:
	'''More info: https://gtamods.com/wiki/0953/ https://gtagmodding.com/opcode-database/opcode/0953/'''
	return _opcodes.get_beat_track_status()

def play_beat_track() -> None:
	'''More info: https://gtamods.com/wiki/0954/ https://gtagmodding.com/opcode-database/opcode/0954/'''
	_opcodes.play_beat_track()

def stop_beat_track() -> None:
	'''More info: https://gtamods.com/wiki/0955/ https://gtagmodding.com/opcode-database/opcode/0955/'''
	_opcodes.stop_beat_track()

def find_max_number_of_group_members() -> int:
	'''More info: https://gtamods.com/wiki/0956/ https://gtagmodding.com/opcode-database/opcode/0956/'''
	return _opcodes.find_max_number_of_group_members()

def vehicle_does_provide_cover(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0957/ https://gtagmodding.com/opcode-database/opcode/0957/'''
	_opcodes.vehicle_does_provide_cover(hveh, state)

def create_snapshot_pickup(x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/0958/ https://gtagmodding.com/opcode-database/opcode/0958/'''
	return _opcodes.create_snapshot_pickup(x_coord, y_coord, z_coord)

def create_horseshoe_pickup(x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/0959/ https://gtagmodding.com/opcode-database/opcode/0959/'''
	return _opcodes.create_horseshoe_pickup(x_coord, y_coord, z_coord)

def create_oyster_pickup(x_coord: float, y_coord: float, z_coord: float) -> int:
	'''More info: https://gtamods.com/wiki/095a/ https://gtagmodding.com/opcode-database/opcode/095A/'''
	return _opcodes.create_oyster_pickup(x_coord, y_coord, z_coord)

def has_object_been_uprooted(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/095b/ https://gtagmodding.com/opcode-database/opcode/095B/'''
	return _opcodes.has_object_been_uprooted(hobj)

def add_smoke_particle(x_coord: float, y_coord: float, z_coord: float, unknown4: float, unknown5: float, unknown6: float, unknown7: float, unknown8: float, unknown9: float, unknown10: float, unknown11: float, unknown12: float) -> None:
	'''More info: https://gtamods.com/wiki/095c/ https://gtagmodding.com/opcode-database/opcode/095C/'''
	_opcodes.add_smoke_particle(x_coord, y_coord, z_coord, unknown4, unknown5, unknown6, unknown7, unknown8, unknown9, unknown10, unknown11, unknown12)

def is_char_stuck_under_car(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/095d/ https://gtagmodding.com/opcode-database/opcode/095D/'''
	return _opcodes.is_char_stuck_under_car(hchar)

def control_car_door(hveh: int, unknown2: int, unknown3: int, unknown4: float) -> None:
	'''More info: https://gtamods.com/wiki/095e/ https://gtagmodding.com/opcode-database/opcode/095E/'''
	_opcodes.control_car_door(hveh, unknown2, unknown3, unknown4)

def get_door_angle_ratio(hveh: int, unknown2: int) -> float:
	'''More info: https://gtamods.com/wiki/095f/ https://gtagmodding.com/opcode-database/opcode/095F/'''
	return _opcodes.get_door_angle_ratio(hveh, unknown2)

def set_player_display_vital_stats_button(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0960/ https://gtagmodding.com/opcode-database/opcode/0960/'''
	_opcodes.set_player_display_vital_stats_button(player, state)

def set_char_keep_task(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0961/ https://gtagmodding.com/opcode-database/opcode/0961/'''
	_opcodes.set_char_keep_task(hchar, state)

def create_menu_grid(unknown1: str, unknown2: float, unknown3: float, width: float, unknown5: int, state: int, state7: int, unknown8: int) -> int:
	'''More info: https://gtamods.com/wiki/0964/ https://gtagmodding.com/opcode-database/opcode/0964/'''
	return _opcodes.create_menu_grid(unknown1, unknown2, unknown3, width, unknown5, state, state7, unknown8)

def is_char_swimming(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0965/ https://gtagmodding.com/opcode-database/opcode/0965/'''
	return _opcodes.is_char_swimming(hchar)

def get_char_swim_state(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0966/ https://gtagmodding.com/opcode-database/opcode/0966/'''
	return _opcodes.get_char_swim_state(hchar)

def start_char_facial_talk(hchar: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0967/ https://gtagmodding.com/opcode-database/opcode/0967/'''
	_opcodes.start_char_facial_talk(hchar, time)

def stop_char_facial_talk(hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0968/ https://gtagmodding.com/opcode-database/opcode/0968/'''
	_opcodes.stop_char_facial_talk(hchar)

def is_big_vehicle(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0969/ https://gtagmodding.com/opcode-database/opcode/0969/'''
	return _opcodes.is_big_vehicle(hveh)

def switch_police_helis(state: int) -> None:
	'''More info: https://gtamods.com/wiki/096a/ https://gtagmodding.com/opcode-database/opcode/096A/'''
	_opcodes.switch_police_helis(state)

def store_car_mod_state() -> None:
	'''More info: https://gtamods.com/wiki/096b/ https://gtagmodding.com/opcode-database/opcode/096B/'''
	_opcodes.store_car_mod_state()

def restore_car_mod_state() -> None:
	'''More info: https://gtamods.com/wiki/096c/ https://gtagmodding.com/opcode-database/opcode/096C/'''
	_opcodes.restore_car_mod_state()

def get_current_car_mod(hveh: int, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/096d/ https://gtagmodding.com/opcode-database/opcode/096D/'''
	return _opcodes.get_current_car_mod(hveh, unknown2)

def is_car_low_rider(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/096e/ https://gtagmodding.com/opcode-database/opcode/096E/'''
	return _opcodes.is_car_low_rider(hveh)

def is_car_street_racer(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/096f/ https://gtagmodding.com/opcode-database/opcode/096F/'''
	return _opcodes.is_car_street_racer(hveh)

def force_death_restart() -> None:
	'''More info: https://gtamods.com/wiki/0970/ https://gtagmodding.com/opcode-database/opcode/0970/'''
	_opcodes.force_death_restart()

def sync_water() -> None:
	'''More info: https://gtamods.com/wiki/0971/ https://gtagmodding.com/opcode-database/opcode/0971/'''
	_opcodes.sync_water()

def set_char_coordinates_no_offset(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/0972/ https://gtagmodding.com/opcode-database/opcode/0972/'''
	_opcodes.set_char_coordinates_no_offset(hchar, x_coord, y_coord, z_coord)

def does_script_fire_exist(script_fire: int) -> None:
	'''More info: https://gtamods.com/wiki/0973/ https://gtagmodding.com/opcode-database/opcode/0973/'''
	_opcodes.does_script_fire_exist(script_fire)

def reset_stuff_upon_resurrection() -> None:
	'''More info: https://gtamods.com/wiki/0974/ https://gtagmodding.com/opcode-database/opcode/0974/'''
	_opcodes.reset_stuff_upon_resurrection()

def is_emergency_services_vehicle(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0975/ https://gtagmodding.com/opcode-database/opcode/0975/'''
	return _opcodes.is_emergency_services_vehicle(hveh)

def kill_fx_system_now(fx_system: int) -> None:
	'''More info: https://gtamods.com/wiki/0976/ https://gtagmodding.com/opcode-database/opcode/0976/'''
	_opcodes.kill_fx_system_now(fx_system)

def is_object_within_brain_activation_range(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/0977/ https://gtagmodding.com/opcode-database/opcode/0977/'''
	return _opcodes.is_object_within_brain_activation_range(hobj)

def copy_shared_char_decision_maker(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/0978/ https://gtagmodding.com/opcode-database/opcode/0978/'''
	return _opcodes.copy_shared_char_decision_maker(unknown1)

def report_mission_audio_event_at_position(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/097a/ https://gtagmodding.com/opcode-database/opcode/097A/'''
	_opcodes.report_mission_audio_event_at_position(x_coord, y_coord, z_coord, unknown4)

def report_mission_audio_event_at_object(hobj: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/097b/ https://gtagmodding.com/opcode-database/opcode/097B/'''
	_opcodes.report_mission_audio_event_at_object(hobj, unknown2)

def attach_mission_audio_to_object(unknown1: int, hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/097c/ https://gtagmodding.com/opcode-database/opcode/097C/'''
	_opcodes.attach_mission_audio_to_object(unknown1, hobj)

def get_num_car_colours(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/097d/ https://gtagmodding.com/opcode-database/opcode/097D/'''
	return _opcodes.get_num_car_colours(hveh)

def extinguish_fire_at_point(x_coord: float, y_coord: float, z_coord: float, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0980/ https://gtagmodding.com/opcode-database/opcode/0980/'''
	_opcodes.extinguish_fire_at_point(x_coord, y_coord, z_coord, radius)

def has_train_derailed(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0981/ https://gtagmodding.com/opcode-database/opcode/0981/'''
	return _opcodes.has_train_derailed(hveh)

def set_char_force_die_in_car(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0982/ https://gtagmodding.com/opcode-database/opcode/0982/'''
	_opcodes.set_char_force_die_in_car(hchar, state)

def set_only_create_gang_members(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0983/ https://gtagmodding.com/opcode-database/opcode/0983/'''
	_opcodes.set_only_create_gang_members(state)

def get_object_model(hobj: int) -> int:
	'''More info: https://gtamods.com/wiki/0984/ https://gtagmodding.com/opcode-database/opcode/0984/'''
	return _opcodes.get_object_model(hobj)

def set_char_uses_collision_closest_object_of_type(x_coord: float, y_coord: float, z_coord: float, radius: float, unknown5: int, state: int, hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/0985/ https://gtagmodding.com/opcode-database/opcode/0985/'''
	_opcodes.set_char_uses_collision_closest_object_of_type(x_coord, y_coord, z_coord, radius, unknown5, state, hchar)

def clear_all_script_fire_flags() -> None:
	'''More info: https://gtamods.com/wiki/0986/ https://gtagmodding.com/opcode-database/opcode/0986/'''
	_opcodes.clear_all_script_fire_flags()

def get_car_blocking_car(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0987/ https://gtagmodding.com/opcode-database/opcode/0987/'''
	return _opcodes.get_car_blocking_car(hveh)

def get_current_vehicle_paintjob(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/0988/ https://gtagmodding.com/opcode-database/opcode/0988/'''
	return _opcodes.get_current_vehicle_paintjob(hveh)

def set_help_message_box_size(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0989/ https://gtagmodding.com/opcode-database/opcode/0989/'''
	_opcodes.set_help_message_box_size(unknown1)

def set_gunshot_sense_range_for_riot2(radius: float) -> None:
	'''More info: https://gtamods.com/wiki/098a/ https://gtagmodding.com/opcode-database/opcode/098A/'''
	_opcodes.set_gunshot_sense_range_for_riot2(radius)

def get_car_moving_component_offset(hveh: int) -> float:
	'''More info: https://gtamods.com/wiki/098d/ https://gtagmodding.com/opcode-database/opcode/098D/'''
	return _opcodes.get_car_moving_component_offset(hveh)

def set_named_entry_exit_flag(unknown1: str, unknown2: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/098e/ https://gtagmodding.com/opcode-database/opcode/098E/'''
	_opcodes.set_named_entry_exit_flag(unknown1, unknown2, state)

def pause_current_beat_track(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0991/ https://gtagmodding.com/opcode-database/opcode/0991/'''
	_opcodes.pause_current_beat_track(state)

def set_player_cycle_weapon_button(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0992/ https://gtagmodding.com/opcode-database/opcode/0992/'''
	_opcodes.set_player_cycle_weapon_button(player, state)

def mark_road_node_as_dont_wander(x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/0994/ https://gtagmodding.com/opcode-database/opcode/0994/'''
	_opcodes.mark_road_node_as_dont_wander(x_coord, y_coord, z_coord)

def unmark_all_road_nodes_as_dont_wander() -> None:
	'''More info: https://gtamods.com/wiki/0995/ https://gtagmodding.com/opcode-database/opcode/0995/'''
	_opcodes.unmark_all_road_nodes_as_dont_wander()

def set_checkpoint_heading(checkpoint: int, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0996/ https://gtagmodding.com/opcode-database/opcode/0996/'''
	_opcodes.set_checkpoint_heading(checkpoint, angle)

def set_mission_respect_total(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0997/ https://gtagmodding.com/opcode-database/opcode/0997/'''
	_opcodes.set_mission_respect_total(unknown1)

def award_player_mission_respect(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0998/ https://gtagmodding.com/opcode-database/opcode/0998/'''
	_opcodes.award_player_mission_respect(unknown1)

def set_car_collision(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/099a/ https://gtagmodding.com/opcode-database/opcode/099A/'''
	_opcodes.set_car_collision(hveh, state)

def change_playback_to_use_ai(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/099b/ https://gtagmodding.com/opcode-database/opcode/099B/'''
	_opcodes.change_playback_to_use_ai(hveh)

def camera_set_shake_simulation_simple(unknown1: int, time: float, unknown3: float) -> None:
	'''More info: https://gtamods.com/wiki/099c/ https://gtagmodding.com/opcode-database/opcode/099C/'''
	_opcodes.camera_set_shake_simulation_simple(unknown1, time, unknown3)

def is_night_vision_active() -> bool:
	'''More info: https://gtamods.com/wiki/099d/ https://gtagmodding.com/opcode-database/opcode/099D/'''
	return _opcodes.is_night_vision_active()

def set_create_random_cops(state: int) -> None:
	'''More info: https://gtamods.com/wiki/099e/ https://gtagmodding.com/opcode-database/opcode/099E/'''
	_opcodes.set_create_random_cops(state)

def task_set_ignore_weapon_range_flag(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/099f/ https://gtagmodding.com/opcode-database/opcode/099F/'''
	_opcodes.task_set_ignore_weapon_range_flag(hchar, state)

def task_pick_up_second_object(hchar: int, hobj: int, x_offset: float, y_offset: float, z_offset: float, unknown6: int, unknown7: int, unknown8: str, unknown9: str, time: int) -> None:
	'''More info: https://gtamods.com/wiki/09a0/ https://gtagmodding.com/opcode-database/opcode/09A0/'''
	_opcodes.task_pick_up_second_object(hchar, hobj, x_offset, y_offset, z_offset, unknown6, unknown7, unknown8, unknown9, time)

def drop_second_object(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09a1/ https://gtagmodding.com/opcode-database/opcode/09A1/'''
	_opcodes.drop_second_object(hchar, state)

def remove_object_elegantly(hobj: int) -> None:
	'''More info: https://gtamods.com/wiki/09a2/ https://gtagmodding.com/opcode-database/opcode/09A2/'''
	_opcodes.remove_object_elegantly(hobj)

def draw_crosshair(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09a3/ https://gtagmodding.com/opcode-database/opcode/09A3/'''
	_opcodes.draw_crosshair(state)

def set_up_conversation_node_with_speech(unknown1: str, unknown2: str, unknown3: str, unknown4: int, unknown5: int, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/09a4/ https://gtagmodding.com/opcode-database/opcode/09A4/'''
	_opcodes.set_up_conversation_node_with_speech(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6)

def show_blips_on_all_levels(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09a6/ https://gtagmodding.com/opcode-database/opcode/09A6/'''
	_opcodes.show_blips_on_all_levels(state)

def set_char_drugged_up(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09a7/ https://gtagmodding.com/opcode-database/opcode/09A7/'''
	_opcodes.set_char_drugged_up(hchar, state)

def is_char_head_missing(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/09a8/ https://gtagmodding.com/opcode-database/opcode/09A8/'''
	return _opcodes.is_char_head_missing(hchar)

def get_hash_key(unknown1: str) -> int:
	'''More info: https://gtamods.com/wiki/09a9/ https://gtagmodding.com/opcode-database/opcode/09A9/'''
	return _opcodes.get_hash_key(unknown1)

def set_up_conversation_end_node_with_speech(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/09aa/ https://gtagmodding.com/opcode-database/opcode/09AA/'''
	_opcodes.set_up_conversation_end_node_with_speech(unknown1, unknown2)

def random_passenger_say(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/09ab/ https://gtagmodding.com/opcode-database/opcode/09AB/'''
	_opcodes.random_passenger_say(hveh, unknown2)

def hide_all_frontend_blips(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09ac/ https://gtagmodding.com/opcode-database/opcode/09AC/'''
	_opcodes.hide_all_frontend_blips(state)

def set_player_in_car_camera_mode(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/09ad/ https://gtagmodding.com/opcode-database/opcode/09AD/'''
	_opcodes.set_player_in_car_camera_mode(unknown1)

def is_char_in_any_train(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/09ae/ https://gtagmodding.com/opcode-database/opcode/09AE/'''
	return _opcodes.is_char_in_any_train(hchar)

def set_up_skip_after_mission(x_coord: float, y_coord: float, z_coord: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/09af/ https://gtagmodding.com/opcode-database/opcode/09AF/'''
	_opcodes.set_up_skip_after_mission(x_coord, y_coord, z_coord, angle)

def set_vehicle_is_considered_by_player(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09b0/ https://gtagmodding.com/opcode-database/opcode/09B0/'''
	_opcodes.set_vehicle_is_considered_by_player(hveh, state)

def get_random_car_model_in_memory(state: int) -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/09b2/ https://gtagmodding.com/opcode-database/opcode/09B2/'''
	return _opcodes.get_random_car_model_in_memory(state)

def get_car_door_lock_status(hveh: int) -> int:
	'''More info: https://gtamods.com/wiki/09b3/ https://gtagmodding.com/opcode-database/opcode/09B3/'''
	return _opcodes.get_car_door_lock_status(hveh)

def set_closest_entry_exit_flag(x_coord: float, y_coord: float, radius: float, unknown4: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09b4/ https://gtagmodding.com/opcode-database/opcode/09B4/'''
	_opcodes.set_closest_entry_exit_flag(x_coord, y_coord, radius, unknown4, state)

def set_char_signal_after_kill(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09b5/ https://gtagmodding.com/opcode-database/opcode/09B5/'''
	_opcodes.set_char_signal_after_kill(hchar, state)

def set_char_wanted_by_police(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09b6/ https://gtagmodding.com/opcode-database/opcode/09B6/'''
	_opcodes.set_char_wanted_by_police(hchar, state)

def set_zone_no_cops(unknown1: str, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09b7/ https://gtagmodding.com/opcode-database/opcode/09B7/'''
	_opcodes.set_zone_no_cops(unknown1, state)

def add_blood(x_coord: float, y_coord: float, z_coord: float, x_offset: float, y_offset: float, z_offset: float, unknown7: int, hchar: int) -> None:
	'''More info: https://gtamods.com/wiki/09b8/ https://gtagmodding.com/opcode-database/opcode/09B8/'''
	_opcodes.add_blood(x_coord, y_coord, z_coord, x_offset, y_offset, z_offset, unknown7, hchar)

def display_car_names(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09b9/ https://gtagmodding.com/opcode-database/opcode/09B9/'''
	_opcodes.display_car_names(state)

def display_zone_names(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09ba/ https://gtagmodding.com/opcode-database/opcode/09BA/'''
	_opcodes.display_zone_names(state)

def is_car_door_damaged(hveh: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/09bb/ https://gtagmodding.com/opcode-database/opcode/09BB/'''
	return _opcodes.is_car_door_damaged(hveh, unknown2)

def set_char_coordinates_dont_warp_gang_no_offset(hchar: int, x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/09bc/ https://gtagmodding.com/opcode-database/opcode/09BC/'''
	_opcodes.set_char_coordinates_dont_warp_gang_no_offset(hchar, x_coord, y_coord, z_coord)

def set_minigame_in_progress(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09bd/ https://gtagmodding.com/opcode-database/opcode/09BD/'''
	_opcodes.set_minigame_in_progress(state)

def is_minigame_in_progress() -> bool:
	'''More info: https://gtamods.com/wiki/09be/ https://gtagmodding.com/opcode-database/opcode/09BE/'''
	return _opcodes.is_minigame_in_progress()

def set_force_random_car_model(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/09bf/ https://gtagmodding.com/opcode-database/opcode/09BF/'''
	_opcodes.set_force_random_car_model(unknown1)

def get_random_car_of_type_in_angled_area_no_save(x_coord: float, y_coord: float, x_coord3: float, y_coord4: float, angle: float, hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/09c0/ https://gtagmodding.com/opcode-database/opcode/09C0/'''
	return _opcodes.get_random_car_of_type_in_angled_area_no_save(x_coord, y_coord, x_coord3, y_coord4, angle, hchar)

def add_next_message_to_previous_briefs(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09c1/ https://gtagmodding.com/opcode-database/opcode/09C1/'''
	_opcodes.add_next_message_to_previous_briefs(state)

def fail_kill_frenzy() -> None:
	'''More info: https://gtamods.com/wiki/09c2/ https://gtagmodding.com/opcode-database/opcode/09C2/'''
	_opcodes.fail_kill_frenzy()

def is_cop_vehicle_in_area_3d_no_save(x_coord: float, y_coord: float, z_coord: float, x_coord4: float, y_coord5: float, z_coord6: float) -> bool:
	'''More info: https://gtamods.com/wiki/09c3/ https://gtagmodding.com/opcode-database/opcode/09C3/'''
	return _opcodes.is_cop_vehicle_in_area_3d_no_save(x_coord, y_coord, z_coord, x_coord4, y_coord5, z_coord6)

def set_petrol_tank_weakpoint(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09c4/ https://gtagmodding.com/opcode-database/opcode/09C4/'''
	_opcodes.set_petrol_tank_weakpoint(hveh, state)

def is_char_using_map_attractor(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/09c5/ https://gtagmodding.com/opcode-database/opcode/09C5/'''
	return _opcodes.is_char_using_map_attractor(hchar)

def set_player_model(player: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/09c7/ https://gtagmodding.com/opcode-database/opcode/09C7/'''
	_opcodes.set_player_model(player, unknown2)

def are_subtitles_switched_on() -> None:
	'''More info: https://gtamods.com/wiki/09c8/ https://gtagmodding.com/opcode-database/opcode/09C8/'''
	_opcodes.are_subtitles_switched_on()

def remove_char_from_car_maintain_position(hchar: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/09c9/ https://gtagmodding.com/opcode-database/opcode/09C9/'''
	_opcodes.remove_char_from_car_maintain_position(hchar, hveh)

def set_object_proofs(hobj: int, state: int, state3: int, state4: int, state5: int, state6: int) -> None:
	'''More info: https://gtamods.com/wiki/09ca/ https://gtagmodding.com/opcode-database/opcode/09CA/'''
	_opcodes.set_object_proofs(hobj, state, state3, state4, state5, state6)

def is_car_touching_car(hveh: int, hveh2: int) -> bool:
	'''More info: https://gtamods.com/wiki/09cb/ https://gtagmodding.com/opcode-database/opcode/09CB/'''
	return _opcodes.is_car_touching_car(hveh, hveh2)

def does_object_have_this_model(hobj: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/09cc/ https://gtagmodding.com/opcode-database/opcode/09CC/'''
	_opcodes.does_object_have_this_model(hobj, unknown2)

def set_train_forced_to_slow_down(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09cf/ https://gtagmodding.com/opcode-database/opcode/09CF/'''
	_opcodes.set_train_forced_to_slow_down(hveh, state)

def is_vehicle_on_all_wheels(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/09d0/ https://gtagmodding.com/opcode-database/opcode/09D0/'''
	return _opcodes.is_vehicle_on_all_wheels(hveh)

def does_pickup_exist(pickup: int) -> None:
	'''More info: https://gtamods.com/wiki/09d1/ https://gtagmodding.com/opcode-database/opcode/09D1/'''
	_opcodes.does_pickup_exist(pickup)

def enable_ambient_crime(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09d2/ https://gtagmodding.com/opcode-database/opcode/09D2/'''
	_opcodes.enable_ambient_crime(state)

def clear_wanted_level_in_garage() -> None:
	'''More info: https://gtamods.com/wiki/09d4/ https://gtagmodding.com/opcode-database/opcode/09D4/'''
	_opcodes.clear_wanted_level_in_garage()

def set_char_say_context_important(hchar: int, unknown2: int, state: int, state4: int, state5: int) -> int:
	'''More info: https://gtamods.com/wiki/09d5/ https://gtagmodding.com/opcode-database/opcode/09D5/'''
	return _opcodes.set_char_say_context_important(hchar, unknown2, state, state4, state5)

def set_char_say_script(hchar: int, unknown2: int, state: int, state4: int, state5: int) -> None:
	'''More info: https://gtamods.com/wiki/09d6/ https://gtagmodding.com/opcode-database/opcode/09D6/'''
	_opcodes.set_char_say_script(hchar, unknown2, state, state4, state5)

def force_interior_lighting_for_player(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09d7/ https://gtagmodding.com/opcode-database/opcode/09D7/'''
	_opcodes.force_interior_lighting_for_player(player, state)

def disable_2nd_pad_for_debug(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/09d8/ https://gtagmodding.com/opcode-database/opcode/09D8/'''
	_opcodes.disable_2nd_pad_for_debug(unknown1)

def use_detonator() -> None:
	'''More info: https://gtamods.com/wiki/09d9/ https://gtagmodding.com/opcode-database/opcode/09D9/'''
	_opcodes.use_detonator()

def is_money_pickup_at_coords(x_coord: float, y_coord: float, z_coord: float) -> bool:
	'''More info: https://gtamods.com/wiki/09da/ https://gtagmodding.com/opcode-database/opcode/09DA/'''
	return _opcodes.is_money_pickup_at_coords(x_coord, y_coord, z_coord)

def set_menu_column_width(unknown1: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/09db/ https://gtagmodding.com/opcode-database/opcode/09DB/'''
	_opcodes.set_menu_column_width(unknown1, unknown2, unknown3)

def make_room_in_player_gang_for_mission_peds(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/09dd/ https://gtagmodding.com/opcode-database/opcode/09DD/'''
	_opcodes.make_room_in_player_gang_for_mission_peds(unknown1)

def is_char_getting_in_to_a_car(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/09de/ https://gtagmodding.com/opcode-database/opcode/09DE/'''
	return _opcodes.is_char_getting_in_to_a_car(hchar)

def set_up_skip_for_specific_vehicle(x_coord: float, y_coord: float, z_coord: float, angle: float, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/09e0/ https://gtagmodding.com/opcode-database/opcode/09E0/'''
	_opcodes.set_up_skip_for_specific_vehicle(x_coord, y_coord, z_coord, angle, hveh)

def get_car_model_value(unknown1: int) -> int:
	'''More info: https://gtamods.com/wiki/09e1/ https://gtagmodding.com/opcode-database/opcode/09E1/'''
	return _opcodes.get_car_model_value(unknown1)

def create_car_generator_with_plate(x_coord: float, y_coord: float, z_coord: float, angle: float, unknown5: int, unknown6: int, unknown7: int, state: int, unknown9: int, unknown10: int, time: int, time12: int, unknown13: str) -> int:
	'''More info: https://gtamods.com/wiki/09e2/ https://gtagmodding.com/opcode-database/opcode/09E2/'''
	return _opcodes.create_car_generator_with_plate(x_coord, y_coord, z_coord, angle, unknown5, unknown6, unknown7, state, unknown9, unknown10, time, time12, unknown13)

def find_train_direction(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/09e3/ https://gtagmodding.com/opcode-database/opcode/09E3/'''
	_opcodes.find_train_direction(hveh)

def set_aircraft_carrier_sam_site(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09e4/ https://gtagmodding.com/opcode-database/opcode/09E4/'''
	_opcodes.set_aircraft_carrier_sam_site(state)

def draw_light_with_range(x_coord: float, y_coord: float, z_coord: float, red: int, green: int, blue: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/09e5/ https://gtagmodding.com/opcode-database/opcode/09E5/'''
	_opcodes.draw_light_with_range(x_coord, y_coord, z_coord, red, green, blue, radius)

def enable_burglary_houses(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09e6/ https://gtagmodding.com/opcode-database/opcode/09E6/'''
	_opcodes.enable_burglary_houses(state)

def is_player_control_on(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/09e7/ https://gtagmodding.com/opcode-database/opcode/09E7/'''
	return _opcodes.is_player_control_on(player)

def get_char_area_visible(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/09e8/ https://gtagmodding.com/opcode-database/opcode/09E8/'''
	return _opcodes.get_char_area_visible(hchar)

def give_non_player_car_nitro(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/09e9/ https://gtagmodding.com/opcode-database/opcode/09E9/'''
	_opcodes.give_non_player_car_nitro(hveh)

def player_take_off_goggles(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09eb/ https://gtagmodding.com/opcode-database/opcode/09EB/'''
	_opcodes.player_take_off_goggles(player, state)

def allow_fixed_camera_collision(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09ec/ https://gtagmodding.com/opcode-database/opcode/09EC/'''
	_opcodes.allow_fixed_camera_collision(state)

def has_char_spotted_char_in_front(hchar: int, hchar2: int) -> bool:
	'''More info: https://gtamods.com/wiki/09ed/ https://gtagmodding.com/opcode-database/opcode/09ED/'''
	return _opcodes.has_char_spotted_char_in_front(hchar, hchar2)

def force_big_message_and_counter(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09ee/ https://gtagmodding.com/opcode-database/opcode/09EE/'''
	_opcodes.force_big_message_and_counter(state)

def set_vehicle_camera_tweak(unknown1: int, unknown2: float, unknown3: float, unknown4: float) -> None:
	'''More info: https://gtamods.com/wiki/09ef/ https://gtagmodding.com/opcode-database/opcode/09EF/'''
	_opcodes.set_vehicle_camera_tweak(unknown1, unknown2, unknown3, unknown4)

def reset_vehicle_camera_tweak() -> None:
	'''More info: https://gtamods.com/wiki/09f0/ https://gtagmodding.com/opcode-database/opcode/09F0/'''
	_opcodes.reset_vehicle_camera_tweak()

def report_mission_audio_event_at_char(hchar: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/09f1/ https://gtagmodding.com/opcode-database/opcode/09F1/'''
	_opcodes.report_mission_audio_event_at_char(hchar, unknown2)

def does_decision_maker_exist(decision_maker: int) -> None:
	'''More info: https://gtamods.com/wiki/09f2/ https://gtagmodding.com/opcode-database/opcode/09F2/'''
	_opcodes.does_decision_maker_exist(decision_maker)

def ignore_height_difference_following_nodes(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09f4/ https://gtagmodding.com/opcode-database/opcode/09F4/'''
	_opcodes.ignore_height_difference_following_nodes(hchar, state)

def shut_all_chars_up(state: int) -> None:
	'''More info: https://gtamods.com/wiki/09f5/ https://gtagmodding.com/opcode-database/opcode/09F5/'''
	_opcodes.shut_all_chars_up(state)

def set_char_get_out_upside_down_car(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/09f6/ https://gtagmodding.com/opcode-database/opcode/09F6/'''
	_opcodes.set_char_get_out_upside_down_car(hchar, state)

def report_mission_audio_event_at_car(hveh: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/09f7/ https://gtagmodding.com/opcode-database/opcode/09F7/'''
	_opcodes.report_mission_audio_event_at_car(hveh, unknown2)

def do_weapon_stuff_at_start_of_2p_game() -> None:
	'''More info: https://gtamods.com/wiki/09f8/ https://gtagmodding.com/opcode-database/opcode/09F8/'''
	_opcodes.do_weapon_stuff_at_start_of_2p_game()

def has_game_just_returned_from_frontend() -> bool:
	'''More info: https://gtamods.com/wiki/09fa/ https://gtagmodding.com/opcode-database/opcode/09FA/'''
	return _opcodes.has_game_just_returned_from_frontend()

def get_current_language() -> int:
	'''More info: https://gtamods.com/wiki/09fb/ https://gtagmodding.com/opcode-database/opcode/09FB/'''
	return _opcodes.get_current_language()

def is_object_intersecting_world(hobj: int) -> bool:
	'''More info: https://gtamods.com/wiki/09fc/ https://gtagmodding.com/opcode-database/opcode/09FC/'''
	return _opcodes.is_object_intersecting_world(hobj)

def get_string_width(unknown1: str) -> int:
	'''More info: https://gtamods.com/wiki/09fd/ https://gtagmodding.com/opcode-database/opcode/09FD/'''
	return _opcodes.get_string_width(unknown1)

def reset_vehicle_hydraulics(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/09fe/ https://gtagmodding.com/opcode-database/opcode/09FE/'''
	_opcodes.reset_vehicle_hydraulics(hveh)

def set_respawn_point_for_duration_of_mission(x_coord: float, y_coord: float, z_coord: float) -> None:
	'''More info: https://gtamods.com/wiki/09ff/ https://gtagmodding.com/opcode-database/opcode/09FF/'''
	_opcodes.set_respawn_point_for_duration_of_mission(x_coord, y_coord, z_coord)

def is_this_model_a_car(unknown1: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a01/ https://gtagmodding.com/opcode-database/opcode/0A01/'''
	return _opcodes.is_this_model_a_car(unknown1)

def switch_on_ground_searchlight(searchlight: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a02/ https://gtagmodding.com/opcode-database/opcode/0A02/'''
	_opcodes.switch_on_ground_searchlight(searchlight, state)

def is_gang_war_fighting_going_on() -> bool:
	'''More info: https://gtamods.com/wiki/0a03/ https://gtagmodding.com/opcode-database/opcode/0A03/'''
	return _opcodes.is_gang_war_fighting_going_on()

def is_next_station_allowed(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a06/ https://gtagmodding.com/opcode-database/opcode/0A06/'''
	return _opcodes.is_next_station_allowed(hveh)

def skip_to_next_allowed_station(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0a07/ https://gtagmodding.com/opcode-database/opcode/0A07/'''
	_opcodes.skip_to_next_allowed_station(hveh)

def get_string_width_with_number(unknown1: str, unknown2: int) -> int:
	'''More info: https://gtamods.com/wiki/0a08/ https://gtagmodding.com/opcode-database/opcode/0A08/'''
	return _opcodes.get_string_width_with_number(unknown1, unknown2)

def shut_char_up_for_scripted_speech(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a09/ https://gtagmodding.com/opcode-database/opcode/0A09/'''
	_opcodes.shut_char_up_for_scripted_speech(hchar, state)

def enable_disabled_attractors_on_object(hobj: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a0a/ https://gtagmodding.com/opcode-database/opcode/0A0A/'''
	_opcodes.enable_disabled_attractors_on_object(hobj, state)

def load_scene_in_direction(x_coord: float, y_coord: float, z_coord: float, angle: float) -> None:
	'''More info: https://gtamods.com/wiki/0a0b/ https://gtagmodding.com/opcode-database/opcode/0A0B/'''
	_opcodes.load_scene_in_direction(x_coord, y_coord, z_coord, angle)

def is_player_using_jetpack(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a0c/ https://gtagmodding.com/opcode-database/opcode/0A0C/'''
	return _opcodes.is_player_using_jetpack(player)

def clear_this_print_big_now(unknown1: int) -> None:
	'''More info: https://gtamods.com/wiki/0a0e/ https://gtagmodding.com/opcode-database/opcode/0A0E/'''
	_opcodes.clear_this_print_big_now(unknown1)

def has_language_changed() -> bool:
	'''More info: https://gtamods.com/wiki/0a0f/ https://gtagmodding.com/opcode-database/opcode/0A0F/'''
	return _opcodes.has_language_changed()

def increment_int_stat_no_message(unknown1: int, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0a10/ https://gtagmodding.com/opcode-database/opcode/0A10/'''
	_opcodes.increment_int_stat_no_message(unknown1, unknown2)

def set_extra_car_colours(hveh: int, unknown2: int, unknown3: int) -> None:
	'''More info: https://gtamods.com/wiki/0a11/ https://gtagmodding.com/opcode-database/opcode/0A11/'''
	_opcodes.set_extra_car_colours(hveh, unknown2, unknown3)

def get_extra_car_colours(hveh: int) -> Tuple[int, int]:
	'''More info: https://gtamods.com/wiki/0a12/ https://gtagmodding.com/opcode-database/opcode/0A12/'''
	return _opcodes.get_extra_car_colours(hveh)

def manage_all_population() -> None:
	'''More info: https://gtamods.com/wiki/0a13/ https://gtagmodding.com/opcode-database/opcode/0A13/'''
	_opcodes.manage_all_population()

def set_no_resprays(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a14/ https://gtagmodding.com/opcode-database/opcode/0A14/'''
	_opcodes.set_no_resprays(state)

def has_car_been_resprayed(hveh: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a15/ https://gtagmodding.com/opcode-database/opcode/0A15/'''
	return _opcodes.has_car_been_resprayed(hveh)

def attach_mission_audio_to_car(unknown1: int, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0a16/ https://gtagmodding.com/opcode-database/opcode/0A16/'''
	_opcodes.attach_mission_audio_to_car(unknown1, hveh)

def set_has_been_owned_for_car_generator(car_generator: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a17/ https://gtagmodding.com/opcode-database/opcode/0A17/'''
	_opcodes.set_has_been_owned_for_car_generator(car_generator, state)

def set_up_conversation_node_with_scripted_speech(unknown1: str, unknown2: str, unknown3: str, unknown4: int, unknown5: int, unknown6: int) -> None:
	'''More info: https://gtamods.com/wiki/0a18/ https://gtagmodding.com/opcode-database/opcode/0A18/'''
	_opcodes.set_up_conversation_node_with_scripted_speech(unknown1, unknown2, unknown3, unknown4, unknown5, unknown6)

def set_area_name(unknown1: str) -> None:
	'''More info: https://gtamods.com/wiki/0a19/ https://gtagmodding.com/opcode-database/opcode/0A19/'''
	_opcodes.set_area_name(unknown1)

def task_play_anim_secondary(hchar: int, unknown2: str, unknown3: str, unknown4: float, state: int, state6: int, state7: int, state8: int, time: int) -> None:
	'''More info: https://gtamods.com/wiki/0a1a/ https://gtagmodding.com/opcode-database/opcode/0A1A/'''
	_opcodes.task_play_anim_secondary(hchar, unknown2, unknown3, unknown4, state, state6, state7, state8, time)

def is_char_touching_char(hchar: int, hchar2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a1b/ https://gtagmodding.com/opcode-database/opcode/0A1B/'''
	return _opcodes.is_char_touching_char(hchar, hchar2)

def disable_heli_audio(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a1c/ https://gtagmodding.com/opcode-database/opcode/0A1C/'''
	_opcodes.disable_heli_audio(hveh, state)

def task_hand_gesture(hchar: int, hchar2: int) -> None:
	'''More info: https://gtamods.com/wiki/0a1d/ https://gtagmodding.com/opcode-database/opcode/0A1D/'''
	_opcodes.task_hand_gesture(hchar, hchar2)

def take_photo(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a1e/ https://gtagmodding.com/opcode-database/opcode/0A1E/'''
	_opcodes.take_photo(state)

def increment_float_stat_no_message(unknown1: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0a1f/ https://gtagmodding.com/opcode-database/opcode/0A1F/'''
	_opcodes.increment_float_stat_no_message(unknown1, unknown2)

def set_player_group_to_follow_always(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a20/ https://gtagmodding.com/opcode-database/opcode/0A20/'''
	_opcodes.set_player_group_to_follow_always(player, state)

def improve_car_by_cheating(hveh: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a21/ https://gtagmodding.com/opcode-database/opcode/0A21/'''
	_opcodes.improve_car_by_cheating(hveh, state)

def change_car_colour_from_menu(unknown1: int, hveh: int, unknown3: int, unknown4: int) -> None:
	'''More info: https://gtamods.com/wiki/0a22/ https://gtagmodding.com/opcode-database/opcode/0A22/'''
	_opcodes.change_car_colour_from_menu(unknown1, hveh, unknown3, unknown4)

def highlight_menu_item(unknown1: int, unknown2: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a23/ https://gtagmodding.com/opcode-database/opcode/0A23/'''
	_opcodes.highlight_menu_item(unknown1, unknown2, state)

def set_disable_military_zones(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a24/ https://gtagmodding.com/opcode-database/opcode/0A24/'''
	_opcodes.set_disable_military_zones(state)

def set_camera_position_unfixed(x_offset: float, y_offset: float) -> None:
	'''More info: https://gtamods.com/wiki/0a25/ https://gtagmodding.com/opcode-database/opcode/0A25/'''
	_opcodes.set_camera_position_unfixed(x_offset, y_offset)

def set_radio_to_players_favourite_station() -> None:
	'''More info: https://gtamods.com/wiki/0a26/ https://gtagmodding.com/opcode-database/opcode/0A26/'''
	_opcodes.set_radio_to_players_favourite_station()

def set_death_weapons_persist(hchar: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a27/ https://gtagmodding.com/opcode-database/opcode/0A27/'''
	_opcodes.set_death_weapons_persist(hchar, state)

def set_swim_speed(hchar: int, unknown2: float) -> None:
	'''More info: https://gtamods.com/wiki/0a28/ https://gtagmodding.com/opcode-database/opcode/0A28/'''
	_opcodes.set_swim_speed(hchar, unknown2)

def is_player_climbing(player: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a29/ https://gtagmodding.com/opcode-database/opcode/0A29/'''
	return _opcodes.is_player_climbing(player)

def is_this_help_message_being_displayed(unknown1: str) -> bool:
	'''More info: https://gtamods.com/wiki/0a2a/ https://gtagmodding.com/opcode-database/opcode/0A2A/'''
	return _opcodes.is_this_help_message_being_displayed(unknown1)

def is_widescreen_on_in_options() -> bool:
	'''More info: https://gtamods.com/wiki/0a2b/ https://gtagmodding.com/opcode-database/opcode/0A2B/'''
	return _opcodes.is_widescreen_on_in_options()

def draw_subtitles_before_fade(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a2c/ https://gtagmodding.com/opcode-database/opcode/0A2C/'''
	_opcodes.draw_subtitles_before_fade(state)

def draw_oddjob_title_before_fade(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a2d/ https://gtagmodding.com/opcode-database/opcode/0A2D/'''
	_opcodes.draw_oddjob_title_before_fade(state)

def task_follow_path_nodes_to_coord_with_radius(hchar: int, x_coord: float, y_coord: float, z_coord: float, unknown5: int, time: int, radius: float) -> None:
	'''More info: https://gtamods.com/wiki/0a2e/ https://gtagmodding.com/opcode-database/opcode/0A2E/'''
	_opcodes.task_follow_path_nodes_to_coord_with_radius(hchar, x_coord, y_coord, z_coord, unknown5, time, radius)

def set_photo_camera_effect(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a2f/ https://gtagmodding.com/opcode-database/opcode/0A2F/'''
	_opcodes.set_photo_camera_effect(state)

def fix_car(hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0a30/ https://gtagmodding.com/opcode-database/opcode/0A30/'''
	_opcodes.fix_car(hveh)

def set_player_group_to_follow_never(player: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a31/ https://gtagmodding.com/opcode-database/opcode/0A31/'''
	_opcodes.set_player_group_to_follow_never(player, state)

def is_char_attached_to_any_car(hchar: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a32/ https://gtagmodding.com/opcode-database/opcode/0A32/'''
	return _opcodes.is_char_attached_to_any_car(hchar)

def store_car_char_is_attached_to_no_save(hchar: int) -> int:
	'''More info: https://gtamods.com/wiki/0a33/ https://gtagmodding.com/opcode-database/opcode/0A33/'''
	return _opcodes.store_car_char_is_attached_to_no_save(hchar)

def set_up_skip_to_be_finished_by_script() -> None:
	'''More info: https://gtamods.com/wiki/0a34/ https://gtagmodding.com/opcode-database/opcode/0A34/'''
	_opcodes.set_up_skip_to_be_finished_by_script()

def set_up_skip_for_vehicle_finished_by_script(x_coord: float, y_coord: float, z_coord: float, angle: float, hveh: int) -> None:
	'''More info: https://gtamods.com/wiki/0a35/ https://gtagmodding.com/opcode-database/opcode/0A35/'''
	_opcodes.set_up_skip_for_vehicle_finished_by_script(x_coord, y_coord, z_coord, angle, hveh)

def is_skip_waiting_for_script_to_fade_in() -> bool:
	'''More info: https://gtamods.com/wiki/0a36/ https://gtagmodding.com/opcode-database/opcode/0A36/'''
	return _opcodes.is_skip_waiting_for_script_to_fade_in()

def force_all_vehicle_lights_off(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a37/ https://gtagmodding.com/opcode-database/opcode/0A37/'''
	_opcodes.force_all_vehicle_lights_off(state)

def set_render_player_weapon() -> None:
	'''More info: https://gtamods.com/wiki/0a38/ https://gtagmodding.com/opcode-database/opcode/0A38/'''
	_opcodes.set_render_player_weapon()

def get_player_in_car_camera_mode() -> int:
	'''More info: https://gtamods.com/wiki/0a39/ https://gtagmodding.com/opcode-database/opcode/0A39/'''
	return _opcodes.get_player_in_car_camera_mode()

def is_last_building_model_shot_by_player(player: int, unknown2: int) -> bool:
	'''More info: https://gtamods.com/wiki/0a3a/ https://gtagmodding.com/opcode-database/opcode/0A3A/'''
	return _opcodes.is_last_building_model_shot_by_player(player, unknown2)

def clear_last_building_model_shot_by_player(player: int) -> None:
	'''More info: https://gtamods.com/wiki/0a3b/ https://gtagmodding.com/opcode-database/opcode/0A3B/'''
	_opcodes.clear_last_building_model_shot_by_player(player)

def set_up_conversation_end_node_with_scripted_speech(unknown1: str, unknown2: int) -> None:
	'''More info: https://gtamods.com/wiki/0a3c/ https://gtagmodding.com/opcode-database/opcode/0A3C/'''
	_opcodes.set_up_conversation_end_node_with_scripted_speech(unknown1, unknown2)

def activate_pimp_cheat(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a3d/ https://gtagmodding.com/opcode-database/opcode/0A3D/'''
	_opcodes.activate_pimp_cheat(state)

def get_random_char_in_area_offset_no_save(x_coord: float, y_coord: float, z_coord: float, x_radius: float, y_radius: float, z_radius: float) -> int:
	'''More info: https://gtamods.com/wiki/0a3e/ https://gtagmodding.com/opcode-database/opcode/0A3E/'''
	return _opcodes.get_random_char_in_area_offset_no_save(x_coord, y_coord, z_coord, x_radius, y_radius, z_radius)

def set_script_coop_game(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a3f/ https://gtagmodding.com/opcode-database/opcode/0A3F/'''
	_opcodes.set_script_coop_game(state)

def create_user_3d_marker(x_coord: float, y_coord: float, z_coord: float, unknown4: int) -> int:
	'''More info: https://gtamods.com/wiki/0a40/ https://gtagmodding.com/opcode-database/opcode/0A40/'''
	return _opcodes.create_user_3d_marker(x_coord, y_coord, z_coord, unknown4)

def remove_user_3d_marker(user_3d_marker: int) -> None:
	'''More info: https://gtamods.com/wiki/0a41/ https://gtagmodding.com/opcode-database/opcode/0A41/'''
	_opcodes.remove_user_3d_marker(user_3d_marker)

def get_rid_of_player_prostitute() -> None:
	'''More info: https://gtamods.com/wiki/0a43/ https://gtagmodding.com/opcode-database/opcode/0A43/'''
	_opcodes.get_rid_of_player_prostitute()

def display_non_minigame_help_messages(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a44/ https://gtagmodding.com/opcode-database/opcode/0A44/'''
	_opcodes.display_non_minigame_help_messages(state)

def set_railtrack_resistance_mult(unknown1: float) -> None:
	'''More info: https://gtamods.com/wiki/0a45/ https://gtagmodding.com/opcode-database/opcode/0A45/'''
	_opcodes.set_railtrack_resistance_mult(unknown1)

def switch_object_brains(unknown1: int, state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a46/ https://gtagmodding.com/opcode-database/opcode/0A46/'''
	_opcodes.switch_object_brains(unknown1, state)

def finish_setting_up_conversation_no_subtitles() -> None:
	'''More info: https://gtamods.com/wiki/0a47/ https://gtagmodding.com/opcode-database/opcode/0A47/'''
	_opcodes.finish_setting_up_conversation_no_subtitles()

def allow_pause_in_widescreen(state: int) -> None:
	'''More info: https://gtamods.com/wiki/0a48/ https://gtagmodding.com/opcode-database/opcode/0A48/'''
	_opcodes.allow_pause_in_widescreen(state)

def get_pc_mouse_movement() -> Tuple[float, float]:
	'''More info: https://gtamods.com/wiki/0a4a/ https://gtagmodding.com/opcode-database/opcode/0A4A/'''
	return _opcodes.get_pc_mouse_movement()

def is_pc_using_joypad() -> bool:
	'''More info: https://gtamods.com/wiki/0a4b/ https://gtagmodding.com/opcode-database/opcode/0A4B/'''
	return _opcodes.is_pc_using_joypad()

def is_mouse_using_vertical_inversion() -> bool:
	'''More info: https://gtamods.com/wiki/0a4c/ https://gtagmodding.com/opcode-database/opcode/0A4C/'''
	return _opcodes.is_mouse_using_vertical_inversion()

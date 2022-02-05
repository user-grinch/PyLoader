import libstd.opcodes as opcodes
from typing import Tuple

class Camera():
   @staticmethod
   def shake(intensity: int):
      '''Shakes the camera with the given intensity'''
      opcodes.shake_cam(intensity)

   @staticmethod
   def is_point_on_screen(x: float, y: float, z: float, radius: float):
      '''Returns true if any part of the radius of the specified point is visible on screen'''
      return opcodes.is_point_on_screen(x, y, z, radius)

   @staticmethod
   def point_at_car(vehicle: Car, mode: CameraMode, switchStyle: SwitchType):
      '''Attaches the camera to the specified vehicle'''
      opcodes.point_camera_at_car(vehicle, mode, switchStyle)

   @staticmethod
   def point_at_char(char: Char, mode: CameraMode, switchStyle: SwitchType):
      '''Attaches the camera to the specified character'''
      opcodes.point_camera_at_char(char, mode, switchStyle)

   @staticmethod
   def restore():
      '''Restores the camera to its usual position'''
      opcodes.restore_camera()

   @staticmethod
   def set_fixed_position(x: float, y: float, z: float, xRotation: float, yRotation: float, zRotation: float):
      '''Sets the camera's position and rotation'''
      opcodes.set_fixed_camera_position(x, y, z, xRotation, yRotation, zRotation)

   @staticmethod
   def point_at_point(x: float, y: float, z: float, switchStyle: SwitchType):
      '''Points the camera at the specified location and applies the position set by 0159'''
      opcodes.point_camera_at_point(x, y, z, switchStyle)

   @staticmethod
   def set_fading_color(r: int, g: int, b: int):
      '''Sets the RGB color of the fade command (016A)'''
      opcodes.set_fading_colour(r, g, b)

   @staticmethod
   def do_fade(time: int, direction: Fade):
      '''Fades the screen for the specified time'''
      opcodes.do_fade(time, direction)

   @staticmethod
   def get_fading_status():
      '''Returns true if the screen is fading (016A)'''
      return opcodes.get_fading_status()

   @staticmethod
   def restore_jumpcut():
      '''Restores the camera, putting it back behind the player'''
      opcodes.restore_camera_jumpcut()

   @staticmethod
   def set_zoom(zoom: int):
      '''Sets how far behind the camera is from the player'''
      opcodes.set_camera_zoom(zoom)

   @staticmethod
   def set_behind_player():
      '''Puts the camera behind the player'''
      opcodes.set_camera_behind_player()

   @staticmethod
   def set_in_front_of_player():
      '''Puts the camera in front of the player, pointing towards the player'''
      opcodes.set_camera_in_front_of_player()

   @staticmethod
   def set_near_clip(value: float):
      '''Sets the near clip'''
      opcodes.set_near_clip(value)

   @staticmethod
   def get_debug_coordinates() ->  Tuple[float, float, float]:
      '''Returns the debug camera position'''
      return opcodes.get_debug_camera_coordinates()

   @staticmethod
   def set_interpolation_parameters(_p1: float, time: int):
      '''Sets how long the camera transition will last'''
      opcodes.set_interpolation_parameters(_p1, time)

   @staticmethod
   def get_debug_point_at() ->  Tuple[float, float, float]:
      '''Stores the location the debug camera is pointing to'''
      return opcodes.get_debug_camera_point_at()

   @staticmethod
   def attach_to_vehicle(handle: Car, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float, tilt: float, switchStyle: SwitchType):
      '''Keeps the camera relative to the car with the specified offset'''
      opcodes.attach_camera_to_vehicle(handle, xOffset, yOffset, zOffset, xRotation, yRotation, zRotation, tilt, switchStyle)

   @staticmethod
   def attach_to_vehicle_look_at_vehicle(handle: Car, xOffset: float, yOffset: float, zOffset: float, vehicle: Car, tilt: float, switchStyle: SwitchType):
      '''Puts the camera on the vehicle like in 0679'''
      opcodes.attach_camera_to_vehicle_look_at_vehicle(handle, xOffset, yOffset, zOffset, vehicle, tilt, switchStyle)

   @staticmethod
   def attach_to_vehicle_look_at_char(handle: Char, xOffset: float, yOffset: float, zOffset: float, char: Char, tilt: float, switchStyle: SwitchType):
      '''Attaches the camera to the vehicle and points it at the specified character'''
      opcodes.attach_camera_to_vehicle_look_at_char(handle, xOffset, yOffset, zOffset, char, tilt, switchStyle)

   @staticmethod
   def attach_to_char(handle: Char, xOffset: float, yOffset: float, zOffset: float, xRotation: float, yRotation: float, zRotation: float, tilt: float, switchStyle: SwitchType):
      '''Keeps the camera relative to the actor with the specified offset'''
      opcodes.attach_camera_to_char(handle, xOffset, yOffset, zOffset, xRotation, yRotation, zRotation, tilt, switchStyle)

   @staticmethod
   def attach_to_char_look_at_vehicle(char: Char, xOffset: float, yOffset: float, zOffset: float, vehicle: Car, tilt: float, switchStyle: SwitchType):
      opcodes.attach_camera_to_char_look_at_vehicle(char, xOffset, yOffset, zOffset, vehicle, tilt, switchStyle)

   @staticmethod
   def attach_to_char_look_at_char(handle: Char, xOffset: float, yOffset: float, zOffset: float, char: Char, tilt: float, switchStyle: SwitchType):
      '''Puts the camera on the character like with 067C'''
      opcodes.attach_camera_to_char_look_at_char(handle, xOffset, yOffset, zOffset, char, tilt, switchStyle)

   @staticmethod
   def get_active_coordinates() ->  Tuple[float, float, float]:
      '''Stores the cameras coordinates'''
      return opcodes.get_active_camera_coordinates()

   @staticmethod
   def get_active_point_at() ->  Tuple[float, float, float]:
      '''Gets the coordinates the camera is pointing to'''
      return opcodes.get_active_camera_point_at()

   @staticmethod
   def set_two_player_mode(state: bool):
      '''Enables the cooperative camera mode'''
      opcodes.set_two_player_camera_mode(state)

   @staticmethod
   def get_fov() -> float:
      '''Returns the cameras field of view'''
      return opcodes.get_camera_fov()

   @staticmethod
   def set_first_person_in_car_mode(state: bool):
      '''Enables vehicle bumper view for the camera'''
      opcodes.set_first_person_in_car_camera_mode(state)

   @staticmethod
   def do_bump(xOffset: float, yOffset: float):
      '''Bumps the camera in the specified direction as if it had collided'''
      opcodes.do_camera_bump(xOffset, yOffset)

   @staticmethod
   def set_vector_track(fromX: float, fromY: float, fromZ: float, toX: float, toY: float, toZ: float, time: int, ease: bool):
      '''Makes the camera point at the first coordinates and then rotate to point at the second coordinates'''
      opcodes.camera_set_vector_track(fromX, fromY, fromZ, toX, toY, toZ, time, ease)

   @staticmethod
   def set_lerp_fov(from: float, to: float, time: int, ease: bool):
      '''Sets the cameras zoom factors'''
      opcodes.camera_set_lerp_fov(from, to, time, ease)

   @staticmethod
   def set_darkness_effect(enable: bool, pitchBlack: int):
      '''Darkens the game'''
      opcodes.set_darkness_effect(enable, pitchBlack)

   @staticmethod
   def reset_new_scriptables():
      '''Stops the camera propagating, interpolating, shaking and zooming'''
      opcodes.camera_reset_new_scriptables()

   @staticmethod
   def persist_track(state: bool):
      '''Locks the camera target point in position after propagating'''
      opcodes.camera_persist_track(state)

   @staticmethod
   def persist_pos(state: bool):
      '''Locks the cameras position'''
      opcodes.camera_persist_pos(state)

   @staticmethod
   def persist_fov(state: bool):
      '''Locks the zoom level after the camera has finished zooming'''
      opcodes.camera_persist_fov(state)

   @staticmethod
   def is_vector_move_running():
      '''Returns true if the camera is moving in position'''
      return opcodes.camera_is_vector_move_running()

   @staticmethod
   def is_vector_track_running():
      '''Returns true if the camera is moving in angle'''
      return opcodes.camera_is_vector_track_running()

   @staticmethod
   def set_vector_move(fromX: float, fromY: float, fromZ: float, toX: float, toY: float, toZ: float, time: int, ease: bool):
      '''Puts the camera at the position of the first passed coordinates and moves it to the second passed coordinates'''
      opcodes.camera_set_vector_move(fromX, fromY, fromZ, toX, toY, toZ, time, ease)

   @staticmethod
   def set_cinema(state: bool):
      '''Locks the camera on cinematic vehicle mode'''
      opcodes.set_cinema_camera(state)

   @staticmethod
   def set_in_front_of_char(handle: Char):
      '''Puts the camera in front of the specified character'''
      opcodes.set_camera_in_front_of_char(handle)

   @staticmethod
   def set_shake_simulation_simple(type: int, timeInMs: float, intensity: float):
      '''Jiggles the camera in a variety of different ways'''
      opcodes.camera_set_shake_simulation_simple(type, timeInMs, intensity)

   @staticmethod
   def set_player_in_car_mode(mode: int):
      '''Changes the camera mode on the current vehicle, just like when the user presses the 'change view' key'''
      opcodes.set_player_in_car_camera_mode(mode)

   @staticmethod
   def allow_fixed_collision(state: bool):
      '''Makes the camera remain behind the player when in any garage'''
      opcodes.allow_fixed_camera_collision(state)

   @staticmethod
   def set_vehicle_tweak(modelId: int, distance: float, altitude: float, angle: float):
      '''Sets the position the camera automatically moves to while driving a vehicle of the specified type'''
      opcodes.set_vehicle_camera_tweak(modelId, distance, altitude, angle)

   @staticmethod
   def reset_vehicle_tweak():
      '''Resets any changes made with 09EF'''
      opcodes.reset_vehicle_camera_tweak()

   @staticmethod
   def set_position_unfixed(xOffset: float, yOffset: float):
      '''Sets the position of the camera to an offset of the targeted entity'''
      opcodes.set_camera_position_unfixed(xOffset, yOffset)

   @staticmethod
   def set_photo_effect(state: bool):
      '''Puts the camera in first-person mode if the player is holding a weapon with a first-person shooting mode (such as a sniper rifle or camera)'''
      opcodes.set_photo_camera_effect(state)

   @staticmethod
   def get_player_in_car_mode() -> int:
      '''Gets the players chosen camera mode of the current vehicle'''
      return opcodes.get_player_in_car_camera_mode()


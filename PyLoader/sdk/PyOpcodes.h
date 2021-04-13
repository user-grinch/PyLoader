#pragma once
#include "../pch.h"
#include <extensions/ScriptCommands.h>
#include <extensions/scripting/ScriptCommandNames.h>

class PyOpcodes
{
private:
    static PyObject* CarGotoCoordinates(PyObject* self, PyObject* args);
    static PyObject* CarSetIdle(PyObject* self, PyObject* args);
    static PyObject* CarWanderRandomly(PyObject* self, PyObject* args);
    static PyObject* ClearPrints(PyObject* self, PyObject* args);
    static PyObject* CreateCar(PyObject* self, PyObject* args);
    static PyObject* CreateChar(PyObject* self, PyObject* args);
    static PyObject* CreateObject(PyObject* self, PyObject* args);
    static PyObject* DeactivateGarage(PyObject* self, PyObject* args);
    static PyObject* DeleteCar(PyObject* self, PyObject* args);
    static PyObject* DeleteChar(PyObject* self, PyObject* args);
    static PyObject* DeleteObject(PyObject* self, PyObject* args);
    static PyObject* DisplayHud(PyObject *self, PyObject *args);
    static PyObject* DisplayOnScreenTimerWithString(PyObject* self, PyObject* args);
    static PyObject* DisplayRadar(PyObject *self, PyObject *args);
    static PyObject* DrawShadow(PyObject* self, PyObject* args);
    static PyObject* GetCarCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetCharCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetMinutesToTimeOfDay(PyObject* self, PyObject* args);
    static PyObject* GetObjectCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetPadState(PyObject* self, PyObject* args);
    static PyObject* GetPlayerChar(PyObject* self, PyObject* args);
    static PyObject* GetRandomCharInZone(PyObject* self, PyObject* args);
    static PyObject* GetTimeOfDay(PyObject* self, PyObject* args);
    static PyObject* HasCharSpottedChar(PyObject* self, PyObject* args);
    static PyObject* HasMissionAudioFinished(PyObject* self, PyObject* args);
    static PyObject* HasMissionAudioLoaded(PyObject* self, PyObject* args);
    static PyObject* IsButtonPressed(PyObject* self, PyObject* args);
    static PyObject* IsCarInArea2d(PyObject* self, PyObject* args);
    static PyObject* IsCarInArea3d(PyObject* self, PyObject* args);
    static PyObject* IsCharInArea2d(PyObject* self, PyObject* args);
    static PyObject* IsCharInArea3d(PyObject* self, PyObject* args);
    static PyObject* IsCharInAnyCar(PyObject* self, PyObject* args);
    static PyObject* IsCharInCar(PyObject* self, PyObject* args);
    static PyObject* IsCharInModel(PyObject* self, PyObject* args);
    static PyObject* IsCharShootingInArea(PyObject* self, PyObject* args);
    static PyObject* IsCharTouchingObject(PyObject* self, PyObject* args);
    static PyObject* IsCharTouchingObjectOnFoot(PyObject* self, PyObject* args);
    static PyObject* IsExplosionInArea(PyObject* self, PyObject* args);
    static PyObject* IsPointOnScreen(PyObject* self, PyObject* args);
    static PyObject* LoadAllModelsNow(PyObject* self, PyObject* args);
    static PyObject* LoadMissionAudio(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeans2d(PyObject* self, PyObject* args);
    static PyObject* LocateCharAnyMeans3d(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCar2d(PyObject* self, PyObject* args);
    static PyObject* LocateCharInCar3d(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFoot2d(PyObject* self, PyObject* args);
    static PyObject* LocateCharOnFoot3d(PyObject* self, PyObject* args);
    static PyObject* MakeObjectTargettable(PyObject* self, PyObject* args);
    static PyObject* MissionHasFinished(PyObject* self, PyObject* args);
    static PyObject* PlayMissionAudio(PyObject* self, PyObject* args);
    static PyObject* Print(PyObject* self, PyObject* args);
    static PyObject* PrintNow(PyObject* self, PyObject* args);
    static PyObject* PrintBig(PyObject* self, PyObject* args);
    static PyObject* PrintBigQ(PyObject* self, PyObject* args);
    static PyObject* PrintBigString(PyObject* self, PyObject* args);
    static PyObject* ReadMemory(PyObject* self, PyObject* args);
    static PyObject* RequestModel(PyObject* self, PyObject* args);
    static PyObject* ShakeCam(PyObject* self, PyObject* args);
    static PyObject* SetCarCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetCarCruiseSpeed(PyObject* self, PyObject* args);
    static PyObject* SetCarDrivingStyle(PyObject* self, PyObject* args);
    static PyObject* SetCarMission(PyObject* self, PyObject* args);
    static PyObject* SetCarVisible(PyObject* self, PyObject* args);
    static PyObject* SetCharAmmo(PyObject* self, PyObject* args);
    static PyObject* SetCharAnimSpeed(PyObject* self, PyObject* args);
    static PyObject* SetCharCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetObjectCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetTextCentreSize(PyObject* self, PyObject* args);
    static PyObject* SetTextFont(PyObject* self, PyObject* args);
    static PyObject* SetTimeOfDay(PyObject* self, PyObject* args);
    static PyObject* ShakePad(PyObject* self, PyObject* args);
    static PyObject* StoreCarCharIsIn(PyObject* self, PyObject* args);
    static PyObject* WriteMemory(PyObject* self, PyObject* args);

    static inline PyMethodDef Methods[] = 
    {
        {"car_goto_coordinates", CarGotoCoordinates, METH_VARARGS},
        {"car_set_idle", CarSetIdle, METH_VARARGS},
        {"car_wander_randomly", CarWanderRandomly, METH_VARARGS},
        {"clear_prints", ClearPrints, METH_VARARGS},
        {"create_car", CreateCar, METH_VARARGS},
        {"create_char", CreateChar, METH_VARARGS},
        {"create_object", CreateObject, METH_VARARGS},
        {"deactivate_garage", DeactivateGarage, METH_VARARGS},
        {"delete_car", DeleteCar, METH_VARARGS},
        {"delete_char", DeleteChar, METH_VARARGS},
        {"delete_object", DeleteObject, METH_VARARGS},
        {"display_hud", DisplayHud, METH_VARARGS},
        {"display_onscreen_timer_with_string", DisplayOnScreenTimerWithString, METH_VARARGS},
        {"display_radar", DisplayRadar, METH_VARARGS},
        {"draw_shadow", DrawShadow, METH_VARARGS},
        {"get_car_coordinates", GetCarCoordinates, METH_VARARGS},
        {"get_char_coordinates", GetCharCoordinates, METH_VARARGS},
        {"get_minutes_to_time_of_day", GetMinutesToTimeOfDay, METH_VARARGS},
        {"get_object_coordinates", GetObjectCoordinates, METH_VARARGS},
        {"get_pad_state", GetPadState, METH_VARARGS},
        {"get_player_char", GetPlayerChar, METH_VARARGS},
        {"get_random_char_in_zone", GetRandomCharInZone, METH_VARARGS},
        {"get_time_of_day", GetTimeOfDay, METH_VARARGS},
        {"has_char_spotted_char", HasCharSpottedChar, METH_VARARGS},
        {"has_mission_audio_finished", HasMissionAudioFinished, METH_VARARGS},
        {"has_mission_audio_loaded", HasMissionAudioLoaded, METH_VARARGS},
        {"is_button_pressed", IsButtonPressed, METH_VARARGS},
        {"is_car_in_area_2d", IsCharInArea2d, METH_VARARGS},
        {"is_car_in_area_3d", IsCharInArea3d, METH_VARARGS},
        {"is_char_in_area_2d", IsCharInArea2d, METH_VARARGS},
        {"is_char_in_area_3d", IsCharInArea3d, METH_VARARGS},
        {"is_char_in_any_car", IsCharInAnyCar, METH_VARARGS},
        {"is_char_in_car", IsCharInCar, METH_VARARGS},
        {"is_char_in_model", IsCharInModel, METH_VARARGS},
        {"is_char_shooting_in_area", IsCharShootingInArea, METH_VARARGS},
        {"is_char_touching_object", IsCharTouchingObject, METH_VARARGS},
        {"is_char_touching_object", IsCharTouchingObjectOnFoot, METH_VARARGS},
        {"is_explosion_in_area", IsExplosionInArea, METH_VARARGS},
        {"is_point_on_screen", IsPointOnScreen, METH_VARARGS},
        {"load_all_models_now", LoadAllModelsNow, METH_VARARGS},
        {"load_mission_audio", LoadMissionAudio, METH_VARARGS},
        {"locate_char_any_means_2d", LocateCharAnyMeans2d, METH_VARARGS},
        {"locate_char_any_means_3d", LocateCharAnyMeans3d, METH_VARARGS},
        {"locate_char_in_car_2d", LocateCharInCar2d, METH_VARARGS},
        {"locate_char_in_car_3d", LocateCharInCar3d, METH_VARARGS},
        {"locate_char_on_foot_2d", LocateCharOnFoot2d, METH_VARARGS},
        {"locate_char_on_foot_3d", LocateCharOnFoot3d, METH_VARARGS},
        {"make_object_targettable", MakeObjectTargettable, METH_VARARGS},
        {"mission_has_finished", MissionHasFinished, METH_VARARGS},
        {"play_mission_audio", PlayMissionAudio, METH_VARARGS},
        {"print", Print, METH_VARARGS},
        {"print_now", PrintNow, METH_VARARGS},
        {"print_big", PrintBig, METH_VARARGS},
        {"print_big_q", PrintBigQ, METH_VARARGS},
        {"print_big_string", PrintBigString, METH_VARARGS},
        {"read_memory", ReadMemory, METH_VARARGS},
        {"request_model", RequestModel, METH_VARARGS},
        {"shake_cam", ShakeCam, METH_VARARGS},
        {"set_car_coordinates", GetCarCoordinates, METH_VARARGS},
        {"set_car_cruise_speed", SetCarCruiseSpeed, METH_VARARGS},
        {"set_car_driving_style", SetCarDrivingStyle, METH_VARARGS},
        {"set_car_mission", SetCarMission, METH_VARARGS},
        {"set_car_visible", SetCarVisible, METH_VARARGS},
        {"set_char_ammo", SetCharAmmo, METH_VARARGS},
        {"set_char_anim_speed", SetCharAnimSpeed, METH_VARARGS},
        {"set_char_coordinates", SetCharCoordinates, METH_VARARGS},
        {"set_object_coordinates", SetObjectCoordinates, METH_VARARGS},
        {"set_text_centre_size", SetTextCentreSize, METH_VARARGS},
        {"set_text_font", SetTextFont, METH_VARARGS},
        {"set_time_of_day", SetTimeOfDay, METH_VARARGS},
        {"store_car_char_is_in", StoreCarCharIsIn, METH_VARARGS},
        {"shake_pad", ShakePad, METH_VARARGS},
        {"write_memory", WriteMemory, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = {PyModuleDef_HEAD_INIT, "opcode", NULL, -1, Methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyOpcodes() = delete;
    PyOpcodes(PyOpcodes&) = delete;
};


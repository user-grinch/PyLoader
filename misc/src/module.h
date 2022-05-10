#pragma once
#include "Python.h"
#define MODULE_NAME "Misc"

class Module
{
private:
    static PyObject* GetCarHandle(PyObject* self, PyObject* args);
    static PyObject* GetCarPointer(PyObject* self, PyObject* args);
    static PyObject* GetCharHandle(PyObject* self, PyObject* args);
    static PyObject* GetCharPointer(PyObject* self, PyObject* args);
    static PyObject* GetClosestPed(PyObject* self, PyObject* args);
    static PyObject* GetClosestVehicle(PyObject* self, PyObject* args);
    static PyObject* GetObjectHandle(PyObject* self, PyObject* args);
    static PyObject* GetObjectPointer(PyObject* self, PyObject* args);
    static PyObject* GetPlayerTargetedChar(PyObject* self, PyObject* args);
    static PyObject* GetTargetMarkerCoords(PyObject* self, PyObject* args);
    static PyObject* GetVehicleCurrentGear(PyObject* self, PyObject* args);
    static PyObject* GetVehicleNumberOfGears(PyObject* self, PyObject* args);
    static PyObject* IsOnCutscene(PyObject* self, PyObject* args);
    static PyObject* IsOnMission(PyObject* self, PyObject* args);
    static PyObject* IsVehicleEngineOn(PyObject* self, PyObject* args);
    static PyObject* IsVehicleSirenOn(PyObject* self, PyObject* args);
    static PyObject* GetLargestGangIdInZone(PyObject* self, PyObject* args);
    static PyObject* GetVehicleModelFromName(PyObject* self, PyObject* args);
    static PyObject* GetVehicleModelName(PyObject* self, PyObject* args);
    static PyObject* SetVehicleEngineState(PyObject* self, PyObject* args);
    static PyObject* KeyPressed(PyObject *self, PyObject *args);
    static PyObject* TestCheat(PyObject* self, PyObject* args);

public:
    static inline PyMethodDef methods[] = 
    {
        {"get_car_handle", GetCarHandle, METH_VARARGS},
        {"get_car_pointer", GetCarPointer, METH_VARARGS},
        {"get_char_handle", GetCharHandle, METH_VARARGS},
        {"get_char_pointer", GetCharPointer, METH_VARARGS},
        {"get_closest_ped", GetClosestPed, METH_VARARGS},
        {"get_closest_car", GetClosestVehicle, METH_VARARGS},
        {"get_obj_handle", GetObjectHandle, METH_VARARGS},
        {"get_obj_pointer", GetObjectPointer, METH_VARARGS},
        {"get_player_targeted_char", GetPlayerTargetedChar, METH_VARARGS},
        {"get_target_marker_coords", GetTargetMarkerCoords, METH_VARARGS},
        {"get_car_current_gear", GetVehicleCurrentGear, METH_VARARGS},
        {"get_car_total_gear", GetVehicleNumberOfGears, METH_VARARGS},
        {"is_on_cutscene", IsOnCutscene, METH_VARARGS},
        {"is_on_mission", IsOnMission, METH_VARARGS},
        {"is_car_engine_on", IsVehicleEngineOn, METH_VARARGS},
        {"is_car_siren_on", IsVehicleSirenOn, METH_VARARGS},
        {"get_largest_gangid", GetLargestGangIdInZone, METH_VARARGS},
        {"get_car_model_from_name", GetVehicleModelFromName, METH_VARARGS},
        {"get_car_model_name", GetVehicleModelName, METH_VARARGS},
        {"set_car_engine_state", SetVehicleEngineState, METH_VARARGS},
        {"key_pressed", KeyPressed, METH_VARARGS},
        {"test_cheat", TestCheat, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef module = {PyModuleDef_HEAD_INIT, MODULE_NAME, NULL, -1, methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* init()
    {
        PyObject* m = PyModule_Create(&module);
        return m;
    }
    Module() = delete;
    Module(Module&) = delete;
};
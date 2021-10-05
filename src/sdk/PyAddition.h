#pragma once
#include "../pch.h"
#include <extensions/ScriptCommands.h>
#include <extensions/scripting/ScriptCommandNames.h>

class PyAddition
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

    static inline PyMethodDef Methods[] =
    {
        {"get_car_handle", GetCarHandle, METH_VARARGS},
        {"get_car_pointer", GetCarPointer, METH_VARARGS},
        {"get_char_handle", GetCharHandle, METH_VARARGS},
        {"get_char_pointer", GetCharPointer, METH_VARARGS},
        {"get_closest_ped", GetClosestPed, METH_VARARGS},
        {"get_closest_vehicle", GetClosestVehicle, METH_VARARGS},
        {"get_object_handle", GetObjectHandle, METH_VARARGS},
        {"get_object_pointer", GetObjectPointer, METH_VARARGS},
        {"get_player_targeted_char", GetPlayerTargetedChar, METH_VARARGS},
        {"get_target_marker_coords", GetTargetMarkerCoords, METH_VARARGS},
        {"get_vehicle_current_gear", GetVehicleCurrentGear, METH_VARARGS},
        {"get_vehicle_model_from_name", GetVehicleModelFromName, METH_VARARGS},
        {"get_vehicle_model_name", GetVehicleModelName, METH_VARARGS},
        {"get_vehicle_number_of_gears", GetVehicleNumberOfGears, METH_VARARGS},
        {"is_on_cutscene", IsOnCutscene, METH_VARARGS},
        {"is_on_mission", IsOnMission, METH_VARARGS},
        {"is_vehicle_engine_on", IsVehicleEngineOn, METH_VARARGS},
        {"is_vehicle_siren_on", IsVehicleSirenOn, METH_VARARGS},
        {"get_largest_gangid_in_zone", GetLargestGangIdInZone, METH_VARARGS},
        {"set_vehicle_engine_state", SetVehicleEngineState, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = { PyModuleDef_HEAD_INIT, "cleo", NULL, -1, Methods, NULL, NULL, NULL, NULL };


public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyAddition() = delete;
    PyAddition(PyAddition&) = delete;
};


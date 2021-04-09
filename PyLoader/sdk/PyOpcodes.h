#pragma once
#include "../pch.h"
#include <extensions/ScriptCommands.h>
#include <extensions/scripting/ScriptCommandNames.h>

class PyOpcodes
{
private:
    static PyObject* CreateCar(PyObject* self, PyObject* args);
    static PyObject* CreateChar(PyObject* self, PyObject* args);
    static PyObject* CreateObject(PyObject* self, PyObject* args);
    static PyObject* DisplayHud(PyObject *self, PyObject *args);
    static PyObject* DisplayRadar(PyObject *self, PyObject *args);
    static PyObject* GetCarCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetCharCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetObjectCoordinates(PyObject* self, PyObject* args);
    static PyObject* GetPlayerChar(PyObject* self, PyObject* args);
    static PyObject* LoadAllModelsNow(PyObject* self, PyObject* args);
    static PyObject* ReadMemory(PyObject* self, PyObject* args);
    static PyObject* RequestModel(PyObject* self, PyObject* args);
    static PyObject* SetCarCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetCharCoordinates(PyObject* self, PyObject* args);
    static PyObject* SetObjectCoordinates(PyObject* self, PyObject* args);
    static PyObject* ShakeCam(PyObject* self, PyObject* args);
    static PyObject* WriteMemory(PyObject* self, PyObject* args);

    static inline PyMethodDef Methods[] = 
    {
        {"create_car", CreateCar, METH_VARARGS},
        {"create_char", CreateChar, METH_VARARGS},
        {"create_object", CreateObject, METH_VARARGS},
        {"get_car_coordinates", GetCarCoordinates, METH_VARARGS},
        {"get_char_coordinates", GetCharCoordinates, METH_VARARGS},
        {"get_object_coordinates", GetObjectCoordinates, METH_VARARGS},
        {"get_player_char", GetPlayerChar, METH_VARARGS},
        {"display_hud", DisplayHud, METH_VARARGS},
        {"display_radar", DisplayRadar, METH_VARARGS},
        {"load_all_models_now", LoadAllModelsNow, METH_VARARGS},
        {"read_memory", ReadMemory, METH_VARARGS},
        {"request_model", RequestModel, METH_VARARGS},
        {"set_car_coordinates", GetCarCoordinates, METH_VARARGS},
        {"set_char_coordinates", GetCharCoordinates, METH_VARARGS},
        {"set_object_coordinates", GetObjectCoordinates, METH_VARARGS},
        {"shake_cam", ShakeCam, METH_VARARGS},
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

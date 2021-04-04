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
    static PyObject* LoadAllModelsNow(PyObject* self, PyObject* args);
    static PyObject* RequestModel(PyObject* self, PyObject* args);

    static inline PyMethodDef Methods[] = 
    {
        {"create_car", CreateCar, METH_VARARGS,"Create a car at the specified coordinates"},
        {"create_char", CreateChar, METH_VARARGS,"Create a char at the specified coordinates"},
        {"create_object", CreateObject, METH_VARARGS,"Create a object at the specified coordinates"},
        {"display_hud", DisplayHud, METH_VARARGS,"Toggle hud"},
        {"display_radar", DisplayRadar, METH_VARARGS,"Toggle radar"},
        {"load_all_models_now", LoadAllModelsNow, METH_VARARGS,"Toggle radar"},
        {"request_model", RequestModel, METH_VARARGS,"Toggle radar"},
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

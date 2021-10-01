#pragma once
#include "../pch.h"
#include <extensions/ScriptCommands.h>
#include <extensions/scripting/ScriptCommandNames.h>

class PyPool
{
private:
    static PyObject* GetPedPool(PyObject* self, PyObject* args);
    static PyObject* GetBuildingPool(PyObject* self, PyObject* args);
    static PyObject* GetObjectPool(PyObject* self, PyObject* args);
    static PyObject* GetScriptPool(PyObject* self, PyObject* args);
    static PyObject* GetVehPool(PyObject* self, PyObject* args);

    static inline PyMethodDef Methods[] =
    {
        {"get_building_pool", GetBuildingPool, METH_VARARGS},
        {"get_obj_pool", GetObjectPool, METH_VARARGS},
        {"get_ped_pool", GetPedPool, METH_VARARGS},
        {"get_script_pool", GetScriptPool, METH_VARARGS},
        {"get_veh_pool", GetVehPool, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = { PyModuleDef_HEAD_INIT, "_pool", NULL, -1, Methods, NULL, NULL, NULL, NULL };


public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyPool() = delete;
    PyPool(PyPool&) = delete;
};

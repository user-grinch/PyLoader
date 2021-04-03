#pragma once
#include "../pch.h"
#include <extensions/ScriptCommands.h>
#include <extensions/scripting/ScriptCommandNames.h>

class PyOpcodes
{
private:
    static PyObject* DisplayHud(PyObject *self, PyObject *args);
    static PyObject* DisplayRadar(PyObject *self, PyObject *args);
    static inline PyMethodDef Methods[] = 
    {
        {"display_hud", DisplayHud, METH_VARARGS,"Toggle hud"},{0,0,0,0},
        {"display_radar", DisplayRadar, METH_VARARGS,"Toggle radar"},{0,0,0,0},
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

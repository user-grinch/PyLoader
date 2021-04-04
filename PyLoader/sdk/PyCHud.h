#pragma once
#include "../pch.h"

class PyCHud
{
private:
    static PyObject* SetHelpMessage(PyObject *self, PyObject *args);
    static PyObject* SetMessage(PyObject *self, PyObject *args);
    static inline PyMethodDef Methods[] = 
    {
        {"set_help_message", SetHelpMessage, METH_VARARGS,"Shows a help message with given string"},{}
    };
    static inline PyModuleDef Module = {PyModuleDef_HEAD_INIT, "hud", NULL, -1, Methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyCHud() = delete;
    PyCHud(PyCHud&) = delete;
};

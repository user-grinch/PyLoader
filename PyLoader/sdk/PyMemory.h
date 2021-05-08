#pragma once
#include "../pch.h"

class PyMemory
{
private:
    static PyObject* ReadFloat(PyObject* self, PyObject* args);
    static PyObject* WriteFloat(PyObject* self, PyObject* args);
    static PyObject* ReadMemory(PyObject *self, PyObject *args);
    static PyObject* WriteMemory(PyObject *self, PyObject *args);
    static inline PyMethodDef Methods[] = 
    {
        {"read_float", ReadFloat, METH_VARARGS},
        {"write_float", WriteFloat, METH_VARARGS},
        {"read_memory", ReadMemory, METH_VARARGS},
        {"write_memory", WriteMemory, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = {PyModuleDef_HEAD_INIT, "memory", NULL, -1, Methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyMemory() = delete;
    PyMemory(PyMemory&) = delete;
};

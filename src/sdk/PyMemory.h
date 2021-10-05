#pragma once
#include "../pch.h"

class PyMemory
{
private:
    static PyObject* _FreeLibrary(PyObject* self, PyObject* args);
    static PyObject* _GetProcAddress(PyObject* self, PyObject* args);
    static PyObject* _LoadLibrary(PyObject* self, PyObject* args);
    static PyObject* CallFunction(PyObject* self, PyObject* args);
    static PyObject* CallMethod(PyObject* self, PyObject* args);
    static PyObject* GetRaw(PyObject* self, PyObject* args);
    static PyObject* Nop(PyObject* self, PyObject* args);
    static PyObject* PutRetn(PyObject* self, PyObject* args);
    static PyObject* ReadFloat(PyObject* self, PyObject* args);
    static PyObject* ReadMemory(PyObject *self, PyObject *args);
    static PyObject* SetRaw(PyObject* self, PyObject* args);
    static PyObject* WriteFloat(PyObject* self, PyObject* args);
    static PyObject* WriteMemory(PyObject *self, PyObject *args);

    static inline PyMethodDef Methods[] = 
    {
        {"free_library", _FreeLibrary, METH_VARARGS},
        {"get_proc_address", _GetProcAddress, METH_VARARGS},
        {"load_library", _LoadLibrary, METH_VARARGS},
        {"call_function", CallFunction, METH_VARARGS},
        {"call_method", CallMethod, METH_VARARGS},
        {"get_raw", GetRaw, METH_VARARGS},
        {"nop", Nop, METH_VARARGS},
        {"put_retn", PutRetn, METH_VARARGS},
        {"read_float", ReadFloat, METH_VARARGS},
        {"read_memory", ReadMemory, METH_VARARGS},
        {"set_raw", SetRaw, METH_VARARGS},
        {"write_float", WriteFloat, METH_VARARGS},
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

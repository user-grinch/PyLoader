#pragma once
#pragma once
#include "../pch.h"

class PyCommon
{
private:
    static PyObject* KeyPressed(PyObject *self, PyObject *args);
    static inline PyMethodDef Methods[] = 
    {
        {"key_pressed", KeyPressed, METH_VARARGS,"Is a specific key pressed"},{}
    };
    static inline PyModuleDef Module = {PyModuleDef_HEAD_INIT, "common", NULL, -1, Methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyCommon() = delete;
    PyCommon(PyCommon&) = delete;
};

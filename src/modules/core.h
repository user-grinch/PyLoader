#pragma once
#include "../pch.h"

/*
    PyLoader Core plugin
    Contains the core functionality of PyLoader
    These can't be exposed using the usual plugin system
*/
class Core
{
private:
    static PyObject* flush_stream(PyObject* self, PyObject* args);
    static PyObject* write_stream(PyObject* self, PyObject* args);
    static PyObject* wait(PyObject* self, PyObject* args);
    static PyObject* call_opcode(PyObject* self, PyObject* args);

    static inline PyMethodDef methods[] = 
    {
        {"flush", flush_stream, METH_VARARGS},
        {"write", write_stream, METH_VARARGS},
        {"wait", wait, METH_VARARGS},
        {"op", call_opcode, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef module = {PyModuleDef_HEAD_INIT, "", NULL, -1, methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* init(void)
    {
        PyObject* m = PyModule_Create(&module);

        // redirect stdout, stderr to log
        PySys_SetObject("stdout", m);
        PySys_SetObject("stderr", m);
        
        return m;
    }

    Core() = delete;
    Core(Core&) = delete;
};
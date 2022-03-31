#pragma once
#include "../pch.h"


// Redirects stdout and stderr to the log
class Core
{
private:
    static PyObject* flush_stream(PyObject* self, PyObject* args);
    static PyObject* write_stream(PyObject* self, PyObject* args);
    static PyObject* wait(PyObject* self, PyObject* args);

    static inline PyMethodDef methods[] = 
    {
        {"flush", flush_stream, METH_VARARGS},
        {"write", write_stream, METH_VARARGS},
        {"wait", wait, METH_VARARGS},
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
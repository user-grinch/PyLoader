#pragma once
#include "../pch.h"


// Redirects stdout and stderr to the log
class IOStream
{
private:
    static PyObject* FlushStream(PyObject* self, PyObject* args);
    static PyObject* WriteStream(PyObject* self, PyObject* args);
   
    static inline PyMethodDef Methods[] = 
    {
        {"flush", FlushStream, METH_VARARGS},
        {"write", WriteStream, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = {PyModuleDef_HEAD_INIT, "", NULL, -1, Methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* Init(void)
    {
        PyObject* m = PyModule_Create(&Module);

        // redirect stdout, stderr to log
        PySys_SetObject("stdout", m);
        PySys_SetObject("stderr", m);
        
        return m;
    }

    IOStream() = delete;
    IOStream(IOStream&) = delete;
};
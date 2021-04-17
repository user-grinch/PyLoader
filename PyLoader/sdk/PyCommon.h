#pragma once
#pragma once
#include "../pch.h"

class PyCommon
{
private:
    static PyObject* GetPyLoaderVersion(PyObject* self, PyObject* args);
    static PyObject* GetGameDir(PyObject* self, PyObject* args);
    static PyObject* GetWorkingDir(PyObject* self, PyObject* args);
    static PyObject* KeyPressed(PyObject *self, PyObject *args);
    static PyObject* WriteStream(PyObject* self, PyObject* args);
    static PyObject* FlushStream(PyObject* self, PyObject* args);
   
    static inline PyMethodDef Methods[] = 
    {
        {"get_pyloader_version", GetPyLoaderVersion, METH_VARARGS},
        {"get_game_dir", GetGameDir, METH_VARARGS},
        {"get_working_dir", GetWorkingDir, METH_VARARGS},
        {"flush", FlushStream, METH_VARARGS},
        {"key_pressed", KeyPressed, METH_VARARGS},
        {"write", WriteStream, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = {PyModuleDef_HEAD_INIT, "common", NULL, -1, Methods, NULL, NULL, NULL, NULL};

public:
    static PyObject* Init(void)
    {
        PyObject* m = PyModule_Create(&Module);

        // redirect stdout, stderr to log
        PySys_SetObject("stdout", m);
        PySys_SetObject("stderr", m);

        return m;
    }

    PyCommon() = delete;
    PyCommon(PyCommon&) = delete;
};

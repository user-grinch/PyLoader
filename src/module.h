#pragma once
#include "pch.h"

/*
    PyLoader Core plugin
    Contains the core functionality of PyLoader
    These can't be exposed using the usual plugin system
*/
class Core
{
public:
    static PyObject* flush_stream(PyObject* self, PyObject* args);
    static PyObject* write_stream(PyObject* self, PyObject* args);
    static PyObject* wait(PyObject* self, PyObject* args);
    static PyObject* call_opcode(PyObject* self, PyObject* args);
    static PyObject* get_pyloader_ver(PyObject* self, PyObject* args);
    static PyObject* get_game_dir(PyObject* self, PyObject* args);
    static PyObject* get_working_dir(PyObject* self, PyObject* args);
    static PyObject* key_pressed(PyObject *self, PyObject *args);
    static PyObject* test_cheat(PyObject* self, PyObject* args);

    static inline PyMethodDef methods[] = 
    {
        {"flush", flush_stream, METH_VARARGS},
        {"write", write_stream, METH_VARARGS},
        {"wait", wait, METH_VARARGS},
        {"op", call_opcode, METH_VARARGS},
        {"get_pyloader_ver", get_pyloader_ver, METH_VARARGS},
        {"get_game_dir", get_game_dir, METH_VARARGS},
        {"get_working_dir", get_working_dir, METH_VARARGS},
        {"key_pressed", key_pressed, METH_VARARGS},
        {"test_cheat", test_cheat, METH_VARARGS},
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
#pragma once
#include "Python.h"
#define MODULE_NAME "Memory"

class Module
{
private:
  static PyObject* _free_library(PyObject* self, PyObject* args);
  static PyObject* _get_proc_address(PyObject* self, PyObject* args);
  static PyObject* _load_library(PyObject* self, PyObject* args);
  static PyObject* call_function(PyObject* self, PyObject* args);
  static PyObject* call_method(PyObject* self, PyObject* args);
  static PyObject* get_raw(PyObject* self, PyObject* args);
  static PyObject* nop(PyObject* self, PyObject* args);
  static PyObject* put_retn(PyObject* self, PyObject* args);
  static PyObject* read_float(PyObject* self, PyObject* args);
  static PyObject* read_memory(PyObject* self, PyObject* args);
  static PyObject* set_raw(PyObject* self, PyObject* args);
  static PyObject* write_float(PyObject* self, PyObject* args);
  static PyObject* write_memory(PyObject* self, PyObject* args);

public:
    static inline PyMethodDef methods[] = 
    {
        {"free_library", _free_library, METH_VARARGS},
        {"get_proc_address", _get_proc_address, METH_VARARGS},
        {"load_library", _load_library, METH_VARARGS},
        {"call_function", call_function, METH_VARARGS},
        {"call_method", call_method, METH_VARARGS},
        {"get_raw", get_raw, METH_VARARGS},
        {"nop", nop, METH_VARARGS},
        {"put_retn", put_retn, METH_VARARGS},
        {"read", read_float, METH_VARARGS},
        {"read_memory", read_memory, METH_VARARGS},
        {"set_raw", set_raw, METH_VARARGS},
        {"write_float", write_float, METH_VARARGS},
        {"write", write_memory, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef module = {PyModuleDef_HEAD_INIT, MODULE_NAME, NULL, -1, methods, NULL, NULL, NULL, NULL};

public:

    static PyObject* init()
    {
        PyObject* m = PyModule_Create(&module);
        return m;
    }
    Module() = delete;
    Module(Module&) = delete;
};
#pragma once
#include "../pch.h"

class PyScript
{
private:
    static PyObject* GetAuthor(PyObject* self, PyObject* args);
    static PyObject* SetAuthor(PyObject* self, PyObject* args);
    static PyObject* GetDesc(PyObject* self, PyObject* args);
    static PyObject* SetDesc(PyObject* self, PyObject* args);
    static PyObject* GetName(PyObject* self, PyObject* args);
    static PyObject* SetName(PyObject* self, PyObject* args);
    static PyObject* GetVersion(PyObject* self, PyObject* args);
    static PyObject* SetVersion(PyObject* self, PyObject* args);
    static inline PyMethodDef Methods[] =
    {
        {"get_author", GetAuthor, METH_VARARGS},
        {"author", SetAuthor, METH_VARARGS},
        {"get_desc", GetDesc, METH_VARARGS},
        {"desc", SetDesc, METH_VARARGS},
        {"get_name", GetName, METH_VARARGS},
        {"name", SetName, METH_VARARGS},
        {"get_version", GetVersion, METH_VARARGS},
        {"version", SetVersion, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = { PyModuleDef_HEAD_INIT, "script", NULL, -1, Methods, NULL, NULL, NULL, NULL };

public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyScript() = delete;
    PyScript(PyScript&) = delete;
};

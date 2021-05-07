#pragma once
#include "../pch.h"
#include <extensions/ScriptCommands.h>
#include <extensions/scripting/ScriptCommandNames.h>

class PyEvents
{
private:
    static PyObject* ProcessScriptsEvent(PyObject* self, PyObject* args);

    static inline PyMethodDef Methods[] =
    {
        {"process_scripts_event", ProcessScriptsEvent, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = { PyModuleDef_HEAD_INIT, "game_events", NULL, -1, Methods, NULL, NULL, NULL, NULL };


public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyEvents() = delete;
    PyEvents(PyEvents&) = delete;
};



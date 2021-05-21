#include "PyEvents.h"
#include "pch.h"

void PyEvents::InitAllEvents()
{
    PyEvents::vehCreateEvent.Init();
    PyEvents::vehRenderEvent.Init();
    PyEvents::vehDestroyEvent.Init();
    PyEvents::pedCreateEvent.Init();
    PyEvents::pedRenderEvent.Init();
    PyEvents::pedDestroyEvent.Init();
    PyEvents::objCreateEvent.Init();
    PyEvents::objRenderEvent.Init();
    PyEvents::objDestroyEvent.Init();
}

bool PyEvents::ScriptTerminate(PyObject* pModule)
{
    bool error_state = false;
    if (PyErr_Occurred())
    {
        error_state = true;
        PyErr_Print();
    }

    PyErr_Clear();

    PyObject* pTerminateFunc = PyObject_GetAttrString(pModule, "on_script_terminate");
    if (pTerminateFunc && PyCallable_Check(pTerminateFunc))
    {
        PyObject_CallFunction(pTerminateFunc, "i", error_state);
        return false;
    }

    return true;
}


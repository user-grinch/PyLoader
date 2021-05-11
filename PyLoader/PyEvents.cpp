#include "PyEvents.h"

void PyEvents::ScriptTerminate(PyObject* pModule)
{
    bool error_state = false;
    if (PyErr_Occurred())
    {
        error_state = true;
        PyErr_Print();
    }

    PyObject* pTerminateFunc = PyObject_GetAttrString(pModule, "on_script_terminate");

    if (pTerminateFunc && PyCallable_Check(pTerminateFunc))
    {
        PyObject* pArgs = PyTuple_New(1);
        PyTuple_SetItem(pArgs, 0, PyLong_FromLong(error_state));

        PyObject_CallObject(pTerminateFunc, pArgs);
    }
}


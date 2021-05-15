#include "PyEvents.h"
#include "pch.h"

void PyEvents::VehicleCreate(PyObject* pModule)
{
    PyObject* pFunc = PyObject_GetAttrString(pModule, "on_veh_create");

    plugin::Events::vehicleCtorEvent += [pFunc](CVehicle* pVeh)
    {
        if (pFunc && PyCallable_Check(pFunc))
        {
            PyObject* pArgs = PyTuple_New(1);
            PyGILState_STATE gstate = PyGILState_Ensure();
            flog << pVeh << std::endl;
            flog << CPools::GetVehicleRef(pVeh) << std::endl;
            PyObject_CallFunction(pFunc, "i", CPools::GetVehicleRef(pVeh));
            PyGILState_Release(gstate);
        }
    };
   
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


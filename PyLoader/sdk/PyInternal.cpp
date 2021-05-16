#include "PyInternal.h"
#include "CPools.h"
#include "../ScriptData.hpp"

PyObject* PyInternal::GetScriptPool(PyObject* self, PyObject* args)
{
    size_t size = ScriptData::scripts->size();
    PyObject* list = PyList_New(size);
    size_t index = 0;
    for (auto it = ScriptData::scripts->begin(); it != ScriptData::scripts->end(); ++it)
    {
        PyList_SetItem(list, index, Py_BuildValue("s", (*it)->file_name.c_str()));
        ++index;
    }

    return list;
}

PyObject* PyInternal::GetVehPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CVehicle* pVeh : CPools::ms_pVehiclePool)
        ++size;

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CVehicle* pVeh : CPools::ms_pVehiclePool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", CPools::GetVehicleRef(pVeh)));
        ++index;
    }

    return list;
}

PyObject* PyInternal::GetPedPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CPed* ele : CPools::ms_pPedPool)
        ++size;

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CPed* ele : CPools::ms_pPedPool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", CPools::GetPedRef(ele)));
        ++index;
    }

    return list;
}

PyObject* PyInternal::GetBuildingPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CBuilding* ele : CPools::ms_pBuildingPool)
        ++size;

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CBuilding* ele : CPools::ms_pBuildingPool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", ele));
        ++index;
    }

    return list;
}

PyObject* PyInternal::GetObjectPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CObject* ele : CPools::ms_pObjectPool)
        ++size;

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CObject* ele : CPools::ms_pObjectPool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", CPools::GetObjectRef(ele)));
        ++index;
    }

    return list;
}
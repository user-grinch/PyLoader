#include "PyMemory.h"

PyObject* PyMemory::ReadMemory(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int val = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "iii", &addr, &size, &vp))
        return Py_False;

    switch (size)
    {
    case 2:
    {
        val = plugin::patch::Get<short>(addr, vp);
        break;
    }
    case 4:
    {
        val = plugin::patch::Get<int>(addr, vp);
        break;
    }
    default:
        plugin::patch::GetRaw(addr, &val, size, vp);
    }

    return Py_BuildValue("i", val);
}

PyObject* PyMemory::WriteMemory(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int val = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "iiii", &addr, &size, &val, &vp))
        return Py_False;

    switch (size)
    {
    case 2:
    {
        plugin::patch::Set<short>(addr, val, vp);
        break;
    }
    case 4:
    {
        plugin::patch::Set<int>(addr, val, vp);
        break;
    }
    default:
        plugin::patch::SetRaw(addr, &val, size, vp);
    }

    return Py_True;
}
#include "PyMemory.h"

PyObject* PyMemory::ReadMemory(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int val = NULL;
    int vp = NULL;
    int is_float = NULL;

    if (!PyArg_ParseTuple(args, "iiii", &addr, &size, &vp, &is_float))
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
        if (is_float)
            val = plugin::patch::Get<float>(addr, vp);
        else
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
    int is_float = NULL;

    if (!PyArg_ParseTuple(args, "iiiii", &addr, &size, &val, &vp, &is_float))
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
        if (is_float)
            plugin::patch::Set<float>(addr, val, vp);
        else
            plugin::patch::Set<int>(addr, val, vp);
        break;
    }
    default:
        plugin::patch::SetRaw(addr, &val, size, vp);
    }

    return Py_True;
}
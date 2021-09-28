#include "PyMemory.h"

PyObject* PyMemory::ReadMemory(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int vp = NULL;
    int val = NULL;

    if (!PyArg_ParseTuple(args, "iii", &addr, &size, &vp))
    {
        return PyBool_FromLong(0);
    }

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
    {
        plugin::patch::GetRaw(addr, &val, size, vp);
    }
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
    {
        return PyBool_FromLong(0);
    }


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
    {
        plugin::patch::SetRaw(addr, &val, size, vp);
    }
    }

    return PyBool_FromLong(1);
}

PyObject* PyMemory::ReadFloat(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int vp = NULL;
    float val = NULL;

    if (!PyArg_ParseTuple(args, "ii", &addr, &vp))
    {
        return PyBool_FromLong(0);
    }

    val = plugin::patch::Get<float>(addr, vp);

    return Py_BuildValue("f", val);
}

PyObject* PyMemory::WriteFloat(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    float val = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "iifi", &addr, &size, &val, &vp))
    {
        return PyBool_FromLong(0);
    }

    plugin::patch::Set<float>(addr, val, vp);

    return PyBool_FromLong(1);
}

PyObject* PyMemory::Nop(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "iii", &addr, &size, &vp))
    {
        return PyBool_FromLong(0);
    }

    plugin::patch::Nop(addr, size, vp);

    return PyBool_FromLong(1);
}

PyObject* PyMemory::PutRetn(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int pop_bytes = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "iiii", &addr, &size, &pop_bytes, &vp))
    {
        return PyBool_FromLong(0);
    }

    plugin::patch::PutRetn(addr, pop_bytes, vp);

    return PyBool_FromLong(1);
}

PyObject* PyMemory::GetRaw(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int vp = NULL;
    char* data = nullptr;

    if (!PyArg_ParseTuple(args, "iiii", &addr, &size, &vp))
    {
        return PyBool_FromLong(0);
    }

    plugin::patch::GetRaw(addr, data, size, vp);

    return Py_BuildValue("s", data);
}

PyObject* PyMemory::SetRaw(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    char* data = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "isii", &addr, &data , &size, &vp))
    {
        return PyBool_FromLong(0);
    }
        

    plugin::patch::SetRaw(addr, data, size, vp);

    return PyBool_FromLong(1);
}


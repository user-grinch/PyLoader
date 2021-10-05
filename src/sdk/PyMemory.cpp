#include "PyMemory.h"

PyObject* PyMemory::_LoadLibrary(PyObject* self, PyObject* args)
{
	char* str;

	if (!PyArg_ParseTuple(args, "s", &str))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", LoadLibrary(str));
}

PyObject* PyMemory::_FreeLibrary(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	FreeLibrary((HMODULE)handle);
	return Py_BuildValue("i", 1);
}

PyObject* PyMemory::_GetProcAddress(PyObject* self, PyObject* args)
{
	int handle;
	char* str;

	if (!PyArg_ParseTuple(args, "i", &handle, &str))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", GetProcAddress((HMODULE)handle, str));
}

PyObject* PyMemory::CallFunction(PyObject* self, PyObject* args)
{
	int addr = NULL;
	size_t num_param = NULL, stack_pop = NULL;

	PyObject* ptemp = PyTuple_GetItem(args, 0);
	addr = PyLong_AsUnsignedLong(PyNumber_Long(ptemp));
	ptemp = PyTuple_GetItem(args, 1);
	num_param = PyLong_AsUnsignedLong(PyNumber_Long(ptemp));
	ptemp = PyTuple_GetItem(args, 2);
	stack_pop = PyLong_AsUnsignedLong(PyNumber_Long(ptemp))*4;

	void *pArr = malloc(num_param*4);
	int param_start = int(pArr);
	int param_end = param_start + num_param * 0x4;

	for (size_t i = 0; i < num_param; i++)
	{
		size_t index = i + 3; // addr, count, pop

		ptemp = PyTuple_GetItem(args, index);
		if (ptemp)
		{
			if (PyNumber_Check(ptemp))
			{
				if (PyFloat_Check(ptemp))
				{
					float val = PyFloat_AsDouble(PyNumber_Float(ptemp));
					memcpy((void*)(int(pArr) + i*4), &val, 4);
				}
				else
				{
					int val = PyLong_AsLong(PyNumber_Long(ptemp));
					memcpy((void*)(int(pArr) + i*4), &val, 4);
				}
			}
			else
			{
				char *val = PyBytes_AsString(PyUnicode_AsUTF8String(ptemp));
				memcpy((void*)(int(pArr) + i*4), &val, 4);
			}
		}
	}

	DWORD result = 0;

	// Flipping argument order to preserve left to right
	// CLEO
	_asm
	{
		mov ecx, param_end
		loop_ :
		cmp ecx, param_start
			jbe loop_end
			sub ecx, 0x4
			push [ecx]
			jmp loop_
			loop_end :
		call addr
			mov result, eax
			add esp, stack_pop
	}

	delete[] pArr;

	return Py_BuildValue("i", result);
}

PyObject* PyMemory::CallMethod(PyObject* self, PyObject* args)
{
	int addr = NULL;
	size_t num_param = NULL, stack_pop = NULL, struc = NULL;

	PyObject* ptemp = PyTuple_GetItem(args, 0);
	addr = PyLong_AsUnsignedLong(PyNumber_Long(ptemp));
	ptemp = PyTuple_GetItem(args, 1);
	struc = PyLong_AsUnsignedLong(PyNumber_Long(ptemp));
	ptemp = PyTuple_GetItem(args, 2);
	num_param = PyLong_AsUnsignedLong(PyNumber_Long(ptemp));
	ptemp = PyTuple_GetItem(args, 3);
	stack_pop = PyLong_AsUnsignedLong(PyNumber_Long(ptemp)) * 0x4;

	void *pArr = malloc(num_param*4);
	int param_start = int(pArr);
	int param_end = param_start + num_param * 0x4;

	for (size_t i = 0; i < num_param; i++)
	{
		size_t index = i + 4; // addr, struc, count, pop

		ptemp = PyTuple_GetItem(args, index);
		if (ptemp)
		{
			if (PyNumber_Check(ptemp))
			{
				if (PyFloat_Check(ptemp))
				{
					float val = PyFloat_AsDouble(PyNumber_Float(ptemp));
					memcpy((void*)(int(pArr) + i*4), &val, 4);
				}
				else
				{
					int val = PyLong_AsLong(PyNumber_Long(ptemp));
					memcpy((void*)(int(pArr) + i*4), &val, 4);
				}
			}
			else
			{
				char *val = PyBytes_AsString(PyUnicode_AsUTF8String(ptemp));
				memcpy((void*)(int(pArr) + i*4), &val, 4);
			}
		}
	}

	DWORD result = 0;


	// Flipping argument order to preserve left to right
	// CLEO
	_asm
	{
		mov ecx, param_end
		loop_ :
		cmp ecx, param_start
			jbe loop_end
			sub ecx, 0x4
			push [ecx]
			jmp loop_
			loop_end :
		mov ecx, struc
		call addr
			mov result, eax
			add esp, stack_pop
	}

	delete[] pArr;

	return Py_BuildValue("i", result);
}

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
    float val = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "ifi", &addr, &val, &vp))
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

    if (!PyArg_ParseTuple(args, "iii", &addr, &size, &vp))
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


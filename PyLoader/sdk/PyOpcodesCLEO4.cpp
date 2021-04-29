#include "PyOpcodes.h"
#include "CCutsceneMgr.h"
#include "CZone.h"
#include "CTheZones.h"
#include "CTheScripts.h"

union AnyType
{
	int i;
	float f;
	char* c;
};

PyObject* PyOpcodes::CallFunction(PyObject* self, PyObject* args)
{
	int addr = NULL;
	size_t num_param = NULL, stack_pop = NULL;

	PyObject* ptemp = PyTuple_GetItem(args, 0);
	addr = PyLong_AsUnsignedLong(PyNumber_Long(ptemp));
	ptemp = PyTuple_GetItem(args, 1);
	num_param = PyLong_AsUnsignedLong(PyNumber_Long(ptemp));
	ptemp = PyTuple_GetItem(args, 1);
	stack_pop = PyLong_AsUnsignedLong(PyNumber_Long(ptemp))*4;

	AnyType* params = new AnyType[num_param];
	AnyType* params_end = params + num_param * 0x4;

	for (int i = 0; i < num_param; i++)
	{
		size_t index = i + 3; // addr, count, pop

		ptemp = PyTuple_GetItem(args, index);
		if (ptemp)
		{
			if (PyNumber_Check(ptemp))
			{
				if (PyFloat_Check(ptemp))
					params[i].f = PyFloat_AsDouble(PyNumber_Float(ptemp));
				else
					params[i].i = PyLong_AsLong(PyNumber_Long(ptemp));
			}
			else
				params[i].c = PyBytes_AsString(PyUnicode_AsUTF8String(ptemp));
		}
	}

	DWORD result = 0;

	// CLEO
	_asm
	{
		mov ecx, params
		loop_ :
		cmp ecx, params_end
			jae loop_end
			push [ecx]
			add ecx, 0x4
			jmp loop_
			loop_end :
		call addr
			mov result, eax
			add esp, stack_pop
	}

	delete[] params;

	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CallMethod(PyObject* self, PyObject* args)
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

	AnyType* params = new AnyType[num_param];
	AnyType* params_end = (AnyType*)(int(params) + num_param * 0x4);

	for (int i = 0; i < num_param; i++)
	{
		size_t index = i + 4; // addr, struc, count, pop

		ptemp = PyTuple_GetItem(args, index);
		if (ptemp)
		{
			if (PyNumber_Check(ptemp))
			{
				if (PyFloat_Check(ptemp))
					params[i].f = PyFloat_AsDouble(PyNumber_Float(ptemp));
				else
					params[i].i = PyLong_AsLong(PyNumber_Long(ptemp));
			}
			else
				params[i].c = PyBytes_AsString(PyUnicode_AsUTF8String(ptemp));
		}
	}
	DWORD result = 0;

	// CLEO
	_asm
	{
		mov ecx, params
		loop_ :
		cmp ecx, params_end
			jae loop_end
			push[ecx]
			add ecx, 0x4
			jmp loop_
			loop_end :
		mov ecx, struc
		call addr
		mov result, eax
		add esp, stack_pop
	}
	delete[] params;

	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCarPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetVehicle(handle));
}

PyObject* PyOpcodes::GetCharPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetPed(handle));
}

PyObject* PyOpcodes::GetObjectPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetObject(handle));
}

PyObject* PyOpcodes::GetCarHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetVehicleRef((CVehicle*)ptr));
}

PyObject* PyOpcodes::GetCharHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetPedRef((CPed*)ptr));
}

PyObject* PyOpcodes::GetObjectHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetObjectRef((CObject*)ptr));
}

PyObject* PyOpcodes::_LoadLibrary(PyObject* self, PyObject* args)
{
	char* str;

	if (!PyArg_ParseTuple(args, "s", &str))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", LoadLibrary(str));
}

PyObject* PyOpcodes::_FreeLibrary(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	FreeLibrary((HMODULE)handle);
	return Py_BuildValue("i", 1);
}

PyObject* PyOpcodes::_GetProcAddress(PyObject* self, PyObject* args)
{
	int handle;
	char* str;

	if (!PyArg_ParseTuple(args, "i", &handle, &str))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", GetProcAddress((HMODULE)handle, str));
}

PyObject* PyOpcodes::IsOnMission(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", FindPlayerPed()->CanPlayerStartMission() && !*(plugin::patch::Get<char*>(0x5D5380, false) + CTheScripts::OnAMissionFlag));
}

PyObject* PyOpcodes::IsOnCutscene(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", CCutsceneMgr::ms_running);
}

PyObject* PyOpcodes::GetLargestGangIdInZone(PyObject* self, PyObject* args)
{
	int gang_id = 0, max_density = 0;

	for (int i = 0; i != 10; ++i)
	{
		CVector pos = FindPlayerPed()->GetPosition();
		CZone* zone = new CZone();

		CZoneExtraInfo* zone_info = CTheZones::GetZoneInfo(&pos, &zone);
		int density = zone_info->m_nGangDensity[i];

		if (density > max_density)
		{
			max_density = density;
			gang_id = i;
		}
		delete zone;
	}

	return Py_BuildValue("i", gang_id);
}

PyObject* PyOpcodes::GetClosestVehicle(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	CPed* ped = CPools::GetPed(handle);
	CPedIntelligence* pedintel;
	if (ped && (pedintel = ped->m_pIntelligence))
	{
		CVehicle* veh = nullptr;
		for (int i = 0; i < 16; i++)
		{
			veh = (CVehicle*)pedintel->m_vehicleScanner.m_apEntities[i];
			if (veh && !veh->m_nVehicleFlags.bFadeOut)
				break;
			veh = nullptr;
		}

		return Py_BuildValue("i", veh);
	}
	return Py_BuildValue("i", NULL);
}

PyObject* PyOpcodes::GetClosestPed(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	CPed* _ped = CPools::GetPed(handle);
	CPedIntelligence* pedintel;
	if (_ped && (pedintel = _ped->m_pIntelligence))
	{
		CPed* ped = nullptr;

		for (int i = 0; i < 16; i++)
		{
			ped = (CPed*)pedintel->m_pedScanner.m_apEntities[i];
			if (ped && ped != _ped && (ped->m_nCreatedBy & 0xFF) == 1 && !ped->m_nPedFlags.bFadeOut)
				break;
			ped = nullptr;
		}

		return Py_BuildValue("i", ped);
	}
	return Py_BuildValue("i", NULL);
}
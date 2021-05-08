#include "PyCLEO.h"
#include "CCutsceneMgr.h"
#include "CZone.h"
#include "CTheZones.h"
#include "CTheScripts.h"
#include "CRadar.h"
#include "CMenuManager.h"
#include "CWorld.h"
#include "CModelInfo.h"
#include "CCheat.h"

union AnyType
{
	int i;
	float f;
	char* c;
};

PyObject* PyCLEO::CallFunction(PyObject* self, PyObject* args)
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

PyObject* PyCLEO::CallMethod(PyObject* self, PyObject* args)
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

PyObject* PyCLEO::GetCarPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetVehicle(handle));
}

PyObject* PyCLEO::GetCharPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetPed(handle));
}

PyObject* PyCLEO::GetObjectPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetObject(handle));
}

PyObject* PyCLEO::GetCarHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetVehicleRef((CVehicle*)ptr));
}

PyObject* PyCLEO::GetCharHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetPedRef((CPed*)ptr));
}

PyObject* PyCLEO::GetObjectHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", CPools::GetObjectRef((CObject*)ptr));
}

PyObject* PyCLEO::_LoadLibrary(PyObject* self, PyObject* args)
{
	char* str;

	if (!PyArg_ParseTuple(args, "s", &str))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", LoadLibrary(str));
}

PyObject* PyCLEO::_FreeLibrary(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	FreeLibrary((HMODULE)handle);
	return Py_BuildValue("i", 1);
}

PyObject* PyCLEO::_GetProcAddress(PyObject* self, PyObject* args)
{
	int handle;
	char* str;

	if (!PyArg_ParseTuple(args, "i", &handle, &str))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", GetProcAddress((HMODULE)handle, str));
}

PyObject* PyCLEO::IsOnMission(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", FindPlayerPed()->CanPlayerStartMission() && !*(plugin::patch::Get<char*>(0x5D5380, false) + CTheScripts::OnAMissionFlag));
}

PyObject* PyCLEO::IsOnCutscene(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", CCutsceneMgr::ms_running);
}

PyObject* PyCLEO::GetLargestGangIdInZone(PyObject* self, PyObject* args)
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

PyObject* PyCLEO::GetClosestVehicle(PyObject* self, PyObject* args)
{
	CPed* ped = FindPlayerPed();
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

		return Py_BuildValue("i", CPools::GetVehicleRef(veh));
	}
	return Py_BuildValue("i", NULL);
}

PyObject* PyCLEO::GetClosestPed(PyObject* self, PyObject* args)
{
	CPed* _ped = FindPlayerPed();
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

		return Py_BuildValue("i", CPools::GetPedRef(ped));
	}
	return Py_BuildValue("i", NULL);
}

PyObject* PyCLEO::GetTargetMarkerCoords(PyObject* self, PyObject* args)
{
	tRadarTrace target_blip = CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)];
	
	if (target_blip.m_nBlipDisplayFlag)
	{
		CVector pos(target_blip.m_vPosition);
		pos.z = CWorld::FindGroundZForCoord(pos.x, pos.y);

		return Py_BuildValue("fff", pos.x, pos.y, pos.z);
	}
	return Py_BuildValue("iii", -1, -1, -1);
}

PyObject* PyCLEO::GetVehicleNumberOfGears(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	CVehicle *pVeh = CPools::GetVehicle(handle);

	if (pVeh)
		return Py_BuildValue("i", pVeh->m_pHandlingData->m_transmissionData.m_nNumberOfGears);

	return Py_BuildValue("i", 0);
}

PyObject* PyCLEO::GetVehicleCurrentGear(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
		return Py_BuildValue("i", pVeh->m_nCurrentGear);

	return Py_BuildValue("i", 0);
}

PyObject* PyCLEO::IsVehicleSirenOn(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
		return Py_BuildValue("i", pVeh->m_nVehicleFlags.bSirenOrAlarm);

	return Py_BuildValue("i", 0);
}

PyObject* PyCLEO::IsVehicleEngineOn(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
		return Py_BuildValue("i", pVeh->m_nVehicleFlags.bEngineOn);

	return Py_BuildValue("i", 0);
}

PyObject* PyCLEO::SetVehicleEngineState(PyObject* self, PyObject* args)
{
	int handle, state;

	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
		return PyBool_FromLong(0);

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
		pVeh->m_nVehicleFlags.bEngineOn = state;

	return Py_BuildValue("i", 1);
}

PyObject* PyCLEO::GetPlayerTargetedChar(PyObject* self, PyObject* args)
{
	CPlayerPed* player = FindPlayerPed();
	CPed* target = player->m_pPlayerTargettedPed;

	if (target->m_nType == ENTITY_TYPE_PED)
		return Py_BuildValue("i", CPools::GetPedRef(target));

	return Py_BuildValue("i", 0);
}

PyObject* PyCLEO::GetVehicleModelName(PyObject* self, PyObject* args)
{
	int model;

	if (!PyArg_ParseTuple(args, "i", &model))
		return PyBool_FromLong(0);

	CBaseModelInfo* info = CModelInfo::GetModelInfo(model);

	return Py_BuildValue("s", (const char*)info + 0x32);
}

PyObject* PyCLEO::GetVehicleModelFromName(PyObject* self, PyObject* args)
{
	char* name;

	if (!PyArg_ParseTuple(args, "s", &name))
		return PyBool_FromLong(0);

	int model = 0;
	CBaseModelInfo* model_info = CModelInfo::GetModelInfo((char*)name, &model);

	CBaseModelInfo* info = CModelInfo::GetModelInfo(model);
	char* model_name = (char*)info + 0x32;

	if (model > 0 && model < 1000000 && model_name != "")
		return Py_BuildValue("i", model);
	
	return Py_BuildValue("i", 0);
}

PyObject* PyCLEO::TestCheat(PyObject* self, PyObject* args)
{
	char* text;

	if (!PyArg_ParseTuple(args, "s", &text))
		return PyBool_FromLong(0);
	
	std::string str = text;
	std::string cheatstring = CCheat::m_CheatString;

	// reverse + upper
	size_t size = str.size()-1;
	for (size_t i = size; i != int(size/2); --i)
	{
		char temp = ' ';
		temp = str[size - i];
		str[size - i] = toupper(str[i]);
		str[i] = toupper(temp);
	}

	if (size % 2 == 0)
		str[size / 2] = toupper(str[size / 2]);

	if (cheatstring.find(str) != std::string::npos)
	{
		CCheat::m_CheatString[0] = '\0';
		return Py_BuildValue("i", 1);
	}

	return Py_BuildValue("i", 0);
}
#include "pyloader_sdk.h"
#include "plugin.h"
#include "CPool.h"
#include "CCutsceneMgr.h"
#include "CZone.h"
#include "CTheZones.h"
#include "CTheScripts.h"
#include "CRadar.h"
#include "CMenuManager.h"
#include "CWorld.h"
#include "CModelInfo.h"

PyObject* KeyPressed(PyObject *self, PyObject *args)
{
    char key = (char)get_int(args, 0);
    return PyBool_FromLong((GetKeyState(key) & 0x8000));
}

PyObject* TestCheat(PyObject* self, PyObject* args)
{
	char* text;

	if (!PyArg_ParseTuple(args, "s", &text))
	{
		return PyBool_FromLong(0);
	}
	
	std::string str = text;
	char (&cheatstring)[30] = *(char(*)[30])(0x969110);

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
	{
		str[size / 2] = toupper(str[size / 2]);
	}

	if (strstr(cheatstring, str.c_str()) != NULL)
	{
		cheatstring[0] = '\0';
		return PyBool_FromLong(1);
	}

	return PyBool_FromLong(0);
}

PyObject* GetCarPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", CPools::GetVehicle(handle));
}

PyObject* GetCharPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", CPools::GetPed(handle));
}

PyObject* GetObjectPointer(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", CPools::GetObject(handle));
}

PyObject* GetCarHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", CPools::GetVehicleRef((CVehicle*)ptr));
}

PyObject* GetCharHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", CPools::GetPedRef((CPed*)ptr));
}

PyObject* GetObjectHandle(PyObject* self, PyObject* args)
{
	int ptr;

	if (!PyArg_ParseTuple(args, "i", &ptr))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", CPools::GetObjectRef((CObject*)ptr));
}

PyObject* IsOnMission(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", FindPlayerPed()->CanPlayerStartMission() && !*(plugin::patch::Get<char*>(0x5D5380, false) + CTheScripts::OnAMissionFlag));
}

PyObject* IsOnCutscene(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", CCutsceneMgr::ms_running);
}

PyObject* GetLargestGangIdInZone(PyObject* self, PyObject* args)
{
	int gang_id = 0, max_density = 0;

	for (int i = 0; i != 10; ++i)
	{
		CVector pos = FindPlayerPed()->GetPosition();
		CZone* zone = new CZone();

		CZoneInfo* zone_info = CTheZones::GetZoneInfo(&pos, &zone);
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

PyObject* GetClosestVehicle(PyObject* self, PyObject* args)
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
			{
				break;
			}
			veh = nullptr;
		}

		return Py_BuildValue("i", CPools::GetVehicleRef(veh));
	}
	return Py_BuildValue("i", NULL);
}

PyObject* GetClosestPed(PyObject* self, PyObject* args)
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
			{
				break;
			}
			ped = nullptr;
		}

		return Py_BuildValue("i", CPools::GetPedRef(ped));
	}
	return Py_BuildValue("i", NULL);
}

PyObject* GetTargetMarkerCoords(PyObject* self, PyObject* args)
{
	tRadarTrace target_blip = CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)];
	
	if (target_blip.m_nBlipDisplayFlag)
	{
		CVector pos(target_blip.m_vPosition);
		pos.z = CWorld::FindGroundZForCoord(pos.x, pos.y);

		return Py_BuildValue("fff", pos.x, pos.y, pos.z);
	}
	return Py_BuildValue("iii", 0, 0, 0);
}

PyObject* GetVehicleNumberOfGears(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	CVehicle *pVeh = CPools::GetVehicle(handle);

	if (pVeh)
	{
		return Py_BuildValue("i", pVeh->m_pHandlingData->m_transmissionData.m_nNumberOfGears);
	}

	return Py_BuildValue("i", 0);
}

PyObject* GetVehicleCurrentGear(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
	{
		return Py_BuildValue("i", pVeh->m_nCurrentGear);
	}

	return Py_BuildValue("i", 0);
}

PyObject* IsVehicleSirenOn(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
	{
		return Py_BuildValue("i", pVeh->m_nVehicleFlags.bSirenOrAlarm);
	}

	return Py_BuildValue("i", 0);
}

PyObject* IsVehicleEngineOn(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
	{
		return Py_BuildValue("i", pVeh->m_nVehicleFlags.bEngineOn);
	}

	return Py_BuildValue("i", 0);
}

PyObject* SetVehicleEngineState(PyObject* self, PyObject* args)
{
	int handle, state;

	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}

	CVehicle* pVeh = CPools::GetVehicle(handle);

	if (pVeh)
	{
		pVeh->m_nVehicleFlags.bEngineOn = state;
	}

	return Py_BuildValue("i", 1);
}

PyObject* GetPlayerTargetedChar(PyObject* self, PyObject* args)
{
	CPlayerPed* player = FindPlayerPed();
	CPed* target = player->m_pPlayerTargettedPed;

	if (target->m_nType == ENTITY_TYPE_PED)
	{
		return Py_BuildValue("i", CPools::GetPedRef(target));
	}

	return Py_BuildValue("i", 0);
}

PyObject* GetVehicleModelName(PyObject* self, PyObject* args)
{
	int model;

	if (!PyArg_ParseTuple(args, "i", &model))
	{
		return PyBool_FromLong(0);
	}

	CBaseModelInfo* info = CModelInfo::GetModelInfo(model);

	return Py_BuildValue("s", (const char*)info + 0x32);
}

PyObject* GetVehicleModelFromName(PyObject* self, PyObject* args)
{
	char* name;

	if (!PyArg_ParseTuple(args, "s", &name))
	{
		return PyBool_FromLong(0);
	}

	int model = 0;
	CBaseModelInfo* model_info = CModelInfo::GetModelInfo((char*)name, &model);

	CBaseModelInfo* info = CModelInfo::GetModelInfo(model);
	char* model_name = (char*)info + 0x32;

	if (model > 0 && model < 1000000 && model_name != "")
	{
		return Py_BuildValue("i", model);
	}
	
	return Py_BuildValue("i", 0);
}

PyObject* GetVehPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CVehicle* pVeh : CPools::ms_pVehiclePool)
    {
        ++size;
    }

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CVehicle* pVeh : CPools::ms_pVehiclePool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", CPools::GetVehicleRef(pVeh)));
        ++index;
    }

    return list;
}

PyObject* GetPedPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CPed* ele : CPools::ms_pPedPool)
    {
        ++size;
    }

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CPed* ele : CPools::ms_pPedPool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", CPools::GetPedRef(ele)));
        ++index;
    }

    return list;
}

PyObject* GetBuildingPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CBuilding* ele : CPools::ms_pBuildingPool)
    {
        ++size;
    }

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CBuilding* ele : CPools::ms_pBuildingPool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", ele));
        ++index;
    }

    return list;
}

PyObject* GetObjectPool(PyObject* self, PyObject* args)
{
    size_t size = 0;

    for (CObject* ele : CPools::ms_pObjectPool)
    {
        ++size;
    }

    PyObject* list = PyList_New(size);
    size_t index = 0;

    for (CObject* ele : CPools::ms_pObjectPool)
    {
        PyList_SetItem(list, index, Py_BuildValue("i", CPools::GetObjectRef(ele)));
        ++index;
    }

    return list;
}

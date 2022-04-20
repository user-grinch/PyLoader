#define WIN32_LEAN_AND_MEAN 
#include "windows.h"
#include "pyloader_sdk.h"

PyObject* GetPedPool(PyObject* self, PyObject* args);
PyObject* GetBuildingPool(PyObject* self, PyObject* args);
PyObject* GetObjectPool(PyObject* self, PyObject* args);
PyObject* GetVehPool(PyObject* self, PyObject* args);
PyObject* GetCarHandle(PyObject* self, PyObject* args);
PyObject* GetCarPointer(PyObject* self, PyObject* args);
PyObject* GetCharHandle(PyObject* self, PyObject* args);
PyObject* GetCharPointer(PyObject* self, PyObject* args);
PyObject* GetClosestPed(PyObject* self, PyObject* args);
PyObject* GetClosestVehicle(PyObject* self, PyObject* args);
PyObject* GetObjectHandle(PyObject* self, PyObject* args);
PyObject* GetObjectPointer(PyObject* self, PyObject* args);
PyObject* GetPlayerTargetedChar(PyObject* self, PyObject* args);
PyObject* GetTargetMarkerCoords(PyObject* self, PyObject* args);
PyObject* GetVehicleCurrentGear(PyObject* self, PyObject* args);
PyObject* GetVehicleNumberOfGears(PyObject* self, PyObject* args);
PyObject* IsOnCutscene(PyObject* self, PyObject* args);
PyObject* IsOnMission(PyObject* self, PyObject* args);
PyObject* IsVehicleEngineOn(PyObject* self, PyObject* args);
PyObject* IsVehicleSirenOn(PyObject* self, PyObject* args);
PyObject* GetLargestGangIdInZone(PyObject* self, PyObject* args);
PyObject* GetVehicleModelFromName(PyObject* self, PyObject* args);
PyObject* GetVehicleModelName(PyObject* self, PyObject* args);
PyObject* SetVehicleEngineState(PyObject* self, PyObject* args);

BOOL WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
  if (nReason == DLL_PROCESS_ATTACH)
  {
    // II, VC & SA
    if (get_game_id() <= eGame::SA)
    {
      register_command("get_buildings", "pool", GetBuildingPool);
      register_command("get_objs", "pool", GetObjectPool);
      register_command("get_peds", "pool", GetPedPool);
      register_command("get_vehs", "pool", GetVehPool);
      
      register_command("get_veh_handle", "misc", GetCarHandle);
      register_command("get_veh_pointer","misc", GetCarPointer);
      register_command("get_char_handle","misc", GetCharHandle);
      register_command("get_char_pointer","misc", GetCharPointer);
      register_command("get_closest_ped","misc", GetClosestPed);
      register_command("get_closest_veh","misc", GetClosestVehicle);
      register_command("get_object_handle","misc", GetObjectHandle);
      register_command("get_object_pointer","misc", GetObjectPointer);
      register_command("get_player_targeted_char","misc", GetPlayerTargetedChar);
      register_command("get_target_marker_coords","misc", GetTargetMarkerCoords);
      register_command("get_veh_current_gear","misc", GetVehicleCurrentGear);
      register_command("get_veh_model_from_name","misc", GetVehicleModelFromName);
      register_command("get_veh_model_name","misc", GetVehicleModelName);
      register_command("get_veh_number_of_gears","misc", GetVehicleNumberOfGears);
      register_command("is_on_cutscene","misc", IsOnCutscene);
      register_command("is_on_mission","misc", IsOnMission);
      register_command("is_veh_engine_on","misc", IsVehicleEngineOn);
      register_command("is_veh_siren_on","misc", IsVehicleSirenOn);
      register_command("get_zone_largest_gangid","misc", GetLargestGangIdInZone);
      register_command("set_veh_engine_state","misc", SetVehicleEngineState);
    }
    else
    {
      py_log("Unsupported game/ version. Only GTA III, VC & SA (Not DE) are supported.");
    }
  }

  return TRUE;
}

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
      register_command("get_veh_handle", "addon", GetCarHandle);
      register_command("get_veh_pointer","addon", GetCarPointer);
      register_command("get_char_handle","addon", GetCharHandle);
      register_command("get_char_pointer","addon", GetCharPointer);
      register_command("get_closest_ped","addon", GetClosestPed);
      register_command("get_closest_veh","addon", GetClosestVehicle);
      register_command("get_object_handle","addon", GetObjectHandle);
      register_command("get_object_pointer","addon", GetObjectPointer);
      register_command("get_player_targeted_char","addon", GetPlayerTargetedChar);
      register_command("get_target_marker_coords","addon", GetTargetMarkerCoords);
      register_command("get_veh_current_gear","addon", GetVehicleCurrentGear);
      register_command("get_veh_model_from_name","addon", GetVehicleModelFromName);
      register_command("get_veh_model_name","addon", GetVehicleModelName);
      register_command("get_veh_number_of_gears","addon", GetVehicleNumberOfGears);
      register_command("is_on_cutscene","addon", IsOnCutscene);
      register_command("is_on_mission","addon", IsOnMission);
      register_command("is_veh_engine_on","addon", IsVehicleEngineOn);
      register_command("is_veh_siren_on","addon", IsVehicleSirenOn);
      register_command("get_largest_gangid_in_zone","addon", GetLargestGangIdInZone);
      register_command("set_veh_engine_state","addon", SetVehicleEngineState);
    }
    else
    {
      py_log("Unsupported game/ version. Only GTA III, VC & SA (Not DE) are supported.");
    }
  }

  return TRUE;
}

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
PyObject* KeyPressed(PyObject *self, PyObject *args);
PyObject* TestCheat(PyObject* self, PyObject* args);

BOOL WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
  if (nReason == DLL_PROCESS_ATTACH)
  {
    // II, VC & SA
    if (get_game_id() <= eGame::SA)
    {
      register_command("key_pressed", "Pad", KeyPressed);
      register_command("test_cheat", "Pad", TestCheat);
      
      register_command("get_buildings", "Pool", GetBuildingPool);
      register_command("get_objs", "Pool", GetObjectPool);
      register_command("get_peds", "Pool", GetPedPool);
      register_command("get_vehs", "Pool", GetVehPool);
      
      register_command("get_veh_handle", "Misc", GetCarHandle);
      register_command("get_veh_pointer","Misc", GetCarPointer);
      register_command("get_char_handle","Misc", GetCharHandle);
      register_command("get_char_pointer","Misc", GetCharPointer);
      register_command("get_closest_ped","Misc", GetClosestPed);
      register_command("get_closest_veh","Misc", GetClosestVehicle);
      register_command("get_object_handle","Misc", GetObjectHandle);
      register_command("get_object_pointer","Misc", GetObjectPointer);
      register_command("get_player_targeted_char","Misc", GetPlayerTargetedChar);
      register_command("get_target_marker_coords","Misc", GetTargetMarkerCoords);
      register_command("get_veh_current_gear","Misc", GetVehicleCurrentGear);
      register_command("get_veh_model_from_name","Misc", GetVehicleModelFromName);
      register_command("get_veh_model_name","Misc", GetVehicleModelName);
      register_command("get_veh_number_of_gears","Misc", GetVehicleNumberOfGears);
      register_command("is_on_cutscene","Misc", IsOnCutscene);
      register_command("is_on_mission","Misc", IsOnMission);
      register_command("is_veh_engine_on","Misc", IsVehicleEngineOn);
      register_command("is_veh_siren_on","Misc", IsVehicleSirenOn);
      register_command("get_zone_largest_gangid","Misc", GetLargestGangIdInZone);
      register_command("set_veh_engine_state","Misc", SetVehicleEngineState);
    }
    else
    {
      py_log("Unsupported game/ version. Only GTA III, VC & SA (Not DE) are supported.");
    }
  }

  return TRUE;
}

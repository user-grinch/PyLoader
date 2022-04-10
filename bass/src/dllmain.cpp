#define WIN32_LEAN_AND_MEAN 
#include "windows.h"
#include "pyloader_sdk.h"

PyObject* GetAudioStreamLength(PyObject* self, PyObject* args);
PyObject* GetAudioStreamVolume(PyObject* self, PyObject* args);
PyObject* Link3dAudioStreamToActor(PyObject* self, PyObject* args);
PyObject* Link3dAudioStreamToObject(PyObject* self, PyObject* args);
PyObject* Link3dAudioStreamToVehicle(PyObject* self, PyObject* args);
PyObject* LoadAudioStream(PyObject* self, PyObject* args);
PyObject* LoopAudioStream(PyObject* self, PyObject* args);
PyObject* LoadAudioStreamWith3dSupport(PyObject* self, PyObject* args);
PyObject* ReleaseAudioStream(PyObject* self, PyObject* args);
PyObject* SetAudioStreamPerformAction(PyObject* self, PyObject* args);
PyObject* SetAudioStreamVolume(PyObject* self, PyObject* args);
PyObject* Set3dAudioStreamPosition(PyObject* self, PyObject* args);

BOOL WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
  if (nReason == DLL_PROCESS_ATTACH)
  {
    // II, VC & SA
    if (get_game_id() <= eGame::SA)
    {
      register_command("get_audiostream_length", "bass", GetAudioStreamLength);
      register_command("get_audiostream_volume", "bass", GetAudioStreamVolume);
      register_command("link_3d_audiostream_to_actor", "bass", Link3dAudioStreamToActor);
      register_command("link_3d_audiostream_to_obj", "bass", Link3dAudioStreamToObject);
      register_command("link_3d_audiostream_to_veh", "bass", Link3dAudioStreamToVehicle);
      register_command("load_audiostream", "bass", LoadAudioStream);
      register_command("loop_audiostream", "bass", LoopAudioStream);
      register_command("load_audiostream_with_3d_support", "bass", LoadAudioStreamWith3dSupport);
      register_command("release_audiostream", "bass", ReleaseAudioStream);
      register_command("set_audiostream_perform_action", "bass", SetAudioStreamPerformAction);
      register_command("set_audiostream_volume", "bass", SetAudioStreamVolume);
      register_command("set_3d_audiostream_position", "bass", Set3dAudioStreamPosition);
    }
    else
    {
      py_log("Unsupported game/ version. Only GTA III, VC & SA (Not DE) are supported.");
    }
  }

  return TRUE;
}

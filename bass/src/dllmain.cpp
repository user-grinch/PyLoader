#define WIN32_LEAN_AND_MEAN 
#include "windows.h"
#include "pyloader_sdk.h"
#include "soundsystem.h"
#include "RenderWare.h"

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
    if (get_game_id() == eGame::SA)
    {
      plugin::Events::initGameEvent += []()
      {
        SoundSystem.Inject();
        SoundSystem.Init(RsGlobal.ps->window);
      };
      register_command("get_length", "Bass", GetAudioStreamLength);
      register_command("get_volume", "Bass", GetAudioStreamVolume);
      register_command("link_3d_to_actor", "Bass", Link3dAudioStreamToActor);
      register_command("link_3d_to_obj", "Bass", Link3dAudioStreamToObject);
      register_command("link_3d_to_veh", "Bass", Link3dAudioStreamToVehicle);
      register_command("load", "Bass", LoadAudioStream);
      register_command("loop", "Bass", LoopAudioStream);
      register_command("load_with_3d_support", "Bass", LoadAudioStreamWith3dSupport);
      register_command("release", "Bass", ReleaseAudioStream);
      register_command("set_perform_action", "Bass", SetAudioStreamPerformAction);
      register_command("set_volume", "Bass", SetAudioStreamVolume);
      register_command("set_3d_position", "Bass", Set3dAudioStreamPosition);
    }
    else
    {
      py_log("Unsupported game/ version. Only GTA SA (Not DE) is supported.");
    }
  }

  return TRUE;
}

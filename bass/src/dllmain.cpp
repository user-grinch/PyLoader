#define WIN32_LEAN_AND_MEAN 
#include "windows.h"
#include "module.h"
#include "soundsystem.h"
#include "RenderWare.h"

BOOL WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
  if (nReason == DLL_PROCESS_ATTACH)
  {
    plugin::Events::initGameEvent += []()
    {
      SoundSystem.Inject();
      SoundSystem.Init(RsGlobal.ps->window);
    };
    
    static Module mod;
  }

  return TRUE;
}

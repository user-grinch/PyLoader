#define WIN32_LEAN_AND_MEAN 
#include "windows.h"
#include "module.h"
#include "sdk.h"

BOOL WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
  if (nReason == DLL_PROCESS_ATTACH)
  {
    register_plugin(MODULE_NAME, &Module::init);
  }

  return TRUE;
}

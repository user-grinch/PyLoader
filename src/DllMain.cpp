#include <windows.h>
#include "PyLoader.h"
#include "pch.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved ) 
{
   	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		uint gameVersion = plugin::GetGameVersion();
		if (gameVersion == GAME_10US_HOODLUM || gameVersion == GAME_10US_COMPACT)
		{
			plugin::Events::initGameEvent.after += [] 
			{
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::PluginThread, NULL, NULL, NULL);
			};
		}
		else
		{
			MessageBox(HWND_DESKTOP, "Unknown game version. GTA SA v1.0 US is required.", "PyLoader", MB_ICONERROR);
		}
	}
    return TRUE;
}
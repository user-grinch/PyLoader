#include "pch.h"
#include "injector/injector.hpp"
#include "loader.h"

BOOL WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
    if (nReason == DLL_PROCESS_ATTACH)
    {
		auto gvm = injector::game_version_manager();
		gvm.Detect();
	
		if (gvm.IsIII()
			&& gvm.GetMajorVersion() == 1
			&& gvm.GetMinorVersion() == 0
			)
		{
			gGameVer = eGame::III;
		}

		if (gvm.IsVC() 
			&& gvm.GetMajorVersion() == 1
			&& gvm.GetMinorVersion() == 0
			)
		{
			gGameVer = eGame::VC;
		}

		if (gvm.IsSA()
		&& gvm.GetMajorVersion() == 1
		&& gvm.GetMinorVersion() == 0
			)
		{
			gGameVer = eGame::SA;
		}

		if (gGameVer != eGame::UNKNOWN)
		{
			CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::process, nullptr, NULL, nullptr);
		}
    }

    return TRUE;
}

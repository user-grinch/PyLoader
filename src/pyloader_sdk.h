#pragma once
enum eGameVer
{
    III,
    VC,
    SA,
    III_DE,
    VC_DE,
    SA_DE,
    RE_III,
    RE_VC,
    RE_SA,
    UNKNOWN
};

extern "C" {
	float __declspec(dllexport) get_sdk_version();
	eGameVer __declspec(dllexport) get_game_id();
	void __declspec(dllexport) get_pyloader_folder(char* buf);
	void __declspec(dllexport) py_log(const char* text);
}

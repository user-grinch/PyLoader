#pragma once
#ifdef PY_LOADER
#define PY_API __declspec(dllexport)
#else
#define PY_API
#include <Python.h>
#include <frameobject.h>
#endif

enum eGame
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
	eGame PY_API get_game_id();
	void PY_API get_pyloader_folder(char* buf);
	float PY_API get_sdk_version();
	void PY_API py_log(const char* text);
    void PY_API register_command(const char* cmd_name, const char* mod_name, void* pfunc);
    int PY_API get_int(PyObject *args, char index);
    unsigned int PY_API get_uint(PyObject *args, char index);
    float PY_API get_float(PyObject *args, char index);
    void PY_API get_string(PyObject *args, char index, const char* buf);
}

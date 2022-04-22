#pragma once
#ifdef PY_LOADER
#define PY_API __declspec(dllexport)
#else
#define PY_API
#endif
typedef void* Context;

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
    bool PY_API get_value(Context ctx, const char *fmt, ...);
    Context PY_API set_value(const char *fmt, ...);
    eGame PY_API get_game_id();
    float PY_API get_sdk_version();
    void PY_API get_pyloader_folder(char* buf);
    void PY_API py_log(const char* text);
    void PY_API register_command(const char* cmd_name, const char* mod_name, void* pfunc);
    float PY_API get_float(Context ctx, unsigned char index);
    int PY_API get_int(Context ctx, unsigned char index);
    unsigned int PY_API get_uint(Context ctx, unsigned char index);
    void PY_API get_string(Context ctx, unsigned char index, const char* buf);
}

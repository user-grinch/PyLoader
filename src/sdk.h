#pragma once
#ifdef PY_LOADER
#define PY_API __declspec(dllexport)
#else
#define PY_API
#endif
typedef void* Context;
#define PYLOADER_SDK_VERSION 1.0f

extern "C" {
    void PY_API get_pyloader_folder(char* buf);
    void PY_API py_log(const char* text);
    void PY_API register_plugin(const char* text, void *init_func);
}

#pragma once
#define PY_SSIZE_T_CLEAN 
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <iostream>
#include <fstream>
#include <filesystem>

#include <Python.h>
#include <frameobject.h>

#include <plugin.h>

constexpr const char* gPluginVer = "0.08";
extern size_t gGameTicks;
extern std::ofstream gLog;

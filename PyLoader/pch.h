#pragma once
#define PY_SSIZE_T_CLEAN 
#include <Python.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <frameobject.h>
#include "plugin.h"

constexpr const char* plugin_ver = "0.01";
extern size_t game_ticks;
extern std::ofstream flog;

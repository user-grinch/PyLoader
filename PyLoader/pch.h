#pragma once
#define PY_SSIZE_T_CLEAN 
#include <Python.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include "plugin.h"

constexpr const char* plugin_ver = "0.01";
extern std::ofstream flog;
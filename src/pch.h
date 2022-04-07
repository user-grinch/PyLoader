#pragma once
#define WIN32_LEAN_AND_MEAN 
#define _CRT_SECURE_NO_WARNINGS
#define PYLOADER_VERSION 0.2f
#define PYLOADER_SDK_VERSION 1.0f
#define GITHUB_LINK "https://github.com/user-grinch/PyLoader/"

#include <fstream>
#include <Windows.h>
#include <Python.h>
#include <frameobject.h>

#include "scriptdata.hpp"

// Visual Studio doesn't seem to generate .lib file without including the sdk header
#include "pyloader_sdk.h"

extern eGame gGameVer;
extern std::ofstream gLog;
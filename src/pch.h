#pragma once
#define WIN32_LEAN_AND_MEAN 
#define _CRT_SECURE_NO_WARNINGS
#define PYLOADER_VERSION 0.2f
#define GITHUB_LINK "https://github.com/user-grinch/PyLoader/"

#include <fstream>
#include <Windows.h>
#include <Python.h>
#include <frameobject.h>

#include "scriptdata.hpp"
#include "sdk.h"

extern std::ofstream gLog;
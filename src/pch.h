#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define PYLOADER_VERSION 0.2f
#define GITHUB_LINK "https://github.com/user-grinch/PyLoader/"

#include <fstream>
#include <Windows.h>

#include <Python.h>
#include <frameobject.h>

enum class eGameVer
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

extern eGameVer gGameVer;
extern std::ofstream gLog;

static size_t getAddrByGame(size_t iii = NULL, size_t vc = NULL, size_t sa = NULL)
{
    return (gGameVer == eGameVer::III) ? iii : ((gGameVer == eGameVer::VC) ? vc : sa);
}
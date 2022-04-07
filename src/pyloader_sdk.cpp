#include "pyloader_sdk.h"
#include "pch.h"

float get_sdk_version()
{
    return 1.0;
}

eGameVer get_game_id()
{
    return gGameVer;
}

void get_pyloader_folder(char* buf)
{
    strcpy(buf, "Pyloader/");
}

void py_log(const char* text)
{
    gLog << text << std::endl;
}
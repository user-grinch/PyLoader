#include "pyloader_sdk.h"
#include "pch.h"
#include "loader.h"
#include "opcodehandler.hpp"

float get_sdk_version()
{
    return PYLOADER_SDK_VERSION;
}

eGame get_game_id()
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

void register_command(const char* cmd_name, const char* mod_name, void* pfunc)
{
    if (pfunc != nullptr && mod_name != nullptr && cmd_name != nullptr)
    {
        OpcodeHandler::add_command(cmd_name, mod_name, pfunc);
        gLog << "Registering command " << cmd_name << std::endl;
    }
}
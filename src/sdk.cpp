#include "sdk.h"
#include "pch.h"
#include "opcodehandler.hpp"

void get_pyloader_folder(char* buf)
{
    strcpy(buf, "Pyloader/");
}

void py_log(const char* text)
{
    gLog << text << std::endl;
}
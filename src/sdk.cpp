#include "sdk.h"
#include "pch.h"
#include "opcodehandler.hpp"
#include "loader.h"

void register_plugin(const char* text, void *init_func)
{
    PyLoader::add_plugin(text, init_func);
}

void get_pyloader_folder(char* buf)
{
    strcpy(buf, "Pyloader/");
}

void py_log(const char* text)
{
    gLog << text << std::endl;
}
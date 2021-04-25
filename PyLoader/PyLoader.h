#pragma once
#include "pch.h"

class PyLoader
{
public:
    PyLoader() = delete;
    PyLoader(PyLoader&) = delete;

    static void PluginThread(void* param);
    static int ExecuteScript(std::string *file_name);
};
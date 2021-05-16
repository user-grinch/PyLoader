#pragma once
#include "pch.h"

class PyLoader
{
public:
    PyLoader() = delete;
    PyLoader(PyLoader&) = delete;

    static void CheckUpdate();
    static int ExecuteScript(std::string *file_name);
    static void LoadPlugins(std::string&& dir_name);
    static void PluginThread(void* param);
};
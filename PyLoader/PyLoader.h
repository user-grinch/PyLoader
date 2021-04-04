#pragma once
#include "pch.h"
constexpr const char* main_func_name = "main";
constexpr const char* plugin_ver = "0.01-alpha";

class PyLoader
{
public:
    PyLoader() = delete;
    PyLoader(PyLoader&) = delete;

    static void PluginThread(void* param);
    static int ExecuteScript(std::string *file_name);
    static void PrintError();
};
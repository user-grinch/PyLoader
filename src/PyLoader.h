#pragma once
#define MAIN_FUNC_NAME "PyLoaderMain"
#include "pch.h"

class PyLoader
{
public:
    PyLoader() = delete;
    PyLoader(PyLoader&) = delete;

    static void PyLoaderThread(void* param);
    static int ExecuteScript(std::string *file_name);
};
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

int get_int(PyObject *args, char index)
{
    PyObject* item = PyTuple_GetItem(args, index);
    if (item)
    {
        if (PyNumber_Check(item))
        {
            if (PyFloat_Check(item))
            {
                return (int)PyFloat_AsDouble(PyNumber_Float(item));
            }
            else
            {
                return PyLong_AsLong(PyNumber_Long(item));
            }
        }
    }
    return 0;
}

unsigned int get_uint(PyObject *args, char index)
{
    PyObject* item = PyTuple_GetItem(args, index);
    if (item)
    {
        if (PyNumber_Check(item))
        {
            if (PyFloat_Check(item))
            {
                return (int)PyFloat_AsDouble(PyNumber_Float(item));
            }
            else
            {
                return PyLong_AsUnsignedLong(PyNumber_Long(item));
            }
        }
    }
    return 0;
}

float get_float(PyObject *args, char index)
{
    PyObject* item = PyTuple_GetItem(args, index);
    if (item)
    {
        if (PyFloat_Check(item))
        {
            return (float)PyFloat_AsDouble(PyNumber_Float(item));
        }
    }
    return 0.0f;
}

void get_string(PyObject *args, char index, const char* buf)
{
    PyObject* item = PyTuple_GetItem(args, index);
    if (item)
    {
        if (!PyNumber_Check(item))
        {
            buf = PyBytes_AsString(PyUnicode_AsUTF8String(item));
            return;
        }
    }
    buf = "";
}

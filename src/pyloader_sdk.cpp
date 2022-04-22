#include "pyloader_sdk.h"
#include "pch.h"
#include "loader.h"
#include "opcodehandler.hpp"
#include <stdarg.h>

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
    }
}

int get_int(Context ctx, unsigned char index)
{
    PyObject* item = PyTuple_GetItem((PyObject*)ctx, index);
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

unsigned int get_uint(Context ctx, unsigned char index)
{
    PyObject* item = PyTuple_GetItem((PyObject*)ctx, index);
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

float get_float(Context ctx, unsigned char index)
{
    PyObject* item = PyTuple_GetItem((PyObject*)ctx, index);
    if (item)
    {
        if (PyFloat_Check(item))
        {
            return (float)PyFloat_AsDouble(PyNumber_Float(item));
        }
    }
    return 0.0f;
}

void get_string(Context ctx, unsigned char index, const char* buf)
{
    PyObject* item = PyTuple_GetItem((PyObject*)ctx, index);
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

bool PY_API get_value(Context ctx, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    bool rtn = PyArg_ParseTuple((PyObject*)ctx, fmt, args);
    va_end(args);

    return rtn;
}

Context PY_API set_value(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    PyObject *rtn = Py_BuildValue(fmt, args);
    va_end(args);
    
    return rtn;
}

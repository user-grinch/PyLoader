#include "pch.h"
#include "stream.h"
#include "../ScriptData.hpp"

PyObject* IOStream::WriteStream(PyObject* self, PyObject* args)
{
    // Hacky way to fix duplicate call?
    static bool bIgnoreCall = false;

    if (!bIgnoreCall)
    {
        char* text;
        if (!PyArg_ParseTuple(args, "s", &text))
        {
            return NULL;
        }
        gLog << text << std::endl;
    }
    bIgnoreCall = !bIgnoreCall;

    return Py_BuildValue("");
}

PyObject* IOStream::FlushStream(PyObject* self, PyObject* args)
{
    return Py_BuildValue("");
}
#include "pch.h"
#include "core.h"
#include "../scriptdata.hpp"
#include "../opcodehandler.hpp"

PyObject* Core::wait(PyObject* self, PyObject* args)
{
    int ms;
    if (!PyArg_ParseTuple(args, "i", &ms))
    {
        return PyBool_FromLong(0);
    }

    /*
        Sync game thread with script thread
        This is needed to prevent high cpu usage & crash
    */
    ScriptData *pdata = ScriptMgr::get();
    while (pdata->ticks == ScriptMgr::game_ticks)
    {
        PyRun_SimpleString("import time\ntime.sleep(0.1)");
    }

    pdata->ticks = ScriptMgr::game_ticks;

    // wait the amount of time script requested
    if (ms != 0)
    {
        std::string str = std::format("time.sleep({})", ms / 1000.0f);
        PyRun_SimpleString(str.c_str());
    }

    return PyBool_FromLong(1);
}

PyObject* Core::write_stream(PyObject* self, PyObject* args)
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
        ScriptData *pdata = ScriptMgr::get();
        gLog << std::format("{} : {}", pdata->file_name, text) << std::endl;
    }
    bIgnoreCall = !bIgnoreCall;

    return Py_BuildValue("");
}

PyObject* Core::flush_stream(PyObject* self, PyObject* args)
{
    return Py_BuildValue("");
}

PyObject* Core::call_opcode(PyObject *self, PyObject *args)
{
    return PyBool_FromLong(OpcodeHandler::call(args));
}
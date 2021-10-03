#include "PyCommon.h"
#include "../ScriptData.hpp"
#include <frameobject.h>
#include "../PyEvents.h"
#include "CTimer.h"

PyObject* PyCommon::Wait(PyObject* self, PyObject* args)
{
    int ms;
    if (!PyArg_ParseTuple(args, "i", &ms))
    {
        return PyBool_FromLong(0);
    }


    ScriptData::Data* pScriptData = ScriptData::Get(GetCurrentThreadId());
    if (!pScriptData->m_bEventsRegistered)
    {
        PyEvents::RegisterEvents();
        PyErr_Clear();
        pScriptData->m_bEventsRegistered = true;
    }

    pScriptData->lastWaitTimer = CTimer::m_snTimeInMilliseconds;

    /*
        We're terminating the script here if exit flag is set
        This is probably an issue here if the script doesn't use wait at all!
        Doing so also results in high cpu usage
    */
    if (pScriptData->m_eExitFlags != EXITING_FLAGS::NORMAL_EXIT)
    {
        PyEvents::ScriptTerminate(pScriptData->m_pModule);
        PyThreadState_SetAsyncExc(pScriptData->m_nThreadId, PyExc_Exception);
        return PyBool_FromLong(1);
    }

    // syncing scripts cycles with game
    // FIX FOR HIGH CPU USAGE
    while (pScriptData->m_nTicks == gGameTicks)
    {
        PyRun_SimpleString("import time\ntime.sleep(0.01)");
    }

    pScriptData->m_nTicks = gGameTicks;

    // Here, we're waiting the amount of time script requested
    if (ms != 0)
    {
        std::string str = std::format("time.sleep({})", ms / 1000.0f);
        PyRun_SimpleString(str.c_str());
    }

    return PyBool_FromLong(1);
}

PyObject* PyCommon::GetPyLoaderVersion(PyObject* self, PyObject* args)
{
    return Py_BuildValue("s", gPluginVer);
}

PyObject* PyCommon::GetWorkingDir(PyObject* self, PyObject* args)
{
    char* path = PLUGIN_PATH((char*)"PyLoader\\");
    return Py_BuildValue("s", path);
}

PyObject* PyCommon::GetGameDir(PyObject* self, PyObject* args)
{
    char* path = PLUGIN_PATH((char*)"");
    return Py_BuildValue("s", path);
}

PyObject* PyCommon::KeyPressed(PyObject *self, PyObject *args)
{
    int key;
    if (!PyArg_ParseTuple(args,"i", &key)) 
    {
        return PyBool_FromLong(0);                               
    }
    
    if (plugin::KeyPressed(key))
    {
        return PyBool_FromLong(1);
    }
    else
    {
        return PyBool_FromLong(0);
    }
}

PyObject* PyCommon::WriteStream(PyObject* self, PyObject* args)
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

        ScriptData::Data* data = ScriptData::Get(GetCurrentThreadId());
        if (data->m_eExitFlags == EXITING_FLAGS::NORMAL_EXIT)
        {
            gLog << data->fileName << ": " << text  << std::endl;
        }
    }
    bIgnoreCall = !bIgnoreCall;

    return Py_BuildValue("");
}

PyObject* PyCommon::FlushStream(PyObject* self, PyObject* args)
{
    return Py_BuildValue("");
}

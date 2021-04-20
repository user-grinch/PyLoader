#include "PyCommon.h"
#include "../PyUtils.h"

PyObject* PyCommon::Wait(PyObject* self, PyObject* args)
{
    int ms;
    if (!PyArg_ParseTuple(args, "i", &ms))
        return PyBool_FromLong(0);

    while (thread_wait)
    {
        PyRun_SimpleString("time.sleep(0.01)");
    }

    if (ms != 0)
    {
        std::string str = std::string("time.sleep(") + std::to_string(ms / 1000.0f) + ")";
        PyRun_SimpleString(str.c_str());
    }

    return PyBool_FromLong(1);
}

PyObject* PyCommon::GetPyLoaderVersion(PyObject* self, PyObject* args)
{
    return Py_BuildValue("s", plugin_ver);
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
        return PyBool_FromLong(0);                               
    
    if (plugin::KeyPressed(key))
        return PyBool_FromLong(1);
    else
        return PyBool_FromLong(0);
}

PyObject* PyCommon::WriteStream(PyObject* self, PyObject* args)
{
    // Hacky way to fix duplicate call?
    static bool ignore_call = false;

    if (!ignore_call)
    {
        const char* text;
        if (!PyArg_ParseTuple(args, "s", &text))
            return NULL;

         flog << PyUtils::GetCurrentScriptName() + ".py: " + text  << std::endl;
    }
    ignore_call = !ignore_call;

    return Py_BuildValue("");
}

PyObject* PyCommon::FlushStream(PyObject* self, PyObject* args)
{
    return Py_BuildValue("");
}

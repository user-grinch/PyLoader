#include "PyCommon.h"
#include <CHud.h>
#include <frameobject.h>

PyObject* PyCommon::KeyPressed(PyObject *self, PyObject *args)
{
    int key;
    if (!PyArg_ParseTuple(args,"i", &key)) 
        return Py_False;                               
    
    if (plugin::KeyPressed(key))
        return Py_True;
    else
        return Py_False;
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

        PyThreadState* ts = PyThreadState_Get();
        PyFrameObject* frame = ts->frame;

        if (frame != NULL)
        {
            std::string path(_PyUnicode_AsString(frame->f_code->co_filename));
            std::string filename = path.substr(path.find_last_of("/\\") + 1);
            flog << filename + ": " + text  << std::endl;
        }
    }
    ignore_call = !ignore_call;

    return Py_BuildValue("");
}


PyObject* PyCommon::FlushStream(PyObject* self, PyObject* args)
{
    return Py_BuildValue("");
}

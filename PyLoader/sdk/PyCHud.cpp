#include "PyCHud.h"
#include <CHud.h>

PyObject* PyCHud::SetHelpMessage(PyObject *self, PyObject *args)
{
    char* str;
    int quick_msg, perm, add_brief;
    if (!PyArg_ParseTuple(args,"siii", &str, &quick_msg, &perm, &add_brief)) 
        return Py_False;      

    CHud::SetHelpMessage(str, quick_msg, perm, add_brief);
    return Py_True;
}

PyObject* PyCHud::SetMessage(PyObject* self, PyObject* args)
{
    char* str;
    if (!PyArg_ParseTuple(args, "s", &str))
        return Py_False;

    CHud::SetMessage(str);
    return Py_True;
}
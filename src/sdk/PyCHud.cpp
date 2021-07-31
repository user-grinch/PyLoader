#include "PyCHud.h"
#include <CHud.h>

PyObject* PyCHud::SetHelpMessage(PyObject *self, PyObject *args)
{
    char* str;
    int quick_msg, perm, add_brief;
    if (!PyArg_ParseTuple(args,"siii", &str, &quick_msg, &perm, &add_brief)) 
        return PyBool_FromLong(0);      

    CHud::SetHelpMessage(str, quick_msg, perm, add_brief);
    return PyBool_FromLong(1);
}

PyObject* PyCHud::SetMessage(PyObject* self, PyObject* args)
{
    char* str;
    if (!PyArg_ParseTuple(args, "s", &str))
        return PyBool_FromLong(0);

    CHud::SetMessage(str);
    return PyBool_FromLong(1);
}
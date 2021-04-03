#include "PyCommon.h"
#include <CHud.h>

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
#include "PyOpcodes.h"

PyObject* PyOpcodes::DisplayHud(PyObject *self, PyObject *args)
{
    int state;
    if (!PyArg_ParseTuple(args,"i", &state)) 
        return Py_False;                               
    
    plugin::Command<plugin::Commands::DISPLAY_HUD>(state);
    plugin::Command<plugin::Commands::>(state);
    return Py_True;
}

PyObject* PyOpcodes::DisplayRadar(PyObject *self, PyObject *args)
{
    int state;
    if (!PyArg_ParseTuple(args,"i", &state)) 
        return Py_False;                               
    
    plugin::Command<plugin::Commands::DISPLAY_RADAR>(state);
    return Py_True;
}
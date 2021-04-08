#include "PyOpcodes.h"

PyObject* PyOpcodes::DisplayHud(PyObject *self, PyObject *args)
{
    int state;
    if (!PyArg_ParseTuple(args,"i", &state)) 
        return Py_False;                               
    
    plugin::Command<plugin::Commands::DISPLAY_HUD>(state);
    return Py_True;
}

PyObject* PyOpcodes::CreateCar(PyObject *self, PyObject *args)
{
    int model, hveh = NULL;
    CVector coord;
 
    if (!PyArg_ParseTuple(args,"ifff", &model, &coord.x, &coord.y, &coord.z))
        return NULL;                               
    
    plugin::Command<plugin::Commands::CREATE_CAR>(model, coord.x, coord.y, coord.z, &hveh);
    return PyLong_FromLong(hveh);
}

PyObject* PyOpcodes::CreateChar(PyObject* self, PyObject* args)
{
    int ped_type, model, hveh = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "iifff",&ped_type, &model, &coord.x, &coord.y, &coord.z))
        return NULL;

    plugin::Command<plugin::Commands::CREATE_CHAR>(ped_type, model, coord.x, coord.y, coord.z, &hveh);
    return PyLong_FromLong(hveh);
}

PyObject* PyOpcodes::CreateObject(PyObject* self, PyObject* args)
{
    int model, hveh = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "ifff", &model, &coord.x, &coord.y, &coord.z))
        return NULL;

    plugin::Command<plugin::Commands::CREATE_OBJECT>(model, coord.x, coord.y, coord.z, &hveh);
    return PyLong_FromLong(hveh);
}

PyObject* PyOpcodes::RequestModel(PyObject* self, PyObject* args)
{
    int model = NULL;

    if (!PyArg_ParseTuple(args, "i", &model))
        return Py_False;

    plugin::Command<plugin::Commands::REQUEST_MODEL>(model);
    return Py_True;
}

PyObject* PyOpcodes::LoadAllModelsNow(PyObject* self, PyObject* args)
{
    plugin::Command<plugin::Commands::LOAD_ALL_MODELS_NOW>();
    return Py_True;
}

PyObject* PyOpcodes::DisplayRadar(PyObject* self, PyObject* args)
{
    int state;
    if (!PyArg_ParseTuple(args, "ifff", &state))
        return Py_False;

    plugin::Command<plugin::Commands::DISPLAY_RADAR>(state);
    return Py_True;
}

PyObject* PyOpcodes::GetCarCoordinates(PyObject* self, PyObject* args)
{
    int hveh = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "i", &hveh))
        return NULL;

    plugin::Command<plugin::Commands::GET_CAR_COORDINATES>(hveh, &coord.x, &coord.y, &coord.z);
    return Py_BuildValue("fff", coord.x, coord.y, coord.z);
}

PyObject* PyOpcodes::GetCharCoordinates(PyObject* self, PyObject* args)
{
    int hchar = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "i", &hchar))
        return NULL;

    plugin::Command<plugin::Commands::GET_CHAR_COORDINATES>(hchar, &coord.x, &coord.y, &coord.z);

    return Py_BuildValue("fff", coord.x, coord.y, coord.z);
}

PyObject* PyOpcodes::GetObjectCoordinates(PyObject* self, PyObject* args)
{
    int hobj = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "i", &hobj))
        return NULL;

    plugin::Command<plugin::Commands::GET_OBJECT_COORDINATES>(hobj, &coord.x, &coord.y, &coord.z);
    return Py_BuildValue("fff", coord.x, coord.y, coord.z);
}

PyObject* PyOpcodes::GetPlayerChar(PyObject* self, PyObject* args)
{
    return PyLong_FromLong(CPools::GetPedRef(FindPlayerPed()));
}


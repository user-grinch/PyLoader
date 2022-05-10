#pragma once
#include "Python.h"
#define MODULE_NAME "bass"

class Module
{
private:
    static PyObject* GetAudioStreamLength(PyObject* self, PyObject* args);
    static PyObject* GetAudioStreamVolume(PyObject* self, PyObject* args);
    static PyObject* Link3dAudioStreamToActor(PyObject* self, PyObject* args);
    static PyObject* Link3dAudioStreamToObject(PyObject* self, PyObject* args);
    static PyObject* Link3dAudioStreamToVehicle(PyObject* self, PyObject* args);
    static PyObject* LoadAudioStream(PyObject* self, PyObject* args);
    static PyObject* LoopAudioStream(PyObject* self, PyObject* args);
    static PyObject* LoadAudioStreamWith3dSupport(PyObject* self, PyObject* args);
    static PyObject* ReleaseAudioStream(PyObject* self, PyObject* args);
    static PyObject* SetAudioStreamPerformAction(PyObject* self, PyObject* args);
    static PyObject* SetAudioStreamVolume(PyObject* self, PyObject* args);
    static PyObject* Set3dAudioStreamPosition(PyObject* self, PyObject* args);

public:
    static inline PyMethodDef methods[] = 
    {
        {"get_length", GetAudioStreamLength, METH_VARARGS},
        {"get_volume", GetAudioStreamVolume, METH_VARARGS},
        {"link3d_to_ped", Link3dAudioStreamToActor, METH_VARARGS},
        {"link3d_to_obj", Link3dAudioStreamToObject, METH_VARARGS},
        {"link3d_to_veh", Link3dAudioStreamToVehicle, METH_VARARGS},
        {"release", ReleaseAudioStream, METH_VARARGS},
        {"load", LoadAudioStream, METH_VARARGS},
        {"loop", LoopAudioStream, METH_VARARGS},
        {"load3d", LoadAudioStreamWith3dSupport, METH_VARARGS},
        {"set_perform_action", SetAudioStreamPerformAction, METH_VARARGS},
        {"set_volume", SetAudioStreamVolume, METH_VARARGS},
        {"set3d_position", Set3dAudioStreamPosition, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef module = {PyModuleDef_HEAD_INIT, MODULE_NAME, NULL, -1, methods, NULL, NULL, NULL, NULL};

public:
    Module()
    {
        PyImport_AppendInittab(MODULE_NAME, init);
    }

    static PyObject* init()
    {
        PyObject* m = PyModule_Create(&module);
        return m;
    }
    Module(Module&) = delete;
};
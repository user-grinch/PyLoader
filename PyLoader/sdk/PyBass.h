/*
* This module provides minimal APIs to deal with bass
* For more advanced usage, use the pybass3 module
*/
#pragma once
#include "../pch.h"

class PyBass
{
private:
    static PyObject* GetAudioStreamLength(PyObject* self, PyObject* args);
    static PyObject* GetAudioStreamVolume(PyObject* self, PyObject* args);
    //static PyObject* Link3dAudioStreamToActor(PyObject* self, PyObject* args);
    //static PyObject* Link3dAudioStreamToObject(PyObject* self, PyObject* args);
    //static PyObject* Link3dAudioStreamToVehicle(PyObject* self, PyObject* args);
    static PyObject* LoadAudioStream(PyObject* self, PyObject* args);
    static PyObject* LoopAudioStream(PyObject* self, PyObject* args);
    static PyObject* LoadAudioStreamWith3dSupport(PyObject* self, PyObject* args);
    static PyObject* ReleaseAudioStream(PyObject* self, PyObject* args);
    static PyObject* SetAudioStreamPerformAction(PyObject* self, PyObject* args);
    static PyObject* SetAudioStreamVolume(PyObject* self, PyObject* args);
    static PyObject* Set3dAudioStreamPosition(PyObject* self, PyObject* args);

    static inline PyMethodDef Methods[] =
    {
        {"get_audiostream_length", GetAudioStreamLength, METH_VARARGS},
        {"get_audiostream_volume", GetAudioStreamVolume, METH_VARARGS},
        //{"link_3d_audiostream_to_actor", Link3dAudioStreamToActor, METH_VARARGS},
        //{"link_3d_audiostream_to_obj", Link3dAudioStreamToObject, METH_VARARGS},
        //{"link_3d_audiostream_to_veh", Link3dAudioStreamToVehicle, METH_VARARGS},
        {"load_audio_stream", LoadAudioStream, METH_VARARGS},
        {"loop_audio_stream", LoopAudioStream, METH_VARARGS},
        {"load_audio_stream_with_3d_support", LoadAudioStreamWith3dSupport, METH_VARARGS},
        {"release_audiostream", ReleaseAudioStream, METH_VARARGS},
        {"set_audiostream_perform_action", SetAudioStreamPerformAction, METH_VARARGS},
        {"set_audiostream_volume", SetAudioStreamVolume, METH_VARARGS},
        {"set_3d_audiostream_position", Set3dAudioStreamPosition, METH_VARARGS},
        {} // sentinel
    };
    static inline PyModuleDef Module = { PyModuleDef_HEAD_INIT, "bass", NULL, -1, Methods, NULL, NULL, NULL, NULL };

public:
    static PyObject* Init(void)
    {
        return PyModule_Create(&Module);
    }

    PyBass() = delete;
    PyBass(PyBass&) = delete;
};

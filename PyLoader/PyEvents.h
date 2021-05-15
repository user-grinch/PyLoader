#pragma once
#include <Python.h>

class PyEvents
{
public:
	static bool ScriptTerminate(PyObject* pModule);
	static void VehicleCreate(PyObject* pModule);

	PyEvents() = delete;
	PyEvents(PyEvents&) = delete;
};


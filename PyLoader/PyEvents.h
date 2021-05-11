#pragma once
#include <Python.h>

class PyEvents
{
public:
	static void ScriptTerminate(PyObject* pModule);

	PyEvents() = delete;
	PyEvents(PyEvents&) = delete;
};


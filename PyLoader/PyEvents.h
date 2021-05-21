#pragma once
#include <Python.h>
#include <vector>
#include "pch.h"
#include "PyEventsInternal.h"

class PyEvents
{
public:
	static void InitAllEvents();
	static bool ScriptTerminate(PyObject* pModule);
	static inline PyEventsInternal::VehCreateEvent vehCreateEvent;
	static inline PyEventsInternal::VehRenderEvent vehRenderEvent;
	static inline PyEventsInternal::VehDestroyEvent vehDestroyEvent;
	static inline PyEventsInternal::PedCreateEvent pedCreateEvent;
	static inline PyEventsInternal::PedRenderEvent pedRenderEvent;
	static inline PyEventsInternal::PedDestroyEvent pedDestroyEvent;
	static inline PyEventsInternal::ObjCreateEvent objCreateEvent;
	static inline PyEventsInternal::ObjRenderEvent objRenderEvent;
	static inline PyEventsInternal::ObjDestroyEvent objDestroyEvent;

	PyEvents() = delete;
	PyEvents(PyEvents&) = delete;
};


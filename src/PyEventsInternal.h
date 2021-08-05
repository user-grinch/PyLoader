#pragma once
#include "EventList.h"

using namespace plugin;

namespace PyEventsInternal
{
	extern CdeclEvent<AddressList<0x53C6DB, H_CALL>, PRIORITY_BEFORE, ArgPickNone, void()> restartEvent;
	extern CdeclEvent <AddressList<0x5D19CE, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> loadEvent;

	class EventBase
	{
	protected:
		std::vector<PyObject*> pFuncs;

	public:
		void AddModule(PyObject* pModule, std::string func_name)
		{
			PyObject* pFunc = PyObject_GetAttrString(pModule, func_name.c_str());
			if (pFunc)
			{
				pFuncs.push_back(pFunc);
				Py_INCREF(pFunc);
			}
		}

		void RemoveFunc(PyObject* pFunc)
		{
			for (auto it = pFuncs.begin(); it != pFuncs.end(); ++it)
			{
				if (*it == pFunc)
				{
					pFuncs.erase(it);
					Py_XDECREF(*it);
				}
			}
		}

		virtual void Callback(void* ptr) = 0;
		virtual void Init() = 0;
	};

	class VehEvent : public EventBase
	{
	public:
		void Callback(void* ptr)
		{
			if (!ptr)
				return;

			CVehicle* pVeh = (CVehicle*)ptr;
			PyGILState_STATE gstate = PyGILState_Ensure();

			for (auto it = pFuncs.begin(); it != pFuncs.end(); ++it)
			{
				PyObject* pFunc = *it;
				if (pFunc && PyCallable_Check(pFunc))
				{
					PyObject* pArgs = PyTuple_New(1);
					PyObject_CallFunction(pFunc, "i", CPools::GetVehicleRef(pVeh));
				}
			}
			PyGILState_Release(gstate);
		}
	};

	class PedEvent : public EventBase
	{
	public:
		void Callback(void* ptr)
		{
			if (!ptr)
				return;

			CPed* pPed = (CPed*)ptr;
			PyGILState_STATE gstate = PyGILState_Ensure();

			for (auto it = pFuncs.begin(); it != pFuncs.end(); ++it)
			{
				PyObject* pFunc = *it;
				if (pFunc && PyCallable_Check(pFunc))
				{
					PyObject* pArgs = PyTuple_New(1);
					PyObject_CallFunction(pFunc, "i", CPools::GetPedRef(pPed));
				}
			}
			PyGILState_Release(gstate);
		}
	};

	class ObjEvent : public EventBase
	{
	public:
		void Callback(void* ptr)
		{
			if (!ptr)
				return;

			CObject* pObj = (CObject*)ptr;
			PyGILState_STATE gstate = PyGILState_Ensure();

			for (auto it = pFuncs.begin(); it != pFuncs.end(); ++it)
			{
				PyObject* pFunc = *it;
				if (pFunc && PyCallable_Check(pFunc))
				{
					PyObject* pArgs = PyTuple_New(1);
					PyObject_CallFunction(pFunc, "i", CPools::GetObjectRef(pObj));
				}
			}
			PyGILState_Release(gstate);
		}
	};

	class NoParamEvent : public EventBase
	{
	public:
		void Callback(void* ptr)
		{
			PyGILState_STATE gstate = PyGILState_Ensure();

			for (auto it = pFuncs.begin(); it != pFuncs.end(); ++it)
			{
				PyObject* pFunc = *it;
				if (pFunc && PyCallable_Check(pFunc))
				{
					PyObject* pArgs = PyTuple_New(1);
					PyObject_CallFunction(pFunc,"");
				}
			}
			PyGILState_Release(gstate);
		}
	};

	class RestartEvent : public NoParamEvent
	{
	public:
		void Init()
		{
			restartEvent += [&]()
			{
				Callback(nullptr);
			};
		}
	};

	class LoadEvent : public NoParamEvent
	{
	public:
		void Init()
		{
			loadEvent += [&]()
			{
				Callback(nullptr);
			};
		}
	};

	class VehCreateEvent : public VehEvent
	{
	public:
		void Init()
		{
			plugin::Events::vehicleCtorEvent += [&](CVehicle* pVeh)
			{
				Callback(pVeh);
			};
		}
	};

	class VehRenderEvent : public VehEvent
	{
	public:
		void Init()
		{
			plugin::Events::vehicleRenderEvent += [&](CVehicle* pVeh)
			{
				Callback(pVeh);
			};
		}
	};

	class VehDestroyEvent : public VehEvent
	{
	public:
		void Init()
		{
			plugin::Events::vehicleDtorEvent += [&](CVehicle* pVeh)
			{
				Callback(pVeh);
			};
		}
	};

	class PedCreateEvent : public PedEvent
	{
	public:
		void Init()
		{
			plugin::Events::pedCtorEvent += [&](CPed* pPed)
			{
				Callback(pPed);
			};
		}
	};

	class PedRenderEvent : public PedEvent
	{
	public:
		void Init()
		{
			plugin::Events::pedRenderEvent += [&](CPed* pPed)
			{
				Callback(pPed);
			};
		}
	};

	class PedDestroyEvent : public PedEvent
	{
	public:
		void Init()
		{
			plugin::Events::pedDtorEvent += [&](CPed* pPed)
			{
				Callback(pPed);
			};
		}
	};

	class ObjCreateEvent : public ObjEvent
	{
	public:
		void Init()
		{
			plugin::Events::objectCtorEvent += [&](CObject* pObj)
			{
				Callback(pObj);
			};
		}
	};

	class ObjRenderEvent : public ObjEvent
	{
	public:
		void Init()
		{
			plugin::Events::objectRenderEvent += [&](CObject* pObj)
			{
				Callback(pObj);
			};
		}
	};

	class ObjDestroyEvent : public ObjEvent
	{
	public:
		void Init()
		{
			plugin::Events::objectDtorEvent += [&](CObject* pObj)
			{
				Callback(pObj);
			};
		}
	};
}
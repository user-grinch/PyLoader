#include "PyEvents.h"
#include "pch.h"
#include "ScriptData.hpp"

decltype(PyEventsInternal::restartEvent) PyEventsInternal::restartEvent;
decltype(PyEventsInternal::loadEvent) PyEventsInternal::loadEvent;

void PyEvents::InitAllEvents()
{
    vehCreateEvent.Init();
    vehRenderEvent.Init();
    vehDestroyEvent.Init();
    pedCreateEvent.Init();
    pedRenderEvent.Init();
    pedDestroyEvent.Init();
    objCreateEvent.Init();
    objRenderEvent.Init();
    objDestroyEvent.Init();
    restartEvent.Init();
    loadEvent.Init();
}

void PyEvents::RegisterEvents()
{
    ScriptData::Data* pScriptData = ScriptData::Get(GetCurrentThreadId());
    vehCreateEvent.AddModule(pScriptData->m_pModule, "on_veh_create");
    vehDestroyEvent.AddModule(pScriptData->m_pModule, "on_veh_destroy");
    vehRenderEvent.AddModule(pScriptData->m_pModule, "on_veh_render");
    pedCreateEvent.AddModule(pScriptData->m_pModule, "on_ped_create");
    pedDestroyEvent.AddModule(pScriptData->m_pModule, "on_ped_destroy");
    pedRenderEvent.AddModule(pScriptData->m_pModule, "on_ped_render");
    objCreateEvent.AddModule(pScriptData->m_pModule, "on_obj_create");
    objDestroyEvent.AddModule(pScriptData->m_pModule, "on_obj_destroy");
    objRenderEvent.AddModule(pScriptData->m_pModule, "on_obj_render");
    restartEvent.AddModule(pScriptData->m_pModule, "on_game_restart");
    loadEvent.AddModule(pScriptData->m_pModule, "on_save_load");
}

bool PyEvents::ScriptTerminate(PyObject* pModule)
{
    bool error_state = false;
    if (PyErr_Occurred())
    {
        error_state = true;
        PyErr_Print();
    }

    PyErr_Clear();

    PyObject* pTerminateFunc = PyObject_GetAttrString(pModule, "on_script_terminate");
    if (pTerminateFunc && PyCallable_Check(pTerminateFunc))
    {
        PyObject_CallFunction(pTerminateFunc, "i", error_state);
        return false;
    }
    
    PyErr_Clear();
    return true;
}


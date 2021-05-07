#include "ScriptData.hpp"
#include "PyLoader.h"
#include <frameobject.h>
#include "sdk/PyCHud.h"
#include "sdk/PyCommon.h"
#include "sdk/PyOpcodes.h"
#include "sdk/PyCLEO.h"
#include "sdk/PyMemory.h"
#include "sdk/PyScript.h"
#include "sdk/PyInternal.h"

std::ofstream flog("PyLoader.log");
size_t game_ticks = 0;

void PyLoader::LoadPlugins(std::string&& dir_name)
{
    HANDLE dir;
    WIN32_FIND_DATA file_data;

    std::string path = std::string(".\\PyLoader\\") + dir_name + "\\*.dll";
    dir = FindFirstFile(path.c_str(), &file_data);
    if (dir != INVALID_HANDLE_VALUE)
    {
        do {
            std::string file_name = PLUGIN_PATH((char*)"PyLoader\\") + dir_name + "\\" + std::string(file_data.cFileName);
            HINSTANCE hDll = LoadLibrary(file_name.c_str());

            if (hDll)
            {
                FARPROC func = GetProcAddress(hDll, "RegisterPlugin");
                if (func)
                {
                    func();
                    flog << "Loaded plugin " << file_data.cFileName << std::endl;
                }
                else
                    flog << "Failed to find register plugin " << file_data.cFileName << std::endl;
            }
            else
                flog << "Failed to load plugin " << file_data.cFileName << std::endl;

        } while (FindNextFile(dir, &file_data));
    }

    FindClose(dir);
}

void PyLoader::PluginThread(void* param)
{
    plugin::Events::processScriptsEvent += []
    {
        game_ticks++;
    };
    
	flog << "------------------------------\nStarting PyLoader v" << plugin_ver
         << "\nAuthor: Grinch_\n------------------------------"<< std::endl;

    HANDLE dir;
    WIN32_FIND_DATA file_data;

    LoadPlugins("lib");
    LoadPlugins("libstd");

    dir = FindFirstFile("./PyLoader/*.py", &file_data);

    PyImport_AppendInittab("common", &PyCommon::Init);
    PyImport_AppendInittab("hud", &PyCHud::Init);
    PyImport_AppendInittab("memory", &PyMemory::Init);
    PyImport_AppendInittab("opcodes", &PyOpcodes::Init);
    PyImport_AppendInittab("cleo", &PyCLEO::Init);
    PyImport_AppendInittab("script", &PyScript::Init);
    PyImport_AppendInittab("_internal", &PyInternal::Init);
    
    Py_Initialize();
    PyEval_InitThreads();
    PyImport_ImportModule("common");
    PyEval_ReleaseLock();
    
    // load scripts
    if (dir != INVALID_HANDLE_VALUE)
    {
        do {
            std::string* file_name = new std::string("PyLoader." + std::string(file_data.cFileName));

            file_name->erase(file_name->end() - 3, file_name->end());
            CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::ExecuteScript, file_name, NULL, NULL);
            Sleep(100);

        } while (FindNextFile(dir, &file_data));
    }

    while (true)
    {   
        Sleep(10000);
    }
    // TODO: Handle sending a terminate message to py script
    Py_Finalize();
}

int PyLoader::ExecuteScript(std::string *path)
{
    size_t scriptTicks = 0;
    PyGILState_STATE gstate = PyGILState_Ensure();
    PyObject *pTerminateFunc, *pModule, *pGlobal, *pLocal;

    std::string filename = path->substr(path->find_last_of("/.") + 1) + ".py";
    flog << "Loading script " << filename << std::endl;

    std::string file_path = std::string(plugin::paths::GetPluginDirPathA()) + "PyLoader\\" + filename;
    FILE* fp = fopen(file_path.c_str(), "rb");

    fseek(fp, 0, SEEK_END);
    size_t len = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    char* buf = (char*)malloc(len+1);
    fread(buf, 1, len, fp);
    buf[len] = '\0';
    fclose(fp);

    DWORD thread_id = GetCurrentThreadId();
    ScriptData::Data* script_data = ScriptData::Get(thread_id);
    script_data->file_name = filename;
    script_data->ticks = game_ticks;
    PyRun_SimpleString("import time");
    pGlobal = PyDict_New();

    pModule = PyModule_New(filename.c_str());
    PyModule_AddStringConstant(pModule, "__file__", "");
    pLocal = PyModule_GetDict(pModule);
    PyRun_String(buf, Py_file_input, pGlobal, pLocal);

    bool error_state = false;
    if (PyErr_Occurred())
    {
        error_state = true;
        PyErr_Print();
    }

    pTerminateFunc = PyObject_GetAttrString(pModule, "on_script_terminate");

    if (pTerminateFunc && PyCallable_Check(pTerminateFunc))
    {
        PyObject* pArgs = PyTuple_New(1);
        PyTuple_SetItem(pArgs, 0, PyLong_FromLong(error_state));

        PyObject_CallObject(pTerminateFunc, pArgs);
        if (PyErr_Occurred())
            PyErr_Print();
    }

    delete buf;
    ScriptData::Remove(thread_id);
    delete path;
    PyGILState_Release(gstate);
    return 0;
}
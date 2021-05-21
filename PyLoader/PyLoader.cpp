#include "ScriptData.hpp"
#include "PyLoader.h"
#include <frameobject.h>
#include <Urlmon.h>
#include "depend/jute.h"
#include "sdk/PyCHud.h"
#include "sdk/PyCommon.h"
#include "sdk/PyOpcodes.h"
#include "sdk/PyCLEO.h"
#include "sdk/PyMemory.h"
#include "sdk/PyScript.h"
#include "sdk/PyInternal.h"
#include "PyEvents.h"

std::ofstream flog("PyLoader.log");
size_t game_ticks = 0;

void PyLoader::LoadPlugins(std::string&& dir_name)
{
    HANDLE dir;
    WIN32_FIND_DATA file_data;

    std::string path = std::string(".\\PyLoader\\") + dir_name + "\\*.dll";
    dir = FindFirstFileA(path.c_str(), &file_data);
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
                    flog << "Failed to load " << file_data.cFileName << std::endl;
            }
            else
                flog << "Failed to load plugin " << file_data.cFileName << std::endl;

        } while (FindNextFile(dir, &file_data));
    }

    FindClose(dir);
}

void PyLoader::CheckUpdate()
{
    const char* link = "https://api.github.com/repos/user-grinch/PyLoaderSA/tags";
    char* path = PLUGIN_PATH((char*)"versioninfo.json");
    HRESULT res = URLDownloadToFile(NULL, link, path, 0, NULL);

    if (res == E_OUTOFMEMORY || res == INET_E_DOWNLOAD_FAILURE)
    {
        flog << "Failed checking for updates." << std::endl;
        return;
    }

    FILE* fp = fopen(path, "r");
    fseek(fp, 0, SEEK_END);
    size_t len = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    char* buf = (char*)malloc(len + 1);

    if (buf != NULL)
    {
        fread(buf, 1, len, fp);
        buf[len] = '\0';
        fclose(fp);
        jute::jValue v = jute::parser::parse(buf);

        std::string ver = v[0]["name"].as_string();
        if (ver > plugin_ver)
            flog << "New version available. Download: https:///github.com/user-grinch/PyLoaderSA/releases/tag/"
            << ver << std::endl;
        else
            flog << "No updates found" << std::endl;
    }
    else
        flog << "Failed to download update info" << std::endl;
   
    delete buf;
    std::remove(path);
}

void PyLoader::PluginThread(void* param)
{
    plugin::Events::processScriptsEvent += []
    {
        game_ticks++;
    };
    
    flog << "------------------------------\nStarting PyLoader v" << plugin_ver
        << "\nAuthor: Grinch_\nMore info: https:///github.com/user-grinch/PyLoaderSA/" << std::endl;

    CheckUpdate();

    flog << "------------------------------"<< std::endl;

    HANDLE dir;
    WIN32_FIND_DATA file_data;

    LoadPlugins("lib");
    LoadPlugins("libstd");

    dir = FindFirstFileA("./PyLoader/*.py", &file_data);

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
    
    PyEvents::InitAllEvents();

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
    
    Py_Finalize();
}

int PyLoader::ExecuteScript(std::string *path)
{
    size_t scriptTicks = 0;
    PyGILState_STATE gstate = PyGILState_Ensure();
    PyObject *pGlobal, *pLocal;

    std::string filename = path->substr(path->find_last_of("/.") + 1);
    std::string fullname = filename + ".py";
    std::string file_path = std::string(plugin::paths::GetPluginDirPathA()) + "PyLoader\\" + fullname;
    flog << "Loading script " << fullname << std::endl;

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
    script_data->file_name = fullname;
    script_data->ticks = game_ticks;
    script_data->pModule = PyModule_New(fullname.c_str());

    PyModule_AddStringConstant(script_data->pModule, "__name__", filename.c_str());
    PyModule_AddStringConstant(script_data->pModule, "__file__", fullname.c_str());

    pGlobal = PyDict_New();
    pLocal = PyModule_GetDict(script_data->pModule);

    PyRun_String(buf, Py_file_input, pGlobal, pLocal);
    
    if (script_data->exit_flag != EXITING_FLAGS::NORMAL_EXIT)
        PyErr_Clear();

    if (PyEvents::ScriptTerminate(script_data->pModule) && PyErr_Occurred())
        PyErr_Print();

    if (script_data->exit_flag == EXITING_FLAGS::RELOADING)
        CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::ExecuteScript, path, NULL, NULL);
    else
        delete path;

    ScriptData::Remove(thread_id);

    delete buf;
    PyGILState_Release(gstate);
    return 0;
}

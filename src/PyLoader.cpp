#include "ScriptData.hpp"
#include "PyLoader.h"
#include <frameobject.h>
#include <Urlmon.h>
#include "depend/jute.h"
#include "sdk/PyCommon.h"
#include "sdk/PyOpcodes.h"
#include "sdk/PyCLEO.h"
#include "sdk/PyMemory.h"
#include "sdk/PyScript.h"
#include "sdk/PyPool.h"
#include "sdk/PyBass.h"
#include "PyEvents.h"
#include "SoundSystem.h"

CSoundSystem SoundSystem;

void PyLoader::LoadPlugins(std::string&& dirName)
{
    WIN32_FIND_DATA fileData;
    std::string path = std::format("%s%s/*.dll", PLUGIN_PATH((char*)"PyLoader/"), dirName);
    HANDLE dir = FindFirstFileA(path.c_str(), &fileData);

    if (dir != INVALID_HANDLE_VALUE)
    {
        do {
            std::string fileName = std::format("%s/%s", path.c_str(), fileData.cFileName);
            HINSTANCE hDll = LoadLibrary(fileName.c_str());

            if (hDll)
            {
                FARPROC func = GetProcAddress(hDll, "RegisterPlugin");
                if (func)
                {
                    func();
                    gLog << "Loaded plugin " << fileData.cFileName << std::endl;
                }
                else
                {
                    gLog << "Failed to load " << fileData.cFileName << std::endl;
                }
            }
            else
            {
                gLog << "Failed to load plugin " << fileData.cFileName << std::endl;
            }

        } while (FindNextFile(dir, &fileData));
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
        gLog << "Failed checking for updates." << std::endl;
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
        if (ver > gPluginVer)
        {
            gLog << "New version available. Download: https:///github.com/user-grinch/PyLoaderSA/releases/tag/"
                        << ver << std::endl;
        }
        else
        {
            gLog << "No updates found" << std::endl;
        }
    }
    else
    {
        gLog << "Failed to download update info" << std::endl;
    }
   
    delete buf;
    std::remove(path);
}

void PyLoader::PluginThread(void* param)
{
    plugin::Events::processScriptsEvent += []
    {
        gGameTicks++;
    };
    
    gLog << "------------------------------\nStarting PyLoader v" << gPluginVer
        << "\nAuthor: Grinch_\nThanks: CLEO4 & PluginSDK devs\nMore info: https:///github.com/user-grinch/PyLoaderSA/" << std::endl;

    CheckUpdate();

    gLog << "------------------------------"<< std::endl;

    HANDLE dir;
    WIN32_FIND_DATA fileData;

    /*
        Load all the .dll modules from lib and libstd folder
        libstd folder is reserved for first party modules only
        put third party ones inside the lib folder
    */
    LoadPlugins("lib");
    LoadPlugins("libstd");

    dir = FindFirstFileA("./PyLoader/*.py", &fileData);

    // Init our modules
    PyImport_AppendInittab("_bass", &PyBass::Init);
    PyImport_AppendInittab("_common", &PyCommon::Init);
    PyImport_AppendInittab("_memory", &PyMemory::Init);
    PyImport_AppendInittab("_opcodes", &PyOpcodes::Init);
    PyImport_AppendInittab("_cleo", &PyCLEO::Init);
    PyImport_AppendInittab("_script", &PyScript::Init);
    PyImport_AppendInittab("_pool", &PyPool::Init);
    
    Py_Initialize();
    PyEval_InitThreads();
    PyImport_ImportModule("_common");
    PyEval_ReleaseLock();
    
    PyEvents::InitAllEvents();
    SoundSystem.Inject();
    SoundSystem.Init(RsGlobal.ps->window);

    // Loading .py scripts
    if (dir != INVALID_HANDLE_VALUE)
    {
        do 
        {
            std::string* fileName = new std::string("PyLoader." + std::string(fileData.cFileName));

            // remove the extension
            fileName->erase(fileName->end() - 3, fileName->end());
            CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::ExecuteScript, fileName, NULL, NULL);
            Sleep(100);
        } while (FindNextFile(dir, &fileData));
    }

    while (true)
    {   
        Sleep(10000);
    }
    
    Py_Finalize();
}

int PyLoader::ExecuteScript(std::string *path)
{
    PyGILState_STATE gState = PyGILState_Ensure();
    PyObject *pGlobal, *pLocal;

    std::string fileName = path->substr(path->find_last_of("/.") + 1);
    std::string fullName = fileName + ".py";
    std::string filePath = std::string(plugin::paths::GetPluginDirPathA()) + "PyLoader\\" + fullName;
    gLog << "Loading script " << fullName << std::endl;

    // copy the file into a mem buffer
    FILE* pFile = fopen(filePath.c_str(), "rb");
    fseek(pFile, 0, SEEK_END);
    size_t len = ftell(pFile);
    fseek(pFile, 0, SEEK_SET);
    char* buf = (char*)malloc(len+1);
    fread(buf, 1, len, pFile);
    buf[len] = '\0';
    fclose(pFile);

    DWORD threadId = GetCurrentThreadId();
    ScriptData::Data* pScriptData = ScriptData::Get(threadId);
    pScriptData->fileName = fullName;
    pScriptData->m_nTicks = gGameTicks;
    pScriptData->m_pModule = PyModule_New(fullName.c_str());

    PyModule_AddStringConstant(pScriptData->m_pModule, "__name__", fileName.c_str());
    PyModule_AddStringConstant(pScriptData->m_pModule, "__file__", fullName.c_str());

    pGlobal = PyDict_New();
    pLocal = PyModule_GetDict(pScriptData->m_pModule);

    Py_XINCREF(pGlobal);
    Py_XINCREF(pLocal);

    PyRun_String(buf, Py_file_input, pGlobal, pLocal);
    

    // Force shutdown spits out errors so let's clear those up
    if (pScriptData->m_eExitFlags != EXITING_FLAGS::NORMAL_EXIT)
    {
        PyErr_Clear();
    }

    if (PyEvents::ScriptTerminate(pScriptData->m_pModule) && PyErr_Occurred())
    {
        PyErr_Print();
    }

    if (pScriptData->m_eExitFlags == EXITING_FLAGS::RELOADING)
    {
        CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::ExecuteScript, path, NULL, NULL);
    }
    else
    {
        delete path;
    }

    // cleanup
    ScriptData::Remove(threadId);
    delete buf;
    Py_XDECREF(pGlobal);
    Py_XDECREF(pLocal);
    PyGILState_Release(gState);
    return 0;
}

#include "pch.h"
#include "loader.h"
#include "module.h"
#include <thread>
#include "opcodehandler.hpp"

void PyLoader::init()
{
    if (initialized)
    {
        return;
    }

    gLog << "Starting PyLoader v" << PYLOADER_VERSION << "\nAuthor: Grinch_\nMore: "<<
        GITHUB_LINK << "\n\n" << std::endl;

    PyImport_AppendInittab("_core_", &Core::init);

    // look for dll plugins to load
    load_plugins("lib");
    load_plugins("libstd");
    OpcodeHandler::register_commands();

    // init the python interpreter
    Py_SetProgramName((wchar_t*)"PyLoader");
    Py_Initialize();
    if (!Py_IsInitialized()) 
    {
        gLog << "Unable to initialize Python interpreter." << std::endl;
        return;
    }
    PyImport_ImportModule("_core_");
    PyEval_ReleaseLock();

    initialized = true;
}

void PyLoader::cleanup()
{
    if (!initialized)
    {
        return;
    }

    Py_Finalize();
    initialized = false;
}

void PyLoader::process()
{   
    init();

    while (true)
    {
        watcher.update(f_watcher);
        Sleep(1000);
    }

    cleanup();
}

void PyLoader::f_watcher(const std::string& file_path, eFileStatus state)
{
    // Process only regular files, all other file types are ignored
    std::filesystem::path path = std::filesystem::path(file_path);
    if(!std::filesystem::is_regular_file(path) 
        && state != eFileStatus::removed) 
    {
        return;
    }

    switch(state) 
    {
        case eFileStatus::created:
        {
            std::thread *pthread = new std::thread(PyLoader::load_script, path.stem().string());
            ScriptData *pdata = ScriptMgr::get(pthread->get_id());
            pdata->file_name = path.stem().string();
            break;
        }
        case eFileStatus::modified:
        {
            break;
        }
        case eFileStatus::removed:
        {
            break;
        }
        default:
        {
            break;
        }
    }
}

void PyLoader::load_script(std::string name)
{
    PyGILState_STATE gstate = PyGILState_Ensure();
    PyObject *pglobal, *plocal;

    std::string path = "./PyLoader/" + name + ".py";
    gLog << "Loading script " << name << std::endl;


    /* 
        Copying the script into a mem buffer
        Than calling python interpreter 

        Dunno if there's a less verbose way to do this
    */
    FILE* pfile = fopen(path.c_str(), "rb");
    fseek(pfile, 0, SEEK_END);
    size_t len = ftell(pfile);
    fseek(pfile, 0, SEEK_SET);
    char* buf = (char*)malloc(len+1);
    fread(buf, 1, len, pfile);
    buf[len] = '\0';
    fclose(pfile);

    PyObject *pmodule = PyModule_New(name.c_str());
    pglobal = PyDict_New();
    plocal = PyModule_GetDict(pmodule);

    Py_XINCREF(pglobal);
    Py_XINCREF(plocal);
    PyRun_String("from _core_ import *", Py_file_input, pglobal, plocal);
    PyRun_String(buf, Py_file_input, pglobal, plocal);

    if (PyErr_Occurred())
    {
        PyErr_Print();
    }

    delete buf;
    Py_XDECREF(pglobal);
    Py_XDECREF(plocal);
    PyGILState_Release(gstate);
}

void PyLoader::load_plugins(std::string&& dirName)
{
    WIN32_FIND_DATA fileData;
    std::string path = std::format("./PyLoader/{}/*.dll", dirName);
    HANDLE dir = FindFirstFileA(path.c_str(), &fileData);

    if (dir != INVALID_HANDLE_VALUE)
    {
        do {
            std::string fileName = std::format("./PyLoader/{}/{}", dirName, fileData.cFileName);
            if (LoadLibrary(fileName.c_str()))
            {
                gLog << "Loading plugin " << fileData.cFileName << std::endl;
            }
            else
            {
                gLog << "Failed to load plugin " << fileData.cFileName << std::endl;
            }
        } while (FindNextFile(dir, &fileData));
    }

    FindClose(dir);
}
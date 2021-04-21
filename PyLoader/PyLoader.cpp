#include "ScriptData.hpp"
#include "PyLoader.h"
#include <frameobject.h>
#include "sdk/PyCHud.h"
#include "sdk/PyCommon.h"
#include "sdk/PyOpcodes.h"
#include "sdk/PyMemory.h"
#include "sdk/PyScript.h"

std::ofstream flog("PyLoader.log");
size_t game_ticks = 0;

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

    // load plugins
    if ((dir = FindFirstFile("./PyLoader/libstd/*.dll", &file_data)) != INVALID_HANDLE_VALUE)
    {
        do {
            std::string file_name = PLUGIN_PATH((char*)"PyLoader\\libstd\\") + std::string(file_data.cFileName);
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
                    flog << "Failed to find RegisterPlugin " << file_data.cFileName << std::endl;
            }
            else
                flog << "Failed to load plugin " << file_data.cFileName << std::endl;

        } while (FindNextFile(dir, &file_data));
    }

    PyImport_AppendInittab("common", &PyCommon::Init);
    PyImport_AppendInittab("hud", &PyCHud::Init);
    PyImport_AppendInittab("memory", &PyMemory::Init);
    PyImport_AppendInittab("opcodes", &PyOpcodes::Init);
    PyImport_AppendInittab("script", &PyScript::Init);
    
    Py_Initialize();
    PyEval_InitThreads();
    PyImport_ImportModule("common");
    PyEval_ReleaseLock();
    
    // load scripts
    if ((dir = FindFirstFile("./PyLoader/*.py", &file_data)) == INVALID_HANDLE_VALUE)
        return;

    do {
        std::string *file_name = new std::string("PyLoader." + std::string(file_data.cFileName));
        
        file_name->erase(file_name->end()-3,file_name->end());
        CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::ExecuteScript, file_name, NULL, NULL);
        Sleep(100);

    } while (FindNextFile(dir, &file_data));

    while (true)
    {   
        Sleep(10000);
    }
    // TODO: Handle sending a terminate message to py script
    Py_Finalize();
}

void PyLoader::PrintError()
{
    std::string result;
    PyObject* ptype, * pvalue, * ptraceback;
    PyErr_Fetch(&ptype, &pvalue, &ptraceback);
    PyErr_NormalizeException(&ptype, &pvalue, &ptraceback);
    PyTracebackObject* traceback = (PyTracebackObject*)ptraceback;

    PyObject* objectStr = PyObject_GetAttrString(ptype, "__name__");
    result = PyUnicode_AsUTF8(objectStr);
    result = "Exception: " + result;;
    Py_XDECREF(objectStr);
    objectStr = PyObject_Str(pvalue);

    if (objectStr != NULL) {
        result = result + " \"" + PyUnicode_AsUTF8(objectStr) + "\"\nTraceback,\n";
        Py_XDECREF(objectStr);
    }

    while (traceback != NULL && traceback->tb_frame != NULL)
    {
        int line = PyCode_Addr2Line(traceback->tb_frame->f_code, traceback->tb_frame->f_lasti);
        std::string file_path(PyUnicode_AsUTF8(traceback->tb_frame->f_code->co_filename));
        std::string filename = file_path.substr(file_path.find_last_of("/.") + 1) + ".py";
        const char* funcname = PyUnicode_AsUTF8(traceback->tb_frame->f_code->co_name);

        result += filename + ": Line " + std::to_string(line) + ", " + funcname + "()\n";
        traceback = traceback->tb_next;
    }

    flog << result << std::endl;
}

int PyLoader::ExecuteScript(std::string *path)
{
    size_t scriptTicks = 0;
    PyGILState_STATE gstate = PyGILState_Ensure();

    std::string filename = path->substr(path->find_last_of("/.") + 1) + ".py";
    flog << "Loading script " << filename << std::endl;

    PyObject* m_pMainModule = PyImport_AddModule("__main__");
    PyObject* m_pGlobalDict = PyModule_GetDict(m_pMainModule);

    std::string file_path = std::string(plugin::paths::GetPluginDirPathA()) + "PyLoader\\" + filename;
    FILE* fp = _Py_fopen(file_path.c_str(), "r+");

    // Import needed stuff
    PyRun_SimpleString("import time");
    ScriptData::Data* script_data = ScriptData::Get(filename);
    script_data->ticks = game_ticks;

    PyObject* s = PyRun_File(fp, path->c_str(), Py_file_input, m_pGlobalDict, m_pGlobalDict);
    ScriptData::Remove(filename);
    Py_XDECREF(s);
    if (PyErr_Occurred())
        PrintError();

    PyGILState_Release(gstate);
    delete path;
    return 0;
}
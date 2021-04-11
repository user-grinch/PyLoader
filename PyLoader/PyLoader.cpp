#include "PyLoader.h"
#include <frameobject.h>
#include "sdk/PyCHud.h"
#include "sdk/PyCommon.h"
#include "sdk/PyOpcodes.h"

std::ofstream flog("PyLoader.log");

void PyLoader::PluginThread(void* param)
{
	flog << "------------------------------\nStarting PyLoader v" << plugin_ver
         << "\nAuthor: Grinch_\n------------------------------" << std::endl;

    HANDLE dir;
    WIN32_FIND_DATA file_data;
    
    if ((dir = FindFirstFile("./PyLoader/*.py", &file_data)) == INVALID_HANDLE_VALUE)
        return;
    
    PyImport_AppendInittab("common", &PyCommon::Init);
    PyImport_AppendInittab("hud", &PyCHud::Init);
    PyImport_AppendInittab("opcode", &PyOpcodes::Init);
    
    Py_Initialize();
    PyEval_InitThreads();
    PyImport_ImportModule("common");
    PyEval_ReleaseLock();
    
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
    PyGILState_STATE gstate = PyGILState_Ensure();

    std::string filename = path->substr(path->find_last_of("/.") + 1) + ".py";
    flog << "Loading script " << filename << std::endl;

    PyObject* m_pMainModule = PyImport_AddModule("__main__");
    PyObject* m_pGlobalDict = PyModule_GetDict(m_pMainModule);

    std::string file_path = std::string(plugin::paths::GetPluginDirPathA()) + "PyLoader\\" + filename;
    FILE* fp = _Py_fopen(file_path.c_str(), "r");
    PyObject* s = PyRun_File(fp, path->c_str(), Py_file_input, m_pGlobalDict, m_pGlobalDict);

    Py_XDECREF(s);

    if (PyErr_Occurred())
        PrintError();

    PyGILState_Release(gstate);
    delete path;
    return 0;
}
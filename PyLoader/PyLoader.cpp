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
    PyObject* excType, *excValue, *excTraceback;
    PyErr_Fetch(&excType, &excValue, &excTraceback);
    PyErr_NormalizeException(&excType, &excValue, &excTraceback);

    PyTracebackObject* traceback = (PyTracebackObject*)excTraceback;

    flog << "Error occured, traceback" << std::endl;
    while (traceback != NULL && traceback->tb_frame != NULL)
    {
        int line = PyCode_Addr2Line(traceback->tb_frame->f_code, traceback->tb_frame->f_lasti);
        const char *filename = PyUnicode_AsUTF8(traceback->tb_frame->f_code->co_filename);
        const char *funcname = PyUnicode_AsUTF8(traceback->tb_frame->f_code->co_name);
        flog << filename << ", Line " << line << ", " << funcname << "()" <<  std::endl;  
        traceback = traceback->tb_next;
    }
    Py_DECREF(excType);
    Py_DECREF(excValue);
    Py_DECREF(excTraceback);
}

int PyLoader::ExecuteScript(std::string *file_name)
{
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    flog << "Loading script " << *file_name << std::endl;

    PyObject *pName, *pModule, *pFunc;
    PyObject *pValue;

    pName = PyUnicode_FromString(file_name->c_str());

    pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != NULL) {
        pFunc = PyObject_GetAttrString(pModule, main_func_name);

        if (pFunc && PyCallable_Check(pFunc)) {
            
            pValue = PyObject_CallObject(pFunc, nullptr);
            if (pValue != NULL) {
                flog << "Result of call: " << PyLong_AsLong(pValue) << std::endl;
                Py_DECREF(pValue);
            }
            else {
                PrintError();
                Py_DECREF(pFunc);
                Py_DECREF(pModule);
                PyGILState_Release(gstate);
                delete file_name;
                return 1;
            }
        }
        else 
            flog << "Couldn't find " << main_func_name << "()" << std::endl;

        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }
    else {
        flog << "Failed to load " << file_name << std::endl;
        PyGILState_Release(gstate);
        delete file_name;
        return 1;
    }

    PyGILState_Release(gstate);
    delete file_name;
    return 0;
}
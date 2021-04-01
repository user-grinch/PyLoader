#include "PyLoader.h"

void PyLoader::PyLoaderThread(void* param)
{
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	std::cout << "Starting PyLoader" << std::endl;

    HANDLE dir;
    WIN32_FIND_DATA file_data;

    if ((dir = FindFirstFile("./PyLoader/*.py", &file_data)) == INVALID_HANDLE_VALUE)
        return;

    // init the interpreter 
    Py_Initialize();
    PyEval_InitThreads();
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

int PyLoader::ExecuteScript(std::string *file_name)
{
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    std::cout << "Loading script " << *file_name << std::endl;

    PyObject *pName, *pModule, *pFunc;
    PyObject *pValue;

    pName = PyUnicode_FromString(file_name->c_str());
    /* Error checking of pName left out */

    pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != NULL) {
        pFunc = PyObject_GetAttrString(pModule, MAIN_FUNC_NAME);
        /* pFunc is a new reference */

        if (pFunc && PyCallable_Check(pFunc)) {
            
            pValue = PyObject_CallObject(pFunc, nullptr);
            if (pValue != NULL) {
                std::cout << "Result of call: " << PyLong_AsLong(pValue) << std::endl;
                Py_DECREF(pValue);
            }
            else {
                Py_DECREF(pFunc);
                Py_DECREF(pModule);
                PyErr_Print();
                std::cout << "Call failed" << std::endl;
                return 1;
            }
        }
        else {
            if (PyErr_Occurred())
                PyErr_Print();
            std::cout << "Cannot find function " <<  MAIN_FUNC_NAME << std::endl;
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }
    else {
        PyErr_Print();
        std::cout << "Failed to load " << file_name << std::endl;
        return 1;
    }

    PyGILState_Release(gstate);
    delete file_name;
    return 0;
}
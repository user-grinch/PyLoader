#include "pch.h"
#include "loader.h"

void PyLoader::init()
{
    if (initialized)
    {
        return;
    }

    gLog << "Starting PyLoader v" << PYLOADER_VERSION << "\nAuthor: Grinch_\nMore: "<<
        GITHUB_LINK << "\n\n" << std::endl;

    // init the python interpreter
    Py_Initialize();
    
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
    if(!std::filesystem::is_regular_file(std::filesystem::path(file_path)) 
        && state != eFileStatus::removed) 
    {
        return;
    }

    switch(state) 
    {
        case eFileStatus::created:
        {
            gLog << file_path << std::endl;
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

void PyLoader::load_script(std::string& name)
{
    PyGILState_STATE gil_state = PyGILState_Ensure();
    PyObject *pglobal, *plocal;

    std::string path = "./PyLoader/" + name;
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
    PyRun_String(buf, Py_file_input, pglobal, plocal);
    Py_XDECREF(pglobal);
    Py_XDECREF(plocal);

    delete buf;
    PyGILState_Release(gil_state);
}

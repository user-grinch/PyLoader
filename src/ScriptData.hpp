#pragma once
#include <vector>
#include <string>
#include "pch.h"

enum class EXITING_FLAGS
{
    NORMAL_EXIT,
    RELOADING,
    UNLOADING,
};

class ScriptData
{
public:
    struct Data
    {
        PyObject* pModule = nullptr;
        size_t ticks = NULL;
        unsigned long thread_id = NULL;
        bool events_registered = false;
        bool no_reload = false;
        EXITING_FLAGS exit_flag = EXITING_FLAGS::NORMAL_EXIT;
        std::string name, file_name, author, version, desc;
    };
    static inline std::vector<Data*>* scripts = nullptr;

    ScriptData() = delete;
    ScriptData(ScriptData& ) = delete;

    static Data* Get(int thread_id)
    {
        if (!scripts)
            scripts = new std::vector<Data*>;

        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data
            if ((*it)->thread_id == thread_id)
                return *it;
        }

        // return the new data
        Data* script = new Data();
        script->thread_id = thread_id;
        scripts->push_back(script);
        return script;
    }

    static Data* FindFromName(const std::string& str)
    {
        if (!scripts)
            scripts = new std::vector<Data*>;

        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            if ((*it)->file_name == str)
                return *it;
        }

        return nullptr;
    }

    static void Remove(int thread_id)
    {
        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data 
            if ((*it)->thread_id == thread_id)
            {
                Py_XDECREF((*it)->pModule);
                scripts->erase(it);
                break;
            }
        }
    }

    static void Reload(const std::string& str)
    {
        Unload(str, true);
    }

    static void Unload(const std::string& str, bool reload = false)
    {
        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data
            if ((*it)->file_name == str)
            {
                if (reload)
                    (*it)->exit_flag = EXITING_FLAGS::RELOADING;
                else
                    (*it)->exit_flag = EXITING_FLAGS::UNLOADING;

                if (GetCurrentThreadId() == (*it)->thread_id)
                    PyThreadState_SetAsyncExc((*it)->thread_id, PyExc_Exception);

                break;
            }
        }
    }
};

 
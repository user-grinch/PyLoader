#pragma once
#include <vector>
#include <string>
#include "pch.h"

enum class EXITING_FLAGS
{
    NORMAL_EXIT,
    RELOADING,
    RELOADING_ALL,
    UNLOADING,
};

class ScriptData
{
public:
    struct Data
    {
        PyObject* m_pModule = nullptr;
        size_t m_nTicks = NULL;
        unsigned long m_nThreadId = NULL;
        bool m_bEventsRegistered = false;
        bool m_bNoReload = false;
        EXITING_FLAGS m_eExitFlags = EXITING_FLAGS::NORMAL_EXIT;
        std::string name, fileName, author, version, desc;
        size_t lastWaitTimer = NULL; // used to terminate infinite looping scripts
    };
    static inline std::vector<Data*>* scripts = nullptr;

    ScriptData() = delete;
    ScriptData(ScriptData& ) = delete;

    static Data* Get(int thread_id)
    {
        if (!scripts)
        {
            scripts = new std::vector<Data*>;
        }

        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data
            if ((*it)->m_nThreadId == thread_id)
            {
                return *it;
            }
        }

        // return the new data
        Data* script = new Data();
        script->m_nThreadId = thread_id;
        scripts->push_back(script);
        return script;
    }

    static Data* FindFromName(const std::string& str)
    {
        if (!scripts)
        {
            scripts = new std::vector<Data*>;
        }

        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            if ((*it)->fileName == str)
            {
                return *it;
            }
        }

        return nullptr;
    }

    static void Remove(int thread_id)
    {
        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data 
            if ((*it)->m_nThreadId == thread_id)
            {
                Py_XDECREF((*it)->m_pModule);
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
            if ((*it)->fileName == str)
            {
                if (reload)
                {
                    (*it)->m_eExitFlags = EXITING_FLAGS::RELOADING;
                }
                else
                {
                    (*it)->m_eExitFlags = EXITING_FLAGS::UNLOADING;
                }

                if (GetCurrentThreadId() == (*it)->m_nThreadId)
                {
                    PyThreadState_SetAsyncExc((*it)->m_nThreadId, PyExc_Exception);
                }

                break;
            }
        }
    }
};

 
#pragma once
#include <vector>
#include <string>
#include "pch.h"

class ScriptData
{
public:
    struct Data
    {
        std::string name, file_name, author, version, desc;
        size_t ticks;
        unsigned long thread_id;
        bool is_unloading;
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

    static void Remove(int thread_id)
    {
        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data 
            if ((*it)->thread_id == thread_id)
            {
                scripts->erase(it-1);
                break;
            }
        }
    }

    static void Unload(const std::string& str)
    {
        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data
            if ((*it)->file_name == str)
            {
                (*it)->is_unloading = true;
                flog << "Unloading script " << (*it)->file_name << std::endl;
                PyThreadState_SetAsyncExc((*it)->thread_id, PyExc_Exception);
                break;
            }
        }
    }
};

 
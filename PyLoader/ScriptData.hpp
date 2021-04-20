#pragma once
#include <vector>
#include <string>

class ScriptData
{
public:
    struct Data
    {
        std::string name, file_name, author, version, desc;
        size_t ticks;
    };
    static inline std::vector<Data*>* scripts = nullptr;

    ScriptData() = delete;
    ScriptData(ScriptData& ) = delete;

    static Data* Get(const std::string& str)
    {
        if (!scripts)
            scripts = new std::vector<Data*>;

        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data
            if ((*it)->file_name == str)
                return *it;
        }

        // return the new data
        Data* script = new Data();
        script->file_name = str;
        scripts->push_back(script);
        return script;
    }

    static void Remove(std::string& str)
    {
        // create the object if it doesn't exist
        for (auto it = scripts->begin(); it != scripts->end(); ++it)
        {
            // return the exisitng data
            if ((*it)->file_name == str)
            {
                scripts->erase(it-1);
                break;
            }
        }
    }
};


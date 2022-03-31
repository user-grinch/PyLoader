#pragma once
#include <thread>
#include "injector/injector.hpp"
#include "game.h"

enum class eScriptState
{
    running,
    stopped,
    paused
};

struct ScriptData
{
public: 
    size_t ticks; // amount of times script has been executed
    std::thread::id id; // script indentifier
    std::string file_name; // script file name without extension
    eScriptState state; // current script state
};

class ScriptMgr
{
private:
    static inline std::vector<ScriptData> script_pool;
    static inline bool initialized;

public:
    static inline size_t game_ticks; // game ticks

    ScriptMgr() = delete;
    ScriptMgr(ScriptMgr& ) = delete;

    static void hkgame_process()
    {
        game_ticks++;
        return;
    }

    static void init()
    {
        if (initialized)
        {
            return;
        }

        // TODO: III, VC
        injector::MakeJMP(Game::getAddr(NULL, NULL, 0x6F3FE0) ,(DWORD)&hkgame_process);
        initialized = true;
    }

    static ScriptData* get(std::thread::id thread_id = std::this_thread::get_id())
    {   
        init();
        // create the object if it doesn't exist
        for (auto it = script_pool.begin(); it != script_pool.end(); ++it)
        {
            // return the exisitng data
            if (it->id == thread_id)
            {
                return &(*it);
            }
        }

        // return the new data
        ScriptData data;
        data.id = thread_id;
        data.ticks = ScriptMgr::game_ticks;
        script_pool.push_back(data);
        return &script_pool.back();
    }

    static ScriptData* find_from_name(const std::string& str)
    {
        for (auto it = script_pool.begin(); it != script_pool.end(); ++it)
        {
            if (it->file_name == str)
            {
                return &(*it);
            }
        }

        return nullptr;
    }

    static void remove(std::thread::id thread_id)
    {
        // create the object if it doesn't exist
        // for (auto it = script_pool.begin(); it != script_pool.end(); ++it)
        // {
        //     // return the exisitng data 
        //     if (it->id == thread_id)
        //     {
        //         Py_XDECREF(it->m_pModule);
        //         script_pool.erase(it);
        //         break;
        //     }
        // }
    }
};
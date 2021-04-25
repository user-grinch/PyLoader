#include "PyUtils.h"
#include "pch.h"
#include "ScriptData.hpp"

std::string PyUtils::GetCurrentScriptName()
{
    DWORD thread_id = GetCurrentThreadId();
    ScriptData::Data* script_data = ScriptData::Get(thread_id);

    return script_data->file_name;
}

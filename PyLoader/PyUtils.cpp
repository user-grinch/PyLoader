#include "PyUtils.h"
#include <Python.h>
#include <frameobject.h>

std::string PyUtils::GetCurrentScriptName()
{
    PyThreadState* ts = PyThreadState_Get();
    PyFrameObject* frame = ts->frame;

    if (frame != NULL)
    {
        std::string path(_PyUnicode_AsString(frame->f_code->co_filename));
        return path.substr(path.find_last_of("/.") + 1);
    }

    return "";
}

#include "pch.h"
#include "core.h"
#include "../scriptdata.hpp"
#include "../opcodehandler.hpp"

PyObject* Core::wait(PyObject* self, PyObject* args)
{
    int ms;
    if (!PyArg_ParseTuple(args, "i", &ms))
    {
        return PyBool_FromLong(0);
    }

    /*
        Sync game thread with script thread
        This is needed to prevent high cpu usage & crash
    */
    ScriptData *pdata = ScriptMgr::get();
    PyRun_SimpleString("import time");
    while (pdata->ticks == ScriptMgr::game_ticks)
    {
        PyRun_SimpleString("time.sleep(0.1)");
    }

    pdata->ticks = ScriptMgr::game_ticks;

    // wait the amount of time script requested
    if (ms != 0)
    {
        std::string str = std::format("time.sleep({})", ms / 1000.0f);
        PyRun_SimpleString(str.c_str());
    }

    return PyBool_FromLong(1);
}

PyObject* Core::write_stream(PyObject* self, PyObject* args)
{
    // Hacky way to fix duplicate call?
    static bool bIgnoreCall = false;

    if (!bIgnoreCall)
    {
        char* text;
        if (!PyArg_ParseTuple(args, "s", &text))
        {
            return NULL;
        }
        ScriptData *pdata = ScriptMgr::get();
        gLog << std::format("{} : {}", pdata->file_name, text) << std::endl;
    }
    bIgnoreCall = !bIgnoreCall;

    return Py_BuildValue("");
}

PyObject* Core::flush_stream(PyObject* self, PyObject* args)
{
    return Py_BuildValue("");
}

PyObject* Core::call_opcode(PyObject *self, PyObject *args)
{
    return PyBool_FromLong(OpcodeHandler::call(args));
}

PyObject* Core::get_pyloader_ver(PyObject* self, PyObject* args)
{
    return PyFloat_FromDouble(PYLOADER_VERSION);
}

PyObject* Core::get_working_dir(PyObject* self, PyObject* args)
{
    return Py_BuildValue("s", "./PyLoader/");
}

PyObject* Core::get_game_dir(PyObject* self, PyObject* args)
{
    return Py_BuildValue("s", "");
}

PyObject* Core::key_pressed(PyObject *self, PyObject *args)
{
    char key = (char)get_int(args, 0);
    return PyBool_FromLong((GetKeyState(key) & 0x8000));
}

PyObject* Core::test_cheat(PyObject* self, PyObject* args)
{
	char* text;

	if (!PyArg_ParseTuple(args, "s", &text))
	{
		return PyBool_FromLong(0);
	}
	
	std::string str = text;
	char (&cheatstring)[30] = *(char(*)[30])(Game::getAddr(NULL, NULL, 0x969110));

	// reverse + upper
	size_t size = str.size()-1;
	for (size_t i = size; i != int(size/2); --i)
	{
		char temp = ' ';
		temp = str[size - i];
		str[size - i] = toupper(str[i]);
		str[i] = toupper(temp);
	}

	if (size % 2 == 0)
	{
		str[size / 2] = toupper(str[size / 2]);
	}

	if (strstr(cheatstring, str.c_str()) != NULL)
	{
		cheatstring[0] = '\0';
		return PyBool_FromLong(1);
	}

	return PyBool_FromLong(0);
}
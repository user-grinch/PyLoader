#include "PyScript.h"
#include "../ScriptData.hpp"
#include "../PyUtils.h"

PyObject* PyScript::GetDesc(PyObject* self, PyObject* args)
{
	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());

	return Py_BuildValue("s", data->desc.c_str());
}

PyObject* PyScript::GetName(PyObject* self, PyObject* args)
{
	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());

	return Py_BuildValue("s", data->name.c_str());
}

PyObject* PyScript::GetAuthor(PyObject* self, PyObject* args)
{
	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());

	return Py_BuildValue("s", data->author.c_str());
}

PyObject* PyScript::GetVersion(PyObject* self, PyObject* args)
{
	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());

	return Py_BuildValue("s", data->version.c_str());
}

PyObject* PyScript::SetName(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
		return PyBool_FromLong(0);

	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());
	data->name = str;

	return PyBool_FromLong(1);
}

PyObject* PyScript::SetDesc(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
		return PyBool_FromLong(0);

	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());
	data->desc = str;

	return PyBool_FromLong(1);
}

PyObject* PyScript::SetAuthor(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
		return PyBool_FromLong(0);

	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());
	data->author = str;

	return PyBool_FromLong(1);
}

PyObject* PyScript::SetVersion(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
		return PyBool_FromLong(0);

	ScriptData::Data* data = ScriptData::Get(PyUtils::GetCurrentScriptName());
	data->version = str;

	return PyBool_FromLong(1);
}
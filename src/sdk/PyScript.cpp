#include "PyScript.h"
#include "../ScriptData.hpp"
#include "../PyLoader.h"
#include "../PyEvents.h"

PyObject* PyScript::Reload(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "|s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = nullptr;
	if (str == NULL || str[0] == '\0')
	{
		data = ScriptData::Get(GetCurrentThreadId());
		if (data->m_bNoReload)
		{
			gLog << str << " has 'no_reload' property set" << std::endl;
			return PyBool_FromLong(0);
		}
		str = (char*)data->fileName.c_str();
	}
	else
	{
		data = ScriptData::FindFromName(std::string(str));

		if (data->m_bNoReload)
		{
			gLog << str << " has `no_reload` property set" << std::endl;
			return PyBool_FromLong(0);
		}
	}

	if (data != NULL && data->m_eExitFlags == EXITING_FLAGS::NORMAL_EXIT)
	{
		PyEvents::ScriptTerminate(data->m_pModule);
		gLog << "Unloading script " << str << std::endl;
		ScriptData::Reload(str);

		return PyBool_FromLong(1);
	}
	
	return PyBool_FromLong(0);
}

PyObject* PyScript::Unload(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "|s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = nullptr;
	if (str == NULL || str[0] == '\0')
	{
		data = ScriptData::Get(GetCurrentThreadId());
		str = (char*)data->fileName.c_str();
	}
	else
	{
		data = ScriptData::FindFromName(std::string(str));
	}

	if (data != NULL && data->m_eExitFlags == EXITING_FLAGS::NORMAL_EXIT)
	{
		PyEvents::ScriptTerminate(data->m_pModule);
		gLog << "Unloading script " << str << std::endl;
		ScriptData::Unload(str);

		return PyBool_FromLong(1);
	}

	return PyBool_FromLong(0);
}

PyObject* PyScript::Load(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
	{
		return PyBool_FromLong(0);
	}

	std::string *file_name = new std::string(str);
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&PyLoader::ExecuteScript, file_name, NULL, NULL);
	return PyBool_FromLong(1);
}


PyObject* PyScript::GetDesc(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "|s", &str))
	{
		return PyBool_FromLong(0);
	}
	
	ScriptData::Data* data = nullptr;
	if (str == NULL || str[0] == '\0')
		data = ScriptData::Get(GetCurrentThreadId());
	else
		data = ScriptData::FindFromName(std::string(str));

	return Py_BuildValue("s", data->desc.c_str());
}

PyObject* PyScript::GetName(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "|s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = nullptr;
	if (str == NULL || str[0] == '\0')
		data = ScriptData::Get(GetCurrentThreadId());
	else
		data = ScriptData::FindFromName(std::string(str));

	return Py_BuildValue("s", data->name.c_str());
}

PyObject* PyScript::GetFileName(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "|s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = nullptr;
	if (str == NULL || str[0] == '\0')
		data = ScriptData::Get(GetCurrentThreadId());
	else
		data = ScriptData::FindFromName(std::string(str));

	return Py_BuildValue("s", data->fileName.c_str());
}


PyObject* PyScript::GetAuthor(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "|s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = nullptr;
	if (str == NULL || str[0] == '\0')
		data = ScriptData::Get(GetCurrentThreadId());
	else
		data = ScriptData::FindFromName(std::string(str));

	return Py_BuildValue("s", data->author.c_str());
}

PyObject* PyScript::GetVersion(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "|s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = nullptr;
	if (str == NULL || str[0] == '\0')
		data = ScriptData::Get(GetCurrentThreadId());
	else
		data = ScriptData::FindFromName(std::string(str));

	return Py_BuildValue("s", data->version.c_str());
}

PyObject* PyScript::SetName(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = ScriptData::Get(GetCurrentThreadId());
	data->name = str;

	return PyBool_FromLong(1);
}

PyObject* PyScript::SetDesc(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = ScriptData::Get(GetCurrentThreadId());
	data->desc = str;

	return PyBool_FromLong(1);
}

PyObject* PyScript::SetAuthor(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = ScriptData::Get(GetCurrentThreadId());
	data->author = str;

	return PyBool_FromLong(1);
}

PyObject* PyScript::SetVersion(PyObject* self, PyObject* args)
{
	char* str;
	if (!PyArg_ParseTuple(args, "s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = ScriptData::Get(GetCurrentThreadId());
	data->version = str;

	return PyBool_FromLong(1);
}

PyObject* PyScript::MinRequiredVersion(PyObject* self, PyObject* args)
{
	char* str = NULL;
	if (!PyArg_ParseTuple(args, "s", &str))
	{
		return PyBool_FromLong(0);
	}

	ScriptData::Data* data = ScriptData::Get(GetCurrentThreadId());

	if (gPluginVer < std::string(str))
	{
		gLog << data->fileName << " requires at least PyLoader v" << str << std::endl;
		return PyBool_FromLong(0);
	}

	return PyBool_FromLong(1);
}

PyObject* PyScript::SetProperties(PyObject* self, PyObject* args)
{
	for (size_t i = 0; i < PyTuple_Size(args); i++)
	{
		PyObject *ptemp = PyTuple_GetItem(args, 0);

		if(!ptemp)
		{
			break;
		}
		char *property = PyBytes_AsString(PyUnicode_AsUTF8String(ptemp));

		if (strcmp(property, "no_reload") == 0)
		{
			ScriptData::Data* data = ScriptData::Get(GetCurrentThreadId());
			data->m_bNoReload = true;
		}
	}	

	return PyBool_FromLong(1);
}
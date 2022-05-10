#define WIN32_LEAN_AND_MEAN
#include "SoundSystem.h"
#include "module.h"

PyObject* Module::Link3dAudioStreamToVehicle(PyObject* self, PyObject* args)
{
	CAudioStream* stream;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &handle, &stream))
	{
		return PyBool_FromLong(0);
	}

	stream->Link(CPools::GetVehicle(handle));
	return PyBool_FromLong(1);
}

PyObject* Module::Link3dAudioStreamToObject(PyObject* self, PyObject* args)
{
	CAudioStream* stream;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &handle, &stream))
	{
		return PyBool_FromLong(0);
	}

	stream->Link(CPools::GetObject(handle));
	return PyBool_FromLong(1);
}

PyObject* Module::Link3dAudioStreamToActor(PyObject* self, PyObject* args)
{
	CAudioStream* stream;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &handle, &stream))
	{
		return PyBool_FromLong(0);
	}

	stream->Link(CPools::GetPed(handle));
	return PyBool_FromLong(1);
}

PyObject* Module::LoadAudioStreamWith3dSupport(PyObject* self, PyObject* args)
{
	char* path;

	if (!PyArg_ParseTuple(args, "s", &path))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", SoundSystem.LoadStream(path, true));
}

PyObject* Module::LoadAudioStream(PyObject* self, PyObject* args)
{
	char* path;

	if (!PyArg_ParseTuple(args, "s", &path))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", SoundSystem.LoadStream(path));
}

PyObject* Module::ReleaseAudioStream(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}

	SoundSystem.UnloadStream((CAudioStream*)handle);
	return Py_BuildValue("i", 1);
}

PyObject* Module::GetAudioStreamLength(PyObject* self, PyObject* args)
{
	CAudioStream* stream;

	if (!PyArg_ParseTuple(args, "i", &stream))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("i", stream->GetLength());
}

PyObject* Module::GetAudioStreamVolume(PyObject* self, PyObject* args)
{
	CAudioStream* stream;

	if (!PyArg_ParseTuple(args, "i", &stream))
	{
		return PyBool_FromLong(0);
	}

	return Py_BuildValue("f", stream->GetVolume());
}

PyObject* Module::LoopAudioStream(PyObject* self, PyObject* args)
{
	CAudioStream* stream;
	int flag = 0;

	if (!PyArg_ParseTuple(args, "ii", &stream, &flag))
	{
		return PyBool_FromLong(0);
	}

	stream->Loop(flag);
	return PyBool_FromLong(1);
}

PyObject* Module::Set3dAudioStreamPosition(PyObject* self, PyObject* args)
{
	CAudioStream* stream;
	CVector pos;

	if (!PyArg_ParseTuple(args, "ifff", &stream, &pos.x, &pos.y, &pos.z))
	{
		return PyBool_FromLong(0);
	}

	stream->Set3dPosition(pos);
	return PyBool_FromLong(1);
}

PyObject* Module::SetAudioStreamVolume(PyObject* self, PyObject* args)
{
	CAudioStream* stream;
	float vol;

	if (!PyArg_ParseTuple(args, "if", &stream, &vol))
	{
		return PyBool_FromLong(0);
	}

	stream->SetVolume(vol);
	return PyBool_FromLong(1);
}

PyObject* Module::SetAudioStreamPerformAction(PyObject* self, PyObject* args)
{
	CAudioStream* stream;
	int action;

	if (!PyArg_ParseTuple(args, "ii", &stream, &action))
	{
		return PyBool_FromLong(0);
	}

	switch (action)
	{
		case 0: // stop
		{
			stream->Stop();
			break;
		}
		case 1: // play
		{
			stream->Play();
			break;
		}
		case 2: // pause
		{
			stream->Pause();
			break;
		}
		case 3: // resume
		{
			stream->Resume();
			break;
		}
	}
	return Py_BuildValue("i", 0);
}
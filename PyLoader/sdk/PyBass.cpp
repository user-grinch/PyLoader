#include "PyBass.h"
#include "../depend/bass.h"
#include "../pch.h"

PyObject* PyBass::LoadAudioStreamWith3dSupport(PyObject* self, PyObject* args)
{
	char* path;
	int handle = 0;
	if (!PyArg_ParseTuple(args, "s", &path))
		return PyBool_FromLong(0);

	if (fs::exists(path))
	{
		// shouldn't need FP check for Win 7+?
		unsigned flags = BASS_SAMPLE_3D | BASS_SAMPLE_MONO | BASS_SAMPLE_SOFTWARE | BASS_SAMPLE_FLOAT;

		if ((handle = BASS_StreamCreateFile(FALSE, path, 0, 0, flags)) || (handle = BASS_StreamCreateURL(path, 0, flags, nullptr, nullptr)))
		{
			BASS_ChannelSet3DAttributes(handle, 0, -1.0, -1.0, -1, -1, -1.0);
			return Py_BuildValue("i", handle);
		}
	}

	return Py_BuildValue("i", -1);
}

PyObject* PyBass::LoadAudioStream(PyObject* self, PyObject* args)
{
	char* path;
	int handle = 0;

	if (!PyArg_ParseTuple(args, "s", &path))
		return PyBool_FromLong(0);

	if (fs::exists(path))
	{
		// shouldn't need FP check for Win 7+?
		unsigned flags = BASS_SAMPLE_SOFTWARE | BASS_SAMPLE_FLOAT;

		if ((handle = BASS_StreamCreateFile(FALSE, path, 0, 0, flags)) || (handle = BASS_StreamCreateURL(path, 0, flags, 0, nullptr)))
			return Py_BuildValue("i", handle);
	}

	return Py_BuildValue("i", -1);
}

PyObject* PyBass::ReleaseAudioStream(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", BASS_StreamFree(handle));
}

PyObject* PyBass::GetAudioStreamLength(PyObject* self, PyObject* args)
{
	int handle;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	return Py_BuildValue("i", BASS_ChannelBytes2Seconds(handle, BASS_ChannelGetLength(handle, BASS_POS_BYTE)));
}

PyObject* PyBass::GetAudioStreamVolume(PyObject* self, PyObject* args)
{
	int handle;
	float result = 0.0f;

	if (!PyArg_ParseTuple(args, "i", &handle))
		return PyBool_FromLong(0);

	if (!BASS_ChannelGetAttribute(handle, BASS_ATTRIB_VOL, &result))
		result =  -1.0f;

	return Py_BuildValue("f", result);
}

PyObject* PyBass::LoopAudioStream(PyObject* self, PyObject* args)
{
	int handle = 0;
	int flag = 0;

	if (!PyArg_ParseTuple(args, "ii", &handle, &flag))
		return PyBool_FromLong(0);

	BASS_ChannelFlags(handle, flag ? BASS_SAMPLE_LOOP : 0, BASS_SAMPLE_LOOP);

	return PyBool_FromLong(1);
}

PyObject* PyBass::Set3dAudioStreamPosition(PyObject* self, PyObject* args)
{
	int handle = 0;
	BASS_3DVECTOR pos;

	if (!PyArg_ParseTuple(args, "ifff", &handle, &pos.x, &pos.y, &pos.z))
		return PyBool_FromLong(0);

	BASS_ChannelSet3DPosition(handle, &pos, nullptr, nullptr);
	return PyBool_FromLong(1);
}

PyObject* PyBass::SetAudioStreamVolume(PyObject* self, PyObject* args)
{
	int handle;
	float vol;

	if (!PyArg_ParseTuple(args, "if", &handle, &vol))
		return PyBool_FromLong(0);

	BASS_ChannelSetAttribute(handle, BASS_ATTRIB_VOL, vol);

	return PyBool_FromLong(1);
}

PyObject* PyBass::SetAudioStreamPerformAction(PyObject* self, PyObject* args)
{
	int handle, action;

	if (!PyArg_ParseTuple(args, "ii", &handle, &action))
		return PyBool_FromLong(0);

	switch (action)
	{
		case 0: // stop
		{
			BASS_ChannelPause(handle);
			BASS_ChannelSetPosition(handle, 0, BASS_POS_BYTE);
			break;
		}
		case 1: // play
		{
			BASS_ChannelPlay(handle, true);
			break;
		}
		case 2: // pause
		{
			BASS_ChannelPause(handle);
			break;
		}
		case 3: // resume
		{
			BASS_ChannelPlay(handle, false);
			break;
		}
	}
	return Py_BuildValue("i", 0);
}
#include "src.h"
#include "extensions\ScriptCommands.h"

PyObject* shake_cam(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int intensity;
	if (!PyArg_ParseTuple(args, "i", &intensity))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0003>(intensity);
	return PyBool_FromLong(1);
}

PyObject* create_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int modelid;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifff", &modelid, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0053>(modelid, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int pedtype;
	int modelid;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iifff", &pedtype, &modelid, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x009A>(pedtype, modelid, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* delete_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x009B>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_char_coordinates(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00A0>(self_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* set_char_coordinates(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00A1>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_area_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00A3>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_char_in_area_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00A4>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* create_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int modelid;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifff", &modelid, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00A5>(modelid, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* delete_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00A6>(self_);
	return PyBool_FromLong(1);
}

PyObject* car_goto_coordinates(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00A7>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* car_wander_randomly(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00A8>(self_);
	return PyBool_FromLong(1);
}

PyObject* car_set_idle(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00A9>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_car_coordinates(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00AA>(self_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* set_car_coordinates(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00AB>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_car_cruise_speed(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float maxspeed;
	if (!PyArg_ParseTuple(args, "if", &self_, &maxspeed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00AD>(self_, maxspeed);
	return PyBool_FromLong(1);
}

PyObject* set_car_driving_style(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int drivingstyle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &drivingstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00AE>(self_, drivingstyle);
	return PyBool_FromLong(1);
}

PyObject* set_car_mission(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int carmission;
	if (!PyArg_ParseTuple(args, "ii", &self_, &carmission))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00AF>(self_, carmission);
	return PyBool_FromLong(1);
}

PyObject* is_car_in_area_2d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00B0>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_car_in_area_3d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00B1>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* print_big(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int time;
	int style;
	if (!PyArg_ParseTuple(args, "iii", &key, &time, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00BA>(key, time, style);
	return PyBool_FromLong(1);
}

PyObject* print(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int time;
	int flag;
	if (!PyArg_ParseTuple(args, "iii", &key, &time, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00BB>(key, time, flag);
	return PyBool_FromLong(1);
}

PyObject* print_now(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int time;
	int flag;
	if (!PyArg_ParseTuple(args, "iii", &key, &time, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00BC>(key, time, flag);
	return PyBool_FromLong(1);
}

PyObject* clear_prints(PyObject* self, PyObject* args) // Text
{
	plugin::Command<0x00BE>();
	return PyBool_FromLong(1);
}

PyObject* get_time_of_day(PyObject* self, PyObject* args) // Clock
{

	// outputs
	int hours;
	int minutes;
	plugin::Command<0x00BF>(&hours, &minutes);
	return Py_BuildValue("ii", hours, minutes);
}

PyObject* set_time_of_day(PyObject* self, PyObject* args) // Clock
{
	// inputs
	int hours;
	int minutes;
	if (!PyArg_ParseTuple(args, "ii", &hours, &minutes))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00C0>(hours, minutes);
	return PyBool_FromLong(1);
}

PyObject* get_minutes_to_time_of_day(PyObject* self, PyObject* args) // Clock
{
	// inputs
	int hours;
	int minutes;

	// outputs
	int minutesleft;
	if (!PyArg_ParseTuple(args, "ii", &hours, &minutes))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00C1>(hours, minutes, &minutesleft);
	return Py_BuildValue("i", minutesleft);
}

PyObject* is_point_on_screen(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00C2>(x, y, z, radius));
}

PyObject* launch_mission(PyObject* self, PyObject* args) // Misc
{
	// inputs
	const char* var;
	if (!PyArg_ParseTuple(args, "s", &var))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00D7>(var);
	return PyBool_FromLong(1);
}

PyObject* mission_has_finished(PyObject* self, PyObject* args) // Mission
{
	plugin::Command<0x00D8>();
	return PyBool_FromLong(1);
}

PyObject* store_car_char_is_in(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00D9>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_char_in_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00DB>(self_, vehicle));
}

PyObject* is_char_in_model(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00DD>(self_, modelid));
}

PyObject* is_char_in_any_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00DF>(self_));
}

PyObject* is_button_pressed(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int pad;
	int buttonid;
	if (!PyArg_ParseTuple(args, "ii", &pad, &buttonid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00E1>(pad, buttonid));
}

PyObject* get_pad_state(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int pad;
	int buttonid;

	// outputs
	int state;
	if (!PyArg_ParseTuple(args, "ii", &pad, &buttonid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x00E2>(pad, buttonid, &state);
	return Py_BuildValue("i", state);
}

PyObject* locate_char_any_means_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00EC>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_char_on_foot_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00ED>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_char_in_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00EE>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_stopped_char_any_means_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00EF>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_stopped_char_on_foot_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00F0>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_stopped_char_in_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00F1>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_char_any_means_char_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int target;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &target, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00F2>(self_, target, xradius, yradius, drawsphere));
}

PyObject* locate_char_on_foot_char_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int target;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &target, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00F3>(self_, target, xradius, yradius, drawsphere));
}

PyObject* locate_char_in_car_char_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int otherchar;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &otherchar, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00F4>(self_, otherchar, xradius, yradius, drawsphere));
}

PyObject* locate_char_any_means_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00FE>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_on_foot_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x00FF>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_in_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0100>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_stopped_char_any_means_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0101>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_stopped_char_on_foot_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0102>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_stopped_char_in_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0103>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_any_means_char_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int target;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &target, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0104>(self_, target, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_on_foot_char_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int target;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &target, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0105>(self_, target, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_in_car_char_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int target;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &target, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0106>(self_, target, xradius, yradius, zradius, drawsphere));
}

PyObject* create_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int modelid;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifff", &modelid, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0107>(modelid, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* delete_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0108>(self_);
	return PyBool_FromLong(1);
}

PyObject* add_score(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int money;
	if (!PyArg_ParseTuple(args, "ii", &self_, &money))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0109>(self_, money);
	return PyBool_FromLong(1);
}

PyObject* is_score_greater(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int money;
	if (!PyArg_ParseTuple(args, "ii", &self_, &money))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x010A>(self_, money));
}

PyObject* store_score(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int money;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x010B>(self_, &money);
	return Py_BuildValue("i", money);
}

PyObject* alter_wanted_level(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int wantedlevel;
	if (!PyArg_ParseTuple(args, "ii", &self_, &wantedlevel))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x010D>(self_, wantedlevel);
	return PyBool_FromLong(1);
}

PyObject* alter_wanted_level_no_drop(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int wantedlevel;
	if (!PyArg_ParseTuple(args, "ii", &self_, &wantedlevel))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x010E>(self_, wantedlevel);
	return PyBool_FromLong(1);
}

PyObject* is_wanted_level_greater(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int wantedlevel;
	if (!PyArg_ParseTuple(args, "ii", &self_, &wantedlevel))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x010F>(self_, wantedlevel));
}

PyObject* clear_wanted_level(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0110>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_deatharrest_state(PyObject* self, PyObject* args) // 
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0111>(state);
	return PyBool_FromLong(1);
}

PyObject* has_deatharrest_been_executed(PyObject* self, PyObject* args) // 
{
	return PyBool_FromLong(plugin::Command<0x0112>());
}

PyObject* add_ammo_to_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	int ammo;
	if (!PyArg_ParseTuple(args, "iii", &self_, &weapontype, &ammo))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0114>(self_, weapontype, ammo);
	return PyBool_FromLong(1);
}

PyObject* is_player_dead(PyObject* self, PyObject* args) // Player
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0117>(handle));
}

PyObject* is_char_dead(PyObject* self, PyObject* args) // Char
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0118>(handle));
}

PyObject* is_car_dead(PyObject* self, PyObject* args) // Car
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0119>(handle));
}

PyObject* is_player_pressing_horn(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0122>(self_));
}

PyObject* create_char_inside_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int vehicle;
	int pedtype;
	int modelid;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iii", &vehicle, &pedtype, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0129>(vehicle, pedtype, modelid, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_car_model(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0137>(self_, modelid));
}

PyObject* create_car_generator(PyObject* self, PyObject* args) // Cargenerator
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	int modelid;
	int primarycolor;
	int secondarycolor;
	int forcespawn;
	int alarmchance;
	int doorlockchance;
	int mindelay;
	int maxdelay;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffiiiiiiii", &x, &y, &z, &heading, &modelid, &primarycolor, &secondarycolor, &forcespawn, &alarmchance, &doorlockchance, &mindelay, &maxdelay))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x014B>(x, y, z, heading, modelid, primarycolor, secondarycolor, forcespawn, alarmchance, doorlockchance, mindelay, maxdelay, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* switch_car_generator(PyObject* self, PyObject* args) // Cargenerator
{
	// inputs
	int self_;
	int amount;
	if (!PyArg_ParseTuple(args, "ii", &self_, &amount))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x014C>(self_, amount);
	return PyBool_FromLong(1);
}

PyObject* display_onscreen_timer(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int timer;
	int direction;
	if (!PyArg_ParseTuple(args, "ii", &timer, &direction))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x014E>(timer, direction);
	return PyBool_FromLong(1);
}

PyObject* clear_onscreen_timer(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int timer;
	if (!PyArg_ParseTuple(args, "i", &timer))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x014F>(timer);
	return PyBool_FromLong(1);
}

PyObject* clear_onscreen_counter(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int counter;
	if (!PyArg_ParseTuple(args, "i", &counter))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0151>(counter);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_zone(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int zone;
	if (!PyArg_ParseTuple(args, "ii", &self_, &zone))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0154>(self_, zone));
}

PyObject* point_camera_at_car(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int vehicle;
	int mode;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "iii", &vehicle, &mode, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0158>(vehicle, mode, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* point_camera_at_char(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int char_;
	int mode;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "iii", &char_, &mode, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0159>(char_, mode, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* restore_camera(PyObject* self, PyObject* args) // Camera
{
	plugin::Command<0x015A>();
	return PyBool_FromLong(1);
}

PyObject* shake_pad(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int pad;
	int time;
	int intensity;
	if (!PyArg_ParseTuple(args, "iii", &pad, &time, &intensity))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x015B>(pad, time, intensity);
	return PyBool_FromLong(1);
}

PyObject* set_time_scale(PyObject* self, PyObject* args) // Clock
{
	// inputs
	float scale;
	if (!PyArg_ParseTuple(args, "f", &scale))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x015D>(scale);
	return PyBool_FromLong(1);
}

PyObject* set_fixed_camera_position(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float x;
	float y;
	float z;
	float xrotation;
	float yrotation;
	float zrotation;
	if (!PyArg_ParseTuple(args, "ffffff", &x, &y, &z, &xrotation, &yrotation, &zrotation))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x015F>(x, y, z, xrotation, yrotation, zrotation);
	return PyBool_FromLong(1);
}

PyObject* point_camera_at_point(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float x;
	float y;
	float z;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0160>(x, y, z, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* add_blip_for_car_old(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int vehicle;
	int color;
	int display;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iii", &vehicle, &color, &display))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0161>(vehicle, color, display, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* remove_blip(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0164>(self_);
	return PyBool_FromLong(1);
}

PyObject* change_blip_colour(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	int color;
	if (!PyArg_ParseTuple(args, "ii", &self_, &color))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0165>(self_, color);
	return PyBool_FromLong(1);
}

PyObject* add_blip_for_coord_old(PyObject* self, PyObject* args) // Blip
{
	// inputs
	float x;
	float y;
	float z;
	int colour;
	int display;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffii", &x, &y, &z, &colour, &display))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0167>(x, y, z, colour, display, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* change_blip_scale(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	int size;
	if (!PyArg_ParseTuple(args, "ii", &self_, &size))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0168>(self_, size);
	return PyBool_FromLong(1);
}

PyObject* set_fading_colour(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int r;
	int g;
	int b;
	if (!PyArg_ParseTuple(args, "iii", &r, &g, &b))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0169>(r, g, b);
	return PyBool_FromLong(1);
}

PyObject* do_fade(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int time;
	int direction;
	if (!PyArg_ParseTuple(args, "ii", &time, &direction))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x016A>(time, direction);
	return PyBool_FromLong(1);
}

PyObject* get_fading_status(PyObject* self, PyObject* args) // Camera
{
	return PyBool_FromLong(plugin::Command<0x016B>());
}

PyObject* add_hospital_restart(PyObject* self, PyObject* args) // Restart
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	int townid;
	if (!PyArg_ParseTuple(args, "ffffi", &x, &y, &z, &heading, &townid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x016C>(x, y, z, heading, townid);
	return PyBool_FromLong(1);
}

PyObject* add_police_restart(PyObject* self, PyObject* args) // Restart
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	int townid;
	if (!PyArg_ParseTuple(args, "ffffi", &x, &y, &z, &heading, &townid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x016D>(x, y, z, heading, townid);
	return PyBool_FromLong(1);
}

PyObject* override_next_restart(PyObject* self, PyObject* args) // Restart
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x016E>(x, y, z, heading);
	return PyBool_FromLong(1);
}

PyObject* draw_shadow(PyObject* self, PyObject* args) // Fx
{
	// inputs
	int texturetype;
	float x;
	float y;
	float z;
	float angle;
	float length;
	int intensity;
	int r;
	int g;
	int b;
	if (!PyArg_ParseTuple(args, "ifffffiiii", &texturetype, &x, &y, &z, &angle, &length, &intensity, &r, &g, &b))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x016F>(texturetype, x, y, z, angle, length, intensity, r, g, b);
	return PyBool_FromLong(1);
}

PyObject* get_char_heading(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	float heading;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0172>(self_, &heading);
	return Py_BuildValue("f", heading);
}

PyObject* set_char_heading(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float heading;
	if (!PyArg_ParseTuple(args, "if", &self_, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0173>(self_, heading);
	return PyBool_FromLong(1);
}

PyObject* get_car_heading(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float heading;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0174>(self_, &heading);
	return Py_BuildValue("f", heading);
}

PyObject* set_car_heading(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float heading;
	if (!PyArg_ParseTuple(args, "if", &self_, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0175>(self_, heading);
	return PyBool_FromLong(1);
}

PyObject* get_object_heading(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;

	// outputs
	float heading;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0176>(self_, &heading);
	return Py_BuildValue("f", heading);
}

PyObject* set_object_heading(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float heading;
	if (!PyArg_ParseTuple(args, "if", &self_, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0177>(self_, heading);
	return PyBool_FromLong(1);
}

PyObject* is_char_touching_object(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	if (!PyArg_ParseTuple(args, "ii", &self_, &object))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0179>(self_, object));
}

PyObject* set_char_ammo(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	int ammo;
	if (!PyArg_ParseTuple(args, "iii", &self_, &weapontype, &ammo))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x017B>(self_, weapontype, ammo);
	return PyBool_FromLong(1);
}

PyObject* declare_mission_flag(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int flag;
	if (!PyArg_ParseTuple(args, "i", &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0180>(flag);
	return PyBool_FromLong(1);
}

PyObject* is_char_health_greater(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int health;
	if (!PyArg_ParseTuple(args, "ii", &self_, &health))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0184>(self_, health));
}

PyObject* is_car_health_greater(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int health;
	if (!PyArg_ParseTuple(args, "ii", &self_, &health))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0185>(self_, health));
}

PyObject* add_blip_for_car(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int vehicle;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0186>(vehicle, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* add_blip_for_char(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int char_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &char_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0187>(char_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* add_blip_for_object(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int object;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &object))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0188>(object, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* add_blip_for_coord(PyObject* self, PyObject* args) // Blip
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x018A>(x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* change_blip_display(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	int display;
	if (!PyArg_ParseTuple(args, "ii", &self_, &display))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x018B>(self_, display);
	return PyBool_FromLong(1);
}

PyObject* add_one_off_sound(PyObject* self, PyObject* args) // Sound
{
	// inputs
	float x;
	float y;
	float z;
	int soundid;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &soundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x018C>(x, y, z, soundid);
	return PyBool_FromLong(1);
}

PyObject* is_car_stuck_on_roof(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x018F>(self_));
}

PyObject* add_upsidedown_car_check(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0190>(self_);
	return PyBool_FromLong(1);
}

PyObject* remove_upsidedown_car_check(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0191>(self_);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_area_on_foot_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A1>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_char_in_area_in_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A2>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_char_stopped_in_area_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A3>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_char_stopped_in_area_on_foot_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A4>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_char_stopped_in_area_in_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A5>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_char_in_area_on_foot_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A6>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* is_char_in_area_in_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A7>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* is_char_stopped_in_area_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A8>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* is_char_stopped_in_area_on_foot_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01A9>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* is_char_stopped_in_area_in_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01AA>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* is_car_stopped_in_area_2d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01AB>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_car_stopped_in_area_3d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01AC>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* locate_car_2d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01AD>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_stopped_car_2d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01AE>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_car_3d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01AF>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_stopped_car_3d(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01B0>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* give_weapon_to_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	int ammo;
	if (!PyArg_ParseTuple(args, "iii", &self_, &weapontype, &ammo))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01B2>(self_, weapontype, ammo);
	return PyBool_FromLong(1);
}

PyObject* set_player_control(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01B4>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* force_weather(PyObject* self, PyObject* args) // Weather
{
	// inputs
	int type;
	if (!PyArg_ParseTuple(args, "i", &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01B5>(type);
	return PyBool_FromLong(1);
}

PyObject* force_weather_now(PyObject* self, PyObject* args) // Weather
{
	// inputs
	int type;
	if (!PyArg_ParseTuple(args, "i", &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01B6>(type);
	return PyBool_FromLong(1);
}

PyObject* release_weather(PyObject* self, PyObject* args) // Weather
{
	plugin::Command<0x01B7>();
	return PyBool_FromLong(1);
}

PyObject* set_current_char_weapon(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01B9>(self_, weapontype);
	return PyBool_FromLong(1);
}

PyObject* get_object_coordinates(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01BB>(self_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* set_object_coordinates(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01BC>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_game_timer(PyObject* self, PyObject* args) // Clock
{

	// outputs
	int time;
	plugin::Command<0x01BD>(&time);
	return Py_BuildValue("i", time);
}

PyObject* store_wanted_level(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int wantedlevel;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01C0>(self_, &wantedlevel);
	return Py_BuildValue("i", wantedlevel);
}

PyObject* is_car_stopped(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01C1>(self_));
}

PyObject* mark_char_as_no_longer_needed(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01C2>(self_);
	return PyBool_FromLong(1);
}

PyObject* mark_car_as_no_longer_needed(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01C3>(self_);
	return PyBool_FromLong(1);
}

PyObject* mark_object_as_no_longer_needed(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01C4>(self_);
	return PyBool_FromLong(1);
}

PyObject* dont_remove_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01C5>(self_);
	return PyBool_FromLong(1);
}

PyObject* dont_remove_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01C7>(self_);
	return PyBool_FromLong(1);
}

PyObject* create_char_as_passenger(PyObject* self, PyObject* args) // Char
{
	// inputs
	int vehicle;
	int pedtype;
	int modelid;
	int seatid;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiii", &vehicle, &pedtype, &modelid, &seatid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01C8>(vehicle, pedtype, modelid, seatid, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* print_with_number_big(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiii", &key, &num, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01E3>(key, num, duration, style);
	return PyBool_FromLong(1);
}

PyObject* print_with_number(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num;
	int duration;
	int flag;
	if (!PyArg_ParseTuple(args, "iiii", &key, &num, &duration, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01E4>(key, num, duration, flag);
	return PyBool_FromLong(1);
}

PyObject* print_with_number_now(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num;
	int duration;
	int flag;
	if (!PyArg_ParseTuple(args, "iiii", &key, &num, &duration, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01E5>(key, num, duration, flag);
	return PyBool_FromLong(1);
}

PyObject* switch_roads_on(PyObject* self, PyObject* args) // Path
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01E7>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* switch_roads_off(PyObject* self, PyObject* args) // Path
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01E8>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* get_number_of_passengers(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int count;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01E9>(self_, &count);
	return Py_BuildValue("i", count);
}

PyObject* get_maximum_number_of_passengers(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int count;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01EA>(self_, &count);
	return Py_BuildValue("i", count);
}

PyObject* set_car_density_multiplier(PyObject* self, PyObject* args) // World
{
	// inputs
	float multiplier;
	if (!PyArg_ParseTuple(args, "f", &multiplier))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01EB>(multiplier);
	return PyBool_FromLong(1);
}

PyObject* set_car_heavy(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01EC>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_max_wanted_level(PyObject* self, PyObject* args) // Game
{
	// inputs
	int wantedlevel;
	if (!PyArg_ParseTuple(args, "i", &wantedlevel))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01F0>(wantedlevel);
	return PyBool_FromLong(1);
}

PyObject* is_car_in_air_proper(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01F3>(self_));
}

PyObject* is_car_upsidedown(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x01F4>(self_));
}

PyObject* get_player_char(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01F5>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* cancel_override_restart(PyObject* self, PyObject* args) // Restart
{
	plugin::Command<0x01F6>();
	return PyBool_FromLong(1);
}

PyObject* set_police_ignore_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01F7>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* start_kill_frenzy(PyObject* self, PyObject* args) // Killfrenzy
{
	// inputs
	int text;
	int weapontype;
	int timeinms;
	int targetsnum;
	int targetmodel1;
	int targetmodel2;
	int targetmodel3;
	int targetmodel4;
	int betasoundsandmessages;
	if (!PyArg_ParseTuple(args, "iiiiiiiii", &text, &weapontype, &timeinms, &targetsnum, &targetmodel1, &targetmodel2, &targetmodel3, &targetmodel4, &betasoundsandmessages))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x01F9>(text, weapontype, timeinms, targetsnum, targetmodel1, targetmodel2, targetmodel3, targetmodel4, betasoundsandmessages);
	return PyBool_FromLong(1);
}

PyObject* read_kill_frenzy_status(PyObject* self, PyObject* args) // Killfrenzy
{

	// outputs
	int status;
	plugin::Command<0x01FA>(&status);
	return Py_BuildValue("i", status);
}

PyObject* locate_char_any_means_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &vehicle, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0202>(self_, vehicle, xradius, yradius, drawsphere));
}

PyObject* locate_char_on_foot_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &vehicle, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0203>(self_, vehicle, xradius, yradius, drawsphere));
}

PyObject* locate_char_in_car_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &handle, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0204>(self_, handle, xradius, yradius, drawsphere));
}

PyObject* locate_char_any_means_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &vehicle, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0205>(self_, vehicle, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_on_foot_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &vehicle, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0206>(self_, vehicle, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_in_car_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &vehicle, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0207>(self_, vehicle, xradius, yradius, zradius, drawsphere));
}

PyObject* lock_car_doors(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int lockstatus;
	if (!PyArg_ParseTuple(args, "ii", &self_, &lockstatus))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x020A>(self_, lockstatus);
	return PyBool_FromLong(1);
}

PyObject* explode_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x020B>(self_);
	return PyBool_FromLong(1);
}

PyObject* add_explosion(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	int type;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x020C>(x, y, z, type);
	return PyBool_FromLong(1);
}

PyObject* is_car_upright(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x020D>(self_));
}

PyObject* create_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	int modelid;
	int pickuptype;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iifff", &modelid, &pickuptype, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0213>(modelid, pickuptype, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* has_pickup_been_collected(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0214>(self_));
}

PyObject* remove_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0215>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_taxi_lights(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0216>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* print_big_q(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iii", &key, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0217>(key, duration, style);
	return PyBool_FromLong(1);
}

PyObject* set_target_car_for_mission_garage(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garagename;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &garagename, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x021B>(garagename, vehicle);
	return PyBool_FromLong(1);
}

PyObject* apply_brakes_to_players_car(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0221>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_health(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int health;
	if (!PyArg_ParseTuple(args, "ii", &self_, &health))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0223>(self_, health);
	return PyBool_FromLong(1);
}

PyObject* set_car_health(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int health;
	if (!PyArg_ParseTuple(args, "ii", &self_, &health))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0224>(self_, health);
	return PyBool_FromLong(1);
}

PyObject* get_char_health(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int health;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0226>(self_, &health);
	return Py_BuildValue("i", health);
}

PyObject* get_car_health(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int health;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0227>(self_, &health);
	return Py_BuildValue("i", health);
}

PyObject* change_car_colour(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int primarycolor;
	int secondarycolor;
	if (!PyArg_ParseTuple(args, "iii", &self_, &primarycolor, &secondarycolor))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0229>(self_, primarycolor, secondarycolor);
	return PyBool_FromLong(1);
}

PyObject* switch_ped_roads_on(PyObject* self, PyObject* args) // Path
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x022A>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* switch_ped_roads_off(PyObject* self, PyObject* args) // Path
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x022B>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* set_gang_weapons(PyObject* self, PyObject* args) // Gang
{
	// inputs
	int gangid;
	int weapontype1;
	int weapontype2;
	int weapontype3;
	if (!PyArg_ParseTuple(args, "iiii", &gangid, &weapontype1, &weapontype2, &weapontype3))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0237>(gangid, weapontype1, weapontype2, weapontype3);
	return PyBool_FromLong(1);
}

PyObject* is_char_touching_object_on_foot(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	if (!PyArg_ParseTuple(args, "ii", &self_, &object))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x023B>(self_, object));
}

PyObject* load_special_character(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int slotid;
	int modelname;
	if (!PyArg_ParseTuple(args, "ii", &slotid, &modelname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x023C>(slotid, modelname);
	return PyBool_FromLong(1);
}

PyObject* has_special_character_loaded(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int slotid;
	if (!PyArg_ParseTuple(args, "i", &slotid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x023D>(slotid));
}

PyObject* is_player_in_remote_mode(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0241>(self_));
}

PyObject* arm_car_with_bomb(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int bombtype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &bombtype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0242>(self_, bombtype);
	return PyBool_FromLong(1);
}

PyObject* set_cutscene_offset(PyObject* self, PyObject* args) // Cutscene
{
	// inputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0244>(x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_anim_group_for_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int animgroup;
	if (!PyArg_ParseTuple(args, "ii", &self_, &animgroup))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0245>(self_, animgroup);
	return PyBool_FromLong(1);
}

PyObject* request_model(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0247>(modelid);
	return PyBool_FromLong(1);
}

PyObject* has_model_loaded(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0248>(modelid));
}

PyObject* mark_model_as_no_longer_needed(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0249>(modelid);
	return PyBool_FromLong(1);
}

PyObject* draw_corona(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	float size;
	int coronatype;
	int flaretype;
	int r;
	int g;
	int b;
	if (!PyArg_ParseTuple(args, "ffffiiiii", &x, &y, &z, &size, &coronatype, &flaretype, &r, &g, &b))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x024F>(x, y, z, size, coronatype, flaretype, r, g, b);
	return PyBool_FromLong(1);
}

PyObject* store_clock(PyObject* self, PyObject* args) // Clock
{
	plugin::Command<0x0253>();
	return PyBool_FromLong(1);
}

PyObject* restore_clock(PyObject* self, PyObject* args) // Clock
{
	plugin::Command<0x0254>();
	return PyBool_FromLong(1);
}

PyObject* is_player_playing(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0256>(self_));
}

PyObject* get_controller_mode(PyObject* self, PyObject* args) // Pad
{

	// outputs
	int mode;
	plugin::Command<0x0293>(&mode);
	return Py_BuildValue("i", mode);
}

PyObject* set_can_respray_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0294>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* unload_special_character(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int slotid;
	if (!PyArg_ParseTuple(args, "i", &slotid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0296>(slotid);
	return PyBool_FromLong(1);
}

PyObject* reset_num_of_models_killed_by_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0297>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_num_of_models_killed_by_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int modelid;

	// outputs
	int amount;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0298>(self_, modelid, &amount);
	return Py_BuildValue("i", amount);
}

PyObject* activate_garage(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	if (!PyArg_ParseTuple(args, "i", &garageid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0299>(garageid);
	return PyBool_FromLong(1);
}

PyObject* create_object_no_offset(PyObject* self, PyObject* args) // Object
{
	// inputs
	int modelid;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifff", &modelid, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x029B>(modelid, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_char_stopped(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02A0>(self_));
}

PyObject* switch_widescreen(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02A3>(state);
	return PyBool_FromLong(1);
}

PyObject* add_sprite_blip_for_contact_point(PyObject* self, PyObject* args) // Blip
{
	// inputs
	float x;
	float y;
	float z;
	int sprite;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &sprite))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02A7>(x, y, z, sprite, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* add_sprite_blip_for_coord(PyObject* self, PyObject* args) // Blip
{
	// inputs
	float x;
	float y;
	float z;
	int sprite;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &sprite))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02A8>(x, y, z, sprite, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_char_only_damaged_by_player(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02A9>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_car_only_damaged_by_player(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02AA>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_proofs(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int bulletproof;
	int fireproof;
	int explosionproof;
	int collisionproof;
	int meleeproof;
	if (!PyArg_ParseTuple(args, "iiiiii", &self_, &bulletproof, &fireproof, &explosionproof, &collisionproof, &meleeproof))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02AB>(self_, bulletproof, fireproof, explosionproof, collisionproof, meleeproof);
	return PyBool_FromLong(1);
}

PyObject* set_car_proofs(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int bulletproof;
	int fireproof;
	int explosionproof;
	int collisionproof;
	int meleeproof;
	if (!PyArg_ParseTuple(args, "iiiiii", &self_, &bulletproof, &fireproof, &explosionproof, &collisionproof, &meleeproof))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02AC>(self_, bulletproof, fireproof, explosionproof, collisionproof, meleeproof);
	return PyBool_FromLong(1);
}

PyObject* deactivate_garage(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	if (!PyArg_ParseTuple(args, "i", &garageid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02B9>(garageid);
	return PyBool_FromLong(1);
}

PyObject* is_car_in_water(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02BF>(self_));
}

PyObject* get_closest_char_node(PyObject* self, PyObject* args) // Path
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	float nodex;
	float nodey;
	float nodez;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02C0>(x, y, z, &nodex, &nodey, &nodez);
	return Py_BuildValue("fff", nodex, nodey, nodez);
}

PyObject* get_closest_car_node(PyObject* self, PyObject* args) // Path
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	float nodex;
	float nodey;
	float nodez;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02C1>(x, y, z, &nodex, &nodey, &nodez);
	return Py_BuildValue("fff", nodex, nodey, nodez);
}

PyObject* car_goto_coordinates_accurate(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02C2>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* is_car_on_screen(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02CA>(self_));
}

PyObject* is_char_on_screen(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02CB>(self_));
}

PyObject* is_object_on_screen(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02CC>(self_));
}

PyObject* get_ground_z_for_3d_coord(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	float groundz;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02CE>(x, y, z, &groundz);
	return Py_BuildValue("f", groundz);
}

PyObject* start_script_fire(PyObject* self, PyObject* args) // Scriptfire
{
	// inputs
	float x;
	float y;
	float z;
	int propagation;
	int size;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffii", &x, &y, &z, &propagation, &size))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02CF>(x, y, z, propagation, size, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_script_fire_extinguished(PyObject* self, PyObject* args) // Scriptfire
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02D0>(self_));
}

PyObject* remove_script_fire(PyObject* self, PyObject* args) // Scriptfire
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02D1>(self_);
	return PyBool_FromLong(1);
}

PyObject* boat_goto_coords(PyObject* self, PyObject* args) // Boat
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02D3>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* boat_stop(PyObject* self, PyObject* args) // Boat
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02D4>(self_);
	return PyBool_FromLong(1);
}

PyObject* is_char_shooting_in_area(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float toprightx;
	float toprighty;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &toprightx, &toprighty, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02D6>(self_, leftbottomx, leftbottomy, toprightx, toprighty, drawsphere));
}

PyObject* is_current_char_weapon(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02D8>(self_, weapontype));
}

PyObject* set_boat_cruise_speed(PyObject* self, PyObject* args) // Boat
{
	// inputs
	int self_;
	float maxspeed;
	if (!PyArg_ParseTuple(args, "if", &self_, &maxspeed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02DB>(self_, maxspeed);
	return PyBool_FromLong(1);
}

PyObject* get_random_char_in_zone(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	int civilian;
	int gang;
	int criminalorprostitute;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiii", &zone, &civilian, &gang, &criminalorprostitute))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02DD>(zone, civilian, gang, criminalorprostitute, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_char_shooting(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02E0>(self_));
}

PyObject* create_money_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	float x;
	float y;
	float z;
	int cashamount;
	int permanent;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffii", &x, &y, &z, &cashamount, &permanent))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02E1>(x, y, z, cashamount, permanent, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_char_accuracy(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int accuracy;
	if (!PyArg_ParseTuple(args, "ii", &self_, &accuracy))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02E2>(self_, accuracy);
	return PyBool_FromLong(1);
}

PyObject* get_car_speed(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float speed;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02E3>(self_, &speed);
	return Py_BuildValue("f", speed);
}

PyObject* load_cutscene(PyObject* self, PyObject* args) // Cutscene
{
	// inputs
	int name;
	if (!PyArg_ParseTuple(args, "i", &name))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02E4>(name);
	return PyBool_FromLong(1);
}

PyObject* start_cutscene(PyObject* self, PyObject* args) // Cutscene
{
	plugin::Command<0x02E7>();
	return PyBool_FromLong(1);
}

PyObject* get_cutscene_time(PyObject* self, PyObject* args) // Cutscene
{

	// outputs
	int time;
	plugin::Command<0x02E8>(&time);
	return Py_BuildValue("i", time);
}

PyObject* has_cutscene_finished(PyObject* self, PyObject* args) // Cutscene
{
	return PyBool_FromLong(plugin::Command<0x02E9>());
}

PyObject* clear_cutscene(PyObject* self, PyObject* args) // Cutscene
{
	plugin::Command<0x02EA>();
	return PyBool_FromLong(1);
}

PyObject* restore_camera_jumpcut(PyObject* self, PyObject* args) // Camera
{
	plugin::Command<0x02EB>();
	return PyBool_FromLong(1);
}

PyObject* set_collectable1_total(PyObject* self, PyObject* args) // Game
{
	// inputs
	int amount;
	if (!PyArg_ParseTuple(args, "i", &amount))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02ED>(amount);
	return PyBool_FromLong(1);
}

PyObject* is_projectile_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02EE>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz));
}

PyObject* is_char_model(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x02F2>(self_, modelid));
}

PyObject* get_car_forward_x(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float x;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02F8>(self_, &x);
	return Py_BuildValue("f", x);
}

PyObject* get_car_forward_y(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float y;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02F9>(self_, &y);
	return Py_BuildValue("f", y);
}

PyObject* change_garage_type(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	int type;
	if (!PyArg_ParseTuple(args, "ii", &garageid, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02FA>(garageid, type);
	return PyBool_FromLong(1);
}

PyObject* print_with_2_numbers_now(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num1;
	int num2;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiiii", &key, &num1, &num2, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02FD>(key, num1, num2, duration, style);
	return PyBool_FromLong(1);
}

PyObject* print_with_3_numbers(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num1;
	int num2;
	int num3;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiiiii", &key, &num1, &num2, &num3, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x02FF>(key, num1, num2, num3, duration, style);
	return PyBool_FromLong(1);
}

PyObject* print_with_4_numbers(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num1;
	int num2;
	int num3;
	int num4;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiiiiii", &key, &num1, &num2, &num3, &num4, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0302>(key, num1, num2, num3, num4, duration, style);
	return PyBool_FromLong(1);
}

PyObject* print_with_4_numbers_now(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num1;
	int num2;
	int num3;
	int num4;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiiiiii", &key, &num1, &num2, &num3, &num4, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0303>(key, num1, num2, num3, num4, duration, style);
	return PyBool_FromLong(1);
}

PyObject* print_with_6_numbers(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiiiiiiii", &key, &num1, &num2, &num3, &num4, &num5, &num6, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0308>(key, num1, num2, num3, num4, num5, num6, duration, style);
	return PyBool_FromLong(1);
}

PyObject* player_made_progress(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int progress;
	if (!PyArg_ParseTuple(args, "i", &progress))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x030C>(progress);
	return PyBool_FromLong(1);
}

PyObject* set_progress_total(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int maxprogress;
	if (!PyArg_ParseTuple(args, "i", &maxprogress))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x030D>(maxprogress);
	return PyBool_FromLong(1);
}

PyObject* register_mission_given(PyObject* self, PyObject* args) // Stat
{
	plugin::Command<0x0317>();
	return PyBool_FromLong(1);
}

PyObject* register_mission_passed(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int key;
	if (!PyArg_ParseTuple(args, "i", &key))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0318>(key);
	return PyBool_FromLong(1);
}

PyObject* remove_all_script_fires(PyObject* self, PyObject* args) // World
{
	plugin::Command<0x031A>();
	return PyBool_FromLong(1);
}

PyObject* has_char_been_damaged_by_weapon(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x031D>(self_, weapontype));
}

PyObject* has_car_been_damaged_by_weapon(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int weapontype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x031E>(self_, weapontype));
}

PyObject* explode_char_head(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0321>(self_);
	return PyBool_FromLong(1);
}

PyObject* anchor_boat(PyObject* self, PyObject* args) // Boat
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0323>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* start_car_fire(PyObject* self, PyObject* args) // Scriptfire
{
	// inputs
	int vehicle;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0325>(vehicle, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* start_char_fire(PyObject* self, PyObject* args) // Scriptfire
{
	// inputs
	int char_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &char_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0326>(char_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_random_car_of_type_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int modelid;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffi", &leftbottomx, &leftbottomy, &righttopx, &righttopy, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0327>(leftbottomx, leftbottomy, righttopx, righttopy, modelid, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_camera_zoom(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int zoom;
	if (!PyArg_ParseTuple(args, "i", &zoom))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x032A>(zoom);
	return PyBool_FromLong(1);
}

PyObject* create_pickup_with_ammo(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	int modelid;
	int pickuptype;
	int ammo;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiifff", &modelid, &pickuptype, &ammo, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x032B>(modelid, pickuptype, ammo, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_player_never_gets_tired(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0330>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_player_fast_reload(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0331>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_bleeding(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0332>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_free_resprays(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0335>(state);
	return PyBool_FromLong(1);
}

PyObject* set_char_visible(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0337>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_car_visible(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0338>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_area_occupied(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int solid;
	int car;
	int char_;
	int object;
	int particle;
	if (!PyArg_ParseTuple(args, "ffffffiiiii", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &solid, &car, &char_, &object, &particle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0339>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, solid, car, char_, object, particle));
}

PyObject* display_text(PyObject* self, PyObject* args) // Text
{
	// inputs
	float offsetleft;
	float offsettop;
	int key;
	if (!PyArg_ParseTuple(args, "ffi", &offsetleft, &offsettop, &key))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x033E>(offsetleft, offsettop, key);
	return PyBool_FromLong(1);
}

PyObject* set_text_scale(PyObject* self, PyObject* args) // Text
{
	// inputs
	float widthscale;
	float heightscale;
	if (!PyArg_ParseTuple(args, "ff", &widthscale, &heightscale))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x033F>(widthscale, heightscale);
	return PyBool_FromLong(1);
}

PyObject* set_text_colour(PyObject* self, PyObject* args) // Text
{
	// inputs
	int red;
	int green;
	int blue;
	int alpha;
	if (!PyArg_ParseTuple(args, "iiii", &red, &green, &blue, &alpha))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0340>(red, green, blue, alpha);
	return PyBool_FromLong(1);
}

PyObject* set_text_justify(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0341>(state);
	return PyBool_FromLong(1);
}

PyObject* set_text_centre(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0342>(state);
	return PyBool_FromLong(1);
}

PyObject* set_text_wrapx(PyObject* self, PyObject* args) // Text
{
	// inputs
	float width;
	if (!PyArg_ParseTuple(args, "f", &width))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0343>(width);
	return PyBool_FromLong(1);
}

PyObject* set_text_centre_size(PyObject* self, PyObject* args) // Text
{
	// inputs
	float width;
	if (!PyArg_ParseTuple(args, "f", &width))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0344>(width);
	return PyBool_FromLong(1);
}

PyObject* set_text_background(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0345>(state);
	return PyBool_FromLong(1);
}

PyObject* set_text_proportional(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0348>(state);
	return PyBool_FromLong(1);
}

PyObject* set_text_font(PyObject* self, PyObject* args) // Text
{
	// inputs
	int font;
	if (!PyArg_ParseTuple(args, "i", &font))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0349>(font);
	return PyBool_FromLong(1);
}

PyObject* rotate_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float fromangle;
	float toangle;
	int collisioncheck;
	if (!PyArg_ParseTuple(args, "iffi", &self_, &fromangle, &toangle, &collisioncheck))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x034D>(self_, fromangle, toangle, collisioncheck));
}

PyObject* slide_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float fromx;
	float fromy;
	float fromz;
	float xspeed;
	float yspeed;
	float zspeed;
	int collisioncheck;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &fromx, &fromy, &fromz, &xspeed, &yspeed, &zspeed, &collisioncheck))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x034E>(self_, fromx, fromy, fromz, xspeed, yspeed, zspeed, collisioncheck));
}

PyObject* remove_char_elegantly(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x034F>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_char_stay_in_same_place(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0350>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_explosion_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	int explosiontype;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "iffffff", &explosiontype, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0356>(explosiontype, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz));
}

PyObject* place_object_relative_to_car(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int vehicle;
	float xoffset;
	float yoffset;
	float zoffset;
	if (!PyArg_ParseTuple(args, "iifff", &self_, &vehicle, &xoffset, &yoffset, &zoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x035C>(self_, vehicle, xoffset, yoffset, zoffset);
	return PyBool_FromLong(1);
}

PyObject* make_object_targetable(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x035D>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* add_armour_to_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int amount;
	if (!PyArg_ParseTuple(args, "ii", &self_, &amount))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x035F>(self_, amount);
	return PyBool_FromLong(1);
}

PyObject* open_garage(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	if (!PyArg_ParseTuple(args, "i", &garageid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0360>(garageid);
	return PyBool_FromLong(1);
}

PyObject* close_garage(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	if (!PyArg_ParseTuple(args, "i", &garageid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0361>(garageid);
	return PyBool_FromLong(1);
}

PyObject* warp_char_from_car_to_coord(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0362>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_visibility_of_closest_object_of_type(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int modelid;
	int state;
	if (!PyArg_ParseTuple(args, "ffffii", &x, &y, &z, &radius, &modelid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0363>(x, y, z, radius, modelid, state);
	return PyBool_FromLong(1);
}

PyObject* has_char_spotted_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int target;
	if (!PyArg_ParseTuple(args, "ii", &self_, &target))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0364>(self_, target));
}

PyObject* has_object_been_damaged(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0366>(self_));
}

PyObject* warp_char_into_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x036A>(self_, vehicle);
	return PyBool_FromLong(1);
}

PyObject* print_with_2_numbers_big(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	int num1;
	int num2;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiiii", &key, &num1, &num2, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x036D>(key, num1, num2, duration, style);
	return PyBool_FromLong(1);
}

PyObject* set_camera_behind_player(PyObject* self, PyObject* args) // Camera
{
	plugin::Command<0x0373>();
	return PyBool_FromLong(1);
}

PyObject* create_random_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0376>(x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_object_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float xspeed;
	float yspeed;
	float zspeed;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &xspeed, &yspeed, &zspeed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0381>(self_, xspeed, yspeed, zspeed);
	return PyBool_FromLong(1);
}

PyObject* set_object_collision(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0382>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* print_string_in_string_now(PyObject* self, PyObject* args) // Text
{
	// inputs
	int templatekey;
	int replacementkey;
	int duration;
	int style;
	if (!PyArg_ParseTuple(args, "iiii", &templatekey, &replacementkey, &duration, &style))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0384>(templatekey, replacementkey, duration, style);
	return PyBool_FromLong(1);
}

PyObject* is_point_obscured_by_a_mission_entity(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radiusx;
	float radiusy;
	float radiusz;
	if (!PyArg_ParseTuple(args, "ffffff", &x, &y, &z, &radiusx, &radiusy, &radiusz))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x038A>(x, y, z, radiusx, radiusy, radiusz));
}

PyObject* load_all_models_now(PyObject* self, PyObject* args) // Streaming
{
	plugin::Command<0x038B>();
	return PyBool_FromLong(1);
}

PyObject* add_to_object_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x038C>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* draw_sprite(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int memoryslot;
	float offsetleft;
	float offsettop;
	float width;
	float height;
	int r;
	int g;
	int b;
	int a;
	if (!PyArg_ParseTuple(args, "iffffiiii", &memoryslot, &offsetleft, &offsettop, &width, &height, &r, &g, &b, &a))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x038D>(memoryslot, offsetleft, offsettop, width, height, r, g, b, a);
	return PyBool_FromLong(1);
}

PyObject* draw_rect(PyObject* self, PyObject* args) // Hud
{
	// inputs
	float x;
	float y;
	float width;
	float height;
	int r;
	int g;
	int b;
	int a;
	if (!PyArg_ParseTuple(args, "ffffiiii", &x, &y, &width, &height, &r, &g, &b, &a))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x038E>(x, y, width, height, r, g, b, a);
	return PyBool_FromLong(1);
}

PyObject* load_sprite(PyObject* self, PyObject* args) // Txd
{
	// inputs
	int memoryslot;
	int spritename;
	if (!PyArg_ParseTuple(args, "ii", &memoryslot, &spritename))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x038F>(memoryslot, spritename);
	return PyBool_FromLong(1);
}

PyObject* load_texture_dictionary(PyObject* self, PyObject* args) // Txd
{
	// inputs
	int name;
	if (!PyArg_ParseTuple(args, "i", &name))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0390>(name);
	return PyBool_FromLong(1);
}

PyObject* remove_texture_dictionary(PyObject* self, PyObject* args) // Txd
{
	plugin::Command<0x0391>();
	return PyBool_FromLong(1);
}

PyObject* set_object_dynamic(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0392>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_anim_speed(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int animname;
	float animspeed;
	if (!PyArg_ParseTuple(args, "iif", &self_, &animname, &animspeed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0393>(self_, animname, animspeed);
	return PyBool_FromLong(1);
}

PyObject* play_mission_passed_tune(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int soundid;
	if (!PyArg_ParseTuple(args, "i", &soundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0394>(soundid);
	return PyBool_FromLong(1);
}

PyObject* clear_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int clearparticles;
	if (!PyArg_ParseTuple(args, "ffffi", &x, &y, &z, &radius, &clearparticles))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0395>(x, y, z, radius, clearparticles);
	return PyBool_FromLong(1);
}

PyObject* freeze_onscreen_timer(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0396>(state);
	return PyBool_FromLong(1);
}

PyObject* switch_car_siren(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0397>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_car_watertight(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x039C>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_cant_be_dragged_out(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x039E>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* turn_car_to_face_coord(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	if (!PyArg_ParseTuple(args, "iff", &self_, &x, &y))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x039F>(self_, x, y);
	return PyBool_FromLong(1);
}

PyObject* draw_sphere(PyObject* self, PyObject* args) // Sphere
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03A1>(x, y, z, radius);
	return PyBool_FromLong(1);
}

PyObject* set_car_status(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int status;
	if (!PyArg_ParseTuple(args, "ii", &self_, &status))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03A2>(self_, status);
	return PyBool_FromLong(1);
}

PyObject* is_char_male(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03A3>(self_));
}

PyObject* script_name(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int name;
	if (!PyArg_ParseTuple(args, "i", &name))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03A4>(name);
	return PyBool_FromLong(1);
}

PyObject* set_car_strong(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03AB>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* switch_streaming(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03AF>(state);
	return PyBool_FromLong(1);
}

PyObject* is_garage_open(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	if (!PyArg_ParseTuple(args, "i", &garageid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03B0>(garageid));
}

PyObject* is_garage_closed(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	if (!PyArg_ParseTuple(args, "i", &garageid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03B1>(garageid));
}

PyObject* swap_nearest_building_model(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int frommodelid;
	int tomodelid;
	if (!PyArg_ParseTuple(args, "ffffii", &x, &y, &z, &radius, &frommodelid, &tomodelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03B6>(x, y, z, radius, frommodelid, tomodelid);
	return PyBool_FromLong(1);
}

PyObject* switch_world_processing(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03B7>(state);
	return PyBool_FromLong(1);
}

PyObject* clear_area_of_cars(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03BA>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* add_sphere(PyObject* self, PyObject* args) // Sphere
{
	// inputs
	float x;
	float y;
	float z;
	float radius;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03BC>(x, y, z, radius, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* remove_sphere(PyObject* self, PyObject* args) // Sphere
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03BD>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_everyone_ignore_player(PyObject* self, PyObject* args) // Game
{
	// inputs
	int handle;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03BF>(handle, state);
	return PyBool_FromLong(1);
}

PyObject* store_car_char_is_in_no_save(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03C0>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* display_onscreen_timer_with_string(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int timer;
	int direction;
	int text;
	if (!PyArg_ParseTuple(args, "iii", &timer, &direction, &text))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03C3>(timer, direction, text);
	return PyBool_FromLong(1);
}

PyObject* display_onscreen_counter_with_string(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int counter;
	int display;
	int text;
	if (!PyArg_ParseTuple(args, "iii", &counter, &display, &text))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03C4>(counter, display, text);
	return PyBool_FromLong(1);
}

PyObject* create_random_car_for_car_park(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03C5>(x, y, z, heading);
	return PyBool_FromLong(1);
}

PyObject* set_wanted_multiplier(PyObject* self, PyObject* args) // Game
{
	// inputs
	float multiplier;
	if (!PyArg_ParseTuple(args, "f", &multiplier))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03C7>(multiplier);
	return PyBool_FromLong(1);
}

PyObject* set_camera_in_front_of_player(PyObject* self, PyObject* args) // Camera
{
	plugin::Command<0x03C8>();
	return PyBool_FromLong(1);
}

PyObject* is_car_visibly_damaged(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03C9>(self_));
}

PyObject* does_object_exist(PyObject* self, PyObject* args) // Object
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03CA>(handle));
}

PyObject* load_scene(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03CB>(x, y, z);
	return PyBool_FromLong(1);
}

PyObject* add_stuck_car_check(PyObject* self, PyObject* args) // Stuckcarcheck
{
	// inputs
	int vehicle;
	float speed;
	int duration;
	if (!PyArg_ParseTuple(args, "ifi", &vehicle, &speed, &duration))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03CC>(vehicle, speed, duration);
	return PyBool_FromLong(1);
}

PyObject* remove_stuck_car_check(PyObject* self, PyObject* args) // Stuckcarcheck
{
	// inputs
	int vehicle;
	if (!PyArg_ParseTuple(args, "i", &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03CD>(vehicle);
	return PyBool_FromLong(1);
}

PyObject* is_car_stuck(PyObject* self, PyObject* args) // Stuckcarcheck
{
	// inputs
	int vehicle;
	if (!PyArg_ParseTuple(args, "i", &vehicle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03CE>(vehicle));
}

PyObject* load_mission_audio(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	int audioid;
	if (!PyArg_ParseTuple(args, "ii", &slotid, &audioid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03CF>(slotid, audioid);
	return PyBool_FromLong(1);
}

PyObject* has_mission_audio_loaded(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	if (!PyArg_ParseTuple(args, "i", &slotid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03D0>(slotid));
}

PyObject* play_mission_audio(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	if (!PyArg_ParseTuple(args, "i", &slotid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03D1>(slotid);
	return PyBool_FromLong(1);
}

PyObject* has_mission_audio_finished(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	if (!PyArg_ParseTuple(args, "i", &slotid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03D2>(slotid));
}

PyObject* get_closest_car_node_with_heading(PyObject* self, PyObject* args) // Path
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	float nodex;
	float nodey;
	float nodez;
	float angle;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03D3>(x, y, z, &nodex, &nodey, &nodez, &angle);
	return Py_BuildValue("ffff", nodex, nodey, nodez, angle);
}

PyObject* clear_this_print(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	if (!PyArg_ParseTuple(args, "i", &key))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03D5>(key);
	return PyBool_FromLong(1);
}

PyObject* clear_this_big_print(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	if (!PyArg_ParseTuple(args, "i", &key))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03D6>(key);
	return PyBool_FromLong(1);
}

PyObject* set_mission_audio_position(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &slotid, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03D7>(slotid, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* activate_save_menu(PyObject* self, PyObject* args) // Game
{
	plugin::Command<0x03D8>();
	return PyBool_FromLong(1);
}

PyObject* has_save_game_finished(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x03D9>());
}

PyObject* add_blip_for_pickup(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int pickup;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &pickup))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03DC>(pickup, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_ped_density_multiplier(PyObject* self, PyObject* args) // World
{
	// inputs
	float multiplier;
	if (!PyArg_ParseTuple(args, "f", &multiplier))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03DE>(multiplier);
	return PyBool_FromLong(1);
}

PyObject* set_text_draw_before_fade(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03E0>(state);
	return PyBool_FromLong(1);
}

PyObject* set_sprites_draw_before_fade(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03E3>(state);
	return PyBool_FromLong(1);
}

PyObject* set_text_right_justify(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03E4>(state);
	return PyBool_FromLong(1);
}

PyObject* print_help(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	if (!PyArg_ParseTuple(args, "i", &key))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03E5>(key);
	return PyBool_FromLong(1);
}

PyObject* clear_help(PyObject* self, PyObject* args) // Text
{
	plugin::Command<0x03E6>();
	return PyBool_FromLong(1);
}

PyObject* flash_hud_object(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int object;
	if (!PyArg_ParseTuple(args, "i", &object))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03E7>(object);
	return PyBool_FromLong(1);
}

PyObject* clear_small_prints(PyObject* self, PyObject* args) // Text
{
	plugin::Command<0x03EB>();
	return PyBool_FromLong(1);
}

PyObject* set_upsidedown_car_not_damaged(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03ED>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* can_player_start_mission(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x03EE>(self_));
}

PyObject* make_player_safe_for_cutscene(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03EF>(self_);
	return PyBool_FromLong(1);
}

PyObject* use_text_commands(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03F0>(state);
	return PyBool_FromLong(1);
}

PyObject* get_car_colours(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int primarycolour;
	int secondarycolour;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03F3>(self_, &primarycolour, &secondarycolour);
	return Py_BuildValue("ii", primarycolour, secondarycolour);
}

PyObject* set_all_cars_can_be_damaged(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03F4>(state);
	return PyBool_FromLong(1);
}

PyObject* set_car_can_be_damaged(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03F5>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_drunk_input_delay(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int pad;
	int delay;
	if (!PyArg_ParseTuple(args, "ii", &pad, &delay))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03FD>(pad, delay);
	return PyBool_FromLong(1);
}

PyObject* set_char_money(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int amount;
	if (!PyArg_ParseTuple(args, "ii", &self_, &amount))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x03FE>(self_, amount);
	return PyBool_FromLong(1);
}

PyObject* get_offset_from_object_in_world_coords(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float xoffset;
	float yoffset;
	float zoffset;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &xoffset, &yoffset, &zoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0400>(self_, xoffset, yoffset, zoffset, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* get_offset_from_car_in_world_coords(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float xoffset;
	float yoffset;
	float zoffset;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &xoffset, &yoffset, &zoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0407>(self_, xoffset, yoffset, zoffset, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* is_german_game(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x040C>());
}

PyObject* clear_mission_audio(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	if (!PyArg_ParseTuple(args, "i", &slotid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x040D>(slotid);
	return PyBool_FromLong(1);
}

PyObject* set_free_health_care(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0414>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* load_and_launch_mission_internal(PyObject* self, PyObject* args) // Mission
{
	// inputs
	int index;
	if (!PyArg_ParseTuple(args, "i", &index))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0417>(index);
	return PyBool_FromLong(1);
}

PyObject* set_object_draw_last(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0418>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* get_ammo_in_char_weapon(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;

	// outputs
	int ammo;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x041A>(self_, weapontype, &ammo);
	return Py_BuildValue("i", ammo);
}

PyObject* set_near_clip(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float value;
	if (!PyArg_ParseTuple(args, "f", &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x041D>(value);
	return PyBool_FromLong(1);
}

PyObject* set_radio_channel(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int channel;
	if (!PyArg_ParseTuple(args, "i", &channel))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x041E>(channel);
	return PyBool_FromLong(1);
}

PyObject* set_car_traction(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float traction;
	if (!PyArg_ParseTuple(args, "if", &self_, &traction))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0423>(self_, traction);
	return PyBool_FromLong(1);
}

PyObject* are_measurements_in_metres(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0424>());
}

PyObject* set_car_avoid_level_transitions(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0428>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* clear_area_of_chars(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x042B>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* set_total_number_of_missions(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int nummissions;
	if (!PyArg_ParseTuple(args, "i", &nummissions))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x042C>(nummissions);
	return PyBool_FromLong(1);
}

PyObject* register_fastest_time(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x042E>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* warp_char_into_car_as_passenger(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	int seatid;
	if (!PyArg_ParseTuple(args, "iii", &self_, &handle, &seatid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0430>(self_, handle, seatid);
	return PyBool_FromLong(1);
}

PyObject* is_car_passenger_seat_free(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int seatindex;
	if (!PyArg_ParseTuple(args, "ii", &self_, &seatindex))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0431>(self_, seatindex));
}

PyObject* get_char_in_car_passenger_seat(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int seatindex;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &seatindex))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0432>(self_, seatindex, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_char_is_chris_criminal(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0433>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* start_credits(PyObject* self, PyObject* args) // Credits
{
	plugin::Command<0x0434>();
	return PyBool_FromLong(1);
}

PyObject* stop_credits(PyObject* self, PyObject* args) // Credits
{
	plugin::Command<0x0435>();
	return PyBool_FromLong(1);
}

PyObject* are_credits_finished(PyObject* self, PyObject* args) // Credits
{
	return PyBool_FromLong(plugin::Command<0x0436>());
}

PyObject* set_music_does_fade(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x043C>(state);
	return PyBool_FromLong(1);
}

PyObject* get_car_model(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0441>(self_, &modelid);
	return Py_BuildValue("i", modelid);
}

PyObject* are_any_car_cheats_activated(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0445>());
}

PyObject* set_char_suffers_critical_hits(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0446>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_char_sitting_in_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0448>(self_, vehicle));
}

PyObject* is_char_sitting_in_any_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0449>(self_));
}

PyObject* is_char_on_foot(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x044B>(self_));
}

PyObject* set_object_rotation(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0453>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_debug_camera_coordinates(PyObject* self, PyObject* args) // Camera
{

	// outputs
	float x;
	float y;
	float z;
	plugin::Command<0x0454>(&x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* is_player_targetting_char(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0457>(self_, handle));
}

PyObject* is_player_targetting_object(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0458>(self_, handle));
}

PyObject* terminate_all_scripts_with_this_name(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int name;
	if (!PyArg_ParseTuple(args, "i", &name))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0459>(name);
	return PyBool_FromLong(1);
}

PyObject* display_text_with_number(PyObject* self, PyObject* args) // Text
{
	// inputs
	float offsetleft;
	float offsettop;
	int key;
	int num;
	if (!PyArg_ParseTuple(args, "ffii", &offsetleft, &offsettop, &key, &num))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x045A>(offsetleft, offsettop, key, num);
	return PyBool_FromLong(1);
}

PyObject* display_text_with_2_numbers(PyObject* self, PyObject* args) // Text
{
	// inputs
	float offsetleft;
	float offsettop;
	int key;
	int num1;
	int num2;
	if (!PyArg_ParseTuple(args, "ffiii", &offsetleft, &offsettop, &key, &num1, &num2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x045B>(offsetleft, offsettop, key, num1, num2);
	return PyBool_FromLong(1);
}

PyObject* fail_current_mission(PyObject* self, PyObject* args) // Mission
{
	plugin::Command<0x045C>();
	return PyBool_FromLong(1);
}

PyObject* set_interpolation_parameters(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float _p1;
	int time;
	if (!PyArg_ParseTuple(args, "fi", &_p1, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0460>(_p1, time);
	return PyBool_FromLong(1);
}

PyObject* get_debug_camera_point_at(PyObject* self, PyObject* args) // Camera
{

	// outputs
	float x;
	float y;
	float z;
	plugin::Command<0x0463>(&x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* attach_char_to_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	float xoffset;
	float yoffset;
	float zoffset;
	int position;
	float anglelimit;
	int weapontype;
	if (!PyArg_ParseTuple(args, "iifffifi", &self_, &vehicle, &xoffset, &yoffset, &zoffset, &position, &anglelimit, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0464>(self_, vehicle, xoffset, yoffset, zoffset, position, anglelimit, weapontype);
	return PyBool_FromLong(1);
}

PyObject* detach_char_from_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0465>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_car_stay_in_fast_lane(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0466>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* clear_char_last_weapon_damage(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0467>(self_);
	return PyBool_FromLong(1);
}

PyObject* clear_car_last_weapon_damage(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0468>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_driver_of_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x046C>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_number_of_followers(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int number;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x046D>(self_, &number);
	return Py_BuildValue("i", number);
}

PyObject* give_remote_controlled_model_to_player(PyObject* self, PyObject* args) // Rc
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	float angle;
	int modelid;
	if (!PyArg_ParseTuple(args, "iffffi", &handle, &x, &y, &z, &angle, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x046E>(handle, x, y, z, angle, modelid);
	return PyBool_FromLong(1);
}

PyObject* get_current_char_weapon(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int weapontype;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0470>(self_, &weapontype);
	return Py_BuildValue("i", weapontype);
}

PyObject* locate_char_any_means_object_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &object, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0471>(self_, object, xradius, yradius, drawsphere));
}

PyObject* locate_char_on_foot_object_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &object, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0472>(self_, object, xradius, yradius, drawsphere));
}

PyObject* locate_char_in_car_object_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iiffi", &self_, &object, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0473>(self_, object, xradius, yradius, drawsphere));
}

PyObject* locate_char_any_means_object_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &object, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0474>(self_, object, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_on_foot_object_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &object, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0475>(self_, object, xradius, yradius, zradius, drawsphere));
}

PyObject* locate_char_in_car_object_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int object;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iifffi", &self_, &object, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0476>(self_, object, xradius, yradius, zradius, drawsphere));
}

PyObject* set_car_temp_action(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int actionid;
	int timeinms;
	if (!PyArg_ParseTuple(args, "iii", &self_, &actionid, &timeinms))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0477>(self_, actionid, timeinms);
	return PyBool_FromLong(1);
}

PyObject* is_char_on_any_bike(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x047A>(self_));
}

PyObject* can_char_see_dead_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int pedtype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &pedtype))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0480>(self_, pedtype));
}

PyObject* get_remote_controlled_car(PyObject* self, PyObject* args) // Rc
{
	// inputs
	int player;

	// outputs
	int car;
	if (!PyArg_ParseTuple(args, "i", &player))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0484>(player, &car);
	return Py_BuildValue("i", car);
}

PyObject* is_pc_version(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0485>());
}

PyObject* is_model_available(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0488>(modelid));
}

PyObject* shut_char_up(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0489>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_enable_rc_detonate(PyObject* self, PyObject* args) // Rc
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x048A>(state);
	return PyBool_FromLong(1);
}

PyObject* set_car_random_route_seed(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int routeseed;
	if (!PyArg_ParseTuple(args, "ii", &self_, &routeseed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x048B>(self_, routeseed);
	return PyBool_FromLong(1);
}

PyObject* is_any_pickup_at_coords(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x048C>(x, y, z));
}

PyObject* remove_all_char_weapons(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x048F>(self_);
	return PyBool_FromLong(1);
}

PyObject* has_char_got_weapon(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0491>(self_, weapontype));
}

PyObject* get_position_of_analogue_sticks(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int pad;

	// outputs
	int leftstickx;
	int leftsticky;
	int rightstickx;
	int rightsticky;
	if (!PyArg_ParseTuple(args, "i", &pad))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0494>(pad, &leftstickx, &leftsticky, &rightstickx, &rightsticky);
	return Py_BuildValue("iiii", leftstickx, leftsticky, rightstickx, rightsticky);
}

PyObject* is_car_on_fire(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0495>(self_));
}

PyObject* is_car_tyre_burst(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int tireid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &tireid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0496>(self_, tireid));
}

PyObject* heli_goto_coords(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float minaltitude;
	float maxaltitude;
	if (!PyArg_ParseTuple(args, "ifffff", &self_, &x, &y, &z, &minaltitude, &maxaltitude))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04A2>(self_, x, y, z, minaltitude, maxaltitude);
	return PyBool_FromLong(1);
}

PyObject* is_int_var_equal_to_constant(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04A3>(_p1, _p2));
}

PyObject* is_int_lvar_equal_to_constant(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04A4>(_p1, _p2));
}

PyObject* get_dead_char_pickup_coords(PyObject* self, PyObject* args) // World
{
	// inputs
	int char_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &char_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04A5>(char_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* create_protection_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	float x;
	float y;
	float z;
	int revenuelimit;
	int revenuerate;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffii", &x, &y, &z, &revenuelimit, &revenuerate))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04A6>(x, y, z, revenuelimit, revenuerate, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_char_in_any_boat(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04A7>(self_));
}

PyObject* is_char_in_any_heli(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04A9>(self_));
}

PyObject* is_char_in_any_plane(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04AB>(self_));
}

PyObject* is_char_in_water(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04AD>(self_));
}

PyObject* get_char_weapon_in_slot(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weaponslotid;

	// outputs
	int weapontype;
	int weaponammo;
	int weaponmodel;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weaponslotid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04B8>(self_, weaponslotid, &weapontype, &weaponammo, &weaponmodel);
	return Py_BuildValue("iii", weapontype, weaponammo, weaponmodel);
}

PyObject* get_closest_straight_road(PyObject* self, PyObject* args) // Path
{
	// inputs
	float x;
	float y;
	float z;
	float mindist;
	float maxdist;

	// outputs
	float node1x;
	float node1y;
	float node1z;
	float node2x;
	float node2y;
	float node2z;
	float angle;
	if (!PyArg_ParseTuple(args, "fffff", &x, &y, &z, &mindist, &maxdist))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04B9>(x, y, z, mindist, maxdist, &node1x, &node1y, &node1z, &node2x, &node2y, &node2z, &angle);
	return Py_BuildValue("fffffff", node1x, node1y, node1z, node2x, node2y, node2z, angle);
}

PyObject* set_car_forward_speed(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float forwardspeed;
	if (!PyArg_ParseTuple(args, "if", &self_, &forwardspeed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04BA>(self_, forwardspeed);
	return PyBool_FromLong(1);
}

PyObject* set_area_visible(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int areaid;
	if (!PyArg_ParseTuple(args, "i", &areaid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04BB>(areaid);
	return PyBool_FromLong(1);
}

PyObject* mark_car_as_convoy_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04BD>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* create_script_roadblock(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int type;
	if (!PyArg_ParseTuple(args, "ffffffi", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04C0>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, type);
	return PyBool_FromLong(1);
}

PyObject* clear_all_script_roadblocks(PyObject* self, PyObject* args) // World
{
	plugin::Command<0x04C1>();
	return PyBool_FromLong(1);
}

PyObject* get_offset_from_char_in_world_coords(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float xoffset;
	float yoffset;
	float zoffset;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &xoffset, &yoffset, &zoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04C4>(self_, xoffset, yoffset, zoffset, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* has_char_been_photographed(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04C5>(self_));
}

PyObject* is_char_in_flying_vehicle(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04C8>(self_));
}

PyObject* add_short_range_sprite_blip_for_coord(PyObject* self, PyObject* args) // Blip
{
	// inputs
	float x;
	float y;
	float z;
	int sprite;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &sprite))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04CE>(x, y, z, sprite, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_heli_orientation(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	float angle;
	if (!PyArg_ParseTuple(args, "if", &self_, &angle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D0>(self_, angle);
	return PyBool_FromLong(1);
}

PyObject* clear_heli_orientation(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D1>(self_);
	return PyBool_FromLong(1);
}

PyObject* plane_goto_coords(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float minaltitude;
	float maxaltitude;
	if (!PyArg_ParseTuple(args, "ifffff", &self_, &x, &y, &z, &minaltitude, &maxaltitude))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D2>(self_, x, y, z, minaltitude, maxaltitude);
	return PyBool_FromLong(1);
}

PyObject* get_nth_closest_car_node(PyObject* self, PyObject* args) // Path
{
	// inputs
	float fromx;
	float fromy;
	float fromz;
	int n;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fffi", &fromx, &fromy, &fromz, &n))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D3>(fromx, fromy, fromz, n, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* draw_weaponshop_corona(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	float size;
	int coronatype;
	int flaretype;
	int r;
	int g;
	int b;
	if (!PyArg_ParseTuple(args, "ffffiiiii", &x, &y, &z, &size, &coronatype, &flaretype, &r, &g, &b))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D5>(x, y, z, size, coronatype, flaretype, r, g, b);
	return PyBool_FromLong(1);
}

PyObject* set_enable_rc_detonate_on_contact(PyObject* self, PyObject* args) // Rc
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D6>(state);
	return PyBool_FromLong(1);
}

PyObject* freeze_char_position(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D7>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_drowns_in_water(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D8>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_object_records_collisions(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04D9>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* has_object_collided_with_anything(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04DA>(self_));
}

PyObject* remove_rc_buggy(PyObject* self, PyObject* args) // Rc
{
	plugin::Command<0x04DB>();
	return PyBool_FromLong(1);
}

PyObject* get_char_armour(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int armor;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04DD>(self_, &armor);
	return Py_BuildValue("i", armor);
}

PyObject* set_heli_stabiliser(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04DF>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_car_straight_line_distance(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int distance;
	if (!PyArg_ParseTuple(args, "ii", &self_, &distance))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04E0>(self_, distance);
	return PyBool_FromLong(1);
}

PyObject* pop_car_boot(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04E1>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_player_mood(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int mood;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &self_, &mood, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04E3>(self_, mood, time);
	return PyBool_FromLong(1);
}

PyObject* request_collision(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	float x;
	float y;
	if (!PyArg_ParseTuple(args, "ff", &x, &y))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04E4>(x, y);
	return PyBool_FromLong(1);
}

PyObject* locate_object_2d(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float xradius;
	float yradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &x, &y, &xradius, &yradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04E5>(self_, x, y, xradius, yradius, drawsphere));
}

PyObject* locate_object_3d(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float xradius;
	float yradius;
	float zradius;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &x, &y, &z, &xradius, &yradius, &zradius, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04E6>(self_, x, y, z, xradius, yradius, zradius, drawsphere));
}

PyObject* is_object_in_water(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04E7>(self_));
}

PyObject* is_object_in_area_2d(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04E9>(self_, leftbottomx, leftbottomy, righttopx, righttopy, drawsphere));
}

PyObject* is_object_in_area_3d(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "iffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04EA>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, drawsphere));
}

PyObject* task_toggle_duck(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04EB>(handle, state);
	return PyBool_FromLong(1);
}

PyObject* request_animation(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int animationfile;
	if (!PyArg_ParseTuple(args, "i", &animationfile))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04ED>(animationfile);
	return PyBool_FromLong(1);
}

PyObject* has_animation_loaded(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int animationfile;
	if (!PyArg_ParseTuple(args, "i", &animationfile))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04EE>(animationfile));
}

PyObject* remove_animation(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int animationfile;
	if (!PyArg_ParseTuple(args, "i", &animationfile))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04EF>(animationfile);
	return PyBool_FromLong(1);
}

PyObject* is_char_waiting_for_world_collision(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04F0>(self_));
}

PyObject* is_car_waiting_for_world_collision(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x04F1>(self_));
}

PyObject* attach_char_to_object(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	int orientation;
	float anglelimit;
	int weapontype;
	if (!PyArg_ParseTuple(args, "iifffifi", &self_, &handle, &xoffset, &yoffset, &zoffset, &orientation, &anglelimit, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04F4>(self_, handle, xoffset, yoffset, zoffset, orientation, anglelimit, weapontype);
	return PyBool_FromLong(1);
}

PyObject* display_nth_onscreen_counter_with_string(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int counter;
	int display;
	int slot;
	int text;
	if (!PyArg_ParseTuple(args, "iiii", &counter, &display, &slot, &text))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04F7>(counter, display, slot, text);
	return PyBool_FromLong(1);
}

PyObject* add_set_piece(PyObject* self, PyObject* args) // World
{
	// inputs
	int type;
	float fromx;
	float fromy;
	float tox;
	float toy;
	float spawnpoliceaatx;
	float spawnpoliceaaty;
	float headedtowardsaatx;
	float headedtowardsaaty;
	float spawnpolicebatx;
	float spawnpolicebaty;
	float headedtowardsbatx;
	float headedtowardsbaty;
	if (!PyArg_ParseTuple(args, "iffffffffffff", &type, &fromx, &fromy, &tox, &toy, &spawnpoliceaatx, &spawnpoliceaaty, &headedtowardsaatx, &headedtowardsaaty, &spawnpolicebatx, &spawnpolicebaty, &headedtowardsbatx, &headedtowardsbaty))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04F8>(type, fromx, fromy, tox, toy, spawnpoliceaatx, spawnpoliceaaty, headedtowardsaatx, headedtowardsaaty, spawnpolicebatx, spawnpolicebaty, headedtowardsbatx, headedtowardsbaty);
	return PyBool_FromLong(1);
}

PyObject* set_extra_colours(PyObject* self, PyObject* args) // World
{
	// inputs
	int color;
	int fade;
	if (!PyArg_ParseTuple(args, "ii", &color, &fade))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04F9>(color, fade);
	return PyBool_FromLong(1);
}

PyObject* clear_extra_colours(PyObject* self, PyObject* args) // World
{
	// inputs
	int withfade;
	if (!PyArg_ParseTuple(args, "i", &withfade))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04FA>(withfade);
	return PyBool_FromLong(1);
}

PyObject* get_wheelie_stats(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int twowheelstime;
	float twowheelsdistance;
	int wheelietime;
	float wheeliedistance;
	int stoppietime;
	float stoppiedistance;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04FC>(self_, &twowheelstime, &twowheelsdistance, &wheelietime, &wheeliedistance, &stoppietime, &stoppiedistance);
	return Py_BuildValue("ififif", twowheelstime, twowheelsdistance, wheelietime, wheeliedistance, stoppietime, stoppiedistance);
}

PyObject* burst_car_tyre(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int tireid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &tireid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x04FE>(self_, tireid);
	return PyBool_FromLong(1);
}

PyObject* is_player_wearing(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int modelname;
	int bodypart;
	if (!PyArg_ParseTuple(args, "iii", &self_, &modelname, &bodypart))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0500>(self_, modelname, bodypart));
}

PyObject* set_player_can_do_drive_by(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0501>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* create_swat_rope(PyObject* self, PyObject* args) // Char
{
	// inputs
	int pedtype;
	int modelid;
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iifff", &pedtype, &modelid, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0503>(pedtype, modelid, x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_car_model_components(PyObject* self, PyObject* args) // Car
{
	// inputs
	int _unused;
	int component1;
	int component2;
	if (!PyArg_ParseTuple(args, "iii", &_unused, &component1, &component2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0506>(_unused, component1, component2);
	return PyBool_FromLong(1);
}

PyObject* close_all_car_doors(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0508>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_distance_between_coords_2d(PyObject* self, PyObject* args) // Math
{
	// inputs
	float fromx;
	float fromy;
	float tox;
	float toz;

	// outputs
	float distance;
	if (!PyArg_ParseTuple(args, "ffff", &fromx, &fromy, &tox, &toz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0509>(fromx, fromy, tox, toz, &distance);
	return Py_BuildValue("f", distance);
}

PyObject* get_distance_between_coords_3d(PyObject* self, PyObject* args) // Math
{
	// inputs
	float fromx;
	float fromy;
	float fromz;
	float tox;
	float toy;
	float toz;

	// outputs
	float distance;
	if (!PyArg_ParseTuple(args, "ffffff", &fromx, &fromy, &fromz, &tox, &toy, &toz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x050A>(fromx, fromy, fromz, tox, toy, toz, &distance);
	return Py_BuildValue("f", distance);
}

PyObject* sort_out_object_collision_with_car(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x050E>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* get_max_wanted_level(PyObject* self, PyObject* args) // Game
{

	// outputs
	int level;
	plugin::Command<0x050F>(&level);
	return Py_BuildValue("i", level);
}

PyObject* print_help_forever(PyObject* self, PyObject* args) // Text
{
	// inputs
	int key;
	if (!PyArg_ParseTuple(args, "i", &key))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0512>(key);
	return PyBool_FromLong(1);
}

PyObject* print_help_forever_with_number(PyObject* self, PyObject* args) // Text
{
	// inputs
	int gxt;
	int number;
	if (!PyArg_ParseTuple(args, "ii", &gxt, &number))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0513>(gxt, number);
	return PyBool_FromLong(1);
}

PyObject* create_locked_property_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	float x;
	float y;
	float z;
	int message;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &message))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0517>(x, y, z, message, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_forsale_property_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	float x;
	float y;
	float z;
	int price;
	int message;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffii", &x, &y, &z, &price, &message))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0518>(x, y, z, price, message, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* freeze_car_position(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0519>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* has_char_been_damaged_by_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x051A>(self_, handle));
}

PyObject* has_char_been_damaged_by_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x051B>(self_, handle));
}

PyObject* has_car_been_damaged_by_char(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x051C>(self_, handle));
}

PyObject* has_car_been_damaged_by_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int other;
	if (!PyArg_ParseTuple(args, "ii", &self_, &other))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x051D>(self_, other));
}

PyObject* get_radio_channel(PyObject* self, PyObject* args) // Audio
{

	// outputs
	int channel;
	plugin::Command<0x051E>(&channel);
	return Py_BuildValue("i", channel);
}

PyObject* set_char_stay_in_car_when_jacked(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0526>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_player_drunkenness(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int intensity;
	if (!PyArg_ParseTuple(args, "ii", &self_, &intensity))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x052C>(self_, intensity);
	return PyBool_FromLong(1);
}

PyObject* get_random_car_of_type_in_area_no_save(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int modelid;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffi", &leftbottomx, &leftbottomy, &righttopx, &righttopy, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x053E>(leftbottomx, leftbottomy, righttopx, righttopy, modelid, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_can_burst_car_tyres(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x053F>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* fire_hunter_gun(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0541>(self_);
	return PyBool_FromLong(1);
}

PyObject* is_char_touching_vehicle(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0547>(self_, handle));
}

PyObject* set_char_can_be_shot_in_vehicle(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x054A>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* load_mission_text(PyObject* self, PyObject* args) // Text
{
	// inputs
	int tablename;
	if (!PyArg_ParseTuple(args, "i", &tablename))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x054C>(tablename);
	return PyBool_FromLong(1);
}

PyObject* clear_char_last_damage_entity(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x054E>(self_);
	return PyBool_FromLong(1);
}

PyObject* clear_car_last_damage_entity(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x054F>(self_);
	return PyBool_FromLong(1);
}

PyObject* freeze_object_position(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0550>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* remove_weapon_from_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int weapontype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0555>(self_, weapontype);
	return PyBool_FromLong(1);
}

PyObject* make_player_fire_proof(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x055D>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* increase_player_max_health(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &self_, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x055E>(self_, value);
	return PyBool_FromLong(1);
}

PyObject* increase_player_max_armour(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &self_, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x055F>(self_, value);
	return PyBool_FromLong(1);
}

PyObject* create_random_char_as_driver(PyObject* self, PyObject* args) // Char
{
	// inputs
	int vehicle;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0560>(vehicle, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_random_char_as_passenger(PyObject* self, PyObject* args) // Char
{
	// inputs
	int vehicle;
	int seatid;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &vehicle, &seatid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0561>(vehicle, seatid, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* ensure_player_has_drive_by_weapon(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int ammo;
	if (!PyArg_ParseTuple(args, "ii", &self_, &ammo))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0563>(self_, ammo);
	return PyBool_FromLong(1);
}

PyObject* make_heli_come_crashing_down(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0564>(self_);
	return PyBool_FromLong(1);
}

PyObject* add_explosion_no_sound(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	int type;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0565>(x, y, z, type);
	return PyBool_FromLong(1);
}

PyObject* set_object_area_visible(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int areaid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &areaid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0566>(self_, areaid);
	return PyBool_FromLong(1);
}

PyObject* set_char_never_targeted(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0568>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* was_cutscene_skipped(PyObject* self, PyObject* args) // Cutscene
{
	return PyBool_FromLong(plugin::Command<0x056A>());
}

PyObject* is_char_in_any_police_vehicle(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x056C>(self_));
}

PyObject* does_char_exist(PyObject* self, PyObject* args) // Char
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x056D>(handle));
}

PyObject* does_vehicle_exist(PyObject* self, PyObject* args) // Car
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x056E>(handle));
}

PyObject* add_short_range_sprite_blip_for_contact_point(PyObject* self, PyObject* args) // Blip
{
	// inputs
	float x;
	float y;
	float z;
	int sprite;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &sprite))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0570>(x, y, z, sprite, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_all_taxis_have_nitro(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0572>(state);
	return PyBool_FromLong(1);
}

PyObject* freeze_car_position_and_dont_load_collision(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0574>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* freeze_char_position_and_dont_load_collision(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0575>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_player_is_in_stadium(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x057E>(state);
	return PyBool_FromLong(1);
}

PyObject* display_radar(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0581>(state);
	return PyBool_FromLong(1);
}

PyObject* register_best_position(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	int position;
	if (!PyArg_ParseTuple(args, "ii", &statid, &position))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0582>(statid, position);
	return PyBool_FromLong(1);
}

PyObject* is_player_in_info_zone(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int infozone;
	if (!PyArg_ParseTuple(args, "ii", &self_, &infozone))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0583>(self_, infozone));
}

PyObject* set_load_collision_for_car_flag(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0587>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_load_collision_for_char_flag(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0588>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* add_big_gun_flash(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float fromx;
	float fromy;
	float fromz;
	float tox;
	float toy;
	float toz;
	if (!PyArg_ParseTuple(args, "ffffff", &fromx, &fromy, &fromz, &tox, &toy, &toz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x058A>(fromx, fromy, fromz, tox, toy, toz);
	return PyBool_FromLong(1);
}

PyObject* get_progress_percentage(PyObject* self, PyObject* args) // Stat
{

	// outputs
	float percentage;
	plugin::Command<0x058C>(&percentage);
	return Py_BuildValue("f", percentage);
}

PyObject* set_vehicle_to_fade_in(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int alpha;
	if (!PyArg_ParseTuple(args, "ii", &self_, &alpha))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0594>(self_, alpha);
	return PyBool_FromLong(1);
}

PyObject* register_oddjob_mission_passed(PyObject* self, PyObject* args) // Stat
{
	plugin::Command<0x0595>();
	return PyBool_FromLong(1);
}

PyObject* is_char_ducking(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0597>(self_));
}

PyObject* is_australian_game(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x059A>());
}

PyObject* set_onscreen_counter_flash_when_first_displayed(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int counter;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &counter, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x059C>(counter, state);
	return PyBool_FromLong(1);
}

PyObject* shuffle_card_decks(PyObject* self, PyObject* args) // Carddecks
{
	// inputs
	int type;
	if (!PyArg_ParseTuple(args, "i", &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x059D>(type);
	return PyBool_FromLong(1);
}

PyObject* fetch_next_card(PyObject* self, PyObject* args) // Carddecks
{

	// outputs
	int number;
	plugin::Command<0x059E>(&number);
	return Py_BuildValue("i", number);
}

PyObject* get_object_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x059F>(self_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* is_debug_camera_on(PyObject* self, PyObject* args) // Debugger
{
	return PyBool_FromLong(plugin::Command<0x05A0>());
}

PyObject* add_to_object_rotation_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A1>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_object_rotation_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A2>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* is_object_static(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05A3>(self_));
}

PyObject* get_angle_between_2d_vectors(PyObject* self, PyObject* args) // Math
{
	// inputs
	float x1;
	float y1;
	float x2;
	float y2;

	// outputs
	float angle;
	if (!PyArg_ParseTuple(args, "ffff", &x1, &y1, &x2, &y2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A4>(x1, y1, x2, y2, &angle);
	return Py_BuildValue("f", angle);
}

PyObject* do_2d_rectangles_collide(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	int _p4;
	int _p5;
	int _p6;
	int _p7;
	int _p8;
	if (!PyArg_ParseTuple(args, "iiiiiiii", &_p1, &_p2, &_p3, &_p4, &_p5, &_p6, &_p7, &_p8))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A5>(_p1, _p2, _p3, _p4, _p5, _p6, _p7, _p8);
	return PyBool_FromLong(1);
}

PyObject* get_object_rotation_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A6>(self_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* add_velocity_relative_to_object_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A7>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_object_speed(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float speed;
	if (!PyArg_ParseTuple(args, "if", &self_, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A8>(self_, speed);
	return PyBool_FromLong(1);
}

PyObject* set_var_text_label(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05A9>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_lvar_text_label(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05AA>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* is_var_text_label_equal_to_text_label(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05AD>(_p1, _p2));
}

PyObject* is_lvar_text_label_equal_to_text_label(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05AE>(_p1, _p2));
}

PyObject* get_2d_lines_intersect_point(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	int _p4;
	int _p5;
	int _p6;
	int _p7;
	int _p8;
	int _p9;
	int _p10;
	if (!PyArg_ParseTuple(args, "iiiiiiiiii", &_p1, &_p2, &_p3, &_p4, &_p5, &_p6, &_p7, &_p8, &_p9, &_p10))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05B0>(_p1, _p2, _p3, _p4, _p5, _p6, _p7, _p8, _p9, _p10);
	return PyBool_FromLong(1);
}

PyObject* save_string_to_debug_file(PyObject* self, PyObject* args) // Debugger
{
	// inputs
	int msg;
	if (!PyArg_ParseTuple(args, "i", &msg))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05B6>(msg);
	return PyBool_FromLong(1);
}

PyObject* task_pause(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05B9>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* task_stand_still(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05BA>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* task_fall_and_get_up(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int falldown;
	int timeonground;
	if (!PyArg_ParseTuple(args, "iii", &handle, &falldown, &timeonground))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05BB>(handle, falldown, timeonground);
	return PyBool_FromLong(1);
}

PyObject* task_jump(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05BC>(handle, state);
	return PyBool_FromLong(1);
}

PyObject* task_tired(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05BD>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* task_die(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05BE>(handle);
	return PyBool_FromLong(1);
}

PyObject* task_look_at_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int observer;
	int target;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &observer, &target, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05BF>(observer, target, time);
	return PyBool_FromLong(1);
}

PyObject* task_look_at_vehicle(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &char_, &vehicle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C0>(char_, vehicle, time);
	return PyBool_FromLong(1);
}

PyObject* task_say(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int phraseid;
	if (!PyArg_ParseTuple(args, "ii", &handle, &phraseid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C1>(handle, phraseid);
	return PyBool_FromLong(1);
}

PyObject* task_shake_fist(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C2>(handle);
	return PyBool_FromLong(1);
}

PyObject* task_cower(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C3>(handle);
	return PyBool_FromLong(1);
}

PyObject* task_hands_up(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C4>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* task_duck(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C5>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* task_use_atm(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C7>(handle);
	return PyBool_FromLong(1);
}

PyObject* task_scratch_head(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C8>(handle);
	return PyBool_FromLong(1);
}

PyObject* task_look_about(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05C9>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* task_enter_car_as_passenger(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int time;
	int seatid;
	if (!PyArg_ParseTuple(args, "iiii", &char_, &vehicle, &time, &seatid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05CA>(char_, vehicle, time, seatid);
	return PyBool_FromLong(1);
}

PyObject* task_enter_car_as_driver(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &char_, &vehicle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05CB>(char_, vehicle, time);
	return PyBool_FromLong(1);
}

PyObject* task_leave_car(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &char_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05CD>(char_, vehicle);
	return PyBool_FromLong(1);
}

PyObject* task_leave_car_and_flee(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "iifff", &char_, &vehicle, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05CF>(char_, vehicle, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* task_car_drive_to_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int driver;
	int vehicle;
	float x;
	float y;
	float z;
	float speed;
	int _p7;
	int _p8;
	int drivingstyle;
	if (!PyArg_ParseTuple(args, "iiffffiii", &driver, &vehicle, &x, &y, &z, &speed, &_p7, &_p8, &drivingstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05D1>(driver, vehicle, x, y, z, speed, _p7, _p8, drivingstyle);
	return PyBool_FromLong(1);
}

PyObject* task_car_drive_wander(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	float speed;
	int drivingstyle;
	if (!PyArg_ParseTuple(args, "iifi", &char_, &vehicle, &speed, &drivingstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05D2>(char_, vehicle, speed, drivingstyle);
	return PyBool_FromLong(1);
}

PyObject* task_go_straight_to_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	int movestate;
	int time;
	if (!PyArg_ParseTuple(args, "ifffii", &handle, &x, &y, &z, &movestate, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05D3>(handle, x, y, z, movestate, time);
	return PyBool_FromLong(1);
}

PyObject* task_achieve_heading(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float heading;
	if (!PyArg_ParseTuple(args, "if", &handle, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05D4>(handle, heading);
	return PyBool_FromLong(1);
}

PyObject* flush_route(PyObject* self, PyObject* args) // Path
{
	plugin::Command<0x05D6>();
	return PyBool_FromLong(1);
}

PyObject* extend_route(PyObject* self, PyObject* args) // Path
{
	// inputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05D7>(x, y, z);
	return PyBool_FromLong(1);
}

PyObject* task_follow_point_route(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int walkspeed;
	int flag;
	if (!PyArg_ParseTuple(args, "iii", &handle, &walkspeed, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05D8>(handle, walkspeed, flag);
	return PyBool_FromLong(1);
}

PyObject* task_goto_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int walking;
	int target;
	int time;
	float radius;
	if (!PyArg_ParseTuple(args, "iiif", &walking, &target, &time, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05D9>(walking, target, time, radius);
	return PyBool_FromLong(1);
}

PyObject* task_flee_point(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	float radius;
	int time;
	if (!PyArg_ParseTuple(args, "iffffi", &handle, &x, &y, &z, &radius, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05DA>(handle, x, y, z, radius, time);
	return PyBool_FromLong(1);
}

PyObject* task_flee_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int threat;
	float radius;
	int time;
	if (!PyArg_ParseTuple(args, "iifi", &handle, &threat, &radius, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05DB>(handle, threat, radius, time);
	return PyBool_FromLong(1);
}

PyObject* task_smart_flee_point(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	float radius;
	int time;
	if (!PyArg_ParseTuple(args, "iffffi", &handle, &x, &y, &z, &radius, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05DC>(handle, x, y, z, radius, time);
	return PyBool_FromLong(1);
}

PyObject* task_smart_flee_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int threat;
	float radius;
	int time;
	if (!PyArg_ParseTuple(args, "iifi", &handle, &threat, &radius, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05DD>(handle, threat, radius, time);
	return PyBool_FromLong(1);
}

PyObject* task_wander_standard(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05DE>(handle);
	return PyBool_FromLong(1);
}

PyObject* task_kill_char_on_foot(PyObject* self, PyObject* args) // Task
{
	// inputs
	int killer;
	int target;
	if (!PyArg_ParseTuple(args, "ii", &killer, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05E2>(killer, target);
	return PyBool_FromLong(1);
}

PyObject* start_playback_recorded_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int path;
	if (!PyArg_ParseTuple(args, "ii", &self_, &path))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05EB>(self_, path);
	return PyBool_FromLong(1);
}

PyObject* stop_playback_recorded_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05EC>(self_);
	return PyBool_FromLong(1);
}

PyObject* pause_playback_recorded_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05ED>(self_);
	return PyBool_FromLong(1);
}

PyObject* unpause_playback_recorded_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05EE>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_car_escort_car_left(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05F1>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* set_car_escort_car_right(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05F2>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* set_car_escort_car_rear(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05F3>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* set_car_escort_car_front(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05F4>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* task_follow_path_nodes_to_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	int walkspeed;
	int time;
	if (!PyArg_ParseTuple(args, "ifffii", &handle, &x, &y, &z, &walkspeed, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x05F5>(handle, x, y, z, walkspeed, time);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_angled_area_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05F6>(self_, leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_char_in_angled_area_on_foot_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05F7>(self_, leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_char_in_angled_area_in_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05F8>(self_, leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_char_stopped_in_angled_area_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05F9>(self_, leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_char_stopped_in_angled_area_on_foot_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05FA>(self_, leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_char_stopped_in_angled_area_in_car_2d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05FB>(self_, leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_char_in_angled_area_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05FC>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* is_char_in_angled_area_on_foot_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05FD>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* is_char_in_angled_area_in_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05FE>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* is_char_stopped_in_angled_area_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x05FF>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* is_char_stopped_in_angled_area_on_foot_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0600>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* is_char_stopped_in_angled_area_in_car_3d(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0601>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* is_char_in_taxi(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0602>(self_));
}

PyObject* task_go_to_coord_any_means(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	float x;
	float y;
	float z;
	int walkspeed;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ifffii", &char_, &x, &y, &z, &walkspeed, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0603>(char_, x, y, z, walkspeed, vehicle);
	return PyBool_FromLong(1);
}

PyObject* get_heading_from_vector_2d(PyObject* self, PyObject* args) // Math
{
	// inputs
	float x;
	float y;

	// outputs
	float heading;
	if (!PyArg_ParseTuple(args, "ff", &x, &y))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0604>(x, y, &heading);
	return Py_BuildValue("f", heading);
}

PyObject* task_play_anim(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int animationname;
	int animationfile;
	float framedelta;
	int loop;
	int lockx;
	int locky;
	int lockf;
	int time;
	if (!PyArg_ParseTuple(args, "iiifiiiii", &handle, &animationname, &animationfile, &framedelta, &loop, &lockx, &locky, &lockf, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0605>(handle, animationname, animationfile, framedelta, loop, lockx, locky, lockf, time);
	return PyBool_FromLong(1);
}

PyObject* load_path_nodes_in_area(PyObject* self, PyObject* args) // Path
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	if (!PyArg_ParseTuple(args, "ffff", &leftbottomx, &leftbottomy, &righttopx, &righttopy))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0606>(leftbottomx, leftbottomy, righttopx, righttopy);
	return PyBool_FromLong(1);
}

PyObject* release_path_nodes(PyObject* self, PyObject* args) // Path
{
	plugin::Command<0x0607>();
	return PyBool_FromLong(1);
}

PyObject* load_char_decision_maker(PyObject* self, PyObject* args) // Decisionmakerchar
{
	// inputs
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x060A>(type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_char_decision_maker(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int maskorhandle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &maskorhandle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x060B>(self_, maskorhandle);
	return PyBool_FromLong(1);
}

PyObject* set_text_dropshadow(PyObject* self, PyObject* args) // Text
{
	// inputs
	int intensity;
	int red;
	int green;
	int blue;
	int alpha;
	if (!PyArg_ParseTuple(args, "iiiii", &intensity, &red, &green, &blue, &alpha))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x060D>(intensity, red, green, blue, alpha);
	return PyBool_FromLong(1);
}

PyObject* is_playback_going_on_for_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x060E>(self_));
}

PyObject* set_sense_range(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float meleeaccuracy;
	if (!PyArg_ParseTuple(args, "if", &self_, &meleeaccuracy))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x060F>(self_, meleeaccuracy);
	return PyBool_FromLong(1);
}

PyObject* is_char_playing_anim(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int animationname;
	if (!PyArg_ParseTuple(args, "ii", &self_, &animationname))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0611>(self_, animationname));
}

PyObject* set_char_anim_playing_flag(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int animationname;
	int flag;
	if (!PyArg_ParseTuple(args, "iii", &self_, &animationname, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0612>(self_, animationname, flag);
	return PyBool_FromLong(1);
}

PyObject* get_char_anim_current_time(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int animationname;

	// outputs
	int time;
	if (!PyArg_ParseTuple(args, "ii", &self_, &animationname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0613>(self_, animationname, &time);
	return Py_BuildValue("i", time);
}

PyObject* set_char_anim_current_time(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int animationname;
	float time;
	if (!PyArg_ParseTuple(args, "iif", &self_, &animationname, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0614>(self_, animationname, time);
	return PyBool_FromLong(1);
}

PyObject* open_sequence_task(PyObject* self, PyObject* args) // Sequence
{

	// outputs
	int handle;
	plugin::Command<0x0615>(&handle);
	return Py_BuildValue("i", handle);
}

PyObject* close_sequence_task(PyObject* self, PyObject* args) // Sequence
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0616>(self_);
	return PyBool_FromLong(1);
}

PyObject* perform_sequence_task(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int sequence;
	if (!PyArg_ParseTuple(args, "ii", &self_, &sequence))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0618>(self_, sequence);
	return PyBool_FromLong(1);
}

PyObject* set_char_collision(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0619>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* get_char_anim_total_time(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int animationname;

	// outputs
	int time;
	if (!PyArg_ParseTuple(args, "ii", &self_, &animationname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x061A>(self_, animationname, &time);
	return Py_BuildValue("i", time);
}

PyObject* clear_sequence_task(PyObject* self, PyObject* args) // Sequence
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x061B>(self_);
	return PyBool_FromLong(1);
}

PyObject* add_attractor(PyObject* self, PyObject* args) // Attractor
{
	// inputs
	float x;
	float y;
	float z;
	float angle;
	float _p5;
	int sequence;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffffi", &x, &y, &z, &angle, &_p5, &sequence))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x061D>(x, y, z, angle, _p5, sequence, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* clear_attractor(PyObject* self, PyObject* args) // Attractor
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x061E>(self_);
	return PyBool_FromLong(1);
}

PyObject* create_char_at_attractor(PyObject* self, PyObject* args) // Char
{
	// inputs
	int pedtype;
	int modelid;
	int taskid;
	int attractor;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiii", &pedtype, &modelid, &taskid, &attractor))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0621>(pedtype, modelid, taskid, attractor, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* task_leave_car_immediately(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &char_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0622>(char_, vehicle);
	return PyBool_FromLong(1);
}

PyObject* increment_int_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0623>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* increment_float_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	float value;
	if (!PyArg_ParseTuple(args, "if", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0624>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* decrement_int_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0625>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* decrement_float_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	float value;
	if (!PyArg_ParseTuple(args, "if", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0626>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* register_int_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0627>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* register_float_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	float value;
	if (!PyArg_ParseTuple(args, "if", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0628>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* set_int_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0629>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* set_float_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	float value;
	if (!PyArg_ParseTuple(args, "if", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x062A>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* get_script_task_status(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int taskid;

	// outputs
	int status;
	if (!PyArg_ParseTuple(args, "ii", &self_, &taskid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x062E>(self_, taskid, &status);
	return Py_BuildValue("i", status);
}

PyObject* create_group(PyObject* self, PyObject* args) // Group
{
	// inputs
	int defaulttaskallocator;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &defaulttaskallocator))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x062F>(defaulttaskallocator, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_group_leader(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0630>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* set_group_member(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0631>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* remove_group(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0632>(self_);
	return PyBool_FromLong(1);
}

PyObject* task_leave_any_car(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0633>(handle);
	return PyBool_FromLong(1);
}

PyObject* task_kill_char_on_foot_while_ducking(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int target;
	int flags;
	int actiondelay;
	int actionchance;
	if (!PyArg_ParseTuple(args, "iiiii", &char_, &target, &flags, &actiondelay, &actionchance))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0634>(char_, target, flags, actiondelay, actionchance);
	return PyBool_FromLong(1);
}

PyObject* task_aim_gun_at_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int target;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &char_, &target, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0635>(char_, target, time);
	return PyBool_FromLong(1);
}

PyObject* task_go_to_coord_while_shooting(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	float x;
	float y;
	float z;
	int mode;
	float turnradius;
	float stopradius;
	int target;
	if (!PyArg_ParseTuple(args, "ifffiffi", &char_, &x, &y, &z, &mode, &turnradius, &stopradius, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0637>(char_, x, y, z, mode, turnradius, stopradius, target);
	return PyBool_FromLong(1);
}

PyObject* task_stay_in_same_place(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0638>(handle, state);
	return PyBool_FromLong(1);
}

PyObject* task_turn_char_to_face_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int target;
	if (!PyArg_ParseTuple(args, "ii", &char_, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0639>(char_, target);
	return PyBool_FromLong(1);
}

PyObject* is_char_at_scripted_attractor(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0642>(self_, handle));
}

PyObject* set_sequence_to_repeat(PyObject* self, PyObject* args) // Sequence
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0643>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* get_sequence_progress(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int progress;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0646>(self_, &progress);
	return Py_BuildValue("i", progress);
}

PyObject* clear_look_at(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0647>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_follow_node_threshold_distance(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float range;
	if (!PyArg_ParseTuple(args, "if", &self_, &range))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0648>(self_, range);
	return PyBool_FromLong(1);
}

PyObject* create_fx_system(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int name;
	float x;
	float y;
	float z;
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifffi", &name, &x, &y, &z, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x064B>(name, x, y, z, type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* play_fx_system(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x064C>(self_);
	return PyBool_FromLong(1);
}

PyObject* stop_fx_system(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x064E>(self_);
	return PyBool_FromLong(1);
}

PyObject* play_and_kill_fx_system(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x064F>(self_);
	return PyBool_FromLong(1);
}

PyObject* kill_fx_system(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0650>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_int_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;

	// outputs
	int value;
	if (!PyArg_ParseTuple(args, "i", &statid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0652>(statid, &value);
	return Py_BuildValue("i", value);
}

PyObject* get_float_stat(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;

	// outputs
	float value;
	if (!PyArg_ParseTuple(args, "i", &statid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0653>(statid, &value);
	return Py_BuildValue("f", value);
}

PyObject* set_object_render_scorched(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0654>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* task_look_at_object(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int object;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &char_, &object, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0655>(char_, object, time);
	return PyBool_FromLong(1);
}

PyObject* limit_angle(PyObject* self, PyObject* args) // Math
{
	// inputs
	float value;

	// outputs
	float result;
	if (!PyArg_ParseTuple(args, "f", &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0656>(value, &result);
	return Py_BuildValue("f", result);
}

PyObject* open_car_door(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	if (!PyArg_ParseTuple(args, "ii", &self_, &door))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0657>(self_, door);
	return PyBool_FromLong(1);
}

PyObject* get_pickup_coordinates(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x065B>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* remove_decision_maker(PyObject* self, PyObject* args) // Decisionmaker
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x065C>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_char_model(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0665>(self_, modelid);
	return PyBool_FromLong(1);
}

PyObject* task_aim_gun_at_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	int time;
	if (!PyArg_ParseTuple(args, "ifffi", &handle, &x, &y, &z, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0667>(handle, x, y, z, time);
	return PyBool_FromLong(1);
}

PyObject* task_shoot_at_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	int time;
	if (!PyArg_ParseTuple(args, "ifffi", &handle, &x, &y, &z, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0668>(handle, x, y, z, time);
	return PyBool_FromLong(1);
}

PyObject* create_fx_system_on_char(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int name;
	int char_;
	float xoffset;
	float yoffset;
	float zoffset;
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iifffi", &name, &char_, &xoffset, &yoffset, &zoffset, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0669>(name, char_, xoffset, yoffset, zoffset, type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_fx_system_on_char_with_direction(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int name;
	int char_;
	float xoffset;
	float yoffset;
	float zoffset;
	float xdirection;
	float ydirection;
	float zdirection;
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiffffffi", &name, &char_, &xoffset, &yoffset, &zoffset, &xdirection, &ydirection, &zdirection, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x066A>(name, char_, xoffset, yoffset, zoffset, xdirection, ydirection, zdirection, type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_fx_system_on_car(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int name;
	int vehicle;
	float xoffset;
	float yoffset;
	float zoffset;
	float type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiffff", &name, &vehicle, &xoffset, &yoffset, &zoffset, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x066B>(name, vehicle, xoffset, yoffset, zoffset, type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_fx_system_on_car_with_direction(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int name;
	int vehicle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xdirection;
	float ydirection;
	float zdirection;
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiffffffi", &name, &vehicle, &xoffset, &yoffset, &zoffset, &xdirection, &ydirection, &zdirection, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x066C>(name, vehicle, xoffset, yoffset, zoffset, xdirection, ydirection, zdirection, type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_fx_system_on_object(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int name;
	int object;
	float xoffset;
	float yoffset;
	float zoffset;
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iifffi", &name, &object, &xoffset, &yoffset, &zoffset, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x066D>(name, object, xoffset, yoffset, zoffset, type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_fx_system_on_object_with_direction(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int name;
	int object;
	float xoffset;
	float yoffset;
	float zoffset;
	float xdirection;
	float ydirection;
	float zdirection;
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iiffffffi", &name, &object, &xoffset, &yoffset, &zoffset, &xdirection, &ydirection, &zdirection, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x066E>(name, object, xoffset, yoffset, zoffset, xdirection, ydirection, zdirection, type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* task_destroy_car(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &char_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0672>(char_, vehicle);
	return PyBool_FromLong(1);
}

PyObject* task_dive_and_get_up(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float directionx;
	float directiony;
	int timeonground;
	if (!PyArg_ParseTuple(args, "iffi", &handle, &directionx, &directiony, &timeonground))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0673>(handle, directionx, directiony, timeonground);
	return PyBool_FromLong(1);
}

PyObject* custom_plate_for_next_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int modelid;
	int platetext;
	if (!PyArg_ParseTuple(args, "ii", &modelid, &platetext))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0674>(modelid, platetext);
	return PyBool_FromLong(1);
}

PyObject* task_shuffle_to_next_car_seat(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &char_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0676>(char_, vehicle);
	return PyBool_FromLong(1);
}

PyObject* task_chat_with_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int other;
	int leadspeaker;
	int _p4;
	if (!PyArg_ParseTuple(args, "iiii", &char_, &other, &leadspeaker, &_p4))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0677>(char_, other, leadspeaker, _p4);
	return PyBool_FromLong(1);
}

PyObject* attach_camera_to_vehicle(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	float tilt;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "ifffffffi", &handle, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation, &tilt, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0679>(handle, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation, tilt, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* attach_camera_to_vehicle_look_at_vehicle(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	int vehicle;
	float tilt;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "ifffifi", &handle, &xoffset, &yoffset, &zoffset, &vehicle, &tilt, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x067A>(handle, xoffset, yoffset, zoffset, vehicle, tilt, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* attach_camera_to_vehicle_look_at_char(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	int char_;
	float tilt;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "ifffifi", &handle, &xoffset, &yoffset, &zoffset, &char_, &tilt, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x067B>(handle, xoffset, yoffset, zoffset, char_, tilt, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* attach_camera_to_char(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	float tilt;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "ifffffffi", &handle, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation, &tilt, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x067C>(handle, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation, tilt, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* attach_camera_to_char_look_at_vehicle(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int char_;
	float xoffset;
	float yoffset;
	float zoffset;
	int vehicle;
	float tilt;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "ifffifi", &char_, &xoffset, &yoffset, &zoffset, &vehicle, &tilt, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x067D>(char_, xoffset, yoffset, zoffset, vehicle, tilt, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* attach_camera_to_char_look_at_char(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	int char_;
	float tilt;
	int switchstyle;
	if (!PyArg_ParseTuple(args, "ifffifi", &handle, &xoffset, &yoffset, &zoffset, &char_, &tilt, &switchstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x067E>(handle, xoffset, yoffset, zoffset, char_, tilt, switchstyle);
	return PyBool_FromLong(1);
}

PyObject* force_car_lights(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int lightmode;
	if (!PyArg_ParseTuple(args, "ii", &self_, &lightmode))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x067F>(self_, lightmode);
	return PyBool_FromLong(1);
}

PyObject* add_pedtype_as_attractor_user(PyObject* self, PyObject* args) // Attractor
{
	// inputs
	int self_;
	int pedtype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &pedtype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0680>(self_, pedtype);
	return PyBool_FromLong(1);
}

PyObject* attach_object_to_car(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	if (!PyArg_ParseTuple(args, "iiffffff", &self_, &handle, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0681>(self_, handle, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation);
	return PyBool_FromLong(1);
}

PyObject* detach_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	int collisiondetection;
	if (!PyArg_ParseTuple(args, "ifffi", &self_, &x, &y, &z, &collisiondetection))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0682>(self_, x, y, z, collisiondetection);
	return PyBool_FromLong(1);
}

PyObject* attach_car_to_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	if (!PyArg_ParseTuple(args, "iiffffff", &self_, &handle, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0683>(self_, handle, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation);
	return PyBool_FromLong(1);
}

PyObject* detach_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	int collisiondetection;
	if (!PyArg_ParseTuple(args, "ifffi", &self_, &x, &y, &z, &collisiondetection))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0684>(self_, x, y, z, collisiondetection);
	return PyBool_FromLong(1);
}

PyObject* is_object_attached(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0685>(self_));
}

PyObject* is_vehicle_attached(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0686>(self_));
}

PyObject* clear_char_tasks(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0687>(self_);
	return PyBool_FromLong(1);
}

PyObject* task_toggle_ped_threat_scanner(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int _p2;
	int _p3;
	int _p4;
	if (!PyArg_ParseTuple(args, "iiii", &handle, &_p2, &_p3, &_p4))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0688>(handle, _p2, _p3, _p4);
	return PyBool_FromLong(1);
}

PyObject* pop_car_door(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	int visibility;
	if (!PyArg_ParseTuple(args, "iii", &self_, &door, &visibility))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0689>(self_, door, visibility);
	return PyBool_FromLong(1);
}

PyObject* fix_car_door(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	if (!PyArg_ParseTuple(args, "ii", &self_, &door))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x068A>(self_, door);
	return PyBool_FromLong(1);
}

PyObject* task_everyone_leave_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x068B>(self_);
	return PyBool_FromLong(1);
}

PyObject* is_player_targetting_anything(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x068C>(self_));
}

PyObject* get_active_camera_coordinates(PyObject* self, PyObject* args) // Camera
{

	// outputs
	float x;
	float y;
	float z;
	plugin::Command<0x068D>(&x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* get_active_camera_point_at(PyObject* self, PyObject* args) // Camera
{

	// outputs
	float x;
	float y;
	float z;
	plugin::Command<0x068E>(&x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* pop_car_panel(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int panelid;
	int visibility;
	if (!PyArg_ParseTuple(args, "iii", &self_, &panelid, &visibility))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0697>(self_, panelid, visibility);
	return PyBool_FromLong(1);
}

PyObject* fix_car_panel(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int panelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &panelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0698>(self_, panelid);
	return PyBool_FromLong(1);
}

PyObject* fix_car_tyre(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int type_id;
	if (!PyArg_ParseTuple(args, "ii", &self_, &type_id))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0699>(self_, type_id);
	return PyBool_FromLong(1);
}

PyObject* attach_object_to_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	if (!PyArg_ParseTuple(args, "iiffffff", &self_, &handle, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x069A>(self_, handle, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation);
	return PyBool_FromLong(1);
}

PyObject* attach_object_to_char(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	if (!PyArg_ParseTuple(args, "iiffffff", &self_, &handle, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x069B>(self_, handle, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation);
	return PyBool_FromLong(1);
}

PyObject* get_car_speed_vector(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	int y;
	int z;
	if (!PyArg_ParseTuple(args, "ifii", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06A2>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_car_mass(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float mass;
	if (!PyArg_ParseTuple(args, "if", &self_, &mass))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06A3>(self_, mass);
	return PyBool_FromLong(1);
}

PyObject* task_dive_from_attachment_and_get_up(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06A5>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* attach_char_to_bike(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int vehicle;
	float xoffset;
	float yoffset;
	float zoffset;
	int position;
	float _p7;
	float _p8;
	int weapontype;
	if (!PyArg_ParseTuple(args, "iifffiffi", &self_, &vehicle, &xoffset, &yoffset, &zoffset, &position, &_p7, &_p8, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06A7>(self_, vehicle, xoffset, yoffset, zoffset, position, _p7, _p8, weapontype);
	return PyBool_FromLong(1);
}

PyObject* task_goto_char_offset(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int target;
	int time;
	float radius;
	float heading;
	if (!PyArg_ParseTuple(args, "iiiff", &char_, &target, &time, &radius, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06A8>(char_, target, time, radius, heading);
	return PyBool_FromLong(1);
}

PyObject* task_look_at_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	int time;
	if (!PyArg_ParseTuple(args, "ifffi", &handle, &x, &y, &z, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06A9>(handle, x, y, z, time);
	return PyBool_FromLong(1);
}

PyObject* hide_char_weapon_for_scripted_cutscene(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06AB>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* get_char_speed(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	float speed;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06AC>(self_, &speed);
	return Py_BuildValue("f", speed);
}

PyObject* set_group_decision_maker(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	int maskorhandle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &maskorhandle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06AD>(self_, maskorhandle);
	return PyBool_FromLong(1);
}

PyObject* load_group_decision_maker(PyObject* self, PyObject* args) // Decisionmakergroup
{
	// inputs
	int type;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06AE>(type, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* disable_player_sprint(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06AF>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* task_sit_down(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int time;
	if (!PyArg_ParseTuple(args, "ii", &handle, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06B0>(handle, time);
	return PyBool_FromLong(1);
}

PyObject* create_searchlight(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	float x;
	float y;
	float z;
	float xpoint;
	float ypoint;
	float zpoint;
	float radius;
	float radiuspoint;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffffff", &x, &y, &z, &xpoint, &ypoint, &zpoint, &radius, &radiuspoint))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06B1>(x, y, z, xpoint, ypoint, zpoint, radius, radiuspoint, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* delete_searchlight(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06B2>(self_);
	return PyBool_FromLong(1);
}

PyObject* does_searchlight_exist(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06B3>(handle));
}

PyObject* move_searchlight_between_coords(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	float fromx;
	float fromy;
	float fromz;
	float tox;
	float toy;
	float toz;
	float speed;
	if (!PyArg_ParseTuple(args, "ifffffff", &self_, &fromx, &fromy, &fromz, &tox, &toy, &toz, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06B4>(self_, fromx, fromy, fromz, tox, toy, toz, speed);
	return PyBool_FromLong(1);
}

PyObject* point_searchlight_at_coord(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float speed;
	if (!PyArg_ParseTuple(args, "iffff", &self_, &x, &y, &z, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06B5>(self_, x, y, z, speed);
	return PyBool_FromLong(1);
}

PyObject* point_searchlight_at_char(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	int handle;
	float speed;
	if (!PyArg_ParseTuple(args, "iif", &self_, &handle, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06B6>(self_, handle, speed);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_searchlight(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06B7>(self_, handle));
}

PyObject* has_cutscene_loaded(PyObject* self, PyObject* args) // Cutscene
{
	return PyBool_FromLong(plugin::Command<0x06B9>());
}

PyObject* task_turn_char_to_face_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &handle, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06BA>(handle, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* task_drive_point_route(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int speed;
	if (!PyArg_ParseTuple(args, "iii", &char_, &vehicle, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06BB>(char_, vehicle, speed);
	return PyBool_FromLong(1);
}

PyObject* fire_single_bullet(PyObject* self, PyObject* args) // World
{
	// inputs
	float fromx;
	float fromy;
	float fromz;
	float tox;
	float toy;
	float toz;
	int energy;
	if (!PyArg_ParseTuple(args, "ffffffi", &fromx, &fromy, &fromz, &tox, &toy, &toz, &energy))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06BC>(fromx, fromy, fromz, tox, toy, toz, energy);
	return PyBool_FromLong(1);
}

PyObject* is_line_of_sight_clear(PyObject* self, PyObject* args) // World
{
	// inputs
	float fromx;
	float fromy;
	float fromz;
	float tox;
	float toy;
	float toz;
	int buildings;
	int cars;
	int chars;
	int objects;
	int particles;
	if (!PyArg_ParseTuple(args, "ffffffiiiii", &fromx, &fromy, &fromz, &tox, &toy, &toz, &buildings, &cars, &chars, &objects, &particles))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06BD>(fromx, fromy, fromz, tox, toy, toz, buildings, cars, chars, objects, particles));
}

PyObject* get_car_roll(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float angle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06BE>(self_, &angle);
	return Py_BuildValue("f", angle);
}

PyObject* point_searchlight_at_vehicle(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	int handle;
	float speed;
	if (!PyArg_ParseTuple(args, "iif", &self_, &handle, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06BF>(self_, handle, speed);
	return PyBool_FromLong(1);
}

PyObject* is_vehicle_in_searchlight(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06C0>(self_, handle));
}

PyObject* create_searchlight_on_vehicle(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int vehicle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xpoint;
	float ypoint;
	float zpoint;
	float pointradius;
	float radius;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "iffffffff", &vehicle, &xoffset, &yoffset, &zoffset, &xpoint, &ypoint, &zpoint, &pointradius, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C1>(vehicle, xoffset, yoffset, zoffset, xpoint, ypoint, zpoint, pointradius, radius, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* task_go_to_coord_while_aiming(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	float x;
	float y;
	float z;
	int mode;
	float turnradius;
	float stopradius;
	int target;
	float xoffset;
	float yoffset;
	float zoffset;
	if (!PyArg_ParseTuple(args, "ifffiffifff", &char_, &x, &y, &z, &mode, &turnradius, &stopradius, &target, &xoffset, &yoffset, &zoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C2>(char_, x, y, z, mode, turnradius, stopradius, target, xoffset, yoffset, zoffset);
	return PyBool_FromLong(1);
}

PyObject* get_number_of_fires_in_range(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;

	// outputs
	int numfires;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C3>(x, y, z, radius, &numfires);
	return Py_BuildValue("i", numfires);
}

PyObject* add_blip_for_searchlight(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int searchlight;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &searchlight))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C4>(searchlight, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* skip_to_end_and_stop_playback_recorded_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C5>(self_);
	return PyBool_FromLong(1);
}

PyObject* task_car_temp_action(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int actionid;
	int time;
	if (!PyArg_ParseTuple(args, "iiii", &char_, &vehicle, &actionid, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C7>(char_, vehicle, actionid, time);
	return PyBool_FromLong(1);
}

PyObject* set_la_riots(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C8>(state);
	return PyBool_FromLong(1);
}

PyObject* remove_char_from_group(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06C9>(self_);
	return PyBool_FromLong(1);
}

PyObject* attach_searchlight_to_searchlight_object(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	int spottower;
	int spothousing;
	int spotbulb;
	float xoffset;
	float yoffset;
	float zoffset;
	if (!PyArg_ParseTuple(args, "iiiifff", &self_, &spottower, &spothousing, &spotbulb, &xoffset, &yoffset, &zoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06CA>(self_, spottower, spothousing, spotbulb, xoffset, yoffset, zoffset);
	return PyBool_FromLong(1);
}

PyObject* switch_emergency_services(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06D0>(state);
	return PyBool_FromLong(1);
}

PyObject* set_var_text_label16(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06D1>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_lvar_text_label16(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06D2>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* create_checkpoint(PyObject* self, PyObject* args) // Checkpoint
{
	// inputs
	int type;
	float x;
	float y;
	float z;
	float pointx;
	float pointy;
	float pointz;
	float radius;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifffffff", &type, &x, &y, &z, &pointx, &pointy, &pointz, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06D5>(type, x, y, z, pointx, pointy, pointz, radius, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* delete_checkpoint(PyObject* self, PyObject* args) // Checkpoint
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06D6>(self_);
	return PyBool_FromLong(1);
}

PyObject* switch_random_trains(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06D7>(state);
	return PyBool_FromLong(1);
}

PyObject* create_mission_train(PyObject* self, PyObject* args) // Train
{
	// inputs
	int type;
	float x;
	float y;
	float z;
	int direction;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifffi", &type, &x, &y, &z, &direction))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06D8>(type, x, y, z, direction, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* delete_mission_trains(PyObject* self, PyObject* args) // World
{
	plugin::Command<0x06D9>();
	return PyBool_FromLong(1);
}

PyObject* mark_mission_trains_as_no_longer_needed(PyObject* self, PyObject* args) // World
{
	plugin::Command<0x06DA>();
	return PyBool_FromLong(1);
}

PyObject* delete_all_trains(PyObject* self, PyObject* args) // World
{
	plugin::Command<0x06DB>();
	return PyBool_FromLong(1);
}

PyObject* set_train_speed(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	float speed;
	if (!PyArg_ParseTuple(args, "if", &self_, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06DC>(self_, speed);
	return PyBool_FromLong(1);
}

PyObject* set_train_cruise_speed(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	float speed;
	if (!PyArg_ParseTuple(args, "if", &self_, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06DD>(self_, speed);
	return PyBool_FromLong(1);
}

PyObject* get_train_caboose(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;

	// outputs
	int caboose;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06DE>(self_, &caboose);
	return Py_BuildValue("i", caboose);
}

PyObject* delete_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06DF>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_two_player_camera_mode(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E0>(state);
	return PyBool_FromLong(1);
}

PyObject* task_car_mission(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int targetvehicle;
	int missionid;
	float cruisespeed;
	int drivingstyle;
	if (!PyArg_ParseTuple(args, "iiiifi", &char_, &vehicle, &targetvehicle, &missionid, &cruisespeed, &drivingstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E1>(char_, vehicle, targetvehicle, missionid, cruisespeed, drivingstyle);
	return PyBool_FromLong(1);
}

PyObject* task_go_to_object(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int object;
	int time;
	float radius;
	if (!PyArg_ParseTuple(args, "iiif", &char_, &object, &time, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E2>(char_, object, time, radius);
	return PyBool_FromLong(1);
}

PyObject* task_weapon_roll(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int direction;
	if (!PyArg_ParseTuple(args, "ii", &handle, &direction))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E3>(handle, direction);
	return PyBool_FromLong(1);
}

PyObject* task_char_arrest_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int target;
	if (!PyArg_ParseTuple(args, "ii", &char_, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E4>(char_, target);
	return PyBool_FromLong(1);
}

PyObject* get_available_vehicle_mod(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int slotid;

	// outputs
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &slotid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E5>(self_, slotid, &modelid);
	return Py_BuildValue("i", modelid);
}

PyObject* get_vehicle_mod_type(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;

	// outputs
	int slotid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E6>(modelid, &slotid);
	return Py_BuildValue("i", slotid);
}

PyObject* add_vehicle_mod(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int modelid;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E7>(self_, modelid, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* remove_vehicle_mod(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E8>(self_, modelid);
	return PyBool_FromLong(1);
}

PyObject* request_vehicle_mod(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06E9>(modelid);
	return PyBool_FromLong(1);
}

PyObject* has_vehicle_mod_loaded(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06EA>(modelid));
}

PyObject* mark_vehicle_mod_as_no_longer_needed(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06EB>(modelid);
	return PyBool_FromLong(1);
}

PyObject* get_num_available_paintjobs(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int numpaintjobs;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06EC>(self_, &numpaintjobs);
	return Py_BuildValue("i", numpaintjobs);
}

PyObject* give_vehicle_paintjob(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int paintjobid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &paintjobid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06ED>(self_, paintjobid);
	return PyBool_FromLong(1);
}

PyObject* is_group_member(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06EE>(self_, handle));
}

PyObject* is_group_leader(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06EF>(self_, handle));
}

PyObject* set_group_separation_range(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	float range;
	if (!PyArg_ParseTuple(args, "if", &self_, &range))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06F0>(self_, range);
	return PyBool_FromLong(1);
}

PyObject* limit_two_player_distance(PyObject* self, PyObject* args) // Game
{
	// inputs
	float distance;
	if (!PyArg_ParseTuple(args, "f", &distance))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06F1>(distance);
	return PyBool_FromLong(1);
}

PyObject* release_two_player_distance(PyObject* self, PyObject* args) // Misc
{
	plugin::Command<0x06F2>();
	return PyBool_FromLong(1);
}

PyObject* set_player_player_targeting(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06F3>(_p1);
	return PyBool_FromLong(1);
}

PyObject* get_script_fire_coords(PyObject* self, PyObject* args) // Scriptfire
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06F5>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_nth_closest_car_node_with_heading(PyObject* self, PyObject* args) // Path
{
	// inputs
	float xcoord;
	float ycoord;
	float zcoord;
	int nth;

	// outputs
	float x;
	float y;
	float z;
	float heading;
	if (!PyArg_ParseTuple(args, "fffi", &xcoord, &ycoord, &zcoord, &nth))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06F8>(xcoord, ycoord, zcoord, nth, &x, &y, &z, &heading);
	return Py_BuildValue("ffff", x, y, z, heading);
}

PyObject* set_players_can_be_in_separate_cars(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06FA>(_p1);
	return PyBool_FromLong(1);
}

PyObject* does_car_have_stuck_car_check(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06FC>(self_));
}

PyObject* set_playback_speed(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float speed;
	if (!PyArg_ParseTuple(args, "if", &self_, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x06FD>(self_, speed);
	return PyBool_FromLong(1);
}

PyObject* are_any_chars_near_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float radius;
	if (!PyArg_ParseTuple(args, "if", &self_, &radius))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x06FF>(self_, radius));
}

PyObject* skip_cutscene_end(PyObject* self, PyObject* args) // 
{
	plugin::Command<0x0701>();
	return PyBool_FromLong(1);
}

PyObject* get_percentage_tagged_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;

	// outputs
	int percent;
	if (!PyArg_ParseTuple(args, "ffff", &leftbottomx, &leftbottomy, &righttopx, &righttopy))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0702>(leftbottomx, leftbottomy, righttopx, righttopy, &percent);
	return Py_BuildValue("i", percent);
}

PyObject* set_tag_status_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	int percent;
	if (!PyArg_ParseTuple(args, "ffffi", &leftbottomx, &leftbottomy, &righttopx, &righttopy, &percent))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0703>(leftbottomx, leftbottomy, righttopx, righttopy, percent);
	return PyBool_FromLong(1);
}

PyObject* car_goto_coordinates_racing(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0704>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* start_playback_recorded_car_using_ai(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int pathid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &pathid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0705>(self_, pathid);
	return PyBool_FromLong(1);
}

PyObject* skip_in_playback_recorded_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float amount;
	if (!PyArg_ParseTuple(args, "if", &self_, &amount))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0706>(self_, amount);
	return PyBool_FromLong(1);
}

PyObject* skip_cutscene_start_internal(PyObject* self, PyObject* args) // Misc
{
	// inputs
	const char* var;
	if (!PyArg_ParseTuple(args, "s", &var))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0707>(var);
	return PyBool_FromLong(1);
}

PyObject* clear_char_decision_maker_event_response(PyObject* self, PyObject* args) // Decisionmakerchar
{
	// inputs
	int self_;
	int eventid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &eventid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0708>(self_, eventid);
	return PyBool_FromLong(1);
}

PyObject* add_char_decision_maker_event_response(PyObject* self, PyObject* args) // Decisionmakerchar
{
	// inputs
	int self_;
	int eventid;
	int taskid;
	float respect;
	float hate;
	float like;
	float dislike;
	int incar;
	int onfoot;
	if (!PyArg_ParseTuple(args, "iiiffffii", &self_, &eventid, &taskid, &respect, &hate, &like, &dislike, &incar, &onfoot))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0709>(self_, eventid, taskid, respect, hate, like, dislike, incar, onfoot);
	return PyBool_FromLong(1);
}

PyObject* task_pick_up_object(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int object;
	float xoffset;
	float yoffset;
	float zoffset;
	int boneid;
	int _p7;
	int animationname;
	int animationfile;
	int time;
	if (!PyArg_ParseTuple(args, "iifffiiiii", &char_, &object, &xoffset, &yoffset, &zoffset, &boneid, &_p7, &animationname, &animationfile, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x070A>(char_, object, xoffset, yoffset, zoffset, boneid, _p7, animationname, animationfile, time);
	return PyBool_FromLong(1);
}

PyObject* drop_object(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x070B>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* explode_car_in_cutscene(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x070C>(self_);
	return PyBool_FromLong(1);
}

PyObject* build_player_model(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x070D>(self_);
	return PyBool_FromLong(1);
}

PyObject* plane_attack_player(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	int handle;
	float radius;
	if (!PyArg_ParseTuple(args, "iif", &self_, &handle, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x070E>(self_, handle, radius);
	return PyBool_FromLong(1);
}

PyObject* plane_fly_in_direction(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	float heading;
	float minaltitude;
	float maxaltitude;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &heading, &minaltitude, &maxaltitude))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x070F>(self_, heading, minaltitude, maxaltitude);
	return PyBool_FromLong(1);
}

PyObject* plane_follow_entity(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	int char_;
	int vehicle;
	float radius;
	if (!PyArg_ParseTuple(args, "iiif", &self_, &char_, &vehicle, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0710>(self_, char_, vehicle, radius);
	return PyBool_FromLong(1);
}

PyObject* task_drive_by(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int targetchar;
	int targetvehicle;
	float x;
	float y;
	float z;
	float radius;
	int style;
	int righthandcarseat;
	int firerate;
	if (!PyArg_ParseTuple(args, "iiiffffiii", &handle, &targetchar, &targetvehicle, &x, &y, &z, &radius, &style, &righthandcarseat, &firerate))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0713>(handle, targetchar, targetvehicle, x, y, z, radius, style, righthandcarseat, firerate);
	return PyBool_FromLong(1);
}

PyObject* set_car_stay_in_slow_lane(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0714>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* take_remote_control_of_car(PyObject* self, PyObject* args) // Rc
{
	// inputs
	int player;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &player, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0715>(player, vehicle);
	return PyBool_FromLong(1);
}

PyObject* is_closest_object_of_type_smashed_or_damaged(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int modelid;
	int smashed;
	int damaged;
	if (!PyArg_ParseTuple(args, "ffffiii", &x, &y, &z, &radius, &modelid, &smashed, &damaged))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0716>(x, y, z, radius, modelid, smashed, damaged));
}

PyObject* start_setting_up_conversation(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0717>(handle);
	return PyBool_FromLong(1);
}

PyObject* finish_setting_up_conversation(PyObject* self, PyObject* args) // Conversation
{
	plugin::Command<0x0719>();
	return PyBool_FromLong(1);
}

PyObject* is_conversation_at_node(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int handle;
	int speech;
	if (!PyArg_ParseTuple(args, "ii", &handle, &speech))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x071A>(handle, speech));
}

PyObject* get_object_health(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int health;
	if (!PyArg_ParseTuple(args, "ii", &self_, &health))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x071E>(self_, health);
	return PyBool_FromLong(1);
}

PyObject* set_object_health(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int health;
	if (!PyArg_ParseTuple(args, "ii", &self_, &health))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x071F>(self_, health);
	return PyBool_FromLong(1);
}

PyObject* break_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int intensity;
	if (!PyArg_ParseTuple(args, "ii", &self_, &intensity))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0723>(self_, intensity);
	return PyBool_FromLong(1);
}

PyObject* heli_attack_player(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int handle;
	float radius;
	if (!PyArg_ParseTuple(args, "iif", &self_, &handle, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0724>(self_, handle, radius);
	return PyBool_FromLong(1);
}

PyObject* heli_follow_entity(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int char_;
	int vehicle;
	float radius;
	if (!PyArg_ParseTuple(args, "iiif", &self_, &char_, &vehicle, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0726>(self_, char_, vehicle, radius);
	return PyBool_FromLong(1);
}

PyObject* police_heli_chase_entity(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int char_;
	int vehicle;
	float radius;
	if (!PyArg_ParseTuple(args, "iiif", &self_, &char_, &vehicle, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0727>(self_, char_, vehicle, radius);
	return PyBool_FromLong(1);
}

PyObject* task_use_mobile_phone(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int start;
	if (!PyArg_ParseTuple(args, "ii", &handle, &start))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0729>(handle, start);
	return PyBool_FromLong(1);
}

PyObject* task_warp_char_into_car_as_driver(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ii", &char_, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x072A>(char_, vehicle);
	return PyBool_FromLong(1);
}

PyObject* task_warp_char_into_car_as_passenger(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int seatid;
	if (!PyArg_ParseTuple(args, "iii", &char_, &vehicle, &seatid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x072B>(char_, vehicle, seatid);
	return PyBool_FromLong(1);
}

PyObject* switch_cops_on_bikes(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x072C>(state);
	return PyBool_FromLong(1);
}

PyObject* is_flame_in_angled_area_2d(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "fffffi", &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x072D>(leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_flame_in_angled_area_3d(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "fffffffi", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x072E>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* add_stuck_car_check_with_warp(PyObject* self, PyObject* args) // Stuckcarcheck
{
	// inputs
	int vehicle;
	float speed;
	int duration;
	int stuck;
	int flipped;
	int warp;
	int pathid;
	if (!PyArg_ParseTuple(args, "ifiiiii", &vehicle, &speed, &duration, &stuck, &flipped, &warp, &pathid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x072F>(vehicle, speed, duration, stuck, flipped, warp, pathid);
	return PyBool_FromLong(1);
}

PyObject* damage_car_panel(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int panelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &panelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0730>(self_, panelid);
	return PyBool_FromLong(1);
}

PyObject* set_car_roll(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float yangle;
	if (!PyArg_ParseTuple(args, "if", &self_, &yangle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0731>(self_, yangle);
	return PyBool_FromLong(1);
}

PyObject* suppress_car_model(PyObject* self, PyObject* args) // Cargenerator
{
	// inputs
	int model;
	if (!PyArg_ParseTuple(args, "i", &model))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0732>(model);
	return PyBool_FromLong(1);
}

PyObject* dont_suppress_car_model(PyObject* self, PyObject* args) // Cargenerator
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0733>(modelid);
	return PyBool_FromLong(1);
}

PyObject* dont_suppress_any_car_models(PyObject* self, PyObject* args) // Cargenerator
{
	plugin::Command<0x0734>();
	return PyBool_FromLong(1);
}

PyObject* is_char_holding_object(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0737>(self_, handle));
}

PyObject* set_car_can_go_against_traffic(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x073B>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* damage_car_door(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	if (!PyArg_ParseTuple(args, "ii", &self_, &door))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x073C>(self_, door);
	return PyBool_FromLong(1);
}

PyObject* get_random_car_in_sphere_no_save(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int model;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffi", &x, &y, &z, &radius, &model))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x073E>(x, y, z, radius, model, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_random_char_in_sphere(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int civilian;
	int gang;
	int criminal;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffiii", &x, &y, &z, &radius, &civilian, &gang, &criminal))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x073F>(x, y, z, radius, civilian, gang, criminal, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* has_char_been_arrested(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0741>(self_));
}

PyObject* set_plane_throttle(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	float throttle;
	if (!PyArg_ParseTuple(args, "if", &self_, &throttle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0742>(self_, throttle);
	return PyBool_FromLong(1);
}

PyObject* heli_land_at_coords(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float minaltitude;
	float maxaltitude;
	if (!PyArg_ParseTuple(args, "ifffff", &self_, &x, &y, &z, &minaltitude, &maxaltitude))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0743>(self_, x, y, z, minaltitude, maxaltitude);
	return PyBool_FromLong(1);
}

PyObject* plane_starts_in_air(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0745>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_relationship(PyObject* self, PyObject* args) // Game
{
	// inputs
	int relationshiptype;
	int ofpedtype;
	int topedtype;
	if (!PyArg_ParseTuple(args, "iii", &relationshiptype, &ofpedtype, &topedtype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0746>(relationshiptype, ofpedtype, topedtype);
	return PyBool_FromLong(1);
}

PyObject* clear_relationship(PyObject* self, PyObject* args) // Game
{
	// inputs
	int relationshiptype;
	int ofpedtype;
	int topedtype;
	if (!PyArg_ParseTuple(args, "iii", &relationshiptype, &ofpedtype, &topedtype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0747>(relationshiptype, ofpedtype, topedtype);
	return PyBool_FromLong(1);
}

PyObject* clear_group_decision_maker_event_response(PyObject* self, PyObject* args) // Decisionmakergroup
{
	// inputs
	int self_;
	int eventid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &eventid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0749>(self_, eventid);
	return PyBool_FromLong(1);
}

PyObject* add_group_decision_maker_event_response(PyObject* self, PyObject* args) // Decisionmakergroup
{
	// inputs
	int self_;
	int eventid;
	int taskid;
	float respect;
	float hate;
	float like;
	float dislike;
	int incar;
	int onfoot;
	if (!PyArg_ParseTuple(args, "iiiffffii", &self_, &eventid, &taskid, &respect, &hate, &like, &dislike, &incar, &onfoot))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x074A>(self_, eventid, taskid, respect, hate, like, dislike, incar, onfoot);
	return PyBool_FromLong(1);
}

PyObject* draw_sprite_with_rotation(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int memoryslot;
	float offsetleft;
	float offsettop;
	float height;
	float width;
	float angle;
	int red;
	int green;
	int blue;
	int alpha;
	if (!PyArg_ParseTuple(args, "ifffffiiii", &memoryslot, &offsetleft, &offsettop, &height, &width, &angle, &red, &green, &blue, &alpha))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x074B>(memoryslot, offsetleft, offsettop, height, width, angle, red, green, blue, alpha);
	return PyBool_FromLong(1);
}

PyObject* task_use_attractor(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int attractor;
	if (!PyArg_ParseTuple(args, "ii", &char_, &attractor))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x074C>(char_, attractor);
	return PyBool_FromLong(1);
}

PyObject* task_shoot_at_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int target;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &handle, &target, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x074D>(handle, target, time);
	return PyBool_FromLong(1);
}

PyObject* set_inform_respected_friends(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float radius;
	int _p3;
	if (!PyArg_ParseTuple(args, "ifi", &self_, &radius, &_p3))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x074E>(self_, radius, _p3);
	return PyBool_FromLong(1);
}

PyObject* is_char_responding_to_event(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int eventid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &eventid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x074F>(self_, eventid));
}

PyObject* set_object_visible(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0750>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* task_flee_char_any_means(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int threat;
	float rundistance;
	int time;
	int changecourse;
	int _p6;
	int _p7;
	float radius;
	if (!PyArg_ParseTuple(args, "iifiiiif", &handle, &threat, &rundistance, &time, &changecourse, &_p6, &_p7, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0751>(handle, threat, rundistance, time, changecourse, _p6, _p7, radius);
	return PyBool_FromLong(1);
}

PyObject* flush_patrol_route(PyObject* self, PyObject* args) // Path
{
	plugin::Command<0x0754>();
	return PyBool_FromLong(1);
}

PyObject* extend_patrol_route(PyObject* self, PyObject* args) // Path
{
	// inputs
	float x;
	float y;
	float z;
	int animationname;
	int animationfile;
	if (!PyArg_ParseTuple(args, "fffii", &x, &y, &z, &animationname, &animationfile))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0755>(x, y, z, animationname, animationfile);
	return PyBool_FromLong(1);
}

PyObject* play_object_anim(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int animationname;
	int animationfile;
	float framedelta;
	int lockf;
	int loop;
	if (!PyArg_ParseTuple(args, "iiifii", &self_, &animationname, &animationfile, &framedelta, &lockf, &loop))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x075A>(self_, animationname, animationfile, framedelta, lockf, loop);
	return PyBool_FromLong(1);
}

PyObject* set_radar_zoom(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int zoom;
	if (!PyArg_ParseTuple(args, "i", &zoom))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x075B>(zoom);
	return PyBool_FromLong(1);
}

PyObject* does_blip_exist(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x075C>(handle));
}

PyObject* load_prices(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int sectionname;
	if (!PyArg_ParseTuple(args, "i", &sectionname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x075D>(sectionname);
	return PyBool_FromLong(1);
}

PyObject* load_shop(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int name;
	if (!PyArg_ParseTuple(args, "i", &name))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x075E>(name);
	return PyBool_FromLong(1);
}

PyObject* get_number_of_items_in_shop(PyObject* self, PyObject* args) // Shopping
{

	// outputs
	int numitems;
	plugin::Command<0x075F>(&numitems);
	return Py_BuildValue("i", numitems);
}

PyObject* get_item_in_shop(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int nth;

	// outputs
	int id;
	if (!PyArg_ParseTuple(args, "i", &nth))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0760>(nth, &id);
	return Py_BuildValue("i", id);
}

PyObject* get_price_of_item(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int itemid;

	// outputs
	int price;
	if (!PyArg_ParseTuple(args, "i", &itemid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0761>(itemid, &price);
	return Py_BuildValue("i", price);
}

PyObject* task_dead(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0762>(handle);
	return PyBool_FromLong(1);
}

PyObject* set_car_as_mission_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0763>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_zone_population_type(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	int type;
	if (!PyArg_ParseTuple(args, "ii", &zone, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0767>(zone, type);
	return PyBool_FromLong(1);
}

PyObject* set_zone_dealer_strength(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	int strength;
	if (!PyArg_ParseTuple(args, "ii", &zone, &strength))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x076A>(zone, strength);
	return PyBool_FromLong(1);
}

PyObject* get_zone_dealer_strength(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;

	// outputs
	int density;
	if (!PyArg_ParseTuple(args, "i", &zone))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x076B>(zone, &density);
	return Py_BuildValue("i", density);
}

PyObject* set_zone_gang_strength(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zoneid;
	int gangid;
	int density;
	if (!PyArg_ParseTuple(args, "iii", &zoneid, &gangid, &density))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x076C>(zoneid, gangid, density);
	return PyBool_FromLong(1);
}

PyObject* get_zone_gang_strength(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	int gangid;

	// outputs
	int density;
	if (!PyArg_ParseTuple(args, "ii", &zone, &gangid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x076D>(zone, gangid, &density);
	return Py_BuildValue("i", density);
}

PyObject* is_message_being_displayed(PyObject* self, PyObject* args) // Text
{
	return PyBool_FromLong(plugin::Command<0x076F>());
}

PyObject* set_char_is_target_priority(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0770>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* custom_plate_design_for_next_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int modelid;
	int townid;
	if (!PyArg_ParseTuple(args, "ii", &modelid, &townid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0771>(modelid, townid);
	return PyBool_FromLong(1);
}

PyObject* task_goto_car(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	int time;
	float radius;
	if (!PyArg_ParseTuple(args, "iiif", &char_, &vehicle, &time, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0772>(char_, vehicle, time, radius);
	return PyBool_FromLong(1);
}

PyObject* request_ipl(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int iplname;
	if (!PyArg_ParseTuple(args, "i", &iplname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0776>(iplname);
	return PyBool_FromLong(1);
}

PyObject* remove_ipl(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int iplname;
	if (!PyArg_ParseTuple(args, "i", &iplname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0777>(iplname);
	return PyBool_FromLong(1);
}

PyObject* remove_ipl_discreetly(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int iplname;
	if (!PyArg_ParseTuple(args, "i", &iplname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0778>(iplname);
	return PyBool_FromLong(1);
}

PyObject* set_char_relationship(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int relationshiptype;
	int pedtype;
	if (!PyArg_ParseTuple(args, "iii", &self_, &relationshiptype, &pedtype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x077A>(self_, relationshiptype, pedtype);
	return PyBool_FromLong(1);
}

PyObject* clear_char_relationship(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int relationshiptype;
	int topedtype;
	if (!PyArg_ParseTuple(args, "iii", &self_, &relationshiptype, &topedtype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x077B>(self_, relationshiptype, topedtype);
	return PyBool_FromLong(1);
}

PyObject* clear_all_char_relationships(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int relationshiptype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &relationshiptype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x077C>(self_, relationshiptype);
	return PyBool_FromLong(1);
}

PyObject* get_car_pitch(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float angle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x077D>(self_, &angle);
	return Py_BuildValue("f", angle);
}

PyObject* get_area_visible(PyObject* self, PyObject* args) // Streaming
{

	// outputs
	int interiorid;
	plugin::Command<0x077E>(&interiorid);
	return Py_BuildValue("i", interiorid);
}

PyObject* heli_keep_entity_in_view(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int char_;
	int vehicle;
	float minaltitude;
	int maxaltitude;
	if (!PyArg_ParseTuple(args, "iiifi", &self_, &char_, &vehicle, &minaltitude, &maxaltitude))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0780>(self_, char_, vehicle, minaltitude, maxaltitude);
	return PyBool_FromLong(1);
}

PyObject* get_weapontype_model(PyObject* self, PyObject* args) // Weapon
{
	// inputs
	int weapontype;

	// outputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0781>(weapontype, &modelid);
	return Py_BuildValue("i", modelid);
}

PyObject* get_weapontype_slot(PyObject* self, PyObject* args) // Weapon
{
	// inputs
	int weapontype;

	// outputs
	int slot;
	if (!PyArg_ParseTuple(args, "i", &weapontype))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0782>(weapontype, &slot);
	return Py_BuildValue("i", slot);
}

PyObject* get_shopping_extra_info(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int itemid;
	int flag;

	// outputs
	int value;
	if (!PyArg_ParseTuple(args, "ii", &itemid, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0783>(itemid, flag, &value);
	return Py_BuildValue("i", value);
}

PyObject* give_player_clothes(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int texturehash;
	int modelhash;
	int bodypart;
	if (!PyArg_ParseTuple(args, "iiii", &self_, &texturehash, &modelhash, &bodypart))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0784>(self_, texturehash, modelhash, bodypart);
	return PyBool_FromLong(1);
}

PyObject* get_number_of_fires_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;

	// outputs
	int numfires;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0786>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, &numfires);
	return Py_BuildValue("i", numfires);
}

PyObject* attach_winch_to_heli(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0788>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* release_entity_from_winch(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0789>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_train_carriage(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	int number;

	// outputs
	int carriage;
	if (!PyArg_ParseTuple(args, "ii", &self_, &number))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x078A>(self_, number, &carriage);
	return Py_BuildValue("i", carriage);
}

PyObject* grab_entity_on_winch(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;

	// outputs
	int char_;
	int vehicle;
	int object;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x078B>(self_, &char_, &vehicle, &object);
	return Py_BuildValue("iii", char_, vehicle, object);
}

PyObject* get_name_of_item(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int itemid;

	// outputs
	int name;
	if (!PyArg_ParseTuple(args, "i", &itemid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x078C>(itemid, &name);
	return Py_BuildValue("i", name);
}

PyObject* task_climb(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int flag;
	if (!PyArg_ParseTuple(args, "ii", &handle, &flag))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x078F>(handle, flag);
	return PyBool_FromLong(1);
}

PyObject* buy_item(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int itemid;
	if (!PyArg_ParseTuple(args, "i", &itemid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0790>(itemid);
	return PyBool_FromLong(1);
}

PyObject* clear_char_tasks_immediately(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0792>(self_);
	return PyBool_FromLong(1);
}

PyObject* store_clothes_state(PyObject* self, PyObject* args) // Player
{
	plugin::Command<0x0793>();
	return PyBool_FromLong(1);
}

PyObject* restore_clothes_state(PyObject* self, PyObject* args) // Player
{
	plugin::Command<0x0794>();
	return PyBool_FromLong(1);
}

PyObject* get_rope_height_for_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;

	// outputs
	float height;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0796>(self_, &height);
	return Py_BuildValue("f", height);
}

PyObject* set_rope_height_for_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float height;
	if (!PyArg_ParseTuple(args, "if", &self_, &height))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0797>(self_, height);
	return PyBool_FromLong(1);
}

PyObject* grab_entity_on_rope_for_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;

	// outputs
	int vehicle;
	int char_;
	int object;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0798>(self_, &vehicle, &char_, &object);
	return Py_BuildValue("iii", vehicle, char_, object);
}

PyObject* release_entity_from_rope_for_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0799>(self_);
	return PyBool_FromLong(1);
}

PyObject* player_entered_dock_crane(PyObject* self, PyObject* args) // Crane
{
	plugin::Command<0x079D>();
	return PyBool_FromLong(1);
}

PyObject* player_entered_buildingsite_crane(PyObject* self, PyObject* args) // Crane
{
	plugin::Command<0x079E>();
	return PyBool_FromLong(1);
}

PyObject* player_left_crane(PyObject* self, PyObject* args) // Crane
{
	plugin::Command<0x079F>();
	return PyBool_FromLong(1);
}

PyObject* perform_sequence_task_from_progress(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int sequence;
	int _p3;
	int _p4;
	if (!PyArg_ParseTuple(args, "iiii", &self_, &sequence, &_p3, &_p4))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A0>(self_, sequence, _p3, _p4);
	return PyBool_FromLong(1);
}

PyObject* set_next_desired_move_state(PyObject* self, PyObject* args) // Char
{
	// inputs
	int movestate;
	if (!PyArg_ParseTuple(args, "i", &movestate))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A1>(movestate);
	return PyBool_FromLong(1);
}

PyObject* task_goto_char_aiming(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int target;
	float radiusfrom;
	float radiusto;
	if (!PyArg_ParseTuple(args, "iiff", &handle, &target, &radiusfrom, &radiusto))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A3>(handle, target, radiusfrom, radiusto);
	return PyBool_FromLong(1);
}

PyObject* get_sequence_progress_recursive(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int _p2;
	int _p3;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A4>(self_, &_p2, &_p3);
	return Py_BuildValue("ii", _p2, _p3);
}

PyObject* task_kill_char_on_foot_timed(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int target;
	int time;
	if (!PyArg_ParseTuple(args, "iii", &handle, &target, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A5>(handle, target, time);
	return PyBool_FromLong(1);
}

PyObject* get_nearest_tag_position(PyObject* self, PyObject* args) // World
{
	// inputs
	float xcoord;
	float ycoord;
	float zcoord;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &xcoord, &ycoord, &zcoord))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A6>(xcoord, ycoord, zcoord, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* task_jetpack(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A7>(handle);
	return PyBool_FromLong(1);
}

PyObject* set_area51_sam_site(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07A8>(state);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_any_searchlight(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07A9>(self_, &handle));
}

PyObject* is_trailer_attached_to_cab(PyObject* self, PyObject* args) // Trailer
{
	// inputs
	int self_;
	int cab;
	if (!PyArg_ParseTuple(args, "ii", &self_, &cab))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07AB>(self_, cab));
}

PyObject* detach_trailer_from_cab(PyObject* self, PyObject* args) // Trailer
{
	// inputs
	int self_;
	int cab;
	if (!PyArg_ParseTuple(args, "ii", &self_, &cab))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07AC>(self_, cab);
	return PyBool_FromLong(1);
}

PyObject* get_player_group(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07AF>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_loaded_shop(PyObject* self, PyObject* args) // Shopping
{

	// outputs
	int name;
	plugin::Command<0x07B0>(&name);
	return Py_BuildValue("i", name);
}

PyObject* get_beat_proximity(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int _p1;

	// outputs
	int _p2;
	int _p3;
	int _p4;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07B1>(_p1, &_p2, &_p3, &_p4);
	return Py_BuildValue("iii", _p2, _p3, _p4);
}

PyObject* set_group_default_task_allocator(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	int defaulttaskallocator;
	if (!PyArg_ParseTuple(args, "ii", &self_, &defaulttaskallocator))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07B3>(self_, defaulttaskallocator);
	return PyBool_FromLong(1);
}

PyObject* set_player_group_recruitment(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07B4>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* activate_heli_speed_cheat(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &self_, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07BB>(self_, _p2);
	return PyBool_FromLong(1);
}

PyObject* task_set_char_decision_maker(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int decisionmakerchar;
	if (!PyArg_ParseTuple(args, "ii", &char_, &decisionmakerchar))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07BC>(char_, decisionmakerchar);
	return PyBool_FromLong(1);
}

PyObject* delete_mission_train(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07BD>(self_);
	return PyBool_FromLong(1);
}

PyObject* mark_mission_train_as_no_longer_needed(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07BE>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_blip_always_display_on_zoomed_radar(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07BF>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* request_car_recording(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int pathid;
	if (!PyArg_ParseTuple(args, "i", &pathid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07C0>(pathid);
	return PyBool_FromLong(1);
}

PyObject* has_car_recording_been_loaded(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int pathid;
	if (!PyArg_ParseTuple(args, "i", &pathid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07C1>(pathid));
}

PyObject* get_object_quaternion(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float w;
	if (!PyArg_ParseTuple(args, "iffff", &self_, &x, &y, &z, &w))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07C3>(self_, x, y, z, w);
	return PyBool_FromLong(1);
}

PyObject* set_object_quaternion(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float w;
	if (!PyArg_ParseTuple(args, "iffff", &self_, &x, &y, &z, &w))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07C4>(self_, x, y, z, w);
	return PyBool_FromLong(1);
}

PyObject* get_vehicle_quaternion(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	float w;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07C5>(self_, &x, &y, &z, &w);
	return Py_BuildValue("ffff", x, y, z, w);
}

PyObject* set_vehicle_quaternion(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	float w;
	if (!PyArg_ParseTuple(args, "iffff", &self_, &x, &y, &z, &w))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07C6>(self_, x, y, z, w);
	return PyBool_FromLong(1);
}

PyObject* set_mission_train_coordinates(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07C7>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* task_complex_pickup_object(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int object;
	if (!PyArg_ParseTuple(args, "ii", &char_, &object))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07C9>(char_, object);
	return PyBool_FromLong(1);
}

PyObject* listen_to_player_group_commands(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07CB>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_player_enter_car_button(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int playerid;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &playerid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07CC>(playerid, state);
	return PyBool_FromLong(1);
}

PyObject* task_char_slide_to_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	float angle;
	float radius;
	if (!PyArg_ParseTuple(args, "ifffff", &handle, &x, &y, &z, &angle, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07CD>(handle, x, y, z, angle, radius);
	return PyBool_FromLong(1);
}

PyObject* get_current_day_of_week(PyObject* self, PyObject* args) // Clock
{

	// outputs
	int day;
	plugin::Command<0x07D0>(&day);
	return Py_BuildValue("i", day);
}

PyObject* register_script_brain_for_code_use(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &id, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07D3>(id, _p2);
	return PyBool_FromLong(1);
}

PyObject* apply_force_to_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	if (!PyArg_ParseTuple(args, "iffffff", &self_, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07D5>(self_, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation);
	return PyBool_FromLong(1);
}

PyObject* is_int_lvar_equal_to_int_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07D6>(_p1, _p2));
}

PyObject* is_float_lvar_equal_to_float_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07D7>(_p1, _p2));
}

PyObject* add_to_car_rotation_velocity(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07DA>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_car_rotation_velocity(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07DB>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_char_shoot_rate(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int rate;
	if (!PyArg_ParseTuple(args, "ii", &self_, &rate))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07DD>(self_, rate);
	return PyBool_FromLong(1);
}

PyObject* is_model_in_cdimage(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modeid;
	if (!PyArg_ParseTuple(args, "i", &modeid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07DE>(modeid));
}

PyObject* remove_oil_puddles_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	if (!PyArg_ParseTuple(args, "ffff", &leftbottomx, &leftbottomy, &righttopx, &righttopy))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07DF>(leftbottomx, leftbottomy, righttopx, righttopy);
	return PyBool_FromLong(1);
}

PyObject* set_blip_as_friendly(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07E0>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* task_swim_to_coord(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &handle, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07E1>(handle, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_model_dimensions(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;

	// outputs
	float leftbottombackx;
	float leftbottombacky;
	float leftbottombackz;
	float righttopfrontx;
	float righttopfronty;
	float righttopfrontz;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07E4>(modelid, &leftbottombackx, &leftbottombacky, &leftbottombackz, &righttopfrontx, &righttopfronty, &righttopfrontz);
	return Py_BuildValue("ffffff", leftbottombackx, leftbottombacky, leftbottombackz, righttopfrontx, righttopfronty, righttopfrontz);
}

PyObject* copy_char_decision_maker(PyObject* self, PyObject* args) // Decisionmakerchar
{
	// inputs
	int maskorotherhandle;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &maskorotherhandle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07E5>(maskorotherhandle, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* copy_group_decision_maker(PyObject* self, PyObject* args) // Decisionmakergroup
{
	// inputs
	int mask;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &mask))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07E6>(mask, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* task_drive_point_route_advanced(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int vehicle;
	float speed;
	int _p4;
	int _p5;
	int _p6;
	if (!PyArg_ParseTuple(args, "iifiii", &char_, &vehicle, &speed, &_p4, &_p5, &_p6))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07E7>(char_, vehicle, speed, _p4, _p5, _p6);
	return PyBool_FromLong(1);
}

PyObject* is_relationship_set(PyObject* self, PyObject* args) // Game
{
	// inputs
	int ofpedtype;
	int topedtype;
	int relationshiptype;
	if (!PyArg_ParseTuple(args, "iii", &ofpedtype, &topedtype, &relationshiptype))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07E8>(ofpedtype, topedtype, relationshiptype));
}

PyObject* set_car_always_create_skids(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07EE>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* get_city_from_coords(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int townid;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07EF>(x, y, z, &townid);
	return Py_BuildValue("i", townid);
}

PyObject* has_object_of_type_been_smashed(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int modelid;
	if (!PyArg_ParseTuple(args, "ffffi", &x, &y, &z, &radius, &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07F0>(x, y, z, radius, modelid));
}

PyObject* is_player_performing_wheelie(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07F1>(self_));
}

PyObject* is_player_performing_stoppie(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07F2>(self_));
}

PyObject* set_checkpoint_coords(PyObject* self, PyObject* args) // Checkpoint
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07F3>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* control_car_hydraulics(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float _p2;
	float _p3;
	float _p4;
	float _p5;
	if (!PyArg_ParseTuple(args, "iffff", &self_, &_p2, &_p3, &_p4, &_p5))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07F5>(self_, _p2, _p3, _p4, _p5);
	return PyBool_FromLong(1);
}

PyObject* get_group_size(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;

	// outputs
	int numleaders;
	int nummembers;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07F6>(self_, &numleaders, &nummembers);
	return Py_BuildValue("ii", numleaders, nummembers);
}

PyObject* set_object_collision_damage_effect(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07F7>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_car_follow_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	float radius;
	if (!PyArg_ParseTuple(args, "iif", &self_, &handle, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07F8>(self_, handle, radius);
	return PyBool_FromLong(1);
}

PyObject* player_entered_quarry_crane(PyObject* self, PyObject* args) // Crane
{
	plugin::Command<0x07F9>();
	return PyBool_FromLong(1);
}

PyObject* player_entered_las_vegas_crane(PyObject* self, PyObject* args) // Crane
{
	plugin::Command<0x07FA>();
	return PyBool_FromLong(1);
}

PyObject* switch_entry_exit(PyObject* self, PyObject* args) // World
{
	// inputs
	int interiorname;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &interiorname, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07FB>(interiorname, state);
	return PyBool_FromLong(1);
}

PyObject* display_text_with_float(PyObject* self, PyObject* args) // Text
{
	// inputs
	float lefttopx;
	float lefttopy;
	int key;
	float value;
	int precision;
	if (!PyArg_ParseTuple(args, "ffifi", &lefttopx, &lefttopy, &key, &value, &precision))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07FC>(lefttopx, lefttopy, key, value, precision);
	return PyBool_FromLong(1);
}

PyObject* does_group_exist(PyObject* self, PyObject* args) // Group
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x07FD>(handle));
}

PyObject* give_melee_attack_to_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int fightstyle;
	int moveid;
	if (!PyArg_ParseTuple(args, "iii", &self_, &fightstyle, &moveid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07FE>(self_, fightstyle, moveid);
	return PyBool_FromLong(1);
}

PyObject* set_car_hydraulics(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x07FF>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_2player_game_going_on(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0800>());
}

PyObject* get_camera_fov(PyObject* self, PyObject* args) // Camera
{

	// outputs
	float fov;
	plugin::Command<0x0801>(&fov);
	return Py_BuildValue("f", fov);
}

PyObject* does_car_have_hydraulics(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0803>(self_));
}

PyObject* task_char_slide_to_coord_and_play_anim(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	float angle;
	float radius;
	int animationname;
	int animationfile;
	float framedelta;
	int loop;
	int lockx;
	int locky;
	int lockf;
	int time;
	if (!PyArg_ParseTuple(args, "ifffffiifiiiii", &handle, &x, &y, &z, &angle, &radius, &animationname, &animationfile, &framedelta, &loop, &lockx, &locky, &lockf, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0804>(handle, x, y, z, angle, radius, animationname, animationfile, framedelta, loop, lockx, locky, lockf, time);
	return PyBool_FromLong(1);
}

PyObject* get_total_number_of_peds_killed_by_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int numpeds;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0806>(self_, &numpeds);
	return Py_BuildValue("i", numpeds);
}

PyObject* get_level_design_coords_for_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int nth;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ii", &self_, &nth))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x080A>(self_, nth, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* get_char_highest_priority_event(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int eventid;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x080E>(self_, &eventid);
	return Py_BuildValue("i", eventid);
}

PyObject* get_parking_node_in_area(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0810>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* get_car_char_is_using(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0811>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* task_play_anim_non_interruptable(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int animationname;
	int animationfile;
	float framedelta;
	int loop;
	int lockx;
	int locky;
	int lockf;
	int time;
	if (!PyArg_ParseTuple(args, "iiifiiiii", &handle, &animationname, &animationfile, &framedelta, &loop, &lockx, &locky, &lockf, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0812>(handle, animationname, animationfile, framedelta, loop, lockx, locky, lockf, time);
	return PyBool_FromLong(1);
}

PyObject* add_stunt_jump(PyObject* self, PyObject* args) // World
{
	// inputs
	float startx;
	float starty;
	float startz;
	float startradiusx;
	float startradiusy;
	float startradiusz;
	float finishx;
	float finishy;
	float finishz;
	float finishradiusx;
	float finishradiusy;
	float finishradiusz;
	float camerax;
	float cameray;
	float cameraz;
	int reward;
	if (!PyArg_ParseTuple(args, "fffffffffffffffi", &startx, &starty, &startz, &startradiusx, &startradiusy, &startradiusz, &finishx, &finishy, &finishz, &finishradiusx, &finishradiusy, &finishradiusz, &camerax, &cameray, &cameraz, &reward))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0814>(startx, starty, startz, startradiusx, startradiusy, startradiusz, finishx, finishy, finishz, finishradiusx, finishradiusy, finishradiusz, camerax, cameray, cameraz, reward);
	return PyBool_FromLong(1);
}

PyObject* set_object_coordinates_and_velocity(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0815>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_char_kinda_stay_in_same_place(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0816>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* task_follow_patrol_route(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int walkspeed;
	int routemode;
	if (!PyArg_ParseTuple(args, "iii", &handle, &walkspeed, &routemode))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0817>(handle, walkspeed, routemode);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_air(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0818>(self_));
}

PyObject* get_char_height_above_ground(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	float height;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0819>(self_, &height);
	return Py_BuildValue("f", height);
}

PyObject* set_char_weapon_skill(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int skillid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &skillid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x081A>(self_, skillid);
	return PyBool_FromLong(1);
}

PyObject* set_text_edge(PyObject* self, PyObject* args) // Text
{
	// inputs
	int size;
	int red;
	int green;
	int blue;
	int alpha;
	if (!PyArg_ParseTuple(args, "iiiii", &size, &red, &green, &blue, &alpha))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x081C>(size, red, green, blue, alpha);
	return PyBool_FromLong(1);
}

PyObject* set_car_engine_broken(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x081D>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_this_model_a_boat(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x081E>(modelid));
}

PyObject* is_this_model_a_plane(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x081F>(modelid));
}

PyObject* is_this_model_a_heli(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0820>(modelid));
}

PyObject* set_first_person_in_car_camera_mode(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0822>(state);
	return PyBool_FromLong(1);
}

PyObject* task_greet_partner(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int partner;
	float _p3;
	int _p4;
	if (!PyArg_ParseTuple(args, "iifi", &handle, &partner, &_p3, &_p4))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0823>(handle, partner, _p3, _p4);
	return PyBool_FromLong(1);
}

PyObject* set_heli_blades_full_speed(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0825>(self_);
	return PyBool_FromLong(1);
}

PyObject* display_hud(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0826>(state);
	return PyBool_FromLong(1);
}

PyObject* connect_lods(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int lodobject;
	if (!PyArg_ParseTuple(args, "ii", &self_, &lodobject))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0827>(self_, lodobject);
	return PyBool_FromLong(1);
}

PyObject* set_max_fire_generations(PyObject* self, PyObject* args) // Game
{
	// inputs
	int limit;
	if (!PyArg_ParseTuple(args, "i", &limit))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0828>(limit);
	return PyBool_FromLong(1);
}

PyObject* task_die_named_anim(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int animationname;
	int animationfile;
	float framedelta;
	int time;
	if (!PyArg_ParseTuple(args, "iiifi", &handle, &animationname, &animationfile, &framedelta, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0829>(handle, animationname, animationfile, framedelta, time);
	return PyBool_FromLong(1);
}

PyObject* set_player_duck_button(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int playerid;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &playerid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x082A>(playerid, state);
	return PyBool_FromLong(1);
}

PyObject* set_pool_table_coords(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0830>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* has_object_been_photographed(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0833>(self_));
}

PyObject* do_camera_bump(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float xoffset;
	float yoffset;
	if (!PyArg_ParseTuple(args, "ff", &xoffset, &yoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0834>(xoffset, yoffset);
	return PyBool_FromLong(1);
}

PyObject* get_current_date(PyObject* self, PyObject* args) // Clock
{

	// outputs
	int day;
	int month;
	plugin::Command<0x0835>(&day, &month);
	return Py_BuildValue("ii", day, month);
}

PyObject* set_object_anim_speed(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int animationname;
	float speed;
	if (!PyArg_ParseTuple(args, "iif", &self_, &animationname, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0836>(self_, animationname, speed);
	return PyBool_FromLong(1);
}

PyObject* is_object_playing_anim(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int animationname;
	if (!PyArg_ParseTuple(args, "ii", &self_, &animationname))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0837>(self_, animationname));
}

PyObject* get_object_anim_current_time(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int animationname;

	// outputs
	float time;
	if (!PyArg_ParseTuple(args, "ii", &self_, &animationname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0839>(self_, animationname, &time);
	return Py_BuildValue("f", time);
}

PyObject* set_object_anim_current_time(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int animationname;
	float time;
	if (!PyArg_ParseTuple(args, "iif", &self_, &animationname, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x083A>(self_, animationname, time);
	return PyBool_FromLong(1);
}

PyObject* set_char_velocity(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x083C>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_char_velocity(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x083D>(self_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* set_char_rotation(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x083E>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* get_car_upright_value(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float value;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x083F>(self_, &value);
	return Py_BuildValue("f", value);
}

PyObject* set_vehicle_area_visible(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int interiorid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &interiorid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0840>(self_, interiorid);
	return PyBool_FromLong(1);
}

PyObject* select_weapons_for_vehicle(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &self_, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0841>(self_, _p2);
	return PyBool_FromLong(1);
}

PyObject* get_city_player_is_in(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int cityid;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0842>(self_, &cityid);
	return Py_BuildValue("i", cityid);
}

PyObject* get_name_of_zone(PyObject* self, PyObject* args) // Zone
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int name;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0843>(x, y, z, &name);
	return Py_BuildValue("i", name);
}

PyObject* is_var_text_label_empty(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0844>(_p1));
}

PyObject* is_lvar_text_label_empty(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0845>(_p1));
}

PyObject* is_var_text_label16_empty(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0846>(_p1));
}

PyObject* is_lvar_text_label16_empty(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0847>(_p1));
}

PyObject* activate_interior_peds(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x084D>(state);
	return PyBool_FromLong(1);
}

PyObject* set_vehicle_can_be_targeted(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x084E>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* task_follow_footsteps(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int target;
	if (!PyArg_ParseTuple(args, "ii", &handle, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0850>(handle, target);
	return PyBool_FromLong(1);
}

PyObject* damage_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int amount;
	int damagearmour;
	if (!PyArg_ParseTuple(args, "iii", &self_, &amount, &damagearmour))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0851>(self_, amount, damagearmour);
	return PyBool_FromLong(1);
}

PyObject* set_car_can_be_visibly_damaged(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0852>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_heli_reached_target_distance(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int distance;
	if (!PyArg_ParseTuple(args, "ii", &self_, &distance))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0853>(self_, distance);
	return PyBool_FromLong(1);
}

PyObject* get_sound_level_at_coords(PyObject* self, PyObject* args) // World
{
	// inputs
	int handle;
	float x;
	float y;
	float z;

	// outputs
	float level;
	if (!PyArg_ParseTuple(args, "ifff", &handle, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0855>(handle, x, y, z, &level);
	return Py_BuildValue("f", level);
}

PyObject* set_char_allowed_to_duck(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0856>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_heading_for_attached_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	float heading;
	float rotationspeed;
	if (!PyArg_ParseTuple(args, "iff", &self_, &heading, &rotationspeed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0858>(self_, heading, rotationspeed);
	return PyBool_FromLong(1);
}

PyObject* task_walk_alongside_char(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int target;
	if (!PyArg_ParseTuple(args, "ii", &handle, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0859>(handle, target);
	return PyBool_FromLong(1);
}

PyObject* create_emergency_services_car(PyObject* self, PyObject* args) // World
{
	// inputs
	int model;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &model, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x085A>(model, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* task_kinda_stay_in_same_place(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x085B>(handle, state);
	return PyBool_FromLong(1);
}

PyObject* start_playback_recorded_car_looped(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int pathid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &pathid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x085E>(self_, pathid);
	return PyBool_FromLong(1);
}

PyObject* set_char_area_visible(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int interiorid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &interiorid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0860>(self_, interiorid);
	return PyBool_FromLong(1);
}

PyObject* is_attached_player_heading_achieved(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0861>(self_));
}

PyObject* enable_entry_exit_player_group_warping(PyObject* self, PyObject* args) // Game
{
	// inputs
	float x;
	float y;
	float radius;
	int state;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &radius, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0864>(x, y, radius, state);
	return PyBool_FromLong(1);
}

PyObject* get_closest_stealable_object(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0866>(x, y, z, radius, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_procedural_interior_active(PyObject* self, PyObject* args) // Game
{
	// inputs
	int interiorid;
	if (!PyArg_ParseTuple(args, "i", &interiorid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0867>(interiorid));
}

PyObject* switch_start(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	int _p4;
	int _p5;
	int _p6;
	int _p7;
	int _p8;
	int _p9;
	int _p10;
	int _p11;
	int _p12;
	int _p13;
	int _p14;
	int _p15;
	int _p16;
	int _p17;
	int _p18;
	if (!PyArg_ParseTuple(args, "iiiiiiiiiiiiiiiiii", &_p1, &_p2, &_p3, &_p4, &_p5, &_p6, &_p7, &_p8, &_p9, &_p10, &_p11, &_p12, &_p13, &_p14, &_p15, &_p16, &_p17, &_p18))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0871>(_p1, _p2, _p3, _p4, _p5, _p6, _p7, _p8, _p9, _p10, _p11, _p12, _p13, _p14, _p15, _p16, _p17, _p18);
	return PyBool_FromLong(1);
}

PyObject* switch_continued(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	int _p4;
	int _p5;
	int _p6;
	int _p7;
	int _p8;
	int _p9;
	int _p10;
	int _p11;
	int _p12;
	int _p13;
	int _p14;
	int _p15;
	int _p16;
	int _p17;
	int _p18;
	if (!PyArg_ParseTuple(args, "iiiiiiiiiiiiiiiiii", &_p1, &_p2, &_p3, &_p4, &_p5, &_p6, &_p7, &_p8, &_p9, &_p10, &_p11, &_p12, &_p13, &_p14, &_p15, &_p16, &_p17, &_p18))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0872>(_p1, _p2, _p3, _p4, _p5, _p6, _p7, _p8, _p9, _p10, _p11, _p12, _p13, _p14, _p15, _p16, _p17, _p18);
	return PyBool_FromLong(1);
}

PyObject* remove_car_recording(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int pathid;
	if (!PyArg_ParseTuple(args, "i", &pathid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0873>(pathid);
	return PyBool_FromLong(1);
}

PyObject* set_zone_population_race(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &zone, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0874>(zone, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_object_only_damaged_by_player(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0875>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* create_birds(PyObject* self, PyObject* args) // World
{
	// inputs
	float xfrom;
	float yfrom;
	float zfrom;
	float xto;
	float yto;
	float zto;
	int quantity;
	int type;
	if (!PyArg_ParseTuple(args, "ffffffii", &xfrom, &yfrom, &zfrom, &xto, &yto, &zto, &quantity, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0876>(xfrom, yfrom, zfrom, xto, yto, zto, quantity, type);
	return PyBool_FromLong(1);
}

PyObject* set_vehicle_dirt_level(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float level;
	if (!PyArg_ParseTuple(args, "if", &self_, &level))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0878>(self_, level);
	return PyBool_FromLong(1);
}

PyObject* set_gang_wars_active(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0879>(state);
	return PyBool_FromLong(1);
}

PyObject* is_gang_war_going_on(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x087A>());
}

PyObject* give_player_clothes_outside_shop(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int texturename;
	int modelname;
	int bodypart;
	if (!PyArg_ParseTuple(args, "iiii", &self_, &texturename, &modelname, &bodypart))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x087B>(self_, texturename, modelname, bodypart);
	return PyBool_FromLong(1);
}

PyObject* clear_loaded_shop(PyObject* self, PyObject* args) // Shopping
{
	plugin::Command<0x087C>();
	return PyBool_FromLong(1);
}

PyObject* set_group_sequence(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	int sequence;
	if (!PyArg_ParseTuple(args, "ii", &self_, &sequence))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x087D>(self_, sequence);
	return PyBool_FromLong(1);
}

PyObject* set_char_drops_weapons_when_dead(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x087E>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_never_leaves_group(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x087F>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_player_fire_button(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int playerid;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &playerid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0881>(playerid, state);
	return PyBool_FromLong(1);
}

PyObject* attach_fx_system_to_char_bone(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int self_;
	int handle;
	int boneid;
	if (!PyArg_ParseTuple(args, "iii", &self_, &handle, &boneid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0883>(self_, handle, boneid);
	return PyBool_FromLong(1);
}

PyObject* register_attractor_script_brain_for_code_use(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &id, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0884>(id, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_heading_limit_for_attached_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int orientation;
	float headinglimit;
	if (!PyArg_ParseTuple(args, "iif", &self_, &orientation, &headinglimit))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0887>(self_, orientation, headinglimit);
	return PyBool_FromLong(1);
}

PyObject* add_blip_for_dead_char(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int char_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &char_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0888>(char_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_dead_char_coordinates(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0889>(self_, &x, &y, &z);
	return Py_BuildValue("fff", x, y, z);
}

PyObject* task_play_anim_with_flags(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int animationname;
	int animationfile;
	float framedelta;
	int loop;
	int lockx;
	int locky;
	int lockf;
	int time;
	int disableforce;
	int disablelockz;
	if (!PyArg_ParseTuple(args, "iiifiiiiiii", &handle, &animationname, &animationfile, &framedelta, &loop, &lockx, &locky, &lockf, &time, &disableforce, &disablelockz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x088A>(handle, animationname, animationfile, framedelta, loop, lockx, locky, lockf, time, disableforce, disablelockz);
	return PyBool_FromLong(1);
}

PyObject* set_vehicle_air_resistance_multiplier(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float multiplier;
	if (!PyArg_ParseTuple(args, "if", &self_, &multiplier))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x088B>(self_, multiplier);
	return PyBool_FromLong(1);
}

PyObject* set_car_coordinates_no_offset(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x088C>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_uses_collision_of_closest_object_of_type(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	int _p4;
	int _p5;
	int _p6;
	if (!PyArg_ParseTuple(args, "iiiiii", &_p1, &_p2, &_p3, &_p4, &_p5, &_p6))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x088D>(_p1, _p2, _p3, _p4, _p5, _p6);
	return PyBool_FromLong(1);
}

PyObject* set_time_one_day_forward(PyObject* self, PyObject* args) // Clock
{
	plugin::Command<0x088E>();
	return PyBool_FromLong(1);
}

PyObject* set_timer_beep_countdown_time(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int timer;
	int timeinsec;
	if (!PyArg_ParseTuple(args, "ii", &timer, &timeinsec))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0890>(timer, timeinsec);
	return PyBool_FromLong(1);
}

PyObject* attach_trailer_to_cab(PyObject* self, PyObject* args) // Trailer
{
	// inputs
	int self_;
	int cab;
	if (!PyArg_ParseTuple(args, "ii", &self_, &cab))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0893>(self_, cab);
	return PyBool_FromLong(1);
}

PyObject* is_vehicle_touching_object(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0897>(self_, handle));
}

PyObject* enable_crane_controls(PyObject* self, PyObject* args) // Crane
{
	// inputs
	int up;
	int down;
	int release;
	if (!PyArg_ParseTuple(args, "iii", &up, &down, &release))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0898>(up, down, release);
	return PyBool_FromLong(1);
}

PyObject* is_player_in_position_for_conversation(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x089B>(handle));
}

PyObject* enable_conversation(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int handle;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x089C>(handle, state);
	return PyBool_FromLong(1);
}

PyObject* get_random_char_in_sphere_only_drugs_buyers(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x089E>(x, y, z, radius, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_ped_type(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int pedtype;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x089F>(self_, &pedtype);
	return Py_BuildValue("i", pedtype);
}

PyObject* task_use_closest_map_attractor(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float radius;
	int modelid;
	float fromx;
	float fromy;
	float fromz;
	int name;
	if (!PyArg_ParseTuple(args, "ififffi", &handle, &radius, &modelid, &fromx, &fromy, &fromz, &name))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A0>(handle, radius, modelid, fromx, fromy, fromz, name);
	return PyBool_FromLong(1);
}

PyObject* plane_attack_player_using_dog_fight(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	int player;
	float radius;
	if (!PyArg_ParseTuple(args, "iif", &self_, &player, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A2>(self_, player, radius);
	return PyBool_FromLong(1);
}

PyObject* can_trigger_gang_war_when_on_a_mission(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A3>(state);
	return PyBool_FromLong(1);
}

PyObject* control_movable_vehicle_part(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	float range;
	if (!PyArg_ParseTuple(args, "if", &self_, &range))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A4>(self_, range);
	return PyBool_FromLong(1);
}

PyObject* winch_can_pick_vehicle_up(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A5>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* open_car_door_a_bit(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	float value;
	if (!PyArg_ParseTuple(args, "iif", &self_, &door, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A6>(self_, door, value);
	return PyBool_FromLong(1);
}

PyObject* is_car_door_fully_open(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	if (!PyArg_ParseTuple(args, "ii", &self_, &door))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08A7>(self_, door));
}

PyObject* set_always_draw_3d_markers(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A8>(state);
	return PyBool_FromLong(1);
}

PyObject* stream_script(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	if (!PyArg_ParseTuple(args, "i", &id))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08A9>(id);
	return PyBool_FromLong(1);
}

PyObject* has_streamed_script_loaded(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	if (!PyArg_ParseTuple(args, "i", &id))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08AB>(id));
}

PyObject* set_gang_wars_training_mission(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08AC>(state);
	return PyBool_FromLong(1);
}

PyObject* set_char_has_used_entry_exit(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float radius;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08AD>(self_, x, y, radius);
	return PyBool_FromLong(1);
}

PyObject* set_char_max_health(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int maxhealth;
	if (!PyArg_ParseTuple(args, "ii", &self_, &maxhealth))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08AF>(self_, maxhealth);
	return PyBool_FromLong(1);
}

PyObject* set_night_vision(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08B1>(state);
	return PyBool_FromLong(1);
}

PyObject* set_infrared_vision(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08B2>(state);
	return PyBool_FromLong(1);
}

PyObject* set_zone_for_gang_wars_training(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	if (!PyArg_ParseTuple(args, "i", &zone))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08B3>(zone);
	return PyBool_FromLong(1);
}

PyObject* is_global_var_bit_set_const(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08B4>(_p1, _p2));
}

PyObject* is_global_var_bit_set_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08B5>(_p1, _p2));
}

PyObject* is_global_var_bit_set_lvar(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08B6>(_p1, _p2));
}

PyObject* is_local_var_bit_set_const(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08B7>(_p1, _p2));
}

PyObject* is_local_var_bit_set_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08B8>(_p1, _p2));
}

PyObject* is_local_var_bit_set_lvar(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08B9>(_p1, _p2));
}

PyObject* set_global_var_bit_const(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08BA>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_global_var_bit_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08BB>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_global_var_bit_lvar(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08BC>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_local_var_bit_const(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08BD>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_local_var_bit_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08BE>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_local_var_bit_lvar(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08BF>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* clear_global_var_bit_const(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C0>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* clear_global_var_bit_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C1>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* clear_global_var_bit_lvar(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C2>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* clear_local_var_bit_const(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C3>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* clear_local_var_bit_var(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C4>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* clear_local_var_bit_lvar(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C5>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_char_can_be_knocked_off_bike(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C6>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_coordinates_dont_warp_gang(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C7>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* add_price_modifier(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int itemid;
	int modifier;
	if (!PyArg_ParseTuple(args, "ii", &itemid, &modifier))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C8>(itemid, modifier);
	return PyBool_FromLong(1);
}

PyObject* remove_price_modifier(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int itemid;
	if (!PyArg_ParseTuple(args, "i", &itemid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08C9>(itemid);
	return PyBool_FromLong(1);
}

PyObject* init_zone_population_settings(PyObject* self, PyObject* args) // Zone
{
	plugin::Command<0x08CA>();
	return PyBool_FromLong(1);
}

PyObject* explode_car_in_cutscene_shake_and_bits(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int shake;
	int effect;
	int sound;
	if (!PyArg_ParseTuple(args, "iiii", &self_, &shake, &effect, &sound))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08CB>(self_, shake, effect, sound);
	return PyBool_FromLong(1);
}

PyObject* is_skip_cutscene_button_pressed(PyObject* self, PyObject* args) // Pad
{
	return PyBool_FromLong(plugin::Command<0x08D0>());
}

PyObject* get_cutscene_offset(PyObject* self, PyObject* args) // Cutscene
{

	// outputs
	float xoffset;
	float yoffset;
	float zoffset;
	plugin::Command<0x08D1>(&xoffset, &yoffset, &zoffset);
	return Py_BuildValue("fff", xoffset, yoffset, zoffset);
}

PyObject* set_object_scale(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float scale;
	if (!PyArg_ParseTuple(args, "if", &self_, &scale))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08D2>(self_, scale);
	return PyBool_FromLong(1);
}

PyObject* get_current_population_zone_type(PyObject* self, PyObject* args) // Zone
{

	// outputs
	int type;
	plugin::Command<0x08D3>(&type);
	return Py_BuildValue("i", type);
}

PyObject* create_menu(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int header;
	float topleftx;
	float toplefty;
	float width;
	int numcolumns;
	int interactive;
	int background;
	int alignment;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifffiiii", &header, &topleftx, &toplefty, &width, &numcolumns, &interactive, &background, &alignment))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08D4>(header, topleftx, toplefty, width, numcolumns, interactive, background, alignment, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_menu_column_orientation(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int column;
	int alignment;
	if (!PyArg_ParseTuple(args, "iii", &self_, &column, &alignment))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08D6>(self_, column, alignment);
	return PyBool_FromLong(1);
}

PyObject* get_menu_item_selected(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;

	// outputs
	int row;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08D7>(self_, &row);
	return Py_BuildValue("i", row);
}

PyObject* get_menu_item_accepted(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;

	// outputs
	int row;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08D8>(self_, &row);
	return Py_BuildValue("i", row);
}

PyObject* activate_menu_item(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int row;
	int state;
	if (!PyArg_ParseTuple(args, "iii", &self_, &row, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08D9>(self_, row, state);
	return PyBool_FromLong(1);
}

PyObject* delete_menu(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08DA>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_menu_column(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int column;
	int title;
	int row0;
	int row1;
	int row2;
	int row3;
	int row4;
	int row5;
	int row6;
	int row7;
	int row8;
	int row9;
	int row10;
	int row11;
	if (!PyArg_ParseTuple(args, "iiiiiiiiiiiiiii", &self_, &column, &title, &row0, &row1, &row2, &row3, &row4, &row5, &row6, &row7, &row8, &row9, &row10, &row11))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08DB>(self_, column, title, row0, row1, row2, row3, row4, row5, row6, row7, row8, row9, row10, row11);
	return PyBool_FromLong(1);
}

PyObject* set_blip_entry_exit(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	float x;
	float y;
	float radius;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08DC>(self_, x, y, radius);
	return PyBool_FromLong(1);
}

PyObject* switch_death_penalties(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08DD>(state);
	return PyBool_FromLong(1);
}

PyObject* switch_arrest_penalties(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08DE>(state);
	return PyBool_FromLong(1);
}

PyObject* set_extra_hospital_restart_point(PyObject* self, PyObject* args) // Restart
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	float heading;
	if (!PyArg_ParseTuple(args, "fffff", &x, &y, &z, &radius, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08DF>(x, y, z, radius, heading);
	return PyBool_FromLong(1);
}

PyObject* set_extra_police_station_restart_point(PyObject* self, PyObject* args) // Restart
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	float heading;
	if (!PyArg_ParseTuple(args, "fffff", &x, &y, &z, &radius, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08E0>(x, y, z, radius, heading);
	return PyBool_FromLong(1);
}

PyObject* find_number_tags_tagged(PyObject* self, PyObject* args) // Stat
{

	// outputs
	int numtags;
	plugin::Command<0x08E1>(&numtags);
	return Py_BuildValue("i", numtags);
}

PyObject* get_territory_under_control_percentage(PyObject* self, PyObject* args) // Stat
{

	// outputs
	int percentage;
	plugin::Command<0x08E2>(&percentage);
	return Py_BuildValue("i", percentage);
}

PyObject* is_object_in_angled_area_2d(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffi", &self_, &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08E3>(self_, leftbottomx, leftbottomy, righttopx, righttopy, angle, drawsphere));
}

PyObject* is_object_in_angled_area_3d(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	float angle;
	int drawsphere;
	if (!PyArg_ParseTuple(args, "ifffffffi", &self_, &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz, &angle, &drawsphere))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08E4>(self_, leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz, angle, drawsphere));
}

PyObject* get_random_char_in_sphere_no_brain(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08E5>(x, y, z, radius, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_plane_undercarriage_up(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08E6>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* disable_all_entry_exits(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08E7>(state);
	return PyBool_FromLong(1);
}

PyObject* attach_anims_to_model(PyObject* self, PyObject* args) // Game
{
	// inputs
	int pedmodelid;
	int animationfile;
	if (!PyArg_ParseTuple(args, "ii", &pedmodelid, &animationfile))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08E8>(pedmodelid, animationfile);
	return PyBool_FromLong(1);
}

PyObject* set_object_as_stealable(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08E9>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_create_random_gang_members(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08EA>(state);
	return PyBool_FromLong(1);
}

PyObject* add_sparks(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	float velocityx;
	float velocityy;
	float velocityz;
	int density;
	if (!PyArg_ParseTuple(args, "ffffffi", &x, &y, &z, &velocityx, &velocityy, &velocityz, &density))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08EB>(x, y, z, velocityx, velocityy, velocityz, density);
	return PyBool_FromLong(1);
}

PyObject* get_vehicle_class(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int class_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08EC>(self_, &class_);
	return Py_BuildValue("i", class_);
}

PyObject* clear_conversation_for_char(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08ED>(handle);
	return PyBool_FromLong(1);
}

PyObject* set_menu_item_with_number(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int column;
	int row;
	int gxt;
	int number;
	if (!PyArg_ParseTuple(args, "iiiii", &self_, &column, &row, &gxt, &number))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08EE>(self_, column, row, gxt, number);
	return PyBool_FromLong(1);
}

PyObject* set_menu_item_with_2_numbers(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int column;
	int row;
	int gxt;
	int number1;
	int number2;
	if (!PyArg_ParseTuple(args, "iiiiii", &self_, &column, &row, &gxt, &number1, &number2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08EF>(self_, column, row, gxt, number1, number2);
	return PyBool_FromLong(1);
}

PyObject* append_to_next_cutscene(PyObject* self, PyObject* args) // Cutscene
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08F0>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* get_name_of_info_zone(PyObject* self, PyObject* args) // Zone
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int name;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08F1>(x, y, z, &name);
	return Py_BuildValue("i", name);
}

PyObject* vehicle_can_be_targeted_by_hs_missile(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08F2>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_freebies_in_vehicle(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08F3>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_script_limit_to_gang_size(PyObject* self, PyObject* args) // Game
{
	// inputs
	int maxsize;
	if (!PyArg_ParseTuple(args, "i", &maxsize))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08F4>(maxsize);
	return PyBool_FromLong(1);
}

PyObject* make_player_gang_disappear(PyObject* self, PyObject* args) // Player
{
	plugin::Command<0x08F5>();
	return PyBool_FromLong(1);
}

PyObject* make_player_gang_reappear(PyObject* self, PyObject* args) // Player
{
	plugin::Command<0x08F6>();
	return PyBool_FromLong(1);
}

PyObject* get_clothes_item(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int bodypart;

	// outputs
	int texturehash;
	int modelhash;
	if (!PyArg_ParseTuple(args, "ii", &self_, &bodypart))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08F7>(self_, bodypart, &texturehash, &modelhash);
	return Py_BuildValue("ii", texturehash, modelhash);
}

PyObject* show_update_stats(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08F8>(state);
	return PyBool_FromLong(1);
}

PyObject* is_var_text_label16_equal_to_text_label(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08F9>(_p1, _p2));
}

PyObject* is_lvar_text_label16_equal_to_text_label(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08FA>(_p1, _p2));
}

PyObject* set_coord_blip_appearance(PyObject* self, PyObject* args) // Blip
{
	// inputs
	int self_;
	int color;
	if (!PyArg_ParseTuple(args, "ii", &self_, &color))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08FB>(self_, color);
	return PyBool_FromLong(1);
}

PyObject* set_heathaze_effect(PyObject* self, PyObject* args) // Weather
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x08FD>(state);
	return PyBool_FromLong(1);
}

PyObject* is_help_message_being_displayed(PyObject* self, PyObject* args) // Text
{
	return PyBool_FromLong(plugin::Command<0x08FE>());
}

PyObject* has_object_been_damaged_by_weapon(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int weapontype;
	if (!PyArg_ParseTuple(args, "ii", &self_, &weapontype))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x08FF>(self_, weapontype));
}

PyObject* clear_object_last_weapon_damage(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0900>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_player_jump_button(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int playerid;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &playerid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0901>(playerid, state);
	return PyBool_FromLong(1);
}

PyObject* get_hud_colour(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int hudobject;

	// outputs
	int red;
	int green;
	int blue;
	int alpha;
	if (!PyArg_ParseTuple(args, "i", &hudobject))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0904>(hudobject, &red, &green, &blue, &alpha);
	return Py_BuildValue("iiii", red, green, blue, alpha);
}

PyObject* lock_door(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0905>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_object_mass(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float mass;
	if (!PyArg_ParseTuple(args, "if", &self_, &mass))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0906>(self_, mass);
	return PyBool_FromLong(1);
}

PyObject* get_object_mass(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float mass;
	if (!PyArg_ParseTuple(args, "if", &self_, &mass))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0907>(self_, mass);
	return PyBool_FromLong(1);
}

PyObject* set_object_turn_mass(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float turnmass;
	if (!PyArg_ParseTuple(args, "if", &self_, &turnmass))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0908>(self_, turnmass);
	return PyBool_FromLong(1);
}

PyObject* get_object_turn_mass(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	float turnmass;
	if (!PyArg_ParseTuple(args, "if", &self_, &turnmass))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0909>(self_, turnmass);
	return PyBool_FromLong(1);
}

PyObject* set_specific_zone_to_trigger_gang_war(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	if (!PyArg_ParseTuple(args, "i", &zone))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x090C>(zone);
	return PyBool_FromLong(1);
}

PyObject* clear_specific_zones_to_trigger_gang_war(PyObject* self, PyObject* args) // Game
{
	plugin::Command<0x090D>();
	return PyBool_FromLong(1);
}

PyObject* set_active_menu_item(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int row;
	if (!PyArg_ParseTuple(args, "ii", &self_, &row))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x090E>(self_, row);
	return PyBool_FromLong(1);
}

PyObject* mark_streamed_script_as_no_longer_needed(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	if (!PyArg_ParseTuple(args, "i", &id))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x090F>(id);
	return PyBool_FromLong(1);
}

PyObject* remove_streamed_script(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	if (!PyArg_ParseTuple(args, "i", &id))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0910>(id);
	return PyBool_FromLong(1);
}

PyObject* set_message_formatting(PyObject* self, PyObject* args) // Text
{
	// inputs
	int _p1;
	int margin;
	int width;
	if (!PyArg_ParseTuple(args, "iii", &_p1, &margin, &width))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0912>(_p1, margin, width);
	return PyBool_FromLong(1);
}

PyObject* start_new_streamed_script(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	int args_;
	if (!PyArg_ParseTuple(args, "ii", &id, &args_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0913>(id, args_);
	return PyBool_FromLong(1);
}

PyObject* set_weather_to_appropriate_type_now(PyObject* self, PyObject* args) // Weather
{
	plugin::Command<0x0915>();
	return PyBool_FromLong(1);
}

PyObject* winch_can_pick_object_up(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0916>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* switch_audio_zone(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &zone, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0917>(zone, state);
	return PyBool_FromLong(1);
}

PyObject* set_car_engine_on(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0918>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_car_lights_on(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0919>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* get_user_of_closest_map_attractor(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int modelid;
	int attractorname;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffii", &x, &y, &z, &radius, &modelid, &attractorname))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x091C>(x, y, z, radius, modelid, attractorname, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* switch_roads_back_to_original(PyObject* self, PyObject* args) // Path
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x091D>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* switch_ped_roads_back_to_original(PyObject* self, PyObject* args) // Path
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x091E>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz);
	return PyBool_FromLong(1);
}

PyObject* get_plane_undercarriage_position(PyObject* self, PyObject* args) // Plane
{
	// inputs
	int self_;

	// outputs
	float position;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x091F>(self_, &position);
	return Py_BuildValue("f", position);
}

PyObject* camera_set_vector_track(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float fromx;
	float fromy;
	float fromz;
	float tox;
	float toy;
	float toz;
	int time;
	int ease;
	if (!PyArg_ParseTuple(args, "ffffffii", &fromx, &fromy, &fromz, &tox, &toy, &toz, &time, &ease))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0920>(fromx, fromy, fromz, tox, toy, toz, time, ease);
	return PyBool_FromLong(1);
}

PyObject* camera_set_lerp_fov(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float from;
	float to;
	int time;
	int ease;
	if (!PyArg_ParseTuple(args, "ffii", &from, &to, &time, &ease))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0922>(from, to, time, ease);
	return PyBool_FromLong(1);
}

PyObject* switch_ambient_planes(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0923>(state);
	return PyBool_FromLong(1);
}

PyObject* set_darkness_effect(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int enable;
	int pitchblack;
	if (!PyArg_ParseTuple(args, "ii", &enable, &pitchblack))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0924>(enable, pitchblack);
	return PyBool_FromLong(1);
}

PyObject* camera_reset_new_scriptables(PyObject* self, PyObject* args) // Camera
{
	plugin::Command<0x0925>();
	return PyBool_FromLong(1);
}

PyObject* get_number_of_instances_of_streamed_script(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;

	// outputs
	int numscripts;
	if (!PyArg_ParseTuple(args, "i", &id))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0926>(id, &numscripts);
	return Py_BuildValue("i", numscripts);
}

PyObject* allocate_streamed_script_to_random_ped(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	int modelid;
	int priority;
	if (!PyArg_ParseTuple(args, "iii", &id, &modelid, &priority))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0928>(id, modelid, priority);
	return PyBool_FromLong(1);
}

PyObject* allocate_streamed_script_to_object(PyObject* self, PyObject* args) // Streamedscript
{
	// inputs
	int id;
	int modelid;
	int priority;
	float radius;
	int type;
	if (!PyArg_ParseTuple(args, "iiifi", &id, &modelid, &priority, &radius, &type))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0929>(id, modelid, priority, radius, type);
	return PyBool_FromLong(1);
}

PyObject* get_group_member(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	int slotid;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &slotid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x092B>(self_, slotid, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_water_height_at_coords(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	int ignorewaves;

	// outputs
	float height;
	if (!PyArg_ParseTuple(args, "ffi", &x, &y, &ignorewaves))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x092E>(x, y, ignorewaves, &height);
	return Py_BuildValue("f", height);
}

PyObject* camera_persist_track(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x092F>(state);
	return PyBool_FromLong(1);
}

PyObject* camera_persist_pos(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0930>(state);
	return PyBool_FromLong(1);
}

PyObject* camera_persist_fov(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0931>(state);
	return PyBool_FromLong(1);
}

PyObject* camera_is_vector_move_running(PyObject* self, PyObject* args) // Camera
{
	return PyBool_FromLong(plugin::Command<0x0933>());
}

PyObject* camera_is_vector_track_running(PyObject* self, PyObject* args) // Camera
{
	return PyBool_FromLong(plugin::Command<0x0934>());
}

PyObject* camera_set_vector_move(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float fromx;
	float fromy;
	float fromz;
	float tox;
	float toy;
	float toz;
	int time;
	int ease;
	if (!PyArg_ParseTuple(args, "ffffffii", &fromx, &fromy, &fromz, &tox, &toy, &toz, &time, &ease))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0936>(fromx, fromy, fromz, tox, toy, toz, time, ease);
	return PyBool_FromLong(1);
}

PyObject* draw_window(PyObject* self, PyObject* args) // Hud
{
	// inputs
	float lefttopx;
	float lefttopy;
	float rightbottomx;
	float rightbottomy;
	int header;
	int zindex;
	if (!PyArg_ParseTuple(args, "ffffii", &lefttopx, &lefttopy, &rightbottomx, &rightbottomy, &header, &zindex))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0937>(lefttopx, lefttopy, rightbottomx, rightbottomy, header, zindex);
	return PyBool_FromLong(1);
}

PyObject* attach_car_to_object(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	float xoffset;
	float yoffset;
	float zoffset;
	float xrotation;
	float yrotation;
	float zrotation;
	if (!PyArg_ParseTuple(args, "iiffffff", &self_, &handle, &xoffset, &yoffset, &zoffset, &xrotation, &yrotation, &zrotation))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0939>(self_, handle, xoffset, yoffset, zoffset, xrotation, yrotation, zrotation);
	return PyBool_FromLong(1);
}

PyObject* set_garage_respray_free(PyObject* self, PyObject* args) // Garage
{
	// inputs
	int garageid;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &garageid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x093A>(garageid, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_bulletproof_vest(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x093B>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_cinema_camera(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x093D>(state);
	return PyBool_FromLong(1);
}

PyObject* set_group_follow_status(PyObject* self, PyObject* args) // Group
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0940>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_searchlight_clip_if_colliding(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0941>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* has_player_bought_item(PyObject* self, PyObject* args) // Shopping
{
	// inputs
	int itemid;
	if (!PyArg_ParseTuple(args, "i", &itemid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0942>(itemid));
}

PyObject* set_camera_in_front_of_char(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0944>(handle);
	return PyBool_FromLong(1);
}

PyObject* get_player_max_armour(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;

	// outputs
	int maxarmour;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0945>(self_, &maxarmour);
	return Py_BuildValue("i", maxarmour);
}

PyObject* set_char_uses_upperbody_damage_anims_only(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0946>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_say_context(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int speech;

	// outputs
	int _p3;
	if (!PyArg_ParseTuple(args, "ii", &self_, &speech))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0947>(self_, speech, &_p3);
	return Py_BuildValue("i", _p3);
}

PyObject* add_explosion_variable_shake(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	int type;
	float shake;
	if (!PyArg_ParseTuple(args, "fffif", &x, &y, &z, &type, &shake))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0948>(x, y, z, type, shake);
	return PyBool_FromLong(1);
}

PyObject* attach_mission_audio_to_char(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &slotid, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0949>(slotid, handle);
	return PyBool_FromLong(1);
}

PyObject* update_pickup_money_per_day(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	int self_;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &self_, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x094A>(self_, value);
	return PyBool_FromLong(1);
}

PyObject* get_name_of_entry_exit_char_used(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int interiorname;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x094B>(self_, &interiorname);
	return Py_BuildValue("i", interiorname);
}

PyObject* get_position_of_entry_exit_char_used(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	float x;
	float y;
	float z;
	float heading;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x094C>(self_, &x, &y, &z, &heading);
	return Py_BuildValue("ffff", x, y, z, heading);
}

PyObject* is_char_talking(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x094D>(self_));
}

PyObject* disable_char_speech(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int stopnow;
	if (!PyArg_ParseTuple(args, "ii", &self_, &stopnow))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x094E>(self_, stopnow);
	return PyBool_FromLong(1);
}

PyObject* enable_char_speech(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x094F>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_up_skip(PyObject* self, PyObject* args) // Skip
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0950>(x, y, z, heading);
	return PyBool_FromLong(1);
}

PyObject* clear_skip(PyObject* self, PyObject* args) // Skip
{
	plugin::Command<0x0951>();
	return PyBool_FromLong(1);
}

PyObject* preload_beat_track(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int trackid;
	if (!PyArg_ParseTuple(args, "i", &trackid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0952>(trackid);
	return PyBool_FromLong(1);
}

PyObject* get_beat_track_status(PyObject* self, PyObject* args) // Audio
{

	// outputs
	int status;
	plugin::Command<0x0953>(&status);
	return Py_BuildValue("i", status);
}

PyObject* play_beat_track(PyObject* self, PyObject* args) // Audio
{
	plugin::Command<0x0954>();
	return PyBool_FromLong(1);
}

PyObject* stop_beat_track(PyObject* self, PyObject* args) // Audio
{
	plugin::Command<0x0955>();
	return PyBool_FromLong(1);
}

PyObject* find_max_number_of_group_members(PyObject* self, PyObject* args) // Game
{

	// outputs
	int maxnum;
	plugin::Command<0x0956>(&maxnum);
	return Py_BuildValue("i", maxnum);
}

PyObject* vehicle_does_provide_cover(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0957>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* create_snapshot_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0958>(x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_horseshoe_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0959>(x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* create_oyster_pickup(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	float x;
	float y;
	float z;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x095A>(x, y, z, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* has_object_been_uprooted(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x095B>(self_));
}

PyObject* add_smoke_particle(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	float velocityx;
	float velocityy;
	float velocityz;
	int red;
	int green;
	int blue;
	int alpha;
	float size;
	float lastfactor;
	if (!PyArg_ParseTuple(args, "ffffffiiiiff", &x, &y, &z, &velocityx, &velocityy, &velocityz, &red, &green, &blue, &alpha, &size, &lastfactor))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x095C>(x, y, z, velocityx, velocityy, velocityz, red, green, blue, alpha, size, lastfactor);
	return PyBool_FromLong(1);
}

PyObject* is_char_stuck_under_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x095D>(self_));
}

PyObject* control_car_door(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	int latch;
	float angle;
	if (!PyArg_ParseTuple(args, "iiif", &self_, &door, &latch, &angle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x095E>(self_, door, latch, angle);
	return PyBool_FromLong(1);
}

PyObject* get_door_angle_ratio(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;

	// outputs
	float ratio;
	if (!PyArg_ParseTuple(args, "ii", &self_, &door))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x095F>(self_, door, &ratio);
	return Py_BuildValue("f", ratio);
}

PyObject* set_player_display_vital_stats_button(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int playerid;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &playerid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0960>(playerid, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_keep_task(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0961>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* create_menu_grid(PyObject* self, PyObject* args) // Menugrid
{
	// inputs
	int header;
	float topleftx;
	float toplefty;
	float width;
	int numcolumns;
	int interactive;
	int background;
	int alignment;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ifffiiii", &header, &topleftx, &toplefty, &width, &numcolumns, &interactive, &background, &alignment))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0964>(header, topleftx, toplefty, width, numcolumns, interactive, background, alignment, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* is_char_swimming(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0965>(self_));
}

PyObject* get_char_swim_state(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0966>(self_, &state);
	return Py_BuildValue("i", state);
}

PyObject* start_char_facial_talk(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int duration;
	if (!PyArg_ParseTuple(args, "ii", &self_, &duration))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0967>(self_, duration);
	return PyBool_FromLong(1);
}

PyObject* stop_char_facial_talk(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0968>(self_);
	return PyBool_FromLong(1);
}

PyObject* is_big_vehicle(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0969>(self_));
}

PyObject* switch_police_helis(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x096A>(state);
	return PyBool_FromLong(1);
}

PyObject* store_car_mod_state(PyObject* self, PyObject* args) // Car
{
	plugin::Command<0x096B>();
	return PyBool_FromLong(1);
}

PyObject* restore_car_mod_state(PyObject* self, PyObject* args) // Car
{
	plugin::Command<0x096C>();
	return PyBool_FromLong(1);
}

PyObject* get_current_car_mod(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int slot;

	// outputs
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &slot))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x096D>(self_, slot, &modelid);
	return Py_BuildValue("i", modelid);
}

PyObject* is_car_low_rider(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x096E>(self_));
}

PyObject* is_car_street_racer(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x096F>(self_));
}

PyObject* force_death_restart(PyObject* self, PyObject* args) // Game
{
	plugin::Command<0x0970>();
	return PyBool_FromLong(1);
}

PyObject* sync_water(PyObject* self, PyObject* args) // 
{
	plugin::Command<0x0971>();
	return PyBool_FromLong(1);
}

PyObject* set_char_coordinates_no_offset(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0972>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* does_script_fire_exist(PyObject* self, PyObject* args) // Scriptfire
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0973>(handle));
}

PyObject* reset_stuff_upon_resurrection(PyObject* self, PyObject* args) // Game
{
	plugin::Command<0x0974>();
	return PyBool_FromLong(1);
}

PyObject* is_emergency_services_vehicle(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0975>(self_));
}

PyObject* kill_fx_system_now(PyObject* self, PyObject* args) // Particle
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0976>(self_);
	return PyBool_FromLong(1);
}

PyObject* is_object_within_brain_activation_range(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0977>(self_));
}

PyObject* copy_shared_char_decision_maker(PyObject* self, PyObject* args) // Decisionmakerchar
{
	// inputs
	int mask;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &mask))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0978>(mask, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* report_mission_audio_event_at_position(PyObject* self, PyObject* args) // Audio
{
	// inputs
	float x;
	float y;
	float z;
	int soundid;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &soundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x097A>(x, y, z, soundid);
	return PyBool_FromLong(1);
}

PyObject* report_mission_audio_event_at_object(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int handle;
	int soundid;
	if (!PyArg_ParseTuple(args, "ii", &handle, &soundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x097B>(handle, soundid);
	return PyBool_FromLong(1);
}

PyObject* attach_mission_audio_to_object(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &slotid, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x097C>(slotid, handle);
	return PyBool_FromLong(1);
}

PyObject* get_num_car_colours(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int count;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x097D>(self_, &count);
	return Py_BuildValue("i", count);
}

PyObject* extinguish_fire_at_point(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0980>(x, y, z, radius);
	return PyBool_FromLong(1);
}

PyObject* has_train_derailed(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0981>(self_));
}

PyObject* set_char_force_die_in_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0982>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_only_create_gang_members(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0983>(state);
	return PyBool_FromLong(1);
}

PyObject* get_object_model(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int model;
	if (!PyArg_ParseTuple(args, "ii", &self_, &model))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0984>(self_, model);
	return PyBool_FromLong(1);
}

PyObject* set_char_uses_collision_closest_object_of_type(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radius;
	int modelid;
	int solid;
	int target;
	if (!PyArg_ParseTuple(args, "ffffiii", &x, &y, &z, &radius, &modelid, &solid, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0985>(x, y, z, radius, modelid, solid, target);
	return PyBool_FromLong(1);
}

PyObject* clear_all_script_fire_flags(PyObject* self, PyObject* args) // World
{
	plugin::Command<0x0986>();
	return PyBool_FromLong(1);
}

PyObject* get_car_blocking_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0987>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* get_current_vehicle_paintjob(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int paintjobnumber;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0988>(self_, &paintjobnumber);
	return Py_BuildValue("i", paintjobnumber);
}

PyObject* set_help_message_box_size(PyObject* self, PyObject* args) // Text
{
	// inputs
	int size;
	if (!PyArg_ParseTuple(args, "i", &size))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0989>(size);
	return PyBool_FromLong(1);
}

PyObject* set_gunshot_sense_range_for_riot2(PyObject* self, PyObject* args) // Game
{
	// inputs
	float range;
	if (!PyArg_ParseTuple(args, "f", &range))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x098A>(range);
	return PyBool_FromLong(1);
}

PyObject* string_cat16(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	if (!PyArg_ParseTuple(args, "iii", &_p1, &_p2, &_p3))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x098B>(_p1, _p2, _p3);
	return PyBool_FromLong(1);
}

PyObject* string_cat8(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	if (!PyArg_ParseTuple(args, "iii", &_p1, &_p2, &_p3))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x098C>(_p1, _p2, _p3);
	return PyBool_FromLong(1);
}

PyObject* get_car_moving_component_offset(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	float offset;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x098D>(self_, &offset);
	return Py_BuildValue("f", offset);
}

PyObject* set_named_entry_exit_flag(PyObject* self, PyObject* args) // Game
{
	// inputs
	int name;
	int entryexitsflag;
	int state;
	if (!PyArg_ParseTuple(args, "iii", &name, &entryexitsflag, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x098E>(name, entryexitsflag, state);
	return PyBool_FromLong(1);
}

PyObject* pause_current_beat_track(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0991>(state);
	return PyBool_FromLong(1);
}

PyObject* set_player_cycle_weapon_button(PyObject* self, PyObject* args) // Pad
{
	// inputs
	int playerid;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &playerid, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0992>(playerid, state);
	return PyBool_FromLong(1);
}

PyObject* mark_road_node_as_dont_wander(PyObject* self, PyObject* args) // Path
{
	// inputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0994>(x, y, z);
	return PyBool_FromLong(1);
}

PyObject* unmark_all_road_nodes_as_dont_wander(PyObject* self, PyObject* args) // Path
{
	plugin::Command<0x0995>();
	return PyBool_FromLong(1);
}

PyObject* set_checkpoint_heading(PyObject* self, PyObject* args) // Checkpoint
{
	// inputs
	int self_;
	float heading;
	if (!PyArg_ParseTuple(args, "if", &self_, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0996>(self_, heading);
	return PyBool_FromLong(1);
}

PyObject* set_mission_respect_total(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int totalrespect;
	if (!PyArg_ParseTuple(args, "i", &totalrespect))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0997>(totalrespect);
	return PyBool_FromLong(1);
}

PyObject* award_player_mission_respect(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int value;
	if (!PyArg_ParseTuple(args, "i", &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0998>(value);
	return PyBool_FromLong(1);
}

PyObject* set_car_collision(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x099A>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* change_playback_to_use_ai(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x099B>(self_);
	return PyBool_FromLong(1);
}

PyObject* camera_set_shake_simulation_simple(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int type;
	float timeinms;
	float intensity;
	if (!PyArg_ParseTuple(args, "iff", &type, &timeinms, &intensity))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x099C>(type, timeinms, intensity);
	return PyBool_FromLong(1);
}

PyObject* is_night_vision_active(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x099D>());
}

PyObject* set_create_random_cops(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x099E>(state);
	return PyBool_FromLong(1);
}

PyObject* task_set_ignore_weapon_range_flag(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &handle, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x099F>(handle, state);
	return PyBool_FromLong(1);
}

PyObject* task_pick_up_second_object(PyObject* self, PyObject* args) // Task
{
	// inputs
	int char_;
	int object;
	float xoffset;
	float yoffset;
	float zoffset;
	int boneid;
	int _p7;
	int animationname;
	int animationfile;
	int time;
	if (!PyArg_ParseTuple(args, "iifffiiiii", &char_, &object, &xoffset, &yoffset, &zoffset, &boneid, &_p7, &animationname, &animationfile, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A0>(char_, object, xoffset, yoffset, zoffset, boneid, _p7, animationname, animationfile, time);
	return PyBool_FromLong(1);
}

PyObject* drop_second_object(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A1>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* remove_object_elegantly(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A2>(self_);
	return PyBool_FromLong(1);
}

PyObject* draw_crosshair(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A3>(state);
	return PyBool_FromLong(1);
}

PyObject* set_up_conversation_node_with_speech(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int question;
	int positiveanswer;
	int negativeanswer;
	int questionsoundid;
	int positiveanswersoundid;
	int negativeanswersoundid;
	if (!PyArg_ParseTuple(args, "iiiiii", &question, &positiveanswer, &negativeanswer, &questionsoundid, &positiveanswersoundid, &negativeanswersoundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A4>(question, positiveanswer, negativeanswer, questionsoundid, positiveanswersoundid, negativeanswersoundid);
	return PyBool_FromLong(1);
}

PyObject* show_blips_on_all_levels(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A6>(state);
	return PyBool_FromLong(1);
}

PyObject* set_char_drugged_up(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A7>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_char_head_missing(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09A8>(self_));
}

PyObject* get_hash_key(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09A9>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* set_up_conversation_end_node_with_speech(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int speech;
	int speechsoundid;
	if (!PyArg_ParseTuple(args, "ii", &speech, &speechsoundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09AA>(speech, speechsoundid);
	return PyBool_FromLong(1);
}

PyObject* random_passenger_say(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int speechid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &speechid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09AB>(self_, speechid);
	return PyBool_FromLong(1);
}

PyObject* hide_all_frontend_blips(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09AC>(state);
	return PyBool_FromLong(1);
}

PyObject* set_player_in_car_camera_mode(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int mode;
	if (!PyArg_ParseTuple(args, "i", &mode))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09AD>(mode);
	return PyBool_FromLong(1);
}

PyObject* is_char_in_any_train(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09AE>(self_));
}

PyObject* set_up_skip_after_mission(PyObject* self, PyObject* args) // Skip
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09AF>(x, y, z, heading);
	return PyBool_FromLong(1);
}

PyObject* set_vehicle_is_considered_by_player(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B0>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* get_random_car_model_in_memory(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int _p1;

	// outputs
	int modelid;
	int class_;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B2>(_p1, &modelid, &class_);
	return Py_BuildValue("ii", modelid, class_);
}

PyObject* get_car_door_lock_status(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int lockstatus;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B3>(self_, &lockstatus);
	return Py_BuildValue("i", lockstatus);
}

PyObject* set_closest_entry_exit_flag(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float radius;
	int entryexitsflag;
	int state;
	if (!PyArg_ParseTuple(args, "fffii", &x, &y, &radius, &entryexitsflag, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B4>(x, y, radius, entryexitsflag, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_signal_after_kill(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B5>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_char_wanted_by_police(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B6>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_zone_no_cops(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int zone;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &zone, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B7>(zone, state);
	return PyBool_FromLong(1);
}

PyObject* add_blood(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	float offsetx;
	float offsety;
	float offsetz;
	int density;
	int handle;
	if (!PyArg_ParseTuple(args, "ffffffii", &x, &y, &z, &offsetx, &offsety, &offsetz, &density, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B8>(x, y, z, offsetx, offsety, offsetz, density, handle);
	return PyBool_FromLong(1);
}

PyObject* display_car_names(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09B9>(state);
	return PyBool_FromLong(1);
}

PyObject* display_zone_names(PyObject* self, PyObject* args) // Hud
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09BA>(state);
	return PyBool_FromLong(1);
}

PyObject* is_car_door_damaged(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int door;
	if (!PyArg_ParseTuple(args, "ii", &self_, &door))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09BB>(self_, door));
}

PyObject* set_char_coordinates_dont_warp_gang_no_offset(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "ifff", &self_, &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09BC>(self_, x, y, z);
	return PyBool_FromLong(1);
}

PyObject* set_minigame_in_progress(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09BD>(state);
	return PyBool_FromLong(1);
}

PyObject* is_minigame_in_progress(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x09BE>());
}

PyObject* set_force_random_car_model(PyObject* self, PyObject* args) // Game
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09BF>(modelid);
	return PyBool_FromLong(1);
}

PyObject* get_random_car_of_type_in_angled_area_no_save(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float righttopx;
	float righttopy;
	float angle;
	int char_;

	// outputs
	int vehicle;
	if (!PyArg_ParseTuple(args, "fffffi", &leftbottomx, &leftbottomy, &righttopx, &righttopy, &angle, &char_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09C0>(leftbottomx, leftbottomy, righttopx, righttopy, angle, char_, &vehicle);
	return Py_BuildValue("i", vehicle);
}

PyObject* add_next_message_to_previous_briefs(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09C1>(state);
	return PyBool_FromLong(1);
}

PyObject* fail_kill_frenzy(PyObject* self, PyObject* args) // Killfrenzy
{
	plugin::Command<0x09C2>();
	return PyBool_FromLong(1);
}

PyObject* is_cop_vehicle_in_area_3d_no_save(PyObject* self, PyObject* args) // World
{
	// inputs
	float leftbottomx;
	float leftbottomy;
	float leftbottomz;
	float righttopx;
	float righttopy;
	float righttopz;
	if (!PyArg_ParseTuple(args, "ffffff", &leftbottomx, &leftbottomy, &leftbottomz, &righttopx, &righttopy, &righttopz))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09C3>(leftbottomx, leftbottomy, leftbottomz, righttopx, righttopy, righttopz));
}

PyObject* set_petrol_tank_weakpoint(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09C4>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_char_using_map_attractor(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09C5>(self_));
}

PyObject* set_player_model(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09C7>(self_, modelid);
	return PyBool_FromLong(1);
}

PyObject* are_subtitles_switched_on(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x09C8>());
}

PyObject* remove_char_from_car_maintain_position(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09C9>(self_, handle);
	return PyBool_FromLong(1);
}

PyObject* set_object_proofs(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int bulletproof;
	int fireproof;
	int explosionproof;
	int collisionproof;
	int meleeproof;
	if (!PyArg_ParseTuple(args, "iiiiii", &self_, &bulletproof, &fireproof, &explosionproof, &collisionproof, &meleeproof))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09CA>(self_, bulletproof, fireproof, explosionproof, collisionproof, meleeproof);
	return PyBool_FromLong(1);
}

PyObject* is_car_touching_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09CB>(self_, handle));
}

PyObject* does_object_have_this_model(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09CC>(self_, modelid));
}

PyObject* set_train_forced_to_slow_down(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09CF>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_vehicle_on_all_wheels(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09D0>(self_));
}

PyObject* does_pickup_exist(PyObject* self, PyObject* args) // Pickup
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09D1>(handle));
}

PyObject* enable_ambient_crime(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09D2>(state);
	return PyBool_FromLong(1);
}

PyObject* clear_wanted_level_in_garage(PyObject* self, PyObject* args) // Game
{
	plugin::Command<0x09D4>();
	return PyBool_FromLong(1);
}

PyObject* set_char_say_context_important(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int _p2;
	int _p3;
	int _p4;
	int _p5;

	// outputs
	int _p6;
	if (!PyArg_ParseTuple(args, "iiiii", &self_, &_p2, &_p3, &_p4, &_p5))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09D5>(self_, _p2, _p3, _p4, _p5, &_p6);
	return Py_BuildValue("i", _p6);
}

PyObject* set_char_say_script(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int _p2;
	int _p3;
	int _p4;
	int _p5;
	if (!PyArg_ParseTuple(args, "iiiii", &self_, &_p2, &_p3, &_p4, &_p5))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09D6>(self_, _p2, _p3, _p4, _p5);
	return PyBool_FromLong(1);
}

PyObject* force_interior_lighting_for_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09D7>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* use_detonator(PyObject* self, PyObject* args) // Player
{
	plugin::Command<0x09D9>();
	return PyBool_FromLong(1);
}

PyObject* is_money_pickup_at_coords(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09DA>(x, y, z));
}

PyObject* set_menu_column_width(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int column;
	int width;
	if (!PyArg_ParseTuple(args, "iii", &self_, &column, &width))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09DB>(self_, column, width);
	return PyBool_FromLong(1);
}

PyObject* make_room_in_player_gang_for_mission_peds(PyObject* self, PyObject* args) // Game
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09DD>(_p1);
	return PyBool_FromLong(1);
}

PyObject* is_char_getting_in_to_a_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09DE>(self_));
}

PyObject* set_up_skip_for_specific_vehicle(PyObject* self, PyObject* args) // Skip
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	int handle;
	if (!PyArg_ParseTuple(args, "ffffi", &x, &y, &z, &heading, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E0>(x, y, z, heading, handle);
	return PyBool_FromLong(1);
}

PyObject* get_car_model_value(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int value;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E1>(self_, &value);
	return Py_BuildValue("i", value);
}

PyObject* create_car_generator_with_plate(PyObject* self, PyObject* args) // Cargenerator
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	int modelid;
	int primarycolor;
	int secondarycolor;
	int forcespawn;
	int alarmchance;
	int doorlockchance;
	int mindelay;
	int maxdelay;
	int platename;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffiiiiiiiii", &x, &y, &z, &heading, &modelid, &primarycolor, &secondarycolor, &forcespawn, &alarmchance, &doorlockchance, &mindelay, &maxdelay, &platename))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E2>(x, y, z, heading, modelid, primarycolor, secondarycolor, forcespawn, alarmchance, doorlockchance, mindelay, maxdelay, platename, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* find_train_direction(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09E3>(self_));
}

PyObject* set_aircraft_carrier_sam_site(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E4>(state);
	return PyBool_FromLong(1);
}

PyObject* draw_light_with_range(PyObject* self, PyObject* args) // Fx
{
	// inputs
	float x;
	float y;
	float z;
	int red;
	int green;
	int blue;
	float radius;
	if (!PyArg_ParseTuple(args, "fffiiif", &x, &y, &z, &red, &green, &blue, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E5>(x, y, z, red, green, blue, radius);
	return PyBool_FromLong(1);
}

PyObject* enable_burglary_houses(PyObject* self, PyObject* args) // World
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E6>(state);
	return PyBool_FromLong(1);
}

PyObject* is_player_control_on(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09E7>(self_));
}

PyObject* get_char_area_visible(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int interiorid;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E8>(self_, &interiorid);
	return Py_BuildValue("i", interiorid);
}

PyObject* give_non_player_car_nitro(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09E9>(self_);
	return PyBool_FromLong(1);
}

PyObject* player_take_off_goggles(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int animate;
	if (!PyArg_ParseTuple(args, "ii", &self_, &animate))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09EB>(self_, animate);
	return PyBool_FromLong(1);
}

PyObject* allow_fixed_camera_collision(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09EC>(state);
	return PyBool_FromLong(1);
}

PyObject* has_char_spotted_char_in_front(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09ED>(self_, handle));
}

PyObject* force_big_message_and_counter(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09EE>(state);
	return PyBool_FromLong(1);
}

PyObject* set_vehicle_camera_tweak(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int modelid;
	float distance;
	float altitude;
	float angle;
	if (!PyArg_ParseTuple(args, "ifff", &modelid, &distance, &altitude, &angle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09EF>(modelid, distance, altitude, angle);
	return PyBool_FromLong(1);
}

PyObject* reset_vehicle_camera_tweak(PyObject* self, PyObject* args) // Camera
{
	plugin::Command<0x09F0>();
	return PyBool_FromLong(1);
}

PyObject* report_mission_audio_event_at_char(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int handle;
	int soundid;
	if (!PyArg_ParseTuple(args, "ii", &handle, &soundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09F1>(handle, soundid);
	return PyBool_FromLong(1);
}

PyObject* does_decision_maker_exist(PyObject* self, PyObject* args) // Decisionmaker
{
	// inputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09F2>(handle));
}

PyObject* ignore_height_difference_following_nodes(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09F4>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* shut_all_chars_up(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09F5>(state);
	return PyBool_FromLong(1);
}

PyObject* set_char_get_out_upside_down_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09F6>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* report_mission_audio_event_at_car(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int handle;
	int soundid;
	if (!PyArg_ParseTuple(args, "ii", &handle, &soundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09F7>(handle, soundid);
	return PyBool_FromLong(1);
}

PyObject* do_weapon_stuff_at_start_of_2p_game(PyObject* self, PyObject* args) // Misc
{
	plugin::Command<0x09F8>();
	return PyBool_FromLong(1);
}

PyObject* has_game_just_returned_from_frontend(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x09FA>());
}

PyObject* get_current_language(PyObject* self, PyObject* args) // Game
{

	// outputs
	int languageslot;
	plugin::Command<0x09FB>(&languageslot);
	return Py_BuildValue("i", languageslot);
}

PyObject* is_object_intersecting_world(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x09FC>(self_));
}

PyObject* get_string_width(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	if (!PyArg_ParseTuple(args, "ii", &_p1, &_p2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09FD>(_p1, _p2);
	return PyBool_FromLong(1);
}

PyObject* reset_vehicle_hydraulics(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09FE>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_respawn_point_for_duration_of_mission(PyObject* self, PyObject* args) // Restart
{
	// inputs
	float x;
	float y;
	float z;
	if (!PyArg_ParseTuple(args, "fff", &x, &y, &z))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x09FF>(x, y, z);
	return PyBool_FromLong(1);
}

PyObject* is_this_model_a_car(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	int modelid;
	if (!PyArg_ParseTuple(args, "i", &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A01>(modelid));
}

PyObject* switch_on_ground_searchlight(PyObject* self, PyObject* args) // Searchlight
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A02>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_gang_war_fighting_going_on(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0A03>());
}

PyObject* is_next_station_allowed(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A06>(self_));
}

PyObject* skip_to_next_allowed_station(PyObject* self, PyObject* args) // Train
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A07>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_string_width_with_number(PyObject* self, PyObject* args) // Misc
{
	// inputs
	int _p1;
	int _p2;
	int _p3;
	if (!PyArg_ParseTuple(args, "iii", &_p1, &_p2, &_p3))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A08>(_p1, _p2, _p3);
	return PyBool_FromLong(1);
}

PyObject* shut_char_up_for_scripted_speech(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A09>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* enable_disabled_attractors_on_object(PyObject* self, PyObject* args) // Object
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A0A>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* load_scene_in_direction(PyObject* self, PyObject* args) // Streaming
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	if (!PyArg_ParseTuple(args, "ffff", &x, &y, &z, &heading))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A0B>(x, y, z, heading);
	return PyBool_FromLong(1);
}

PyObject* is_player_using_jetpack(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A0C>(self_));
}

PyObject* clear_this_print_big_now(PyObject* self, PyObject* args) // Text
{
	// inputs
	int textstyle;
	if (!PyArg_ParseTuple(args, "i", &textstyle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A0E>(textstyle);
	return PyBool_FromLong(1);
}

PyObject* has_language_changed(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0A0F>());
}

PyObject* increment_int_stat_no_message(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	int value;
	if (!PyArg_ParseTuple(args, "ii", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A10>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* set_extra_car_colours(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int colourid1;
	int colourid2;
	if (!PyArg_ParseTuple(args, "iii", &self_, &colourid1, &colourid2))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A11>(self_, colourid1, colourid2);
	return PyBool_FromLong(1);
}

PyObject* get_extra_car_colours(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;

	// outputs
	int colourid1;
	int colourid2;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A12>(self_, &colourid1, &colourid2);
	return Py_BuildValue("ii", colourid1, colourid2);
}

PyObject* manage_all_population(PyObject* self, PyObject* args) // Game
{
	plugin::Command<0x0A13>();
	return PyBool_FromLong(1);
}

PyObject* set_no_resprays(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A14>(state);
	return PyBool_FromLong(1);
}

PyObject* has_car_been_resprayed(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A15>(self_));
}

PyObject* attach_mission_audio_to_car(PyObject* self, PyObject* args) // Audio
{
	// inputs
	int slotid;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &slotid, &handle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A16>(slotid, handle);
	return PyBool_FromLong(1);
}

PyObject* set_has_been_owned_for_car_generator(PyObject* self, PyObject* args) // Cargenerator
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A17>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_up_conversation_node_with_scripted_speech(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int question;
	int positiveanswer;
	int negativeanswer;
	int questionsoundid;
	int positiveanswersoundid;
	int negativeanswersoundid;
	if (!PyArg_ParseTuple(args, "iiiiii", &question, &positiveanswer, &negativeanswer, &questionsoundid, &positiveanswersoundid, &negativeanswersoundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A18>(question, positiveanswer, negativeanswer, questionsoundid, positiveanswersoundid, negativeanswersoundid);
	return PyBool_FromLong(1);
}

PyObject* set_area_name(PyObject* self, PyObject* args) // Text
{
	// inputs
	int name;
	if (!PyArg_ParseTuple(args, "i", &name))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A19>(name);
	return PyBool_FromLong(1);
}

PyObject* task_play_anim_secondary(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int animationfile;
	int animationname;
	float framedelta;
	int loop;
	int lockx;
	int locky;
	int lockf;
	int time;
	if (!PyArg_ParseTuple(args, "iiifiiiii", &handle, &animationfile, &animationname, &framedelta, &loop, &lockx, &locky, &lockf, &time))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A1A>(handle, animationfile, animationname, framedelta, loop, lockx, locky, lockf, time);
	return PyBool_FromLong(1);
}

PyObject* is_char_touching_char(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int handle;
	if (!PyArg_ParseTuple(args, "ii", &self_, &handle))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A1B>(self_, handle));
}

PyObject* disable_heli_audio(PyObject* self, PyObject* args) // Heli
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A1C>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* task_hand_gesture(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	int target;
	if (!PyArg_ParseTuple(args, "ii", &handle, &target))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A1D>(handle, target);
	return PyBool_FromLong(1);
}

PyObject* take_photo(PyObject* self, PyObject* args) // Game
{
	// inputs
	int _p1;
	if (!PyArg_ParseTuple(args, "i", &_p1))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A1E>(_p1);
	return PyBool_FromLong(1);
}

PyObject* increment_float_stat_no_message(PyObject* self, PyObject* args) // Stat
{
	// inputs
	int statid;
	float value;
	if (!PyArg_ParseTuple(args, "if", &statid, &value))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A1F>(statid, value);
	return PyBool_FromLong(1);
}

PyObject* set_player_group_to_follow_always(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A20>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* improve_car_by_cheating(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A21>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* change_car_colour_from_menu(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int vehicle;
	int colorslot;
	int row;
	if (!PyArg_ParseTuple(args, "iiii", &self_, &vehicle, &colorslot, &row))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A22>(self_, vehicle, colorslot, row);
	return PyBool_FromLong(1);
}

PyObject* highlight_menu_item(PyObject* self, PyObject* args) // Menu
{
	// inputs
	int self_;
	int row;
	int state;
	if (!PyArg_ParseTuple(args, "iii", &self_, &row, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A23>(self_, row, state);
	return PyBool_FromLong(1);
}

PyObject* set_disable_military_zones(PyObject* self, PyObject* args) // Zone
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A24>(state);
	return PyBool_FromLong(1);
}

PyObject* set_camera_position_unfixed(PyObject* self, PyObject* args) // Camera
{
	// inputs
	float xoffset;
	float yoffset;
	if (!PyArg_ParseTuple(args, "ff", &xoffset, &yoffset))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A25>(xoffset, yoffset);
	return PyBool_FromLong(1);
}

PyObject* set_radio_to_players_favourite_station(PyObject* self, PyObject* args) // Audio
{
	plugin::Command<0x0A26>();
	return PyBool_FromLong(1);
}

PyObject* set_death_weapons_persist(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A27>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* set_swim_speed(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	float speed;
	if (!PyArg_ParseTuple(args, "if", &self_, &speed))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A28>(self_, speed);
	return PyBool_FromLong(1);
}

PyObject* is_player_climbing(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A29>(self_));
}

PyObject* is_this_help_message_being_displayed(PyObject* self, PyObject* args) // Text
{
	// inputs
	int gxt;
	if (!PyArg_ParseTuple(args, "i", &gxt))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A2A>(gxt));
}

PyObject* is_widescreen_on_in_options(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0A2B>());
}

PyObject* draw_subtitles_before_fade(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A2C>(state);
	return PyBool_FromLong(1);
}

PyObject* draw_oddjob_title_before_fade(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A2D>(state);
	return PyBool_FromLong(1);
}

PyObject* task_follow_path_nodes_to_coord_with_radius(PyObject* self, PyObject* args) // Task
{
	// inputs
	int handle;
	float x;
	float y;
	float z;
	int mode;
	int time;
	float radius;
	if (!PyArg_ParseTuple(args, "ifffiif", &handle, &x, &y, &z, &mode, &time, &radius))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A2E>(handle, x, y, z, mode, time, radius);
	return PyBool_FromLong(1);
}

PyObject* set_photo_camera_effect(PyObject* self, PyObject* args) // Camera
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A2F>(state);
	return PyBool_FromLong(1);
}

PyObject* fix_car(PyObject* self, PyObject* args) // Car
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A30>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_player_group_to_follow_never(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &self_, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A31>(self_, state);
	return PyBool_FromLong(1);
}

PyObject* is_char_attached_to_any_car(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A32>(self_));
}

PyObject* store_car_char_is_attached_to_no_save(PyObject* self, PyObject* args) // Char
{
	// inputs
	int self_;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A33>(self_, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_up_skip_for_vehicle_finished_by_script(PyObject* self, PyObject* args) // Skip
{
	// inputs
	float x;
	float y;
	float z;
	float heading;
	int vehicle;
	if (!PyArg_ParseTuple(args, "ffffi", &x, &y, &z, &heading, &vehicle))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A35>(x, y, z, heading, vehicle);
	return PyBool_FromLong(1);
}

PyObject* is_skip_waiting_for_script_to_fade_in(PyObject* self, PyObject* args) // Skip
{
	return PyBool_FromLong(plugin::Command<0x0A36>());
}

PyObject* force_all_vehicle_lights_off(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A37>(state);
	return PyBool_FromLong(1);
}

PyObject* get_player_in_car_camera_mode(PyObject* self, PyObject* args) // Camera
{

	// outputs
	int mode;
	plugin::Command<0x0A39>(&mode);
	return Py_BuildValue("i", mode);
}

PyObject* is_last_building_model_shot_by_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	int modelid;
	if (!PyArg_ParseTuple(args, "ii", &self_, &modelid))
	{
		return PyBool_FromLong(0);
	}
	return PyBool_FromLong(plugin::Command<0x0A3A>(self_, modelid));
}

PyObject* clear_last_building_model_shot_by_player(PyObject* self, PyObject* args) // Player
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A3B>(self_);
	return PyBool_FromLong(1);
}

PyObject* set_up_conversation_end_node_with_scripted_speech(PyObject* self, PyObject* args) // Conversation
{
	// inputs
	int speech;
	int speechsoundid;
	if (!PyArg_ParseTuple(args, "ii", &speech, &speechsoundid))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A3C>(speech, speechsoundid);
	return PyBool_FromLong(1);
}

PyObject* activate_pimp_cheat(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A3D>(state);
	return PyBool_FromLong(1);
}

PyObject* get_random_char_in_area_offset_no_save(PyObject* self, PyObject* args) // World
{
	// inputs
	float x;
	float y;
	float z;
	float radiusx;
	float radiusy;
	float radiusz;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "ffffff", &x, &y, &z, &radiusx, &radiusy, &radiusz))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A3E>(x, y, z, radiusx, radiusy, radiusz, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* set_script_coop_game(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A3F>(state);
	return PyBool_FromLong(1);
}

PyObject* create_user_3d_marker(PyObject* self, PyObject* args) // User3Dmarker
{
	// inputs
	float x;
	float y;
	float z;
	int color;

	// outputs
	int handle;
	if (!PyArg_ParseTuple(args, "fffi", &x, &y, &z, &color))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A40>(x, y, z, color, &handle);
	return Py_BuildValue("i", handle);
}

PyObject* remove_user_3d_marker(PyObject* self, PyObject* args) // User3Dmarker
{
	// inputs
	int self_;
	if (!PyArg_ParseTuple(args, "i", &self_))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A41>(self_);
	return PyBool_FromLong(1);
}

PyObject* get_rid_of_player_prostitute(PyObject* self, PyObject* args) // Game
{
	plugin::Command<0x0A43>();
	return PyBool_FromLong(1);
}

PyObject* display_non_minigame_help_messages(PyObject* self, PyObject* args) // Text
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A44>(state);
	return PyBool_FromLong(1);
}

PyObject* set_railtrack_resistance_mult(PyObject* self, PyObject* args) // World
{
	// inputs
	float mult;
	if (!PyArg_ParseTuple(args, "f", &mult))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A45>(mult);
	return PyBool_FromLong(1);
}

PyObject* switch_object_brains(PyObject* self, PyObject* args) // Game
{
	// inputs
	int type;
	int state;
	if (!PyArg_ParseTuple(args, "ii", &type, &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A46>(type, state);
	return PyBool_FromLong(1);
}

PyObject* finish_setting_up_conversation_no_subtitles(PyObject* self, PyObject* args) // Conversation
{
	plugin::Command<0x0A47>();
	return PyBool_FromLong(1);
}

PyObject* allow_pause_in_widescreen(PyObject* self, PyObject* args) // Game
{
	// inputs
	int state;
	if (!PyArg_ParseTuple(args, "i", &state))
	{
		return PyBool_FromLong(0);
	}
	plugin::Command<0x0A48>(state);
	return PyBool_FromLong(1);
}

PyObject* get_pc_mouse_movement(PyObject* self, PyObject* args) // Mouse
{

	// outputs
	float offsetx;
	float offsety;
	plugin::Command<0x0A4A>(&offsetx, &offsety);
	return Py_BuildValue("ff", offsetx, offsety);
}

PyObject* is_pc_using_joypad(PyObject* self, PyObject* args) // Game
{
	return PyBool_FromLong(plugin::Command<0x0A4B>());
}

PyObject* is_mouse_using_vertical_inversion(PyObject* self, PyObject* args) // Mouse
{
	return PyBool_FromLong(plugin::Command<0x0A4C>());
}

PyObject* is_xbox_player2_pressing_start(PyObject* self, PyObject* args) // Misc
{
	return PyBool_FromLong(plugin::Command<0x0A4E>());
}


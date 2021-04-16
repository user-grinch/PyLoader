#include "PyOpcodes.h"
PyObject* PyOpcodes::ShakeCam(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SHAKE_CAM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::Line(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LINE>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::CreatePlayer(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_PLAYER>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::CreateChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CHAR>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::DeleteChar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_CHAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCharCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_COORDINATES>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::SetCharCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_COORDINATES>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CreateCar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CAR>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::DeleteCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CarGotoCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CAR_GOTO_COORDINATES>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::CarWanderRandomly(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CAR_WANDER_RANDOMLY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CarSetIdle(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CAR_SET_IDLE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCarCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_COORDINATES>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::SetCarCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_COORDINATES>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetCarCruiseSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_CRUISE_SPEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarDrivingStyle(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_DRIVING_STYLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarMission(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_MISSION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCarInArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_IN_AREA_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarInArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_IN_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::PrintBig(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iis", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_BIG>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::Print(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iis", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::PrintNow(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iis", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_NOW>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::GetTimeOfDay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	plugin::Command<plugin::Commands::GET_TIME_OF_DAY>(&var1, &var2);
	return Py_BuildValue("ii", var1, var2);
}

PyObject* PyOpcodes::SetTimeOfDay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TIME_OF_DAY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetMinutesToTimeOfDay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_MINUTES_TO_TIME_OF_DAY>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::IsPointOnScreen(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_POINT_ON_SCREEN>(var1, var2, var3, var4);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LaunchMission(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LAUNCH_MISSION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::StoreCarCharIsIn(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STORE_CAR_CHAR_IS_IN>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::IsCharInCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_CAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_MODEL>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAnyCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsButtonPressed(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_BUTTON_PRESSED>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetPadState(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PAD_STATE>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::LocateCharAnyMeans2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFoot2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCharAnyMeans2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CHAR_ANY_MEANS_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCharOnFoot2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CHAR_ON_FOOT_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCharInCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CHAR_IN_CAR_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharAnyMeansChar2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_CHAR_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFootChar2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_CHAR_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCarChar2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_CHAR_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharAnyMeans3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFoot3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCharAnyMeans3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CHAR_ANY_MEANS_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCharOnFoot3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CHAR_ON_FOOT_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCharInCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CHAR_IN_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharAnyMeansChar3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_CHAR_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFootChar3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_CHAR_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCarChar3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_CHAR_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::CreateObject(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_OBJECT>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::DeleteObject(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_OBJECT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddScore(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SCORE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsScoreGreater(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_SCORE_GREATER>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::StoreScore(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STORE_SCORE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::AlterWantedLevel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ALTER_WANTED_LEVEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AlterWantedLevelNoDrop(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ALTER_WANTED_LEVEL_NO_DROP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsWantedLevelGreater(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_WANTED_LEVEL_GREATER>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ClearWantedLevel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_WANTED_LEVEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetDeatharrestState(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_DEATHARREST_STATE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddAmmoToChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_AMMO_TO_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerDead(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_DEAD>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharDead(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_DEAD>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarDead(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_DEAD>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsPlayerPressingHorn(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_PRESSING_HORN>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CreateCharInsideCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CHAR_INSIDE_CAR>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::IsCarModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_MODEL>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CreateCarGenerator(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;
	int var10;
	int var11;
	int var12;
	int var13;

	if (!PyArg_ParseTuple(args, "fffiiiiiiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CAR_GENERATOR>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, &var13);
	return Py_BuildValue("i", var13);
}

PyObject* PyOpcodes::SwitchCarGenerator(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_CAR_GENERATOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DisplayOnscreenTimer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_ONSCREEN_TIMER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearOnscreenTimer(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_ONSCREEN_TIMER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearOnscreenCounter(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_ONSCREEN_COUNTER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInZone(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ZONE>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::PointCameraAtCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::POINT_CAMERA_AT_CAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::PointCameraAtChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::POINT_CAMERA_AT_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::ShakePad(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SHAKE_PAD>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetTimeScale(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TIME_SCALE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetFixedCameraPosition(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FIXED_CAMERA_POSITION>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::PointCameraAtPoint(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::POINT_CAMERA_AT_POINT>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::AddBlipForCarOld(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_CAR_OLD>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::RemoveBlip(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_BLIP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ChangeBlipColour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CHANGE_BLIP_COLOUR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddBlipForCoordOld(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffiif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_COORD_OLD>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::ChangeBlipScale(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CHANGE_BLIP_SCALE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetFadingColour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FADING_COLOUR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::DoFade(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DO_FADE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddHospitalRestart(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_HOSPITAL_RESTART>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::AddPoliceRestart(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_POLICE_RESTART>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::OverrideNextRestart(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::OVERRIDE_NEXT_RESTART>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::DrawShadow(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;
	int var9;
	int var10;

	if (!PyArg_ParseTuple(args, "fffffiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_SHADOW>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10);
	return Py_True;
}

PyObject* PyOpcodes::GetCharHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_HEADING>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetCharHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_HEADING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCarHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_HEADING>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetCarHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_HEADING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_HEADING>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetObjectHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_HEADING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharTouchingObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_TOUCHING_OBJECT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCharAmmo(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_AMMO>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::DeclareMissionFlag(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DECLARE_MISSION_FLAG>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharHealthGreater(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_HEALTH_GREATER>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarHealthGreater(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_HEALTH_GREATER>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::AddBlipForCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_CAR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::AddBlipForChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_CHAR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::AddBlipForObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_OBJECT>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::AddBlipForCoord(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_COORD>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::ChangeBlipDisplay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CHANGE_BLIP_DISPLAY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddOneOffSound(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_ONE_OFF_SOUND>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::AddContinuousSound(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_CONTINUOUS_SOUND>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::RemoveSound(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_SOUND>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCarStuckOnRoof(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_STUCK_ON_ROOF>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::AddUpsidedownCarCheck(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_UPSIDEDOWN_CAR_CHECK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RemoveUpsidedownCarCheck(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_UPSIDEDOWN_CAR_CHECK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInAreaOnFoot2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_ON_FOOT_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAreaInCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_IN_CAR_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_AREA_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAreaOnFoot2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_AREA_ON_FOOT_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAreaInCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_AREA_IN_CAR_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAreaOnFoot3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_ON_FOOT_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAreaInCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_IN_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAreaOnFoot3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_AREA_ON_FOOT_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAreaInCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_AREA_IN_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarStoppedInArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_STOPPED_IN_AREA_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarStoppedInArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_STOPPED_IN_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LocateCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CAR_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CAR_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LocateStoppedCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_STOPPED_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::GiveWeaponToChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GIVE_WEAPON_TO_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerControl(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_CONTROL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ForceWeather(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FORCE_WEATHER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ForceWeatherNow(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FORCE_WEATHER_NOW>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCurrentCharWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CURRENT_CHAR_WEAPON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_COORDINATES>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::SetObjectCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_COORDINATES>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetGameTimer(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_GAME_TIMER>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::StoreWantedLevel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STORE_WANTED_LEVEL>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::IsCarStopped(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_STOPPED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::MarkCharAsNoLongerNeeded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_CHAR_AS_NO_LONGER_NEEDED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MarkCarAsNoLongerNeeded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_CAR_AS_NO_LONGER_NEEDED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MarkObjectAsNoLongerNeeded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_OBJECT_AS_NO_LONGER_NEEDED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DontRemoveChar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DONT_REMOVE_CHAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DontRemoveObject(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DONT_REMOVE_OBJECT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CreateCharAsPassenger(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CHAR_AS_PASSENGER>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::PrintWithNumberBig(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiis", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_NUMBER_BIG>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::PrintWithNumber(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiis", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_NUMBER>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::PrintWithNumberNow(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiis", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_NUMBER_NOW>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SwitchRoadsOn(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_ROADS_ON>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SwitchRoadsOff(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_ROADS_OFF>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetNumberOfPassengers(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUMBER_OF_PASSENGERS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetMaximumNumberOfPassengers(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_MAXIMUM_NUMBER_OF_PASSENGERS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetCarDensityMultiplier(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_DENSITY_MULTIPLIER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarHeavy(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_HEAVY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetMaxWantedLevel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MAX_WANTED_LEVEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCarInAirProper(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_IN_AIR_PROPER>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarUpsidedown(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_UPSIDEDOWN>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetPlayerChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PLAYER_CHAR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetPoliceIgnorePlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_POLICE_IGNORE_PLAYER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StartKillFrenzy(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "iiiiiiiis", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::START_KILL_FRENZY>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::ReadKillFrenzyStatus(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::READ_KILL_FRENZY_STATUS>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::Sqrt(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SQRT>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::LocateCharAnyMeansCar2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_CAR_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFootCar2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_CAR_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCarCar2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_CAR_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharAnyMeansCar3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_CAR_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFootCar3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_CAR_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCarCar3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_CAR_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GenerateRandomFloatInRange(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ff", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GENERATE_RANDOM_FLOAT_IN_RANGE>(var1, var2, &var3);
	return Py_BuildValue("f", var3);
}

PyObject* PyOpcodes::GenerateRandomIntInRange(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GENERATE_RANDOM_INT_IN_RANGE>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::LockCarDoors(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::LOCK_CAR_DOORS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ExplodeCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::EXPLODE_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddExplosion(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_EXPLOSION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::IsCarUpright(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_UPRIGHT>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CreatePickup(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_PICKUP>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::HasPickupBeenCollected(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_PICKUP_BEEN_COLLECTED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RemovePickup(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_PICKUP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTaxiLights(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TAXI_LIGHTS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::PrintBigQ(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iis", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_BIG_Q>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetTargetCarForMissionGarage(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TARGET_CAR_FOR_MISSION_GARAGE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ApplyBrakesToPlayersCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::APPLY_BRAKES_TO_PLAYERS_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_HEALTH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_HEALTH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCharHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_HEALTH>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetCarHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_HEALTH>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::ChangeCarColour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CHANGE_CAR_COLOUR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SwitchPedRoadsOn(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_PED_ROADS_ON>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SwitchPedRoadsOff(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_PED_ROADS_OFF>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SetGangWeapons(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GANG_WEAPONS>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::IsCharTouchingObjectOnFoot(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_TOUCHING_OBJECT_ON_FOOT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LoadSpecialCharacter(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_SPECIAL_CHARACTER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasSpecialCharacterLoaded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_SPECIAL_CHARACTER_LOADED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerInRemoteMode(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_IN_REMOTE_MODE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCutsceneOffset(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CUTSCENE_OFFSET>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetAnimGroupForChar(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ANIM_GROUP_FOR_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RequestModel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REQUEST_MODEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasModelLoaded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_MODEL_LOADED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MarkModelAsNoLongerNeeded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_MODEL_AS_NO_LONGER_NEEDED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DrawCorona(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffiiiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_CORONA>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerPlaying(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_PLAYING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetControllerMode(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_CONTROLLER_MODE>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::SetCanResprayCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAN_RESPRAY_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::UnloadSpecialCharacter(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::UNLOAD_SPECIAL_CHARACTER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ResetNumOfModelsKilledByPlayer(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::RESET_NUM_OF_MODELS_KILLED_BY_PLAYER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetNumOfModelsKilledByPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUM_OF_MODELS_KILLED_BY_PLAYER>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::ActivateGarage(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ACTIVATE_GARAGE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CreateObjectNoOffset(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_OBJECT_NO_OFFSET>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::IsCharStopped(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SwitchWidescreen(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_WIDESCREEN>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddSpriteBlipForContactPoint(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SPRITE_BLIP_FOR_CONTACT_POINT>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::AddSpriteBlipForCoord(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SPRITE_BLIP_FOR_COORD>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::SetCharOnlyDamagedByPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_ONLY_DAMAGED_BY_PLAYER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarOnlyDamagedByPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ONLY_DAMAGED_BY_PLAYER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharProofs(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "iiiiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_PROOFS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SetCarProofs(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "iiiiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_PROOFS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::DeactivateGarage(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DEACTIVATE_GARAGE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCarInWater(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_IN_WATER>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetClosestCharNode(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CLOSEST_CHAR_NODE>(var1, var2, var3, &var4, &var5, &var6);
	return Py_BuildValue("fff", var4, var5, var6);
}

PyObject* PyOpcodes::GetClosestCarNode(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CLOSEST_CAR_NODE>(var1, var2, var3, &var4, &var5, &var6);
	return Py_BuildValue("fff", var4, var5, var6);
}

PyObject* PyOpcodes::CarGotoCoordinatesAccurate(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CAR_GOTO_COORDINATES_ACCURATE>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::IsCarOnScreen(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_ON_SCREEN>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharOnScreen(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_ON_SCREEN>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsObjectOnScreen(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_ON_SCREEN>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetGroundZFor3DCoord(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_GROUND_Z_FOR_3D_COORD>(var1, var2, var3, &var4);
	return Py_BuildValue("f", var4);
}

PyObject* PyOpcodes::StartScriptFire(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffiif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::START_SCRIPT_FIRE>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::IsScriptFireExtinguished(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_SCRIPT_FIRE_EXTINGUISHED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::RemoveScriptFire(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_SCRIPT_FIRE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::BoatGotoCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::BOAT_GOTO_COORDS>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::BoatStop(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::BOAT_STOP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharShootingInArea(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_SHOOTING_IN_AREA>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCurrentCharWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CURRENT_CHAR_WEAPON>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetBoatCruiseSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_BOAT_CRUISE_SPEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetRandomCharInZone(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiis", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CHAR_IN_ZONE>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::IsCharShooting(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_SHOOTING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CreateMoneyPickup(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffiif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_MONEY_PICKUP>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::SetCharAccuracy(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_ACCURACY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCarSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_SPEED>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::LoadCutscene(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_CUTSCENE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCutsceneTime(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_CUTSCENE_TIME>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::CreateCollectable1(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_COLLECTABLE1>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetCollectable1Total(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_COLLECTABLE1_TOTAL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsProjectileInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PROJECTILE_IN_AREA>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_MODEL>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::Sin(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SIN>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::Cos(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::COS>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::GetCarForwardX(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_FORWARD_X>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::GetCarForwardY(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_FORWARD_Y>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::ChangeGarageType(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CHANGE_GARAGE_TYPE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::PrintWith2NumbersNow(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiiis", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_2_NUMBERS_NOW>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::PrintWith3Numbers(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "iiiiis", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_3_NUMBERS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::PrintWith4Numbers(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "iiiiiis", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_4_NUMBERS>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::PrintWith4NumbersNow(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "iiiiiis", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_4_NUMBERS_NOW>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::PrintWith6Numbers(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "iiiiiiiis", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_6_NUMBERS>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::PlayerMadeProgress(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PLAYER_MADE_PROGRESS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetProgressTotal(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PROGRESS_TOTAL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RegisterMissionPassed(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_MISSION_PASSED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasCharBeenDamagedByWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_BEEN_DAMAGED_BY_WEAPON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasCarBeenDamagedByWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CAR_BEEN_DAMAGED_BY_WEAPON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ExplodeCharHead(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::EXPLODE_CHAR_HEAD>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AnchorBoat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ANCHOR_BOAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StartCarFire(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::START_CAR_FIRE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::StartCharFire(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::START_CHAR_FIRE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetRandomCarOfTypeInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CAR_OF_TYPE_IN_AREA>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::SetCameraZoom(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAMERA_ZOOM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CreatePickupWithAmmo(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "iifffi", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_PICKUP_WITH_AMMO>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::SetPlayerNeverGetsTired(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_NEVER_GETS_TIRED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerFastReload(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_FAST_RELOAD>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharBleeding(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_BLEEDING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetFreeResprays(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FREE_RESPRAYS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharVisible(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_VISIBLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarVisible(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_VISIBLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsAreaOccupied(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;
	int var9;
	int var10;
	int var11;

	if (!PyArg_ParseTuple(args, "fffffiiiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_AREA_OCCUPIED>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DisplayText(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	char* var3;

	if (!PyArg_ParseTuple(args, "fsf", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_TEXT>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetTextScale(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "ff", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_SCALE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetTextColour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_COLOUR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetTextJustify(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_JUSTIFY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextCentre(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_CENTRE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextWrapx(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_WRAPX>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextCentreSize(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_CENTRE_SIZE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextBackground(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_BACKGROUND>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextProportional(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_PROPORTIONAL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextFont(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_FONT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RotateObject(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ROTATE_OBJECT>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SlideObject(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::SLIDE_OBJECT>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::RemoveCharElegantly(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_CHAR_ELEGANTLY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharStayInSamePlace(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_STAY_IN_SAME_PLACE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsExplosionInArea(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "ffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_EXPLOSION_IN_AREA>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::PlaceObjectRelativeToCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ifffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::PLACE_OBJECT_RELATIVE_TO_CAR>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::MakeObjectTargettable(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::MAKE_OBJECT_TARGETTABLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddArmourToChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_ARMOUR_TO_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::OpenGarage(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::OPEN_GARAGE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CloseGarage(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLOSE_GARAGE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::WarpCharFromCarToCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::WARP_CHAR_FROM_CAR_TO_COORD>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetVisibilityOfClosestObjectOfType(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffiif", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::HasCharSpottedChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_SPOTTED_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasObjectBeenDamaged(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_OBJECT_BEEN_DAMAGED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::WarpCharIntoCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::WARP_CHAR_INTO_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::PrintWith2NumbersBig(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiiis", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_WITH_2_NUMBERS_BIG>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::CreateRandomChar(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_RANDOM_CHAR>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::SetObjectVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectCollision(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_COLLISION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::PrintStringInStringNow(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "siis", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_STRING_IN_STRING_NOW>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::IsPointObscuredByAMissionEntity(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::AddToObjectVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_TO_OBJECT_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::DrawSprite(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "ffffiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_SPRITE>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::DrawRect(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;

	if (!PyArg_ParseTuple(args, "fffiiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_RECT>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::LoadSprite(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_SPRITE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::LoadTextureDictionary(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_TEXTURE_DICTIONARY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectDynamic(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_DYNAMIC>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharAnimSpeed(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	float var3;

	if (!PyArg_ParseTuple(args, "sfi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_ANIM_SPEED>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::PlayMissionPassedTune(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PLAY_MISSION_PASSED_TUNE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_AREA>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::FreezeOnscreenTimer(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FREEZE_ONSCREEN_TIMER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SwitchCarSiren(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_CAR_SIREN>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarWatertight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_WATERTIGHT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharCantBeDraggedOut(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_CANT_BE_DRAGGED_OUT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TurnCarToFaceCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ffi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TURN_CAR_TO_FACE_COORD>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::DrawSphere(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_SPHERE>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetCarStatus(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_STATUS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharMale(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_MALE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ScriptName(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SCRIPT_NAME>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SaveIntToDebugFile(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SAVE_INT_TO_DEBUG_FILE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SaveFloatToDebugFile(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SAVE_FLOAT_TO_DEBUG_FILE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PoliceRadioMessage(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::POLICE_RADIO_MESSAGE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetCarStrong(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_STRONG>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SwitchRubbish(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_RUBBISH>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SwitchStreaming(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_STREAMING>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsGarageOpen(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_GARAGE_OPEN>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsGarageClosed(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_GARAGE_CLOSED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SwapNearestBuildingModel(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffiif", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SWAP_NEAREST_BUILDING_MODEL>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SwitchWorldProcessing(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_WORLD_PROCESSING>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearAreaOfCars(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_AREA_OF_CARS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::AddSphere(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SPHERE>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::RemoveSphere(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_SPHERE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetEveryoneIgnorePlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_EVERYONE_IGNORE_PLAYER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StoreCarCharIsInNoSave(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STORE_CAR_CHAR_IS_IN_NO_SAVE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::DisplayOnscreenTimerWithString(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	char* var3;

	if (!PyArg_ParseTuple(args, "isi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_ONSCREEN_TIMER_WITH_STRING>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::DisplayOnscreenCounterWithString(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	char* var3;

	if (!PyArg_ParseTuple(args, "isi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_ONSCREEN_COUNTER_WITH_STRING>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::CreateRandomCarForCarPark(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_RANDOM_CAR_FOR_CAR_PARK>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetWantedMultiplier(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_WANTED_MULTIPLIER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCarVisiblyDamaged(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_VISIBLY_DAMAGED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DoesObjectExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_OBJECT_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::LoadScene(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_SCENE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::AddStuckCarCheck(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	int var3;

	if (!PyArg_ParseTuple(args, "fii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_STUCK_CAR_CHECK>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::RemoveStuckCarCheck(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_STUCK_CAR_CHECK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCarStuck(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_STUCK>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LoadMissionAudio(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_MISSION_AUDIO>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasMissionAudioLoaded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_MISSION_AUDIO_LOADED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PlayMissionAudio(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PLAY_MISSION_AUDIO>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasMissionAudioFinished(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_MISSION_AUDIO_FINISHED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetClosestCarNodeWithHeading(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CLOSEST_CAR_NODE_WITH_HEADING>(var1, var2, var3, &var4, &var5, &var6, &var7);
	return Py_BuildValue("ffff", var4, var5, var6, var7);
}

PyObject* PyOpcodes::ClearThisPrint(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_THIS_PRINT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearThisBigPrint(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_THIS_BIG_PRINT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetMissionAudioPosition(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MISSION_AUDIO_POSITION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::AddBlipForPickup(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_PICKUP>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetPedDensityMultiplier(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PED_DENSITY_MULTIPLIER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextDrawBeforeFade(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_DRAW_BEFORE_FADE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetSpritesDrawBeforeFade(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SPRITES_DRAW_BEFORE_FADE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTextRightJustify(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_RIGHT_JUSTIFY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PrintHelp(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_HELP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::FlashHudObject(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FLASH_HUD_OBJECT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetUpsidedownCarNotDamaged(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UPSIDEDOWN_CAR_NOT_DAMAGED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CanPlayerStartMission(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CAN_PLAYER_START_MISSION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MakePlayerSafeForCutscene(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MAKE_PLAYER_SAFE_FOR_CUTSCENE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::UseTextCommands(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::USE_TEXT_COMMANDS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCarColours(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_COLOURS>(var1, &var2, &var3);
	return Py_BuildValue("ii", var2, var3);
}

PyObject* PyOpcodes::SetAllCarsCanBeDamaged(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ALL_CARS_CAN_BE_DAMAGED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarCanBeDamaged(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_CAN_BE_DAMAGED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetDrunkInputDelay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_DRUNK_INPUT_DELAY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharMoney(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_MONEY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetOffsetFromObjectInWorldCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS>(var1, var2, var3, var4, &var5, &var6, &var7);
	return Py_BuildValue("fff", var5, var6, var7);
}

PyObject* PyOpcodes::GetOffsetFromCarInWorldCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OFFSET_FROM_CAR_IN_WORLD_COORDS>(var1, var2, var3, var4, &var5, &var6, &var7);
	return Py_BuildValue("fff", var5, var6, var7);
}

PyObject* PyOpcodes::ClearMissionAudio(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_MISSION_AUDIO>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetFreeHealthCare(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FREE_HEALTH_CARE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::LoadAndLaunchMission(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_AND_LAUNCH_MISSION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::LoadAndLaunchMissionInternal(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_AND_LAUNCH_MISSION_INTERNAL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectDrawLast(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_DRAW_LAST>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetAmmoInCharWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_AMMO_IN_CHAR_WEAPON>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::SetNearClip(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_NEAR_CLIP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetRadioChannel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_RADIO_CHANNEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarTraction(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_TRACTION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ConvertMetresToFeet(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CONVERT_METRES_TO_FEET>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetCarAvoidLevelTransitions(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_AVOID_LEVEL_TRANSITIONS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearAreaOfChars(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_AREA_OF_CHARS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SetTotalNumberOfMissions(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TOTAL_NUMBER_OF_MISSIONS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ConvertMetresToFeetInt(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CONVERT_METRES_TO_FEET_INT>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::RegisterFastestTime(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_FASTEST_TIME>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::WarpCharIntoCarAsPassenger(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::WARP_CHAR_INTO_CAR_AS_PASSENGER>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsCarPassengerSeatFree(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_PASSENGER_SEAT_FREE>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCharInCarPassengerSeat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_IN_CAR_PASSENGER_SEAT>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::SetCharIsChrisCriminal(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_IS_CHRIS_CRIMINAL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetMusicDoesFade(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MUSIC_DOES_FADE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCarModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_MODEL>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetCharSuffersCriticalHits(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_SUFFERS_CRITICAL_HITS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharSittingInCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_SITTING_IN_CAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharSittingInAnyCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_SITTING_IN_ANY_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharOnFoot(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_ON_FOOT>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetObjectRotation(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_ROTATION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetDebugCameraCoordinates(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	plugin::Command<plugin::Commands::GET_DEBUG_CAMERA_COORDINATES>(&var1, &var2, &var3);
	return Py_BuildValue("fff", var1, var2, var3);
}

PyObject* PyOpcodes::IsPlayerTargettingChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_TARGETTING_CHAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsPlayerTargettingObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_TARGETTING_OBJECT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::TerminateAllScriptsWithThisName(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DisplayTextWithNumber(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	char* var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fsif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_TEXT_WITH_NUMBER>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::DisplayTextWith2Numbers(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	char* var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fsiif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_TEXT_WITH_2_NUMBERS>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::SetInterpolationParameters(PyObject* self, PyObject* args)
{
	float var1;
	int var2;

	if (!PyArg_ParseTuple(args, "if", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_INTERPOLATION_PARAMETERS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetDebugCameraPointAt(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	plugin::Command<plugin::Commands::GET_DEBUG_CAMERA_POINT_AT>(&var1, &var2, &var3);
	return Py_BuildValue("fff", var1, var2, var3);
}

PyObject* PyOpcodes::AttachCharToCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ifffifii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CHAR_TO_CAR>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::DetachCharFromCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DETACH_CHAR_FROM_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarStayInFastLane(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_STAY_IN_FAST_LANE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearCharLastWeaponDamage(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CHAR_LAST_WEAPON_DAMAGE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearCarLastWeaponDamage(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CAR_LAST_WEAPON_DAMAGE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetDriverOfCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_DRIVER_OF_CAR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetNumberOfFollowers(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUMBER_OF_FOLLOWERS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GiveRemoteControlledModelToPlayer(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::GIVE_REMOTE_CONTROLLED_MODEL_TO_PLAYER>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetCurrentCharWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CURRENT_CHAR_WEAPON>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::LocateCharAnyMeansObject2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_OBJECT_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFootObject2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_OBJECT_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCarObject2D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_OBJECT_2D>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharAnyMeansObject3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_OBJECT_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharOnFootObject3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_OBJECT_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateCharInCarObject3D(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_OBJECT_3D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SetCarTempAction(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_TEMP_ACTION>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsCharOnAnyBike(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_ON_ANY_BIKE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CanCharSeeDeadChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CAN_CHAR_SEE_DEAD_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetRemoteControlledCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_REMOTE_CONTROLLED_CAR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::IsModelAvailable(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_MODEL_AVAILABLE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ShutCharUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SHUT_CHAR_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetEnableRcDetonate(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ENABLE_RC_DETONATE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarRandomRouteSeed(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_RANDOM_ROUTE_SEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsAnyPickupAtCoords(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_ANY_PICKUP_AT_COORDS>(var1, var2, var3);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::RemoveAllCharWeapons(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_ALL_CHAR_WEAPONS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasCharGotWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_GOT_WEAPON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetPositionOfAnalogueSticks(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_POSITION_OF_ANALOGUE_STICKS>(var1, &var2, &var3, &var4, &var5);
	return Py_BuildValue("iiii", var2, var3, var4, var5);
}

PyObject* PyOpcodes::IsCarOnFire(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_ON_FIRE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarTyreBurst(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_TYRE_BURST>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::HeliGotoCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "fffffi", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::HELI_GOTO_COORDS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetDeadCharPickupCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_DEAD_CHAR_PICKUP_COORDS>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::CreateProtectionPickup(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffiif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_PROTECTION_PICKUP>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::IsCharInAnyBoat(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_BOAT>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAnyHeli(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_HELI>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAnyPlane(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_PLANE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInWater(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_WATER>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCharWeaponInSlot(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_WEAPON_IN_SLOT>(var1, var2, &var3, &var4, &var5);
	return Py_BuildValue("iii", var3, var4, var5);
}

PyObject* PyOpcodes::GetClosestStraightRoad(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	float var9;
	float var10;
	float var11;
	float var12;

	if (!PyArg_ParseTuple(args, "fffff", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CLOSEST_STRAIGHT_ROAD>(var1, var2, var3, var4, var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12);
	return Py_BuildValue("fffffff", var6, var7, var8, var9, var10, var11, var12);
}

PyObject* PyOpcodes::SetCarForwardSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_FORWARD_SPEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetAreaVisible(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_AREA_VISIBLE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MarkCarAsConvoyCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_CAR_AS_CONVOY_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateScriptRoadblock(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffif", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_SCRIPT_ROADBLOCK>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::GetOffsetFromCharInWorldCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS>(var1, var2, var3, var4, &var5, &var6, &var7);
	return Py_BuildValue("fff", var5, var6, var7);
}

PyObject* PyOpcodes::HasCharBeenPhotographed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_BEEN_PHOTOGRAPHED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInFlyingVehicle(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_FLYING_VEHICLE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::AddShortRangeSpriteBlipForCoord(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SHORT_RANGE_SPRITE_BLIP_FOR_COORD>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::SetHeliOrientation(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HELI_ORIENTATION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearHeliOrientation(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_HELI_ORIENTATION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PlaneGotoCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "fffffi", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::PLANE_GOTO_COORDS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetNthClosestCarNode(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NTH_CLOSEST_CAR_NODE>(var1, var2, var3, var4, &var5, &var6, &var7);
	return Py_BuildValue("fff", var5, var6, var7);
}

PyObject* PyOpcodes::DrawWeaponshopCorona(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffiiiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_WEAPONSHOP_CORONA>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::SetEnableRcDetonateOnContact(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ENABLE_RC_DETONATE_ON_CONTACT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::FreezeCharPosition(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FREEZE_CHAR_POSITION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharDrownsInWater(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_DROWNS_IN_WATER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectRecordsCollisions(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_RECORDS_COLLISIONS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasObjectCollidedWithAnything(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_OBJECT_COLLIDED_WITH_ANYTHING>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCharArmour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_ARMOUR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetHeliStabiliser(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HELI_STABILISER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarStraightLineDistance(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_STRAIGHT_LINE_DISTANCE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::PopCarBoot(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::POP_CAR_BOOT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ShutPlayerUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SHUT_PLAYER_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerMood(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_MOOD>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::RequestCollision(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "ff", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REQUEST_COLLISION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::LocateObject2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_OBJECT_2D>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::LocateObject3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::LOCATE_OBJECT_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::IsObjectInWater(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_IN_WATER>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsObjectInArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_IN_AREA_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsObjectInArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_IN_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::TaskToggleDuck(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_TOGGLE_DUCK>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RequestAnimation(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REQUEST_ANIMATION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasAnimationLoaded(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_ANIMATION_LOADED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RemoveAnimation(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_ANIMATION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharWaitingForWorldCollision(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_WAITING_FOR_WORLD_COLLISION>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarWaitingForWorldCollision(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_WAITING_FOR_WORLD_COLLISION>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::AttachCharToObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ifffifii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CHAR_TO_OBJECT>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::DisplayNthOnscreenCounterWithString(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	char* var4;

	if (!PyArg_ParseTuple(args, "iisi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_NTH_ONSCREEN_COUNTER_WITH_STRING>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::AddSetPiece(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	float var9;
	float var10;
	float var11;
	float var12;
	float var13;

	if (!PyArg_ParseTuple(args, "ffffffffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12, &var13))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SET_PIECE>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13);
	return Py_True;
}

PyObject* PyOpcodes::SetExtraColours(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_EXTRA_COLOURS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearExtraColours(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_EXTRA_COLOURS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetWheelieStats(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	int var4;
	float var5;
	int var6;
	float var7;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_WHEELIE_STATS>(var1, &var2, &var3, &var4, &var5, &var6, &var7);
	return Py_BuildValue("ififif", var2, var3, var4, var5, var6, var7);
}

PyObject* PyOpcodes::BurstCarTyre(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::BURST_CAR_TYRE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerWearing(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	char* var3;

	if (!PyArg_ParseTuple(args, "isi", &var1, &var2, &var3))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_WEARING>(var1, var2, var3);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetPlayerCanDoDriveBy(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_CAN_DO_DRIVE_BY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateSwatRope(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_SWAT_ROPE>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::SetCarModelComponents(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_MODEL_COMPONENTS>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::CloseAllCarDoors(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLOSE_ALL_CAR_DOORS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetDistanceBetweenCoords2D(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_DISTANCE_BETWEEN_COORDS_2D>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("f", var5);
}

PyObject* PyOpcodes::GetDistanceBetweenCoords3D(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::GET_DISTANCE_BETWEEN_COORDS_3D>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("f", var7);
}

PyObject* PyOpcodes::SortOutObjectCollisionWithCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SORT_OUT_OBJECT_COLLISION_WITH_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetMaxWantedLevel(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_MAX_WANTED_LEVEL>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::PrintHelpForever(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_HELP_FOREVER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PrintHelpForeverWithNumber(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::PRINT_HELP_FOREVER_WITH_NUMBER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateLockedPropertyPickup(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	char* var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffsf", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_LOCKED_PROPERTY_PICKUP>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::CreateForsalePropertyPickup(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	char* var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffisf", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FORSALE_PROPERTY_PICKUP>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::FreezeCarPosition(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FREEZE_CAR_POSITION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasCharBeenDamagedByChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_BEEN_DAMAGED_BY_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasCharBeenDamagedByCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_BEEN_DAMAGED_BY_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasCarBeenDamagedByChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CAR_BEEN_DAMAGED_BY_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasCarBeenDamagedByCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CAR_BEEN_DAMAGED_BY_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetRadioChannel(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_RADIO_CHANNEL>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::SetCharStayInCarWhenJacked(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_STAY_IN_CAR_WHEN_JACKED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerDrunkenness(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_DRUNKENNESS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetRandomCarOfTypeInAreaNoSave(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CAR_OF_TYPE_IN_AREA_NO_SAVE>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::SetCanBurstCarTyres(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAN_BURST_CAR_TYRES>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::FireHunterGun(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FIRE_HUNTER_GUN>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharTouchingVehicle(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_TOUCHING_VEHICLE>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCharCanBeShotInVehicle(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_CAN_BE_SHOT_IN_VEHICLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::LoadMissionText(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_MISSION_TEXT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearCharLastDamageEntity(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CHAR_LAST_DAMAGE_ENTITY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearCarLastDamageEntity(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CAR_LAST_DAMAGE_ENTITY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::FreezeObjectPosition(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FREEZE_OBJECT_POSITION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RemoveWeaponFromChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_WEAPON_FROM_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::MakePlayerFireProof(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::MAKE_PLAYER_FIRE_PROOF>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IncreasePlayerMaxHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::INCREASE_PLAYER_MAX_HEALTH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IncreasePlayerMaxArmour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::INCREASE_PLAYER_MAX_ARMOUR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateRandomCharAsDriver(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_RANDOM_CHAR_AS_DRIVER>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::CreateRandomCharAsPassenger(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_RANDOM_CHAR_AS_PASSENGER>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::EnsurePlayerHasDriveByWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ENSURE_PLAYER_HAS_DRIVE_BY_WEAPON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::MakeHeliComeCrashingDown(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MAKE_HELI_COME_CRASHING_DOWN>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddExplosionNoSound(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_EXPLOSION_NO_SOUND>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectAreaVisible(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_AREA_VISIBLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharNeverTargetted(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_NEVER_TARGETTED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInAnyPoliceVehicle(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_POLICE_VEHICLE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DoesCharExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_CHAR_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DoesVehicleExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_VEHICLE_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddShortRangeSpriteBlipForContactPoint(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SHORT_RANGE_SPRITE_BLIP_FOR_CONTACT_POINT>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::SetAllTaxisHaveNitro(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ALL_TAXIS_HAVE_NITRO>(var1);
	return Py_True;
}

PyObject* PyOpcodes::FreezeCarPositionAndDontLoadCollision(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FREEZE_CAR_POSITION_AND_DONT_LOAD_COLLISION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::FreezeCharPositionAndDontLoadCollision(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerIsInStadium(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_IS_IN_STADIUM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DisplayRadar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_RADAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RegisterBestPosition(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_BEST_POSITION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerInInfoZone(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_IN_INFO_ZONE>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetLoadCollisionForCarFlag(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_LOAD_COLLISION_FOR_CAR_FLAG>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetLoadCollisionForCharFlag(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_LOAD_COLLISION_FOR_CHAR_FLAG>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddBigGunFlash(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BIG_GUN_FLASH>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetProgressPercentage(PyObject* self, PyObject* args)
{
	float var1;

	plugin::Command<plugin::Commands::GET_PROGRESS_PERCENTAGE>(&var1);
	return Py_BuildValue("f", var1);
}

PyObject* PyOpcodes::SetVehicleToFadeIn(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_TO_FADE_IN>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerInShortcutTaxi(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_IN_SHORTCUT_TAXI>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharDucking(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_DUCKING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetOnscreenCounterFlashWhenFirstDisplayed(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ONSCREEN_COUNTER_FLASH_WHEN_FIRST_DISPLAYED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ShuffleCardDecks(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SHUFFLE_CARD_DECKS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::FetchNextCard(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::FETCH_NEXT_CARD>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::GetObjectVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_VELOCITY>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::AddToObjectRotationVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_TO_OBJECT_ROTATION_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectRotationVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_ROTATION_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::IsObjectStatic(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_STATIC>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetAngleBetween2DVectors(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_ANGLE_BETWEEN_2D_VECTORS>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("f", var5);
}

PyObject* PyOpcodes::Do2DRectanglesCollide(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "ffffffff", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::DO_2D_RECTANGLES_COLLIDE>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectRotationVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_ROTATION_VELOCITY>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::AddVelocityRelativeToObjectVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_VELOCITY_RELATIVE_TO_OBJECT_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_SPEED>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetVarTextLabel(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "ss", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VAR_TEXT_LABEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetLvarTextLabel(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "ss", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_LVAR_TEXT_LABEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsVarTextLabelEqualToTextLabel(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "ss", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_VAR_TEXT_LABEL_EQUAL_TO_TEXT_LABEL>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsLvarTextLabelEqualToTextLabel(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "ss", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_LVAR_TEXT_LABEL_EQUAL_TO_TEXT_LABEL>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::Get2DLinesIntersectPoint(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	float var9;
	float var10;

	if (!PyArg_ParseTuple(args, "ffffffff", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::GET_2D_LINES_INTERSECT_POINT>(var1, var2, var3, var4, var5, var6, var7, var8, &var9, &var10);
	return Py_BuildValue("ff", var9, var10);
}

PyObject* PyOpcodes::TaskPause(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_PAUSE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskStandStill(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_STAND_STILL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskFallAndGetUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FALL_AND_GET_UP>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskJump(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_JUMP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskTired(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_TIRED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskDie(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DIE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskLookAtChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LOOK_AT_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskLookAtVehicle(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LOOK_AT_VEHICLE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskSay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SAY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskShakeFist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SHAKE_FIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskCower(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_COWER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskHandsUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_HANDS_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskDuck(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DUCK>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskUseAtm(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_USE_ATM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskScratchHead(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SCRATCH_HEAD>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskLookAbout(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LOOK_ABOUT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskEnterCarAsPassenger(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_ENTER_CAR_AS_PASSENGER>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskEnterCarAsDriver(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_ENTER_CAR_AS_DRIVER>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskLeaveCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LEAVE_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskLeaveCarAndFlee(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ifffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LEAVE_CAR_AND_FLEE>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::TaskCarDriveToCoord(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "iffffiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CAR_DRIVE_TO_COORD>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::TaskCarDriveWander(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ifii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CAR_DRIVE_WANDER>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskGoStraightToCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GO_STRAIGHT_TO_COORD>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::TaskAchieveHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_ACHIEVE_HEADING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ExtendRoute(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::EXTEND_ROUTE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskFollowPointRoute(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FOLLOW_POINT_ROUTE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskGotoChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iifi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GOTO_CHAR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskFleePoint(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FLEE_POINT>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::TaskFleeChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ifii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FLEE_CHAR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskSmartFleePoint(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SMART_FLEE_POINT>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::TaskSmartFleeChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ifii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SMART_FLEE_CHAR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskWanderStandard(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_WANDER_STANDARD>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskKillCharOnFoot(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_KILL_CHAR_ON_FOOT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StartRecordingCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::START_RECORDING_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StartPlaybackRecordedCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::START_PLAYBACK_RECORDED_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StopPlaybackRecordedCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STOP_PLAYBACK_RECORDED_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PausePlaybackRecordedCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PAUSE_PLAYBACK_RECORDED_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::UnpausePlaybackRecordedCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::UNPAUSE_PLAYBACK_RECORDED_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarEscortCarLeft(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ESCORT_CAR_LEFT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarEscortCarRight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ESCORT_CAR_RIGHT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarEscortCarRear(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ESCORT_CAR_REAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarEscortCarFront(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ESCORT_CAR_FRONT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskFollowPathNodesToCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FOLLOW_PATH_NODES_TO_COORD>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInAngledArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANGLED_AREA_2D>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAngledAreaOnFoot2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANGLED_AREA_ON_FOOT_2D>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAngledAreaInCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANGLED_AREA_IN_CAR_2D>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAngledArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_ANGLED_AREA_2D>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAngledAreaOnFoot2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_ANGLED_AREA_ON_FOOT_2D>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAngledAreaInCar2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_ANGLED_AREA_IN_CAR_2D>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAngledArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANGLED_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAngledAreaOnFoot3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANGLED_AREA_ON_FOOT_3D>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAngledAreaInCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANGLED_AREA_IN_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAngledArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_ANGLED_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAngledAreaOnFoot3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_ANGLED_AREA_ON_FOOT_3D>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharStoppedInAngledAreaInCar3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STOPPED_IN_ANGLED_AREA_IN_CAR_3D>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInTaxi(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_TAXI>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::TaskGoToCoordAnyMeans(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GO_TO_COORD_ANY_MEANS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetHeadingFromVector2D(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ff", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_HEADING_FROM_VECTOR_2D>(var1, var2, &var3);
	return Py_BuildValue("f", var3);
}

PyObject* PyOpcodes::TaskPlayAnim(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	char* var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "ssfiiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_PLAY_ANIM>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::LoadPathNodesInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_PATH_NODES_IN_AREA>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::LoadCharDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_CHAR_DECISION_MAKER>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetCharDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_DECISION_MAKER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetTextDropshadow(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiiii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_DROPSHADOW>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::IsPlaybackGoingOnForCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYBACK_GOING_ON_FOR_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetSenseRange(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SENSE_RANGE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharPlayingAnim(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_PLAYING_ANIM>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCharAnimPlayingFlag(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	int var3;

	if (!PyArg_ParseTuple(args, "sii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_ANIM_PLAYING_FLAG>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::GetCharAnimCurrentTime(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	float var3;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_ANIM_CURRENT_TIME>(var1, var2, &var3);
	return Py_BuildValue("f", var3);
}

PyObject* PyOpcodes::SetCharAnimCurrentTime(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	float var3;

	if (!PyArg_ParseTuple(args, "sfi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_ANIM_CURRENT_TIME>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::OpenSequenceTask(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::OPEN_SEQUENCE_TASK>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::CloseSequenceTask(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLOSE_SEQUENCE_TASK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PerformSequenceTask(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::PERFORM_SEQUENCE_TASK>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharCollision(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_COLLISION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCharAnimTotalTime(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	float var3;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_ANIM_TOTAL_TIME>(var1, var2, &var3);
	return Py_BuildValue("f", var3);
}

PyObject* PyOpcodes::ClearSequenceTask(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_SEQUENCE_TASK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddAttractor(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "ffffif", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_ATTRACTOR>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::ClearAttractor(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_ATTRACTOR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CreateCharAtAttractor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CHAR_AT_ATTRACTOR>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::TaskLeaveCarImmediately(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LEAVE_CAR_IMMEDIATELY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IncrementIntStat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::INCREMENT_INT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IncrementFloatStat(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::INCREMENT_FLOAT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DecrementIntStat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DECREMENT_INT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DecrementFloatStat(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DECREMENT_FLOAT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RegisterIntStat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_INT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RegisterFloatStat(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_FLOAT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetIntStat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_INT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetFloatStat(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FLOAT_STAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetScriptTaskStatus(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_SCRIPT_TASK_STATUS>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::CreateGroup(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_GROUP>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetGroupLeader(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GROUP_LEADER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetGroupMember(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GROUP_MEMBER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RemoveGroup(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_GROUP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskLeaveAnyCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LEAVE_ANY_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskKillCharOnFootWhileDucking(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiiii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_KILL_CHAR_ON_FOOT_WHILE_DUCKING>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::TaskAimGunAtChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_AIM_GUN_AT_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskGoToCoordWhileShooting(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "fffiffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GO_TO_COORD_WHILE_SHOOTING>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::TaskStayInSamePlace(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_STAY_IN_SAME_PLACE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskTurnCharToFaceChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_TURN_CHAR_TO_FACE_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharAtScriptedAttractor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_AT_SCRIPTED_ATTRACTOR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetSequenceToRepeat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SEQUENCE_TO_REPEAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetSequenceProgress(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_SEQUENCE_PROGRESS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::ClearLookAt(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_LOOK_AT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetFollowNodeThresholdDistance(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FOLLOW_NODE_THRESHOLD_DISTANCE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateFxSystem(PyObject* self, PyObject* args)
{
	char* var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffis", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FX_SYSTEM>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::PlayFxSystem(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PLAY_FX_SYSTEM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::StopFxSystem(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STOP_FX_SYSTEM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PlayAndKillFxSystem(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PLAY_AND_KILL_FX_SYSTEM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::KillFxSystem(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::KILL_FX_SYSTEM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetIntStat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_INT_STAT>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetFloatStat(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_FLOAT_STAT>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetObjectRenderScorched(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_RENDER_SCORCHED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskLookAtObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LOOK_AT_OBJECT>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::LimitAngle(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LIMIT_ANGLE>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::OpenCarDoor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::OPEN_CAR_DOOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetPickupCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PICKUP_COORDINATES>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::RemoveDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_DECISION_MAKER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ViewIntegerVariable(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::VIEW_INTEGER_VARIABLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ViewFloatVariable(PyObject* self, PyObject* args)
{
	float var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "sf", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::VIEW_FLOAT_VARIABLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::WatchIntegerVariable(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::WATCH_INTEGER_VARIABLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::WatchFloatVariable(PyObject* self, PyObject* args)
{
	float var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "sf", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::WATCH_FLOAT_VARIABLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::Breakpoint(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::BREAKPOINT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::WriteDebug(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::WRITE_DEBUG>(var1);
	return Py_True;
}

PyObject* PyOpcodes::WriteDebugWithInt(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::WRITE_DEBUG_WITH_INT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::WriteDebugWithFloat(PyObject* self, PyObject* args)
{
	char* var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fs", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::WRITE_DEBUG_WITH_FLOAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCharModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_MODEL>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::TaskAimGunAtCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_AIM_GUN_AT_COORD>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::TaskShootAtCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SHOOT_AT_COORD>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::CreateFxSystemOnChar(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "ifffis", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FX_SYSTEM_ON_CHAR>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::CreateFxSystemOnCharWithDirection(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;
	int var10;

	if (!PyArg_ParseTuple(args, "iffffffis", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FX_SYSTEM_ON_CHAR_WITH_DIRECTION>(var1, var2, var3, var4, var5, var6, var7, var8, var9, &var10);
	return Py_BuildValue("i", var10);
}

PyObject* PyOpcodes::CreateFxSystemOnCar(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "ifffis", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FX_SYSTEM_ON_CAR>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::CreateFxSystemOnCarWithDirection(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;
	int var10;

	if (!PyArg_ParseTuple(args, "iffffffis", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FX_SYSTEM_ON_CAR_WITH_DIRECTION>(var1, var2, var3, var4, var5, var6, var7, var8, var9, &var10);
	return Py_BuildValue("i", var10);
}

PyObject* PyOpcodes::CreateFxSystemOnObject(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "ifffis", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FX_SYSTEM_ON_OBJECT>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::CreateFxSystemOnObjectWithDirection(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;
	int var10;

	if (!PyArg_ParseTuple(args, "iffffffis", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_FX_SYSTEM_ON_OBJECT_WITH_DIRECTION>(var1, var2, var3, var4, var5, var6, var7, var8, var9, &var10);
	return Py_BuildValue("i", var10);
}

PyObject* PyOpcodes::TaskDestroyCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DESTROY_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskDiveAndGetUp(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DIVE_AND_GET_UP>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::CustomPlateForNextCar(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CUSTOM_PLATE_FOR_NEXT_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskShuffleToNextCarSeat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SHUFFLE_TO_NEXT_CAR_SEAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskChatWithChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CHAT_WITH_CHAR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::AttachCameraToVehicle(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CAMERA_TO_VEHICLE>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::AttachCameraToVehicleLookAtVehicle(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffifii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CAMERA_TO_VEHICLE_LOOK_AT_VEHICLE>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::AttachCameraToVehicleLookAtChar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffifii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CAMERA_TO_VEHICLE_LOOK_AT_CHAR>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::AttachCameraToChar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CAMERA_TO_CHAR>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::AttachCameraToCharLookAtChar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffifii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CAMERA_TO_CHAR_LOOK_AT_CHAR>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::ForceCarLights(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FORCE_CAR_LIGHTS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddPedtypeAsAttractorUser(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_PEDTYPE_AS_ATTRACTOR_USER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AttachObjectToCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "iffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_OBJECT_TO_CAR>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::DetachObject(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::DETACH_OBJECT>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::AttachCarToCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "iffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CAR_TO_CAR>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::DetachCar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::DETACH_CAR>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::IsObjectAttached(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_ATTACHED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsVehicleAttached(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_VEHICLE_ATTACHED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ClearCharTasks(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CHAR_TASKS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskTogglePedThreatScanner(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_TOGGLE_PED_THREAT_SCANNER>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::PopCarDoor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::POP_CAR_DOOR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::FixCarDoor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FIX_CAR_DOOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskEveryoneLeaveCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_EVERYONE_LEAVE_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerTargettingAnything(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_TARGETTING_ANYTHING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetActiveCameraCoordinates(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	plugin::Command<plugin::Commands::GET_ACTIVE_CAMERA_COORDINATES>(&var1, &var2, &var3);
	return Py_BuildValue("fff", var1, var2, var3);
}

PyObject* PyOpcodes::GetActiveCameraPointAt(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	plugin::Command<plugin::Commands::GET_ACTIVE_CAMERA_POINT_AT>(&var1, &var2, &var3);
	return Py_BuildValue("fff", var1, var2, var3);
}

PyObject* PyOpcodes::PopCarPanel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::POP_CAR_PANEL>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::FixCarPanel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FIX_CAR_PANEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::FixCarTyre(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FIX_CAR_TYRE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AttachObjectToObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "iffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_OBJECT_TO_OBJECT>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::AttachObjectToChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "iffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_OBJECT_TO_CHAR>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::GetCarSpeedVector(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_SPEED_VECTOR>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::GetCarMass(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_MASS>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::TaskDiveFromAttachmentAndGetUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DIVE_FROM_ATTACHMENT_AND_GET_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AttachCharToBike(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "ifffiffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CHAR_TO_BIKE>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::TaskGotoCharOffset(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "iiffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GOTO_CHAR_OFFSET>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::TaskLookAtCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_LOOK_AT_COORD>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::IsRecordingGoingOnForCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_RECORDING_GOING_ON_FOR_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::HideCharWeaponForScriptedCutscene(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCharSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_SPEED>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetGroupDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GROUP_DECISION_MAKER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::LoadGroupDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_GROUP_DECISION_MAKER>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::DisablePlayerSprint(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DISABLE_PLAYER_SPRINT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskSitDown(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SIT_DOWN>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateSearchlight(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "ffffffff", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_SEARCHLIGHT>(var1, var2, var3, var4, var5, var6, var7, var8, &var9);
	return Py_BuildValue("i", var9);
}

PyObject* PyOpcodes::DeleteSearchlight(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_SEARCHLIGHT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DoesSearchlightExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_SEARCHLIGHT_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MoveSearchlightBetweenCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "fffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::MOVE_SEARCHLIGHT_BETWEEN_COORDS>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::PointSearchlightAtCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ffffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::POINT_SEARCHLIGHT_AT_COORD>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::PointSearchlightAtChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::POINT_SEARCHLIGHT_AT_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInSearchlight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_SEARCHLIGHT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::TaskTurnCharToFaceCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_TURN_CHAR_TO_FACE_COORD>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskDrivePointRoute(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DRIVE_POINT_ROUTE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::FireSingleBullet(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffif", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::FIRE_SINGLE_BULLET>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::IsLineOfSightClear(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;
	int var9;
	int var10;
	int var11;

	if (!PyArg_ParseTuple(args, "fffffiiiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_LINE_OF_SIGHT_CLEAR>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCarRoll(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_ROLL>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::PointSearchlightAtVehicle(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::POINT_SEARCHLIGHT_AT_VEHICLE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsVehicleInSearchlight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_VEHICLE_IN_SEARCHLIGHT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CreateSearchlightOnVehicle(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	float var9;
	int var10;

	if (!PyArg_ParseTuple(args, "ffffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_SEARCHLIGHT_ON_VEHICLE>(var1, var2, var3, var4, var5, var6, var7, var8, var9, &var10);
	return Py_BuildValue("i", var10);
}

PyObject* PyOpcodes::TaskGoToCoordWhileAiming(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	float var6;
	float var7;
	int var8;
	float var9;
	float var10;
	float var11;

	if (!PyArg_ParseTuple(args, "fffiffifffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GO_TO_COORD_WHILE_AIMING>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11);
	return Py_True;
}

PyObject* PyOpcodes::GetNumberOfFiresInRange(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUMBER_OF_FIRES_IN_RANGE>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::AddBlipForSearchlight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_SEARCHLIGHT>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SkipToEndAndStopPlaybackRecordedCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskCarTempAction(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CAR_TEMP_ACTION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetLaRiots(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_LA_RIOTS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RemoveCharFromGroup(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_CHAR_FROM_GROUP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AttachSearchlightToSearchlightObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "iiifffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_SEARCHLIGHT_TO_SEARCHLIGHT_OBJECT>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::DisplayTimerBars(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_TIMER_BARS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SwitchEmergencyServices(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_EMERGENCY_SERVICES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CreateCheckpoint(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CHECKPOINT>(var1, var2, var3, var4, var5, var6, var7, var8, &var9);
	return Py_BuildValue("i", var9);
}

PyObject* PyOpcodes::DeleteCheckpoint(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_CHECKPOINT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SwitchRandomTrains(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_RANDOM_TRAINS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CreateMissionTrain(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_MISSION_TRAIN>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::SetTrainSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TRAIN_SPEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetTrainCruiseSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TRAIN_CRUISE_SPEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetTrainCaboose(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_TRAIN_CABOOSE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::DeletePlayer(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_PLAYER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetTwoPlayerCameraMode(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TWO_PLAYER_CAMERA_MODE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskCarMission(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "iiifii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CAR_MISSION>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::TaskGoToObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iifi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GO_TO_OBJECT>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskWeaponRoll(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_WEAPON_ROLL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskCharArrestChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CHAR_ARREST_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetAvailableVehicleMod(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_AVAILABLE_VEHICLE_MOD>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::GetVehicleModType(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_VEHICLE_MOD_TYPE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::AddVehicleMod(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_VEHICLE_MOD>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::RemoveVehicleMod(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_VEHICLE_MOD>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RequestVehicleMod(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REQUEST_VEHICLE_MOD>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasVehicleModLoaded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_VEHICLE_MOD_LOADED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MarkVehicleModAsNoLongerNeeded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_VEHICLE_MOD_AS_NO_LONGER_NEEDED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetNumAvailablePaintjobs(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUM_AVAILABLE_PAINTJOBS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GiveVehiclePaintjob(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GIVE_VEHICLE_PAINTJOB>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsGroupMember(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_GROUP_MEMBER>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsGroupLeader(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_GROUP_LEADER>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetGroupSeparationRange(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GROUP_SEPARATION_RANGE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::LimitTwoPlayerDistance(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LIMIT_TWO_PLAYER_DISTANCE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerPlayerTargetting(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_PLAYER_TARGETTING>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetScriptFireCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_SCRIPT_FIRE_COORDS>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::GetNthClosestCarNodeWithHeading(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING>(var1, var2, var3, var4, &var5, &var6, &var7, &var8);
	return Py_BuildValue("ffff", var5, var6, var7, var8);
}

PyObject* PyOpcodes::SetPlayersCanBeInSeparateCars(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYERS_CAN_BE_IN_SEPARATE_CARS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DoesCarHaveStuckCarCheck(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_CAR_HAVE_STUCK_CAR_CHECK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetPlaybackSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYBACK_SPEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AreAnyCharsNearChar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ARE_ANY_CHARS_NEAR_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetPercentageTaggedInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PERCENTAGE_TAGGED_IN_AREA>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::SetTagStatusInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TAG_STATUS_IN_AREA>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::CarGotoCoordinatesRacing(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CAR_GOTO_COORDINATES_RACING>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::StartPlaybackRecordedCarUsingAi(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::START_PLAYBACK_RECORDED_CAR_USING_AI>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SkipInPlaybackRecordedCar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SKIP_IN_PLAYBACK_RECORDED_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SkipCutsceneStartInternal(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SKIP_CUTSCENE_START_INTERNAL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearCharDecisionMakerEventResponse(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CHAR_DECISION_MAKER_EVENT_RESPONSE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddCharDecisionMakerEventResponse(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "iiffffiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::TaskPickUpObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;
	char* var8;
	char* var9;
	int var10;

	if (!PyArg_ParseTuple(args, "ifffiissii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_PICK_UP_OBJECT>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10);
	return Py_True;
}

PyObject* PyOpcodes::DropObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DROP_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ExplodeCarInCutscene(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::EXPLODE_CAR_IN_CUTSCENE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::BuildPlayerModel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::BUILD_PLAYER_MODEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PlaneAttackPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::PLANE_ATTACK_PLAYER>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::PlaneFlyInDirection(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::PLANE_FLY_IN_DIRECTION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::PlaneFollowEntity(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iifi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::PLANE_FOLLOW_ENTITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskDriveBy(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;
	int var9;
	int var10;

	if (!PyArg_ParseTuple(args, "iiffffiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DRIVE_BY>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10);
	return Py_True;
}

PyObject* PyOpcodes::SetCarStayInSlowLane(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_STAY_IN_SLOW_LANE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TakeRemoteControlOfCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TAKE_REMOTE_CONTROL_OF_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsClosestObjectOfTypeSmashedOrDamaged(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::StartSettingUpConversation(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::START_SETTING_UP_CONVERSATION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsConversationAtNode(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CONVERSATION_AT_NODE>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetObjectHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_HEALTH>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetObjectHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_HEALTH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::BreakObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::BREAK_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HeliAttackPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::HELI_ATTACK_PLAYER>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::HeliFollowEntity(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iifi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::HELI_FOLLOW_ENTITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::PoliceHeliChaseEntity(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iifi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::POLICE_HELI_CHASE_ENTITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskUseMobilePhone(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_USE_MOBILE_PHONE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskWarpCharIntoCarAsDriver(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_WARP_CHAR_INTO_CAR_AS_DRIVER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskWarpCharIntoCarAsPassenger(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_WARP_CHAR_INTO_CAR_AS_PASSENGER>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SwitchCopsOnBikes(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_COPS_ON_BIKES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsFlameInAngledArea2D(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ffffif", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_FLAME_IN_ANGLED_AREA_2D>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsFlameInAngledArea3D(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;

	if (!PyArg_ParseTuple(args, "ffffffif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_FLAME_IN_ANGLED_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::AddStuckCarCheckWithWarp(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	int var3;
	int var4;
	int var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fiiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_STUCK_CAR_CHECK_WITH_WARP>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::DamageCarPanel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DAMAGE_CAR_PANEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarRoll(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ROLL>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SuppressCarModel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SUPPRESS_CAR_MODEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DontSuppressCarModel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DONT_SUPPRESS_CAR_MODEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsPs2KeyboardKeyPressed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PS2_KEYBOARD_KEY_PRESSED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsPs2KeyboardKeyJustPressed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PS2_KEYBOARD_KEY_JUST_PRESSED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharHoldingObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_HOLDING_OBJECT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCarCanGoAgainstTraffic(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_CAN_GO_AGAINST_TRAFFIC>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DamageCarDoor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DAMAGE_CAR_DOOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetRandomCarInSphereNoSave(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CAR_IN_SPHERE_NO_SAVE>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::GetRandomCharInSphere(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;

	if (!PyArg_ParseTuple(args, "fffiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CHAR_IN_SPHERE>(var1, var2, var3, var4, var5, var6, var7, &var8);
	return Py_BuildValue("i", var8);
}

PyObject* PyOpcodes::HasCharBeenArrested(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_BEEN_ARRESTED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetPlaneThrottle(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLANE_THROTTLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HeliLandAtCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "fffffi", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::HELI_LAND_AT_COORDS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::PlaneStartsInAir(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PLANE_STARTS_IN_AIR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetRelationship(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_RELATIONSHIP>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::ClearRelationship(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_RELATIONSHIP>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::ClearGroupDecisionMakerEventResponse(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_GROUP_DECISION_MAKER_EVENT_RESPONSE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddGroupDecisionMakerEventResponse(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;
	float var5;
	float var6;
	float var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "iiffffiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_GROUP_DECISION_MAKER_EVENT_RESPONSE>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::DrawSpriteWithRotation(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;
	int var9;
	int var10;

	if (!PyArg_ParseTuple(args, "fffffiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_SPRITE_WITH_ROTATION>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10);
	return Py_True;
}

PyObject* PyOpcodes::TaskUseAttractor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_USE_ATTRACTOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskShootAtChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SHOOT_AT_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetInformRespectedFriends(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	int var3;

	if (!PyArg_ParseTuple(args, "fii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_INFORM_RESPECTED_FRIENDS>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsCharRespondingToEvent(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_RESPONDING_TO_EVENT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetObjectVisible(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_VISIBLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskFleeCharAnyMeans(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	int var4;
	int var5;
	int var6;
	int var7;
	float var8;

	if (!PyArg_ParseTuple(args, "ifiiiifi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FLEE_CHAR_ANY_MEANS>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::StopRecordingCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STOP_RECORDING_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ExtendPatrolRoute(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	char* var4;
	char* var5;

	if (!PyArg_ParseTuple(args, "ffssf", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::EXTEND_PATROL_ROUTE>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::PlayObjectAnim(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	char* var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ssfiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::PLAY_OBJECT_ANIM>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SetRadarZoom(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_RADAR_ZOOM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DoesBlipExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_BLIP_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::LoadPrices(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_PRICES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::LoadShop(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_SHOP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetNumberOfItemsInShop(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_NUMBER_OF_ITEMS_IN_SHOP>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::GetItemInShop(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_ITEM_IN_SHOP>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetPriceOfItem(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PRICE_OF_ITEM>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::TaskDead(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DEAD>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarAsMissionCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_AS_MISSION_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetZonePopulationType(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ZONE_POPULATION_TYPE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetZoneDealerStrength(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ZONE_DEALER_STRENGTH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetZoneDealerStrength(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_ZONE_DEALER_STRENGTH>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetZoneGangStrength(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iis", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ZONE_GANG_STRENGTH>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::GetZoneGangStrength(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_ZONE_GANG_STRENGTH>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::SetCharIsTargetPriority(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_IS_TARGET_PRIORITY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CustomPlateDesignForNextCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CUSTOM_PLATE_DESIGN_FOR_NEXT_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskGotoCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iifi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GOTO_CAR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::RequestIpl(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REQUEST_IPL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RemoveIpl(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_IPL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RemoveIplDiscreetly(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_IPL_DISCREETLY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharRelationship(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_RELATIONSHIP>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::ClearCharRelationship(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CHAR_RELATIONSHIP>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::ClearAllCharRelationships(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_ALL_CHAR_RELATIONSHIPS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCarPitch(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_PITCH>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::GetAreaVisible(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_AREA_VISIBLE>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::HeliKeepEntityInView(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "iiffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::HELI_KEEP_ENTITY_IN_VIEW>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::GetWeapontypeModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_WEAPONTYPE_MODEL>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetWeapontypeSlot(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_WEAPONTYPE_SLOT>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetShoppingExtraInfo(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_SHOPPING_EXTRA_INFO>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::GivePlayerClothes(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GIVE_PLAYER_CLOTHES>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetNumberOfFiresInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUMBER_OF_FIRES_IN_AREA>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::AttachWinchToHeli(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_WINCH_TO_HELI>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ReleaseEntityFromWinch(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::RELEASE_ENTITY_FROM_WINCH>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetTrainCarriage(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_TRAIN_CARRIAGE>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::GrabEntityOnWinch(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GRAB_ENTITY_ON_WINCH>(var1, &var2, &var3, &var4);
	return Py_BuildValue("iii", var2, var3, var4);
}

PyObject* PyOpcodes::GetNameOfItem(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NAME_OF_ITEM>(var1, var2);
	return Py_BuildValue("s", var2);
}

PyObject* PyOpcodes::TaskClimb(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CLIMB>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::BuyItem(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::BUY_ITEM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearCharTasksImmediately(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CHAR_TASKS_IMMEDIATELY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetRopeHeightForObject(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_ROPE_HEIGHT_FOR_OBJECT>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetRopeHeightForObject(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ROPE_HEIGHT_FOR_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GrabEntityOnRopeForObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GRAB_ENTITY_ON_ROPE_FOR_OBJECT>(var1, &var2, &var3, &var4);
	return Py_BuildValue("iii", var2, var3, var4);
}

PyObject* PyOpcodes::ReleaseEntityFromRopeForObject(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::RELEASE_ENTITY_FROM_ROPE_FOR_OBJECT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PerformSequenceTaskFromProgress(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::PERFORM_SEQUENCE_TASK_FROM_PROGRESS>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetNextDesiredMoveState(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_NEXT_DESIRED_MOVE_STATE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskGotoCharAiming(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GOTO_CHAR_AIMING>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetSequenceProgressRecursive(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_SEQUENCE_PROGRESS_RECURSIVE>(var1, &var2, &var3);
	return Py_BuildValue("ii", var2, var3);
}

PyObject* PyOpcodes::TaskKillCharOnFootTimed(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_KILL_CHAR_ON_FOOT_TIMED>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::GetNearestTagPosition(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NEAREST_TAG_POSITION>(var1, var2, var3, &var4, &var5, &var6);
	return Py_BuildValue("fff", var4, var5, var6);
}

PyObject* PyOpcodes::TaskJetpack(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_JETPACK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetArea51SamSite(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_AREA51_SAM_SITE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInAnySearchlight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_SEARCHLIGHT>(var1, &var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsTrailerAttachedToCab(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_TRAILER_ATTACHED_TO_CAB>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DetachTrailerFromCab(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DETACH_TRAILER_FROM_CAB>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetPlayerGroup(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PLAYER_GROUP>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetLoadedShop(PyObject* self, PyObject* args)
{
	char* var1;

	plugin::Command<plugin::Commands::GET_LOADED_SHOP>(var1);
	return Py_BuildValue("s", var1);
}

PyObject* PyOpcodes::GetBeatProximity(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_BEAT_PROXIMITY>(var1, &var2, &var3, &var4);
	return Py_BuildValue("iii", var2, var3, var4);
}

PyObject* PyOpcodes::SetGroupDefaultTaskAllocator(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GROUP_DEFAULT_TASK_ALLOCATOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerGroupRecruitment(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_GROUP_RECRUITMENT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ActivateHeliSpeedCheat(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ACTIVATE_HELI_SPEED_CHEAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskSetCharDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SET_CHAR_DECISION_MAKER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DeleteMissionTrain(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_MISSION_TRAIN>(var1);
	return Py_True;
}

PyObject* PyOpcodes::MarkMissionTrainAsNoLongerNeeded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_MISSION_TRAIN_AS_NO_LONGER_NEEDED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetBlipAlwaysDisplayOnZoomedRadar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_BLIP_ALWAYS_DISPLAY_ON_ZOOMED_RADAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RequestCarRecording(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REQUEST_CAR_RECORDING>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasCarRecordingBeenLoaded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CAR_RECORDING_BEEN_LOADED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectQuaternion(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_QUATERNION>(var1, &var2, &var3, &var4, &var5);
	return Py_BuildValue("ffff", var2, var3, var4, var5);
}

PyObject* PyOpcodes::SetObjectQuaternion(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ffffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_QUATERNION>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::GetVehicleQuaternion(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_VEHICLE_QUATERNION>(var1, &var2, &var3, &var4, &var5);
	return Py_BuildValue("ffff", var2, var3, var4, var5);
}

PyObject* PyOpcodes::SetVehicleQuaternion(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ffffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_QUATERNION>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::SetMissionTrainCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MISSION_TRAIN_COORDINATES>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskComplexPickupObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_COMPLEX_PICKUP_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ListenToPlayerGroupCommands(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::LISTEN_TO_PLAYER_GROUP_COMMANDS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerEnterCarButton(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_ENTER_CAR_BUTTON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskCharSlideToCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "fffffi", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CHAR_SLIDE_TO_COORD>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetCurrentDayOfWeek(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_CURRENT_DAY_OF_WEEK>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::RegisterScriptBrainForCodeUse(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_SCRIPT_BRAIN_FOR_CODE_USE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ApplyForceToCar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "ffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::APPLY_FORCE_TO_CAR>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::IsIntLvarEqualToIntVar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_INT_LVAR_EQUAL_TO_INT_VAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsFloatLvarEqualToFloatVar(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "ff", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_FLOAT_LVAR_EQUAL_TO_FLOAT_VAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::AddToCarRotationVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_TO_CAR_ROTATION_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetCarRotationVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ROTATION_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetCharShootRate(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_SHOOT_RATE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsModelInCdimage(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_MODEL_IN_CDIMAGE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::RemoveOilPuddlesInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_OIL_PUDDLES_IN_AREA>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetBlipAsFriendly(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_BLIP_AS_FRIENDLY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskSwimToCoord(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SWIM_TO_COORD>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetModelDimensions(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_MODEL_DIMENSIONS>(var1, &var2, &var3, &var4, &var5, &var6, &var7);
	return Py_BuildValue("ffffff", var2, var3, var4, var5, var6, var7);
}

PyObject* PyOpcodes::CopyCharDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::COPY_CHAR_DECISION_MAKER>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::CopyGroupDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::COPY_GROUP_DECISION_MAKER>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::TaskDrivePointRouteAdvanced(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ifiiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DRIVE_POINT_ROUTE_ADVANCED>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::IsRelationshipSet(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_RELATIONSHIP_SET>(var1, var2, var3);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCarAlwaysCreateSkids(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ALWAYS_CREATE_SKIDS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCityFromCoords(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CITY_FROM_COORDS>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::HasObjectOfTypeBeenSmashed(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_OBJECT_OF_TYPE_BEEN_SMASHED>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerPerformingWheelie(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_PERFORMING_WHEELIE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsPlayerPerformingStoppie(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_PERFORMING_STOPPIE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCheckpointCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHECKPOINT_COORDS>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::ControlCarHydraulics(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ffffi", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::CONTROL_CAR_HYDRAULICS>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::GetGroupSize(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_GROUP_SIZE>(var1, &var2, &var3);
	return Py_BuildValue("ii", var2, var3);
}

PyObject* PyOpcodes::SetObjectCollisionDamageEffect(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_COLLISION_DAMAGE_EFFECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarFollowCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_FOLLOW_CAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SwitchEntryExit(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_ENTRY_EXIT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DisplayTextWithFloat(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	char* var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fsfif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_TEXT_WITH_FLOAT>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::DoesGroupExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_GROUP_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GiveMeleeAttackToChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GIVE_MELEE_ATTACK_TO_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetCarHydraulics(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_HYDRAULICS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCameraFov(PyObject* self, PyObject* args)
{
	float var1;

	plugin::Command<plugin::Commands::GET_CAMERA_FOV>(&var1);
	return Py_BuildValue("f", var1);
}

PyObject* PyOpcodes::DoesCarHaveHydraulics(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_CAR_HAVE_HYDRAULICS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskCharSlideToCoordAndPlayAnim(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	char* var7;
	char* var8;
	float var9;
	int var10;
	int var11;
	int var12;
	int var13;
	int var14;

	if (!PyArg_ParseTuple(args, "fffffssfiiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12, &var13, &var14))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, var14);
	return Py_True;
}

PyObject* PyOpcodes::GetTotalNumberOfPedsKilledByPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_TOTAL_NUMBER_OF_PEDS_KILLED_BY_PLAYER>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetLevelDesignCoordsForObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_LEVEL_DESIGN_COORDS_FOR_OBJECT>(var1, var2, &var3, &var4, &var5);
	return Py_BuildValue("fff", var3, var4, var5);
}

PyObject* PyOpcodes::SaveTextLabelToDebugFile(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SAVE_TEXT_LABEL_TO_DEBUG_FILE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCharHighestPriorityEvent(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_HIGHEST_PRIORITY_EVENT>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetParkingNodeInArea(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	float var9;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PARKING_NODE_IN_AREA>(var1, var2, var3, var4, var5, var6, &var7, &var8, &var9);
	return Py_BuildValue("fff", var7, var8, var9);
}

PyObject* PyOpcodes::GetCarCharIsUsing(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_CHAR_IS_USING>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::TaskPlayAnimNonInterruptable(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	char* var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "ssfiiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_PLAY_ANIM_NON_INTERRUPTABLE>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::AddStuntJump(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	float var9;
	float var10;
	float var11;
	float var12;
	float var13;
	float var14;
	float var15;
	int var16;

	if (!PyArg_ParseTuple(args, "ffffffffffffffif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12, &var13, &var14, &var15, &var16))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_STUNT_JUMP>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, var14, var15, var16);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectCoordinatesAndVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_COORDINATES_AND_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetCharKindaStayInSamePlace(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_KINDA_STAY_IN_SAME_PLACE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskFollowPatrolRoute(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FOLLOW_PATROL_ROUTE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInAir(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_AIR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCharHeightAboveGround(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_HEIGHT_ABOVE_GROUND>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetCharWeaponSkill(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_WEAPON_SKILL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetTextEdge(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiiii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TEXT_EDGE>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::SetCarEngineBroken(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ENGINE_BROKEN>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsThisModelABoat(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_THIS_MODEL_A_BOAT>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsThisModelAPlane(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_THIS_MODEL_A_PLANE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsThisModelAHeli(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_THIS_MODEL_A_HELI>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetFirstPersonInCarCameraMode(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FIRST_PERSON_IN_CAR_CAMERA_MODE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskGreetPartner(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ifii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_GREET_PARTNER>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetHeliBladesFullSpeed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HELI_BLADES_FULL_SPEED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DisplayHud(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_HUD>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ConnectLods(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CONNECT_LODS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetMaxFireGenerations(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MAX_FIRE_GENERATIONS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskDieNamedAnim(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	char* var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ssfii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_DIE_NAMED_ANIM>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerDuckButton(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_DUCK_BUTTON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPoolTableCoords(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_POOL_TABLE_COORDS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::HasObjectBeenPhotographed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_OBJECT_BEEN_PHOTOGRAPHED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DoCameraBump(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "ff", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DO_CAMERA_BUMP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCurrentDate(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	plugin::Command<plugin::Commands::GET_CURRENT_DATE>(&var1, &var2);
	return Py_BuildValue("ii", var1, var2);
}

PyObject* PyOpcodes::SetObjectAnimSpeed(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	float var3;

	if (!PyArg_ParseTuple(args, "sfi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_ANIM_SPEED>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsObjectPlayingAnim(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_PLAYING_ANIM>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetObjectAnimCurrentTime(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	float var3;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_ANIM_CURRENT_TIME>(var1, var2, &var3);
	return Py_BuildValue("f", var3);
}

PyObject* PyOpcodes::SetObjectAnimCurrentTime(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	float var3;

	if (!PyArg_ParseTuple(args, "sfi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_ANIM_CURRENT_TIME>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetCharVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_VELOCITY>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetCharVelocity(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_VELOCITY>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::SetCharRotation(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_ROTATION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetCarUprightValue(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_UPRIGHT_VALUE>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetVehicleAreaVisible(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_AREA_VISIBLE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SelectWeaponsForVehicle(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SELECT_WEAPONS_FOR_VEHICLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCityPlayerIsIn(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CITY_PLAYER_IS_IN>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetNameOfZone(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	char* var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NAME_OF_ZONE>(var1, var2, var3, var4);
	return Py_BuildValue("s", var4);
}

PyObject* PyOpcodes::ActivateInteriorPeds(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ACTIVATE_INTERIOR_PEDS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetVehicleCanBeTargetted(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_CAN_BE_TARGETTED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskFollowFootsteps(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FOLLOW_FOOTSTEPS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DamageChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::DAMAGE_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetCarCanBeVisiblyDamaged(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_CAN_BE_VISIBLY_DAMAGED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetHeliReachedTargetDistance(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HELI_REACHED_TARGET_DISTANCE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetSoundLevelAtCoords(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_SOUND_LEVEL_AT_COORDS>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("f", var5);
}

PyObject* PyOpcodes::SetCharAllowedToDuck(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_ALLOWED_TO_DUCK>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetHeadingForAttachedPlayer(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ffi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HEADING_FOR_ATTACHED_PLAYER>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::TaskWalkAlongsideChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_WALK_ALONGSIDE_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateEmergencyServicesCar(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_EMERGENCY_SERVICES_CAR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::TaskKindaStayInSamePlace(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_KINDA_STAY_IN_SAME_PLACE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StartPlaybackRecordedCarLooped(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::START_PLAYBACK_RECORDED_CAR_LOOPED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharAreaVisible(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_AREA_VISIBLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsAttachedPlayerHeadingAchieved(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_ATTACHED_PLAYER_HEADING_ACHIEVED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::EnableEntryExitPlayerGroupWarping(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::ENABLE_ENTRY_EXIT_PLAYER_GROUP_WARPING>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetClosestStealableObject(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CLOSEST_STEALABLE_OBJECT>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::IsProceduralInteriorActive(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PROCEDURAL_INTERIOR_ACTIVE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ClearThisViewIntegerVariable(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_THIS_VIEW_INTEGER_VARIABLE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearThisViewFloatVariable(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_THIS_VIEW_FLOAT_VARIABLE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearThisIntegerWatchpoint(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_THIS_INTEGER_WATCHPOINT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ClearThisFloatWatchpoint(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_THIS_FLOAT_WATCHPOINT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SwitchStart(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	char* var4;
	int var5;
	char* var6;
	int var7;
	char* var8;
	int var9;
	char* var10;
	int var11;
	char* var12;
	int var13;
	char* var14;
	int var15;
	char* var16;
	int var17;
	char* var18;

	if (!PyArg_ParseTuple(args, "iisisisisisisisisi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12, &var13, &var14, &var15, &var16, &var17, &var18))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_START>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, var14, var15, var16, var17, var18);
	return Py_True;
}

PyObject* PyOpcodes::SwitchContinued(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	int var3;
	char* var4;
	int var5;
	char* var6;
	int var7;
	char* var8;
	int var9;
	char* var10;
	int var11;
	char* var12;
	int var13;
	char* var14;
	int var15;
	char* var16;
	int var17;
	char* var18;

	if (!PyArg_ParseTuple(args, "sisisisisisisisisi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12, &var13, &var14, &var15, &var16, &var17, &var18))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_CONTINUED>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, var14, var15, var16, var17, var18);
	return Py_True;
}

PyObject* PyOpcodes::RemoveCarRecording(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_CAR_RECORDING>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetZonePopulationRace(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ZONE_POPULATION_RACE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectOnlyDamagedByPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_ONLY_DAMAGED_BY_PLAYER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateBirds(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;

	if (!PyArg_ParseTuple(args, "fffffiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_BIRDS>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::SetVehicleDirtLevel(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_DIRT_LEVEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetGangWarsActive(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GANG_WARS_ACTIVE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GivePlayerClothesOutsideShop(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	char* var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ssii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GIVE_PLAYER_CLOTHES_OUTSIDE_SHOP>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetGroupSequence(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GROUP_SEQUENCE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharDropsWeaponsWhenDead(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_DROPS_WEAPONS_WHEN_DEAD>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharNeverLeavesGroup(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_NEVER_LEAVES_GROUP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerFireButton(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_FIRE_BUTTON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AttachFxSystemToCharBone(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_FX_SYSTEM_TO_CHAR_BONE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::RegisterAttractorScriptBrainForCodeUse(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_ATTRACTOR_SCRIPT_BRAIN_FOR_CODE_USE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ConstInt(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CONST_INT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ConstFloat(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CONST_FLOAT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetHeadingLimitForAttachedChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HEADING_LIMIT_FOR_ATTACHED_CHAR>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::AddBlipForDeadChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLIP_FOR_DEAD_CHAR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetDeadCharCoordinates(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_DEAD_CHAR_COORDINATES>(var1, &var2, &var3, &var4);
	return Py_BuildValue("fff", var2, var3, var4);
}

PyObject* PyOpcodes::TaskPlayAnimWithFlags(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	char* var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;
	int var10;
	int var11;

	if (!PyArg_ParseTuple(args, "ssfiiiiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_PLAY_ANIM_WITH_FLAGS>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11);
	return Py_True;
}

PyObject* PyOpcodes::SetVehicleAirResistanceMultiplier(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_AIR_RESISTANCE_MULTIPLIER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarCoordinatesNoOffset(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_COORDINATES_NO_OFFSET>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetUsesCollisionOfClosestObjectOfType(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffiif", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SetTimerBeepCountdownTime(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TIMER_BEEP_COUNTDOWN_TIME>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AttachTrailerToCab(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_TRAILER_TO_CAB>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsVehicleTouchingObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_VEHICLE_TOUCHING_OBJECT>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::EnableCraneControls(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ENABLE_CRANE_CONTROLS>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerInPositionForConversation(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_IN_POSITION_FOR_CONVERSATION>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::EnableConversation(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ENABLE_CONVERSATION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetRandomCharInSphereOnlyDrugsBuyers(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CHAR_IN_SPHERE_ONLY_DRUGS_BUYERS>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::GetPedType(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PED_TYPE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::TaskUseClosestMapAttractor(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	int var3;
	float var4;
	float var5;
	float var6;
	char* var7;

	if (!PyArg_ParseTuple(args, "fifffsi", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_USE_CLOSEST_MAP_ATTRACTOR>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::PlaneAttackPlayerUsingDogFight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::PLANE_ATTACK_PLAYER_USING_DOG_FIGHT>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::CanTriggerGangWarWhenOnAMission(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CAN_TRIGGER_GANG_WAR_WHEN_ON_A_MISSION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ControlMovableVehiclePart(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CONTROL_MOVABLE_VEHICLE_PART>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::WinchCanPickVehicleUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::WINCH_CAN_PICK_VEHICLE_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::OpenCarDoorABit(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ifi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::OPEN_CAR_DOOR_A_BIT>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsCarDoorFullyOpen(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_DOOR_FULLY_OPEN>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetAlwaysDraw3DMarkers(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ALWAYS_DRAW_3D_MARKERS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::StreamScript(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STREAM_SCRIPT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasStreamedScriptLoaded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_STREAMED_SCRIPT_LOADED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetGangWarsTrainingMission(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GANG_WARS_TRAINING_MISSION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharHasUsedEntryExit(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_HAS_USED_ENTRY_EXIT>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetCharMaxHealth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_MAX_HEALTH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetNightVision(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_NIGHT_VISION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetInfraredVision(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_INFRARED_VISION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetZoneForGangWarsTraining(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ZONE_FOR_GANG_WARS_TRAINING>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsGlobalVarBitSetConst(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_GLOBAL_VAR_BIT_SET_CONST>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsGlobalVarBitSetVar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_GLOBAL_VAR_BIT_SET_VAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsGlobalVarBitSetLvar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_GLOBAL_VAR_BIT_SET_LVAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsLocalVarBitSetConst(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_LOCAL_VAR_BIT_SET_CONST>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsLocalVarBitSetVar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_LOCAL_VAR_BIT_SET_VAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsLocalVarBitSetLvar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_LOCAL_VAR_BIT_SET_LVAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetGlobalVarBitConst(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GLOBAL_VAR_BIT_CONST>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetGlobalVarBitVar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GLOBAL_VAR_BIT_VAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetGlobalVarBitLvar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GLOBAL_VAR_BIT_LVAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetLocalVarBitConst(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_LOCAL_VAR_BIT_CONST>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetLocalVarBitVar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_LOCAL_VAR_BIT_VAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetLocalVarBitLvar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_LOCAL_VAR_BIT_LVAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearGlobalVarBitConst(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_GLOBAL_VAR_BIT_CONST>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearGlobalVarBitVar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_GLOBAL_VAR_BIT_VAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearGlobalVarBitLvar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_GLOBAL_VAR_BIT_LVAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearLocalVarBitConst(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_LOCAL_VAR_BIT_CONST>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearLocalVarBitVar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_LOCAL_VAR_BIT_VAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearLocalVarBitLvar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_LOCAL_VAR_BIT_LVAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharCanBeKnockedOffBike(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharCoordinatesDontWarpGang(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_COORDINATES_DONT_WARP_GANG>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::AddPriceModifier(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_PRICE_MODIFIER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RemovePriceModifier(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_PRICE_MODIFIER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::ExplodeCarInCutsceneShakeAndBits(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::EXPLODE_CAR_IN_CUTSCENE_SHAKE_AND_BITS>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetCutsceneOffset(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	plugin::Command<plugin::Commands::GET_CUTSCENE_OFFSET>(&var1, &var2, &var3);
	return Py_BuildValue("fff", var1, var2, var3);
}

PyObject* PyOpcodes::SetObjectScale(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_SCALE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCurrentPopulationZoneType(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_CURRENT_POPULATION_ZONE_TYPE>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::CreateMenu(PyObject* self, PyObject* args)
{
	char* var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffiiiis", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_MENU>(var1, var2, var3, var4, var5, var6, var7, var8, &var9);
	return Py_BuildValue("i", var9);
}

PyObject* PyOpcodes::SetMenuColumnOrientation(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MENU_COLUMN_ORIENTATION>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::GetMenuItemSelected(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_MENU_ITEM_SELECTED>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetMenuItemAccepted(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_MENU_ITEM_ACCEPTED>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::ActivateMenuItem(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ACTIVATE_MENU_ITEM>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::DeleteMenu(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DELETE_MENU>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetMenuColumn(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	char* var3;
	char* var4;
	char* var5;
	char* var6;
	char* var7;
	char* var8;
	char* var9;
	char* var10;
	char* var11;
	char* var12;
	char* var13;
	char* var14;
	char* var15;

	if (!PyArg_ParseTuple(args, "isssssssssssssi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12, &var13, &var14, &var15))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MENU_COLUMN>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, var14, var15);
	return Py_True;
}

PyObject* PyOpcodes::SetBlipEntryExit(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_BLIP_ENTRY_EXIT>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SwitchDeathPenalties(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_DEATH_PENALTIES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SwitchArrestPenalties(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_ARREST_PENALTIES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetExtraHospitalRestartPoint(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "fffff", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_EXTRA_HOSPITAL_RESTART_POINT>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::SetExtraPoliceStationRestartPoint(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "fffff", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_EXTRA_POLICE_STATION_RESTART_POINT>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::FindNumberTagsTagged(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::FIND_NUMBER_TAGS_TAGGED>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::GetTerritoryUnderControlPercentage(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_TERRITORY_UNDER_CONTROL_PERCENTAGE>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::IsObjectInAngledArea2D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_IN_ANGLED_AREA_2D>(var1, var2, var3, var4, var5, var6, var7);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsObjectInAngledArea3D(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffffffii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_IN_ANGLED_AREA_3D>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetRandomCharInSphereNoBrain(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CHAR_IN_SPHERE_NO_BRAIN>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::SetPlaneUndercarriageUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLANE_UNDERCARRIAGE_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DisableAllEntryExits(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISABLE_ALL_ENTRY_EXITS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AttachAnimsToModel(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_ANIMS_TO_MODEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectAsStealable(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_AS_STEALABLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCreateRandomGangMembers(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CREATE_RANDOM_GANG_MEMBERS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddSparks(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffffif", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SPARKS>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::GetVehicleClass(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_VEHICLE_CLASS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::ClearConversationForChar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_CONVERSATION_FOR_CHAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetMenuItemWithNumber(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	char* var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iisii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MENU_ITEM_WITH_NUMBER>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::SetMenuItemWith2Numbers(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	char* var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "iisiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MENU_ITEM_WITH_2_NUMBERS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::AppendToNextCutscene(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "ss", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::APPEND_TO_NEXT_CUTSCENE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetNameOfInfoZone(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	char* var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NAME_OF_INFO_ZONE>(var1, var2, var3, var4);
	return Py_BuildValue("s", var4);
}

PyObject* PyOpcodes::VehicleCanBeTargettedByHsMissile(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetFreebiesInVehicle(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FREEBIES_IN_VEHICLE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetScriptLimitToGangSize(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SCRIPT_LIMIT_TO_GANG_SIZE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetClothesItem(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CLOTHES_ITEM>(var1, var2, &var3, &var4);
	return Py_BuildValue("ii", var3, var4);
}

PyObject* PyOpcodes::ShowUpdateStats(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SHOW_UPDATE_STATS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCoordBlipAppearance(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_COORD_BLIP_APPEARANCE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetHeathazeEffect(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HEATHAZE_EFFECT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasObjectBeenDamagedByWeapon(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_OBJECT_BEEN_DAMAGED_BY_WEAPON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ClearObjectLastWeaponDamage(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_OBJECT_LAST_WEAPON_DAMAGE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerJumpButton(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_JUMP_BUTTON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetHudColour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_HUD_COLOUR>(var1, &var2, &var3, &var4, &var5);
	return Py_BuildValue("iiii", var2, var3, var4, var5);
}

PyObject* PyOpcodes::LockDoor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::LOCK_DOOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectMass(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_MASS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectMass(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_MASS>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetObjectTurnMass(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_TURN_MASS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectTurnMass(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_TURN_MASS>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetSpecificZoneToTriggerGangWar(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SPECIFIC_ZONE_TO_TRIGGER_GANG_WAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetActiveMenuItem(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ACTIVE_MENU_ITEM>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::MarkStreamedScriptAsNoLongerNeeded(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_STREAMED_SCRIPT_AS_NO_LONGER_NEEDED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RemoveStreamedScript(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_STREAMED_SCRIPT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::RegisterStreamedScript(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "si", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_STREAMED_SCRIPT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetMessageFormatting(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MESSAGE_FORMATTING>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::RegisterStreamedScriptInternal(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REGISTER_STREAMED_SCRIPT_INTERNAL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::WinchCanPickObjectUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::WINCH_CAN_PICK_OBJECT_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SwitchAudioZone(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_AUDIO_ZONE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarEngineOn(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_ENGINE_ON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCarLightsOn(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_LIGHTS_ON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetLatestConsoleCommand(PyObject* self, PyObject* args)
{
	char* var1;

	plugin::Command<plugin::Commands::GET_LATEST_CONSOLE_COMMAND>(var1);
	return Py_BuildValue("s", var1);
}

PyObject* PyOpcodes::GetUserOfClosestMapAttractor(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	char* var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffisf", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::GET_USER_OF_CLOSEST_MAP_ATTRACTOR>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::SwitchRoadsBackToOriginal(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_ROADS_BACK_TO_ORIGINAL>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SwitchPedRoadsBackToOriginal(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_PED_ROADS_BACK_TO_ORIGINAL>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::GetPlaneUndercarriagePosition(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PLANE_UNDERCARRIAGE_POSITION>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::CameraSetVectorTrack(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;

	if (!PyArg_ParseTuple(args, "fffffiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::CAMERA_SET_VECTOR_TRACK>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::CameraSetLerpFov(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fiif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CAMERA_SET_LERP_FOV>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SwitchAmbientPlanes(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_AMBIENT_PLANES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetDarknessEffect(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_DARKNESS_EFFECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetNumberOfInstancesOfStreamedScript(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::AllocateStreamedScriptToRandomPed(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::ALLOCATE_STREAMED_SCRIPT_TO_RANDOM_PED>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::AllocateStreamedScriptToObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iifii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::ALLOCATE_STREAMED_SCRIPT_TO_OBJECT>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::GetGroupMember(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_GROUP_MEMBER>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::GetWaterHeightAtCoords(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fif", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::GET_WATER_HEIGHT_AT_COORDS>(var1, var2, var3, &var4);
	return Py_BuildValue("f", var4);
}

PyObject* PyOpcodes::CameraPersistTrack(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CAMERA_PERSIST_TRACK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CameraPersistPos(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CAMERA_PERSIST_POS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CameraPersistFov(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CAMERA_PERSIST_FOV>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CameraSetVectorMove(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;

	if (!PyArg_ParseTuple(args, "fffffiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::CAMERA_SET_VECTOR_MOVE>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::DrawWindow(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	char* var5;
	int var6;

	if (!PyArg_ParseTuple(args, "fffsif", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_WINDOW>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::AttachCarToObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;

	if (!PyArg_ParseTuple(args, "iffffffi", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_CAR_TO_OBJECT>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::SetGarageResprayFree(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GARAGE_RESPRAY_FREE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharBulletproofVest(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_BULLETPROOF_VEST>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCinemaCamera(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CINEMA_CAMERA>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharFireDamageMultiplier(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_FIRE_DAMAGE_MULTIPLIER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetGroupFollowStatus(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GROUP_FOLLOW_STATUS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetSearchlightClipIfColliding(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SEARCHLIGHT_CLIP_IF_COLLIDING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HasPlayerBoughtItem(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_PLAYER_BOUGHT_ITEM>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCameraInFrontOfChar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAMERA_IN_FRONT_OF_CHAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetPlayerMaxArmour(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_PLAYER_MAX_ARMOUR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetCharUsesUpperbodyDamageAnimsOnly(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_USES_UPPERBODY_DAMAGE_ANIMS_ONLY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharSayContext(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_SAY_CONTEXT>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::AddExplosionVariableShake(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	float var5;

	if (!PyArg_ParseTuple(args, "ffiff", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_EXPLOSION_VARIABLE_SHAKE>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::AttachMissionAudioToChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_MISSION_AUDIO_TO_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::UpdatePickupMoneyPerDay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::UPDATE_PICKUP_MONEY_PER_DAY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetNameOfEntryExitCharUsed(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NAME_OF_ENTRY_EXIT_CHAR_USED>(var1, var2);
	return Py_BuildValue("s", var2);
}

PyObject* PyOpcodes::GetPositionOfEntryExitCharUsed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	float var5;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_POSITION_OF_ENTRY_EXIT_CHAR_USED>(var1, &var2, &var3, &var4, &var5);
	return Py_BuildValue("ffff", var2, var3, var4, var5);
}

PyObject* PyOpcodes::IsCharTalking(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_TALKING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DisableCharSpeech(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DISABLE_CHAR_SPEECH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::EnableCharSpeech(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ENABLE_CHAR_SPEECH>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetUpSkip(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_SKIP>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::PreloadBeatTrack(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PRELOAD_BEAT_TRACK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetBeatTrackStatus(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_BEAT_TRACK_STATUS>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::FindMaxNumberOfGroupMembers(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::FIND_MAX_NUMBER_OF_GROUP_MEMBERS>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::VehicleDoesProvideCover(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::VEHICLE_DOES_PROVIDE_COVER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateSnapshotPickup(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_SNAPSHOT_PICKUP>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::CreateHorseshoePickup(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_HORSESHOE_PICKUP>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::CreateOysterPickup(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_OYSTER_PICKUP>(var1, var2, var3, &var4);
	return Py_BuildValue("i", var4);
}

PyObject* PyOpcodes::HasObjectBeenUprooted(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_OBJECT_BEEN_UPROOTED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AddSmokeParticle(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	float var7;
	float var8;
	float var9;
	float var10;
	float var11;
	float var12;

	if (!PyArg_ParseTuple(args, "ffffffffffff", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_SMOKE_PARTICLE>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12);
	return Py_True;
}

PyObject* PyOpcodes::IsCharStuckUnderCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_STUCK_UNDER_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ControlCarDoor(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	float var4;

	if (!PyArg_ParseTuple(args, "iifi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CONTROL_CAR_DOOR>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::GetDoorAngleRatio(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_DOOR_ANGLE_RATIO>(var1, var2, &var3);
	return Py_BuildValue("f", var3);
}

PyObject* PyOpcodes::SetPlayerDisplayVitalStatsButton(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_DISPLAY_VITAL_STATS_BUTTON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharKeepTask(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_KEEP_TASK>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::CreateMenuGrid(PyObject* self, PyObject* args)
{
	char* var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "fffiiiis", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_MENU_GRID>(var1, var2, var3, var4, var5, var6, var7, var8, &var9);
	return Py_BuildValue("i", var9);
}

PyObject* PyOpcodes::IsCharSwimming(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_SWIMMING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCharSwimState(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_SWIM_STATE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::StartCharFacialTalk(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::START_CHAR_FACIAL_TALK>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::StopCharFacialTalk(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STOP_CHAR_FACIAL_TALK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsBigVehicle(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_BIG_VEHICLE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SwitchPoliceHelis(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_POLICE_HELIS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCurrentCarMod(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CURRENT_CAR_MOD>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::IsCarLowRider(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_LOW_RIDER>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarStreetRacer(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_STREET_RACER>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCharCoordinatesNoOffset(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_COORDINATES_NO_OFFSET>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::DoesScriptFireExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_SCRIPT_FIRE_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsEmergencyServicesVehicle(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_EMERGENCY_SERVICES_VEHICLE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::KillFxSystemNow(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::KILL_FX_SYSTEM_NOW>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsObjectWithinBrainActivationRange(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::CopySharedCharDecisionMaker(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::COPY_SHARED_CHAR_DECISION_MAKER>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::ReportMissionAudioEventAtPosition(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::REPORT_MISSION_AUDIO_EVENT_AT_POSITION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::ReportMissionAudioEventAtObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REPORT_MISSION_AUDIO_EVENT_AT_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AttachMissionAudioToObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_MISSION_AUDIO_TO_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetNumCarColours(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_NUM_CAR_COLOURS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::ExtinguishFireAtPoint(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::EXTINGUISH_FIRE_AT_POINT>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::HasTrainDerailed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_TRAIN_DERAILED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharForceDieInCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_FORCE_DIE_IN_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetOnlyCreateGangMembers(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ONLY_CREATE_GANG_MEMBERS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetObjectModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_OBJECT_MODEL>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetCharUsesCollisionClosestObjectOfType(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "fffiiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_USES_COLLISION_CLOSEST_OBJECT_OF_TYPE>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::GetCarBlockingCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_BLOCKING_CAR>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GetCurrentVehiclePaintjob(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CURRENT_VEHICLE_PAINTJOB>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetHelpMessageBoxSize(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HELP_MESSAGE_BOX_SIZE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetGunshotSenseRangeForRiot2(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_GUNSHOT_SENSE_RANGE_FOR_RIOT2>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetCarMovingComponentOffset(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_MOVING_COMPONENT_OFFSET>(var1, &var2);
	return Py_BuildValue("f", var2);
}

PyObject* PyOpcodes::SetNamedEntryExitFlag(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iis", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_NAMED_ENTRY_EXIT_FLAG>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::PauseCurrentBeatTrack(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::PAUSE_CURRENT_BEAT_TRACK>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerCycleWeaponButton(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_CYCLE_WEAPON_BUTTON>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::MarkRoadNodeAsDontWander(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::MARK_ROAD_NODE_AS_DONT_WANDER>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetCheckpointHeading(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHECKPOINT_HEADING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetMissionRespectTotal(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MISSION_RESPECT_TOTAL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AwardPlayerMissionRespect(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::AWARD_PLAYER_MISSION_RESPECT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCarCollision(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAR_COLLISION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ChangePlaybackToUseAi(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CHANGE_PLAYBACK_TO_USE_AI>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CameraSetShakeSimulationSimple(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "ffi", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::CAMERA_SET_SHAKE_SIMULATION_SIMPLE>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetCreateRandomCops(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CREATE_RANDOM_COPS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskSetIgnoreWeaponRangeFlag(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_SET_IGNORE_WEAPON_RANGE_FLAG>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskPickUpSecondObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;
	char* var8;
	char* var9;
	int var10;

	if (!PyArg_ParseTuple(args, "ifffiissii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_PICK_UP_SECOND_OBJECT>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10);
	return Py_True;
}

PyObject* PyOpcodes::DropSecondObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DROP_SECOND_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RemoveObjectElegantly(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_OBJECT_ELEGANTLY>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DrawCrosshair(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_CROSSHAIR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetUpConversationNodeWithSpeech(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;
	char* var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ssiiis", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_CONVERSATION_NODE_WITH_SPEECH>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::ShowBlipsOnAllLevels(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SHOW_BLIPS_ON_ALL_LEVELS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharDruggedUp(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_DRUGGED_UP>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharHeadMissing(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_HEAD_MISSING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetHashKey(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_HASH_KEY>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetUpConversationEndNodeWithSpeech(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_CONVERSATION_END_NODE_WITH_SPEECH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RandomPassengerSay(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::RANDOM_PASSENGER_SAY>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::HideAllFrontendBlips(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HIDE_ALL_FRONTEND_BLIPS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerInCarCameraMode(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_IN_CAR_CAMERA_MODE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharInAnyTrain(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_TRAIN>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetUpSkipAfterMission(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_SKIP_AFTER_MISSION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetVehicleIsConsideredByPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetRandomCarModelInMemory(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CAR_MODEL_IN_MEMORY>(var1, &var2, &var3);
	return Py_BuildValue("ii", var2, var3);
}

PyObject* PyOpcodes::GetCarDoorLockStatus(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_DOOR_LOCK_STATUS>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetClosestEntryExitFlag(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffiif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CLOSEST_ENTRY_EXIT_FLAG>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::SetCharSignalAfterKill(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_SIGNAL_AFTER_KILL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetCharWantedByPolice(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_WANTED_BY_POLICE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetZoneNoCops(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_ZONE_NO_COPS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AddBlood(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;
	int var8;

	if (!PyArg_ParseTuple(args, "fffffiif", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_BLOOD>(var1, var2, var3, var4, var5, var6, var7, var8);
	return Py_True;
}

PyObject* PyOpcodes::DisplayCarNames(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_CAR_NAMES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DisplayZoneNames(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_ZONE_NAMES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCarDoorDamaged(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_DOOR_DAMAGED>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCharCoordinatesDontWarpGangNoOffset(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_COORDINATES_DONT_WARP_GANG_NO_OFFSET>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::SetMinigameInProgress(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MINIGAME_IN_PROGRESS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetForceRandomCarModel(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_FORCE_RANDOM_CAR_MODEL>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetRandomCarOfTypeInAngledAreaNoSave(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	int var6;
	int var7;

	if (!PyArg_ParseTuple(args, "ffffif", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CAR_OF_TYPE_IN_ANGLED_AREA_NO_SAVE>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::AddNextMessageToPreviousBriefs(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCopVehicleInArea3DNoSave(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE>(var1, var2, var3, var4, var5, var6);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetPetrolTankWeakpoint(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PETROL_TANK_WEAKPOINT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharUsingMapAttractor(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_USING_MAP_ATTRACTOR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetPlayerModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_MODEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::RemoveCharFromCarMaintainPosition(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetObjectProofs(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "iiiiii", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_OBJECT_PROOFS>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::IsCarTouchingCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CAR_TOUCHING_CAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DoesObjectHaveThisModel(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_OBJECT_HAVE_THIS_MODEL>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetTrainForcedToSlowDown(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_TRAIN_FORCED_TO_SLOW_DOWN>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsVehicleOnAllWheels(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_VEHICLE_ON_ALL_WHEELS>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DoesPickupExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_PICKUP_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::EnableAmbientCrime(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ENABLE_AMBIENT_CRIME>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharSayContextImportant(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "iiiii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_SAY_CONTEXT_IMPORTANT>(var1, var2, var3, var4, var5, &var6);
	return Py_BuildValue("i", var6);
}

PyObject* PyOpcodes::SetCharSayScript(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "iiiii", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_SAY_SCRIPT>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::ForceInteriorLightingForPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::FORCE_INTERIOR_LIGHTING_FOR_PLAYER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::Disable2NdPadForDebug(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISABLE_2ND_PAD_FOR_DEBUG>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsMoneyPickupAtCoords(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_MONEY_PICKUP_AT_COORDS>(var1, var2, var3);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetMenuColumnWidth(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_MENU_COLUMN_WIDTH>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::MakeRoomInPlayerGangForMissionPeds(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::MAKE_ROOM_IN_PLAYER_GANG_FOR_MISSION_PEDS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsCharGettingInToACar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_GETTING_IN_TO_A_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetUpSkipForSpecificVehicle(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_SKIP_FOR_SPECIFIC_VEHICLE>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::GetCarModelValue(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CAR_MODEL_VALUE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::CreateCarGeneratorWithPlate(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;
	int var10;
	int var11;
	int var12;
	char* var13;
	int var14;

	if (!PyArg_ParseTuple(args, "fffiiiiiiiisf", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9, &var10, &var11, &var12, &var13))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_CAR_GENERATOR_WITH_PLATE>(var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, &var14);
	return Py_BuildValue("i", var14);
}

PyObject* PyOpcodes::FindTrainDirection(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FIND_TRAIN_DIRECTION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetAircraftCarrierSamSite(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_AIRCRAFT_CARRIER_SAM_SITE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DrawLightWithRange(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;
	int var6;
	float var7;

	if (!PyArg_ParseTuple(args, "ffiiiff", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_LIGHT_WITH_RANGE>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::EnableBurglaryHouses(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ENABLE_BURGLARY_HOUSES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerControlOn(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_CONTROL_ON>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCharAreaVisible(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_CHAR_AREA_VISIBLE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::GiveNonPlayerCarNitro(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GIVE_NON_PLAYER_CAR_NITRO>(var1);
	return Py_True;
}

PyObject* PyOpcodes::PlayerTakeOffGoggles(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::PLAYER_TAKE_OFF_GOGGLES>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AllowFixedCameraCollision(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ALLOW_FIXED_CAMERA_COLLISION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasCharSpottedCharInFront(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CHAR_SPOTTED_CHAR_IN_FRONT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ForceBigMessageAndCounter(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FORCE_BIG_MESSAGE_AND_COUNTER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetVehicleCameraTweak(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "fffi", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::SET_VEHICLE_CAMERA_TWEAK>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::ReportMissionAudioEventAtChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REPORT_MISSION_AUDIO_EVENT_AT_CHAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::DoesDecisionMakerExist(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DOES_DECISION_MAKER_EXIST>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IgnoreHeightDifferenceFollowingNodes(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::IGNORE_HEIGHT_DIFFERENCE_FOLLOWING_NODES>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ShutAllCharsUp(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SHUT_ALL_CHARS_UP>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCharGetOutUpsideDownCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ReportMissionAudioEventAtCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::REPORT_MISSION_AUDIO_EVENT_AT_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::GetCurrentLanguage(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_CURRENT_LANGUAGE>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::IsObjectIntersectingWorld(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_OBJECT_INTERSECTING_WORLD>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetStringWidth(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_STRING_WIDTH>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::ResetVehicleHydraulics(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::RESET_VEHICLE_HYDRAULICS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetRespawnPointForDurationOfMission(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;

	if (!PyArg_ParseTuple(args, "fff", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_RESPAWN_POINT_FOR_DURATION_OF_MISSION>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::IsThisModelACar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_THIS_MODEL_A_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SwitchOnGroundSearchlight(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_ON_GROUND_SEARCHLIGHT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsNextStationAllowed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_NEXT_STATION_ALLOWED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SkipToNextAllowedStation(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SKIP_TO_NEXT_ALLOWED_STATION>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetStringWidthWithNumber(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::GET_STRING_WIDTH_WITH_NUMBER>(var1, var2, &var3);
	return Py_BuildValue("i", var3);
}

PyObject* PyOpcodes::ShutCharUpForScriptedSpeech(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SHUT_CHAR_UP_FOR_SCRIPTED_SPEECH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::EnableDisabledAttractorsOnObject(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ENABLE_DISABLED_ATTRACTORS_ON_OBJECT>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::LoadSceneInDirection(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;

	if (!PyArg_ParseTuple(args, "ffff", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::LOAD_SCENE_IN_DIRECTION>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerUsingJetpack(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_USING_JETPACK>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ClearThisPrintBigNow(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_THIS_PRINT_BIG_NOW>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IncrementIntStatNoMessage(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::INCREMENT_INT_STAT_NO_MESSAGE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetExtraCarColours(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::SET_EXTRA_CAR_COLOURS>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::GetExtraCarColours(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::GET_EXTRA_CAR_COLOURS>(var1, &var2, &var3);
	return Py_BuildValue("ii", var2, var3);
}

PyObject* PyOpcodes::SetNoResprays(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_NO_RESPRAYS>(var1);
	return Py_True;
}

PyObject* PyOpcodes::HasCarBeenResprayed(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::HAS_CAR_BEEN_RESPRAYED>(var1);
	return Py_True;
}

PyObject* PyOpcodes::AttachMissionAudioToCar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::ATTACH_MISSION_AUDIO_TO_CAR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetHasBeenOwnedForCarGenerator(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_HAS_BEEN_OWNED_FOR_CAR_GENERATOR>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetUpConversationNodeWithScriptedSpeech(PyObject* self, PyObject* args)
{
	char* var1;
	char* var2;
	char* var3;
	int var4;
	int var5;
	int var6;

	if (!PyArg_ParseTuple(args, "ssiiis", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_CONVERSATION_NODE_WITH_SCRIPTED_SPEECH>(var1, var2, var3, var4, var5, var6);
	return Py_True;
}

PyObject* PyOpcodes::SetAreaName(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_AREA_NAME>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskPlayAnimSecondary(PyObject* self, PyObject* args)
{
	int var1;
	char* var2;
	char* var3;
	float var4;
	int var5;
	int var6;
	int var7;
	int var8;
	int var9;

	if (!PyArg_ParseTuple(args, "ssfiiiiii", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8, &var9))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_PLAY_ANIM_SECONDARY>(var1, var2, var3, var4, var5, var6, var7, var8, var9);
	return Py_True;
}

PyObject* PyOpcodes::IsCharTouchingChar(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_TOUCHING_CHAR>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DisableHeliAudio(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::DISABLE_HELI_AUDIO>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TaskHandGesture(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_HAND_GESTURE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::TakePhoto(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::TAKE_PHOTO>(var1);
	return Py_True;
}

PyObject* PyOpcodes::IncrementFloatStatNoMessage(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::INCREMENT_FLOAT_STAT_NO_MESSAGE>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerGroupToFollowAlways(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ImproveCarByCheating(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::IMPROVE_CAR_BY_CHEATING>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ChangeCarColourFromMenu(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;
	int var4;

	if (!PyArg_ParseTuple(args, "iiii", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CHANGE_CAR_COLOUR_FROM_MENU>(var1, var2, var3, var4);
	return Py_True;
}

PyObject* PyOpcodes::HighlightMenuItem(PyObject* self, PyObject* args)
{
	int var1;
	int var2;
	int var3;

	if (!PyArg_ParseTuple(args, "iii", &var1, &var2, &var3))
		return Py_False;

	plugin::Command<plugin::Commands::HIGHLIGHT_MENU_ITEM>(var1, var2, var3);
	return Py_True;
}

PyObject* PyOpcodes::SetDisableMilitaryZones(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_DISABLE_MILITARY_ZONES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetCameraPositionUnfixed(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	if (!PyArg_ParseTuple(args, "ff", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_CAMERA_POSITION_UNFIXED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetDeathWeaponsPersist(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_DEATH_WEAPONS_PERSIST>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::SetSwimSpeed(PyObject* self, PyObject* args)
{
	int var1;
	float var2;

	if (!PyArg_ParseTuple(args, "fi", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SWIM_SPEED>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsPlayerClimbing(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_PLAYER_CLIMBING>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsThisHelpMessageBeingDisplayed(PyObject* self, PyObject* args)
{
	char* var1;

	if (!PyArg_ParseTuple(args, "s", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_THIS_HELP_MESSAGE_BEING_DISPLAYED>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DrawSubtitlesBeforeFade(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_SUBTITLES_BEFORE_FADE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DrawOddjobTitleBeforeFade(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DRAW_ODDJOB_TITLE_BEFORE_FADE>(var1);
	return Py_True;
}

PyObject* PyOpcodes::TaskFollowPathNodesToCoordWithRadius(PyObject* self, PyObject* args)
{
	int var1;
	float var2;
	float var3;
	float var4;
	int var5;
	int var6;
	float var7;

	if (!PyArg_ParseTuple(args, "fffiifi", &var1, &var2, &var3, &var4, &var5, &var6, &var7))
		return Py_False;

	plugin::Command<plugin::Commands::TASK_FOLLOW_PATH_NODES_TO_COORD_WITH_RADIUS>(var1, var2, var3, var4, var5, var6, var7);
	return Py_True;
}

PyObject* PyOpcodes::SetPhotoCameraEffect(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PHOTO_CAMERA_EFFECT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::FixCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FIX_CAR>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetPlayerGroupToFollowNever(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_PLAYER_GROUP_TO_FOLLOW_NEVER>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::IsCharAttachedToAnyCar(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_CHAR_ATTACHED_TO_ANY_CAR>(var1);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::StoreCarCharIsAttachedToNoSave(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::STORE_CAR_CHAR_IS_ATTACHED_TO_NO_SAVE>(var1, &var2);
	return Py_BuildValue("i", var2);
}

PyObject* PyOpcodes::SetUpSkipForVehicleFinishedByScript(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	int var5;

	if (!PyArg_ParseTuple(args, "fffif", &var1, &var2, &var3, &var4, &var5))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_SKIP_FOR_VEHICLE_FINISHED_BY_SCRIPT>(var1, var2, var3, var4, var5);
	return Py_True;
}

PyObject* PyOpcodes::ForceAllVehicleLightsOff(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::FORCE_ALL_VEHICLE_LIGHTS_OFF>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetPlayerInCarCameraMode(PyObject* self, PyObject* args)
{
	int var1;

	plugin::Command<plugin::Commands::GET_PLAYER_IN_CAR_CAMERA_MODE>(&var1);
	return Py_BuildValue("i", var1);
}

PyObject* PyOpcodes::IsLastBuildingModelShotByPlayer(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	int result = plugin::Command<plugin::Commands::IS_LAST_BUILDING_MODEL_SHOT_BY_PLAYER>(var1, var2);
	return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::ClearLastBuildingModelShotByPlayer(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::CLEAR_LAST_BUILDING_MODEL_SHOT_BY_PLAYER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetUpConversationEndNodeWithScriptedSpeech(PyObject* self, PyObject* args)
{
	char* var1;
	int var2;

	if (!PyArg_ParseTuple(args, "is", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SET_UP_CONVERSATION_END_NODE_WITH_SCRIPTED_SPEECH>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::ActivatePimpCheat(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ACTIVATE_PIMP_CHEAT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetRandomCharInAreaOffsetNoSave(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float var6;
	int var7;

	if (!PyArg_ParseTuple(args, "ffffff", &var1, &var2, &var3, &var4, &var5, &var6))
		return Py_False;

	plugin::Command<plugin::Commands::GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE>(var1, var2, var3, var4, var5, var6, &var7);
	return Py_BuildValue("i", var7);
}

PyObject* PyOpcodes::SetScriptCoopGame(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_SCRIPT_COOP_GAME>(var1);
	return Py_True;
}

PyObject* PyOpcodes::CreateUser3DMarker(PyObject* self, PyObject* args)
{
	float var1;
	float var2;
	float var3;
	int var4;
	int var5;

	if (!PyArg_ParseTuple(args, "ffif", &var1, &var2, &var3, &var4))
		return Py_False;

	plugin::Command<plugin::Commands::CREATE_USER_3D_MARKER>(var1, var2, var3, var4, &var5);
	return Py_BuildValue("i", var5);
}

PyObject* PyOpcodes::RemoveUser3DMarker(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::REMOVE_USER_3D_MARKER>(var1);
	return Py_True;
}

PyObject* PyOpcodes::DisplayNonMinigameHelpMessages(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::DISPLAY_NON_MINIGAME_HELP_MESSAGES>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SetRailtrackResistanceMult(PyObject* self, PyObject* args)
{
	float var1;

	if (!PyArg_ParseTuple(args, "f", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::SET_RAILTRACK_RESISTANCE_MULT>(var1);
	return Py_True;
}

PyObject* PyOpcodes::SwitchObjectBrains(PyObject* self, PyObject* args)
{
	int var1;
	int var2;

	if (!PyArg_ParseTuple(args, "ii", &var1, &var2))
		return Py_False;

	plugin::Command<plugin::Commands::SWITCH_OBJECT_BRAINS>(var1, var2);
	return Py_True;
}

PyObject* PyOpcodes::AllowPauseInWidescreen(PyObject* self, PyObject* args)
{
	int var1;

	if (!PyArg_ParseTuple(args, "i", &var1))
		return Py_False;

	plugin::Command<plugin::Commands::ALLOW_PAUSE_IN_WIDESCREEN>(var1);
	return Py_True;
}

PyObject* PyOpcodes::GetPcMouseMovement(PyObject* self, PyObject* args)
{
	float var1;
	float var2;

	plugin::Command<plugin::Commands::GET_PC_MOUSE_MOVEMENT>(&var1, &var2);
	return Py_BuildValue("ff", var1, var2);
}


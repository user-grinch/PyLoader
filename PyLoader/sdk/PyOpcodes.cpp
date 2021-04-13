#include "PyOpcodes.h"

PyObject* PyOpcodes::CarWanderRandomly(PyObject* self, PyObject* args)
{
    int hcar = NULL;

    if (!PyArg_ParseTuple(args, "i", &hcar))
        return Py_False;

    plugin::Command<plugin::Commands::CAR_WANDER_RANDOMLY>(hcar);
    return Py_True;
}

PyObject* PyOpcodes::StoreCarCharIsIn(PyObject* self, PyObject* args)
{
    int hchar = NULL, hcar = NULL;

    if (!PyArg_ParseTuple(args, "i", &hchar))
        return Py_False;

    plugin::Command<plugin::Commands::STORE_CAR_CHAR_IS_IN>(hchar, &hcar);
    return Py_BuildValue("i", hcar);
}

PyObject* PyOpcodes::IsCharInCar(PyObject* self, PyObject* args)
{
    int hchar = NULL, hcar = NULL, result = NULL;

    if (!PyArg_ParseTuple(args, "ii", &hchar, &hcar))
        return Py_False;

    result = plugin::Command<plugin::Commands::IS_CHAR_IN_CAR>(hchar, hcar);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInModel(PyObject* self, PyObject* args)
{
    int hchar = NULL, model = NULL, result = NULL;

    if (!PyArg_ParseTuple(args, "ii", &hchar, &model))
        return Py_False;

    result = plugin::Command<plugin::Commands::IS_CHAR_IN_MODEL>(hchar, model);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInAnyCar(PyObject* self, PyObject* args)
{
    int hchar = NULL;

    if (!PyArg_ParseTuple(args, "i", &hchar))
        return Py_False;

    return Py_BuildValue("i", plugin::Command<plugin::Commands::IS_CHAR_IN_ANY_CAR>(hchar));
}

PyObject* PyOpcodes::CarSetIdle(PyObject* self, PyObject* args)
{
    int hcar = NULL;

    if (!PyArg_ParseTuple(args, "i", &hcar))
        return Py_False;

    plugin::Command<plugin::Commands::CAR_SET_IDLE>(hcar);
    return Py_True;
}

PyObject* PyOpcodes::MissionHasFinished(PyObject* self, PyObject* args)
{
    plugin::Command<plugin::Commands::MISSION_HAS_FINISHED>();
    return Py_True;
}

PyObject* PyOpcodes::CarGotoCoordinates(PyObject* self, PyObject* args)
{
    int hcar = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "ifff", &hcar, &coord.x, &coord.y, &coord.z))
        return Py_False;

    plugin::Command<plugin::Commands::CAR_GOTO_COORDINATES>(hcar, coord.x, coord.y, &coord.z);
    return Py_True;
}

PyObject* PyOpcodes::SetCarCruiseSpeed(PyObject* self, PyObject* args)
{
    int hcar = NULL;
    float speed = NULL;

    if (!PyArg_ParseTuple(args, "if", &hcar, &speed))
        return Py_False;

    plugin::Command<plugin::Commands::SET_CAR_CRUISE_SPEED>(hcar,speed);
    return Py_True;
}

PyObject* PyOpcodes::SetCarDrivingStyle(PyObject* self, PyObject* args)
{
    int hcar = NULL;
    int style = NULL;

    if (!PyArg_ParseTuple(args, "ii", &hcar, &style))
        return Py_False;

    plugin::Command<plugin::Commands::SET_CAR_DRIVING_STYLE>(hcar, style);
    return Py_True;
}

PyObject* PyOpcodes::SetCarMission(PyObject* self, PyObject* args)
{
    int hcar = NULL;
    int mission = NULL;

    if (!PyArg_ParseTuple(args, "ii", &hcar, &mission))
        return Py_False;

    plugin::Command<plugin::Commands::SET_CAR_MISSION>(hcar, mission);
    return Py_True;
}

PyObject* PyOpcodes::IsButtonPressed(PyObject* self, PyObject* args)
{
    int pad1 = NULL, pad2 = NULL, result;

    if (!PyArg_ParseTuple(args, "ii", &pad1, &pad2))
        return Py_False;

    result = plugin::Command<plugin::Commands::IS_BUTTON_PRESSED>(pad1, pad2);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetPadState(PyObject* self, PyObject* args)
{
    int pad1 = NULL, pad2 = NULL, result = NULL;

    if (!PyArg_ParseTuple(args, "ii", &pad1, &pad2))
        return Py_False;

    plugin::Command<plugin::Commands::GET_PAD_STATE>(pad1, pad2, &result);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCharInArea2d(PyObject* self, PyObject* args)
{
    int hchar = NULL;
    CVector2D from, to;

    if (!PyArg_ParseTuple(args, "iffff", &hchar, &from.x, &from.y, &to.x, &to.y))
        return Py_False;

    return Py_BuildValue("i", plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_2D>(hchar, from.x, from.y, to.x, to.y));
}

PyObject* PyOpcodes::IsCharInArea3d(PyObject* self, PyObject* args)
{
    int hchar = NULL, result;
    CVector from, to;

    if (!PyArg_ParseTuple(args, "iffffff", &hchar, &from.x, &from.y, &from.z, &to.x, &to.y, &to.z))
        return Py_False;

    result = plugin::Command<plugin::Commands::IS_CHAR_IN_AREA_3D>(hchar, from.x, from.y, from.z, to.x, to.y, to.z);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarInArea2d(PyObject* self, PyObject* args)
{
    int hcar = NULL, result = NULL;
    CVector2D from, to;

    if (!PyArg_ParseTuple(args, "iffff", &hcar, &from.x, &from.y, &to.x, &to.y))
        return Py_False;

    result = plugin::Command<plugin::Commands::IS_CAR_IN_AREA_2D>(hcar, from.x, from.y, to.x, to.y);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsCarInArea3d(PyObject* self, PyObject* args)
{
    int hcar = NULL, result = NULL;
    CVector from, to;

    if (!PyArg_ParseTuple(args, "iffffff", &hcar, &from.x, &from.y, &from.z, &to.x, &to.y, &to.z))
        return Py_False;

    result = plugin::Command<plugin::Commands::IS_CAR_IN_AREA_3D>(hcar, from.x, from.y, from.z, to.x, to.y, to.z);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LocateCharAnyMeans3d(PyObject* self, PyObject* args)
{
    int hchar = NULL, result = NULL, sphere = NULL;
    CVector coord, radius;

    if (!PyArg_ParseTuple(args, "iffffff", &hchar, &coord.x, &coord.y, &coord.z, &radius.x, &radius.y, &radius.z))
        return Py_False;

    result = plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_3D>(hchar, coord.x, coord.y, coord.z, radius.x, radius.y, radius.z, &sphere);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LocateCharAnyMeans2d(PyObject* self, PyObject* args)
{
    int hchar = NULL, result = NULL, sphere = NULL;
    CVector2D coord, radius;

    if (!PyArg_ParseTuple(args, "iffffi", &hchar, &coord.x, &coord.y, &radius.x, &radius.y, &sphere))
        return Py_False;

    result = plugin::Command<plugin::Commands::LOCATE_CHAR_ANY_MEANS_2D>(hchar, coord.x, coord.y, radius.x, radius.y, sphere);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LocateCharInCar3d(PyObject* self, PyObject* args)
{
    int hchar = NULL, result = NULL, sphere = NULL;
    CVector coord, radius;

    if (!PyArg_ParseTuple(args, "iffffff", &hchar, &coord.x, &coord.y, &coord.z, &radius.x, &radius.y, &radius.z))
        return Py_False;

    result = plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_3D>(hchar, coord.x, coord.y, coord.z, radius.x, radius.y, radius.z, &sphere);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LocateCharInCar2d(PyObject* self, PyObject* args)
{
    int hchar = NULL, result = NULL, sphere = NULL;
    CVector2D coord, radius;

    if (!PyArg_ParseTuple(args, "iffffi", &hchar, &coord.x, &coord.y, &radius.x, &radius.y, &sphere))
        return Py_False;

    result = plugin::Command<plugin::Commands::LOCATE_CHAR_IN_CAR_2D>(hchar, coord.x, coord.y, radius.x, radius.y, sphere);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LocateCharOnFoot2d(PyObject* self, PyObject* args)
{
    int hchar = NULL, result = NULL;
    CVector2D coord;

    if (!PyArg_ParseTuple(args, "iff", &hchar, &coord.x, &coord.y))
        return Py_False;

    result = plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_2D>(hchar, coord.x, coord.y);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::LocateCharOnFoot3d(PyObject* self, PyObject* args)
{
    int hchar = NULL, result = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "ifff", &hchar, &coord.x, &coord.y, &coord.z))
        return Py_False;

    result = plugin::Command<plugin::Commands::LOCATE_CHAR_ON_FOOT_3D>(hchar, coord.x, coord.y, &coord.z);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DisplayHud(PyObject *self, PyObject *args)
{
    int state;
    if (!PyArg_ParseTuple(args,"i", &state)) 
        return Py_False;                               
    
    plugin::Command<plugin::Commands::DISPLAY_HUD>(state);
    return Py_True;
}

PyObject* PyOpcodes::CreateCar(PyObject *self, PyObject *args)
{
    int model, hveh = NULL;
    CVector coord;
 
    if (!PyArg_ParseTuple(args,"ifff", &model, &coord.x, &coord.y, &coord.z))
        return NULL;                               
    
    plugin::Command<plugin::Commands::CREATE_CAR>(model, coord.x, coord.y, coord.z, &hveh);
    return PyLong_FromLong(hveh);
}

PyObject* PyOpcodes::CreateChar(PyObject* self, PyObject* args)
{
    int ped_type, model, hveh = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "iifff",&ped_type, &model, &coord.x, &coord.y, &coord.z))
        return NULL;

    plugin::Command<plugin::Commands::CREATE_CHAR>(ped_type, model, coord.x, coord.y, coord.z, &hveh);
    return PyLong_FromLong(hveh);
}

PyObject* PyOpcodes::CreateObject(PyObject* self, PyObject* args)
{
    int model, hveh = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "ifff", &model, &coord.x, &coord.y, &coord.z))
        return NULL;

    plugin::Command<plugin::Commands::CREATE_OBJECT>(model, coord.x, coord.y, coord.z, &hveh);
    return PyLong_FromLong(hveh);
}

PyObject* PyOpcodes::DeleteChar(PyObject* self, PyObject* args)
{
    int hanlde = NULL;

    if (!PyArg_ParseTuple(args, "i", &hanlde))
        return Py_False;

    plugin::Command<plugin::Commands::DELETE_CHAR>(hanlde);
    return Py_True;
}

PyObject* PyOpcodes::DeleteObject(PyObject* self, PyObject* args)
{
    int hanlde = NULL;

    if (!PyArg_ParseTuple(args, "i", &hanlde))
        return Py_False;

    plugin::Command<plugin::Commands::DELETE_OBJECT>(hanlde);
    return Py_True;
}

PyObject* PyOpcodes::DeleteCar(PyObject* self, PyObject* args)
{
    int hanlde = NULL;

    if (!PyArg_ParseTuple(args, "i", &hanlde))
        return Py_False;

    plugin::Command<plugin::Commands::DELETE_CAR>(hanlde);
    return Py_True;
}

PyObject* PyOpcodes::RequestModel(PyObject* self, PyObject* args)
{
    int model = NULL;

    if (!PyArg_ParseTuple(args, "i", &model))
        return Py_False;

    plugin::Command<plugin::Commands::REQUEST_MODEL>(model);
    return Py_True;
}

PyObject* PyOpcodes::ReadMemory(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int val = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "iii", &addr, &size, &vp))
        return Py_False;

    switch (size)
    {
    case 2:
    {
        val = plugin::patch::Get<short>(addr, vp);
        break;
    }
    case 4:
    {
        val = plugin::patch::Get<int>(addr, vp);
        break;
    }
    default:
        plugin::patch::GetRaw(addr, &val, size, vp);
    }

    return Py_BuildValue("i", val);
}

PyObject* PyOpcodes::WriteMemory(PyObject* self, PyObject* args)
{
    int addr = NULL;
    int size = NULL;
    int val = NULL;
    int vp = NULL;

    if (!PyArg_ParseTuple(args, "iiii", &addr, &size, &val, &vp))
        return Py_False;

    switch (size)
    {
    case 2:
    {
        plugin::patch::Set<short>(addr, val, vp);
        break;
    }
    case 4:
    {
        plugin::patch::Set<int>(addr, val, vp);
        break;
    }
    default:
        plugin::patch::SetRaw(addr, &val, size, vp);
    }
    
    return Py_True;
}

PyObject* PyOpcodes::LoadAllModelsNow(PyObject* self, PyObject* args)
{
    plugin::Command<plugin::Commands::LOAD_ALL_MODELS_NOW>();
    return Py_True;
}

PyObject* PyOpcodes::PrintBig(PyObject* self, PyObject* args)
{
    char* gxt;
    int time = NULL, style = NULL;

    if (!PyArg_ParseTuple(args, "sii", &gxt, &time, &style))
        return Py_False;

    plugin::Command<plugin::Commands::PRINT_BIG>(gxt, time, style);
    return Py_True;
}

PyObject* PyOpcodes::ShakePad(PyObject* self, PyObject* args)
{
    int a,b,c;

    if (!PyArg_ParseTuple(args, "iii", &a, &b, &c))
        return Py_False;

    plugin::Command<plugin::Commands::SHAKE_PAD>(a, b, c);
    return Py_True;
}

PyObject* PyOpcodes::IsCharTouchingObject(PyObject* self, PyObject* args)
{
    int actor, obj;

    if (!PyArg_ParseTuple(args, "ii", &actor, &obj))
        return Py_False;

    int result = plugin::Command<plugin::Commands::IS_CHAR_TOUCHING_OBJECT>(actor, obj);
    return Py_BuildValue("i",result);
}

PyObject* PyOpcodes::IsCharTouchingObjectOnFoot(PyObject* self, PyObject* args)
{
    int actor, obj;

    if (!PyArg_ParseTuple(args, "ii", &actor, &obj))
        return Py_False;

    int result = plugin::Command<plugin::Commands::IS_CHAR_TOUCHING_OBJECT_ON_FOOT>(actor, obj);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCharAmmo(PyObject* self, PyObject* args)
{
    int actor, weapon_id, ammo;

    if (!PyArg_ParseTuple(args, "iii", &actor, &weapon_id, &ammo))
        return Py_False;

    int result = plugin::Command<plugin::Commands::SET_CHAR_AMMO>(actor, weapon_id, ammo);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::DrawShadow(PyObject* self, PyObject* args)
{
    int shadow_id, unk, red, green, blue;
    CVector coord;
    float size, angle;

    if (!PyArg_ParseTuple(args, "ifffffiiii", &shadow_id, &coord.x, &coord.y, &coord.z, &angle, &size, &unk, &red, &green, &blue))
        return Py_False;

    plugin::Command<plugin::Commands::DRAW_SHADOW>(shadow_id, coord.x, coord.y, coord.z, angle, size, unk, red, green, blue);
    return Py_True;
}

PyObject* PyOpcodes::Print(PyObject* self, PyObject* args)
{
    char* gxt;
    int time = NULL, style = NULL;

    if (!PyArg_ParseTuple(args, "sii", &gxt, &time, &style))
    return Py_False;

    plugin::Command<plugin::Commands::PRINT>(gxt, time, style);
    return Py_True;
}

PyObject* PyOpcodes::DeactivateGarage(PyObject* self, PyObject* args)
{
    char* name;

    if (!PyArg_ParseTuple(args, "s", &name))
        return Py_False;

    plugin::Command<plugin::Commands::DEACTIVATE_GARAGE>(name);
    return Py_True;
}

PyObject* PyOpcodes::IsCharShootingInArea(PyObject* self, PyObject* args)
{
    CVector2D start, end;
    int weapon_id, actor;

    if (!PyArg_ParseTuple(args, "iffffi", &actor, &start.x, &start.y, &end.x, &end.y, &weapon_id))
        return Py_False;

    plugin::Command<plugin::Commands::IS_CHAR_SHOOTING_IN_AREA>(actor, start.x, start.y, end.x, end.y, weapon_id);
    return Py_True;
}

PyObject* PyOpcodes::GetRandomCharInZone(PyObject* self, PyObject* args)
{
    char* area_name;
    int civ, gang, crim, handle;

    if (!PyArg_ParseTuple(args, "siiii", &area_name, &civ, &gang, &crim))
        return Py_False;

    plugin::Command<plugin::Commands::GET_RANDOM_CHAR_IN_ZONE>(area_name, civ, gang, crim, &handle);
    return Py_True;
}

PyObject* PyOpcodes::SetCarVisible(PyObject* self, PyObject* args)
{
    int handle, state;

    if (!PyArg_ParseTuple(args, "ii", &handle, &state))
        return Py_False;

    plugin::Command<plugin::Commands::SET_CAR_VISIBLE>(handle, state);
    return Py_True;
}

PyObject* PyOpcodes::SetTextCentreSize(PyObject* self, PyObject* args)
{
    float size;

    if (!PyArg_ParseTuple(args, "f", &size))
        return Py_False;

    plugin::Command<plugin::Commands::SET_TEXT_CENTRE_SIZE>(size);
    return Py_True;
}

PyObject* PyOpcodes::SetTextFont(PyObject* self, PyObject* args)
{
    int font;

    if (!PyArg_ParseTuple(args, "i", &font))
        return Py_False;

    plugin::Command<plugin::Commands::SET_TEXT_FONT>(font);
    return Py_True;
}

PyObject* PyOpcodes::MakeObjectTargettable(PyObject* self, PyObject* args)
{
    int handle, state;

    if (!PyArg_ParseTuple(args, "ii", &handle, &state))
        return Py_False;

    plugin::Command<plugin::Commands::MAKE_OBJECT_TARGETTABLE>(handle, state);
    return Py_True;
}

PyObject* PyOpcodes::HasCharSpottedChar(PyObject* self, PyObject* args)
{
    int actor1, actor2;

    if (!PyArg_ParseTuple(args, "ii", &actor1, &actor2))
        return Py_False;

    int result = plugin::Command<plugin::Commands::HAS_CHAR_SPOTTED_CHAR>(actor1, actor2);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::SetCharAnimSpeed(PyObject* self, PyObject* args)
{
    int actor;
    char* name;
    float speed;

    if (!PyArg_ParseTuple(args, "isf", &actor, &name, &speed))
        return Py_False;

    plugin::Command<plugin::Commands::SET_CHAR_ANIM_SPEED>(actor, name, speed);
    return Py_True;
}

PyObject* PyOpcodes::DisplayOnScreenTimerWithString(PyObject* self, PyObject* args)
{
    int a1, a2;
    char* gxt;

    if (!PyArg_ParseTuple(args, "iis", &a1, &a2, &gxt))
        return Py_False;

    plugin::Command<plugin::Commands::DISPLAY_ONSCREEN_TIMER_WITH_STRING>(a1, a2, gxt);
    return Py_True;
}

PyObject* PyOpcodes::LoadMissionAudio(PyObject* self, PyObject* args)
{
    int a1, sound_id;

    if (!PyArg_ParseTuple(args, "ii", &a1, &sound_id))
        return Py_False;

    plugin::Command<plugin::Commands::LOAD_MISSION_AUDIO>(a1, sound_id);
    return Py_True;
}

PyObject* PyOpcodes::HasMissionAudioLoaded(PyObject* self, PyObject* args)
{
    int a1;

    if (!PyArg_ParseTuple(args, "i", &a1))
        return Py_False;

    int result = plugin::Command<plugin::Commands::HAS_MISSION_AUDIO_LOADED>(a1);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::HasMissionAudioFinished(PyObject* self, PyObject* args)
{
    int a1;

    if (!PyArg_ParseTuple(args, "i", &a1))
        return Py_False;

    int result = plugin::Command<plugin::Commands::HAS_MISSION_AUDIO_FINISHED>(a1);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::PlayMissionAudio(PyObject* self, PyObject* args)
{
    int a1;

    if (!PyArg_ParseTuple(args, "i", &a1))
        return Py_False;

    plugin::Command<plugin::Commands::PLAY_MISSION_AUDIO>(a1);
    return Py_True;
}

PyObject* PyOpcodes::IsExplosionInArea(PyObject* self, PyObject* args)
{
    int explosion_type;
    CVector coord1, coord2;

    if (!PyArg_ParseTuple(args, "iffffff", &explosion_type, &coord1.x, &coord1.y, &coord1.z, &coord2.x, &coord2.y, &coord2.z))
        return Py_False;

    int result = plugin::Command<plugin::Commands::IS_EXPLOSION_IN_AREA>(explosion_type, coord1.x, coord1.y, coord1.z, coord2.x, coord2.y, coord2.z);
    return Py_BuildValue("i",result);
}

PyObject* PyOpcodes::PrintNow(PyObject* self, PyObject* args)
{
    char* gxt;
    int time = NULL, style = NULL;

    if (!PyArg_ParseTuple(args, "sii", &gxt, &time, &style))
    return Py_False;

    plugin::Command<plugin::Commands::PRINT_NOW>(gxt, time, style);
    return Py_True;
}

PyObject* PyOpcodes::ClearPrints(PyObject* self, PyObject* args)
{
    plugin::Command<plugin::Commands::CLEAR_PRINTS>();
    return Py_True;
}

PyObject* PyOpcodes::PrintBigQ(PyObject* self, PyObject* args)
{
    char* gxt;
    int time = NULL, style = NULL;

    if (!PyArg_ParseTuple(args, "sii", &gxt, &time, &style))
    return Py_False;

    plugin::Command<plugin::Commands::PRINT_BIG_Q>(gxt, time, style);
    return Py_True;
}

PyObject* PyOpcodes::PrintBigString(PyObject* self, PyObject* args)
{
    char* text;
    int time = NULL, style = NULL;

    if (!PyArg_ParseTuple(args, "sii", &text, &time, &style))
    return Py_False;

    plugin::Command<0x0ACB>(text, time, style);
    return Py_True;
}

PyObject* PyOpcodes::DisplayRadar(PyObject* self, PyObject* args)
{
    int state;
    if (!PyArg_ParseTuple(args, "ifff", &state))
        return Py_False;

    plugin::Command<plugin::Commands::DISPLAY_RADAR>(state);
    return Py_True;
}

PyObject* PyOpcodes::GetTimeOfDay(PyObject* self, PyObject* args)
{
    int h = NULL, m = NULL;

    plugin::Command<plugin::Commands::GET_TIME_OF_DAY>(&h,&m);
    return Py_BuildValue("ii", h, m);
}

PyObject* PyOpcodes::SetTimeOfDay(PyObject* self, PyObject* args)
{
    int h = NULL, m = NULL;
    if (!PyArg_ParseTuple(args, "ii", &h, &m))
        return Py_False;

    plugin::Command<plugin::Commands::SET_TIME_OF_DAY>(h, m);
    return Py_True;
}

PyObject* PyOpcodes::GetMinutesToTimeOfDay(PyObject* self, PyObject* args)
{
    int h = NULL, m = NULL, result = NULL;
    if (!PyArg_ParseTuple(args, "ii", &h, &m))
        return Py_False;

    plugin::Command<plugin::Commands::GET_MINUTES_TO_TIME_OF_DAY>(&h, &m, &result);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::IsPointOnScreen(PyObject* self, PyObject* args)
{
    float radius = 0.0f;
    CVector coord;
    int result = NULL;

    if (!PyArg_ParseTuple(args, "ffff", &coord.x, &coord.y, &coord.z, &radius))
        return Py_False;

    result = plugin::Command<plugin::Commands::IS_POINT_ON_SCREEN>(coord.x, coord.y, coord.z, radius);
    return Py_BuildValue("i", result);
}

PyObject* PyOpcodes::GetCarCoordinates(PyObject* self, PyObject* args)
{
    int hveh = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "i", &hveh))
        return Py_False;

    plugin::Command<plugin::Commands::GET_CAR_COORDINATES>(hveh, &coord.x, &coord.y, &coord.z);
    return Py_BuildValue("fff", coord.x, coord.y, coord.z);
}

PyObject* PyOpcodes::GetCharCoordinates(PyObject* self, PyObject* args)
{
    int hchar = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "i", &hchar))
        return Py_False;

    plugin::Command<plugin::Commands::GET_CHAR_COORDINATES>(hchar, &coord.x, &coord.y, &coord.z);

    return Py_BuildValue("fff", coord.x, coord.y, coord.z);
}

PyObject* PyOpcodes::GetObjectCoordinates(PyObject* self, PyObject* args)
{
    int hobj = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "i", &hobj))
        return Py_False;

    plugin::Command<plugin::Commands::GET_OBJECT_COORDINATES>(hobj, &coord.x, &coord.y, &coord.z);
    return Py_BuildValue("fff", coord.x, coord.y, coord.z);
}

PyObject* PyOpcodes::SetCarCoordinates(PyObject* self, PyObject* args)
{
    int hveh = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "ifff", &hveh, &coord.x, &coord.y, &coord.z))
        return Py_False;

    plugin::Command<plugin::Commands::SET_CAR_COORDINATES>(hveh, coord.x, coord.y, coord.z);
    return Py_True;
}

PyObject* PyOpcodes::SetCharCoordinates(PyObject* self, PyObject* args)
{
    int hchar = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "ifff", &hchar, &coord.x, &coord.y, &coord.z))
        return Py_False;

    plugin::Command<plugin::Commands::SET_CHAR_COORDINATES>(hchar, coord.x, coord.y, coord.z);

    return Py_True;
}

PyObject* PyOpcodes::SetObjectCoordinates(PyObject* self, PyObject* args)
{
    int hobj = NULL;
    CVector coord;

    if (!PyArg_ParseTuple(args, "ifff", &hobj, &coord.x, &coord.y, &coord.z))
        return Py_False;

    plugin::Command<plugin::Commands::SET_OBJECT_COORDINATES>(hobj, coord.x, coord.y, coord.z);
    return Py_True;
}

PyObject* PyOpcodes::GetPlayerChar(PyObject* self, PyObject* args)
{
    return Py_BuildValue("i", CPools::GetPedRef(FindPlayerPed()));
}

PyObject* PyOpcodes::ShakeCam(PyObject* self, PyObject* args)
{
    int ms = NULL;

    if (!PyArg_ParseTuple(args, "i", &ms))
        return Py_False;

    plugin::Command<plugin::Commands::SHAKE_CAM>(ms);

    return Py_True;
}
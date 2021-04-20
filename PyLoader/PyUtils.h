#pragma once
#include <string>

class PyUtils
{
public:
	static std::string GetCurrentScriptName();

	PyUtils() = delete;
	PyUtils(PyUtils&) = delete;
};


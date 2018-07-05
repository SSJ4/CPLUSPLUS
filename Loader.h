#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include "Usercheck.h"
#include "Commander.h"
#include <Windows.h>
#include <iterator>
#include <algorithm>

class Loader {
public:

	void loader(std::string usr);
	void fn();

private:
	std::string cmd;
	std::map<std::string, std::string> commands;
};
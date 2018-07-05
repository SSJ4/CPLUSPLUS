#pragma once
#include <iostream>
#include <map>
#include <string>
#include "Loader.h"



class Logging {
public:	
	std::string user;
	std::string Login();

private:
	bool loggedin = false;
	std::map<std::string, std::string> usercombo;	
};
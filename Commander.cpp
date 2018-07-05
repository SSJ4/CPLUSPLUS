#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include "Usercheck.h"
#include "Commander.h"
#include "Loader.h"
#include <Windows.h>
#include <iterator>
#include <algorithm>


void Commander::main()
{
	auto login = new Logging;
	auto loader = new Loader;
	
	int pause;
	
	login->Login();
	vUser = login->user;
	loader->loader(vUser);
	

	delete(login);
	delete(loader);
}
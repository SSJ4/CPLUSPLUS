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
#include <shellapi.h>

void Loader::loader(std::string usr)
{
	int pause;
	commands = {
		{"fn", ""}, {"exit",""}
		
	};


	system("Color 4");
	std::cout << " _______  _______  __   __  __   __  _______  __    _  ______     _______  _______  __    _  _______  _______  ______   \n";
	std::cout << "|       ||       ||  |_|  ||  |_|  ||   _   ||  |  | ||      |   |       ||       ||  |  | ||       ||       ||    _ |  \n";
	std::cout << "|       ||   _   ||       ||       ||  |_|  ||   |_| ||  _    |  |       ||    ___||   |_| ||_     _||    ___||   | ||  \n";
	std::cout << "|       ||  | |  ||       ||       ||       ||       || | |   |  |       ||   |___ |       |  |   |  |   |___ |   |_||_ \n";
	std::cout << "|      _||  |_|  ||       ||       ||       ||  _    || |_|   |  |      _||    ___||  _    |  |   |  |    ___||    __  |\n";
	std::cout << "|     |_ |       || ||_|| || ||_|| ||   _   || | |   ||       |  |     |_ |   |___ | | |   |  |   |  |   |___ |   |  | |\n";
	std::cout << "|_______||_______||_|   |_||_|   |_||__| |__||_|  |__||______|   |_______||_______||_|  |__|  |___|  |_______||___|  |_|\n\n";
	std::cout << "========================================================================================================================\n";
	std::cout << "                                                     made by dokus\n";
	std::cout << "========================================================================================================================\n\n";

	while (1)
	{
		std::cout << "Execute>";
		std::cin >> cmd;

		auto found = commands.find(cmd);
		if (found != commands.end()) {

			if (found->first == "fn")
			{
				fn();
			}
			else if (found->first == "exit")
			{
				break;
			}


		}
	}
}

void Loader::fn()
{
	ShellExecuteA(GetDesktopWindow(), "open", "C:\\Program Files\\Epic Games\\Launcher\\Engine\\Binaries\\Win64\\UnrealEngineLauncher.exe", NULL, NULL, SW_SHOW);
	return;
}


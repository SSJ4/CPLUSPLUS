#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include "Usercheck.h"
#include "Loader.h"
#include <Windows.h>
#include <iterator>
#include <algorithm>
#include <thread>
#include <locale>


std::string Logging::Login() {	
	std::string password;
	usercombo = {
		{"dokus", "123123"}

	};
	while (!loggedin)
	{
		std::cout << "username: ";
		std::cin >> (user);
		std::cout << "password: ";

		//copy pasta hide input
		HANDLE hStd = GetStdHandle(STD_INPUT_HANDLE);
		DWORD mode = 0;
		GetConsoleMode(hStd, &mode);
		SetConsoleMode(hStd, mode & (~ENABLE_ECHO_INPUT));
		//

		std::cin >> password;
		std::cout << "\n\r\n\r";

		//copy pasta
		SetConsoleMode(hStd, mode);
		//
		//std::pair<it, it> ret;
		auto found = usercombo.find(user);

		if (found != usercombo.end()) {
			auto foundpass = found->second;
			if (password == foundpass) {
				user = found->first;
				loggedin = true;
				
			}
			else
			{
				loggedin = false;
			}
		}
		system("cls");
	}
	return user;
}

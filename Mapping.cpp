#include "stdafx.h"
#include <iostream>
#include "Commander.h"
#include "Usercheck.h"

int main()
{
	auto commander = new Commander;
	commander->main();
	
	delete(commander);
    return 0;
}


#include "ResharperFuncties.h"

ResharperFuncties::ResharperFuncties()
{
}

ResharperFuncties::~ResharperFuncties()
{
}

int ResharperFuncties::getX() // Const message
{
	return x_;
}

void ResharperFuncties::includeString() // Include string message en member may be static
{
	std::string x;
}

void ResharperFuncties::variableNotInitialized()
{
	int i;

	i += 5; // Local variable might not be initialized
}

void ResharperFuncties::missingDefaultCase()
{
	const int x = 3;

	switch(x) // Missing default case
	{
	case 1:	break;
	case 2: break;
	case 3:	break;
	}

	if(true) // Redundant
	{
		return;
	}

	// Unreachable code
	int y = 2;
}

void ResharperFuncties::constString(std::string string) // Reference en const
{
}




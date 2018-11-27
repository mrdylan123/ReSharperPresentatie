#pragma once
#include <string>
// Use different include and unused
#include <math.h>


class ResharperFuncties // Non-default destructor
{
public:
	ResharperFuncties();
	~ResharperFuncties();

	int getX(); // Member function may be 'const' in source file

	void includeString();
	static void variableNotInitialized();
	void missingDefaultCase();

	void addForwardDeclaration(ForwardDeclaration a) // Add forward declaration
	{
	}

	static void constString(std::string string);

private: // Alt insert op members: code generation

	int x_;
	int y; // Private member, add underscore: x_;
};
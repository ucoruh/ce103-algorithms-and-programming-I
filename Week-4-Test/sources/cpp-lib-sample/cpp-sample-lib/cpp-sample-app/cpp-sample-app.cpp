// Copyright (c) 2011 rubicon IT GmbH

// cpp-sample-app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma comment(lib, "..\\DebugStaticLibDeployment\\cpp-sample-lib.lib")

#include "..\DebugStaticLibDeployment\samplelib.h"

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	int result = 0;
	//printf("Hello World!\n");
	result = sum(5, 4);
	sayHelloTo("Computer");
	printf("Result is %d \n", result);
	printf("Press any key to continue...\n");
	getchar();
	return 0;

}

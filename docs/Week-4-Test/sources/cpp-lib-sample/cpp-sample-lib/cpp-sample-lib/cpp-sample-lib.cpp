// cpp-sample-lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "samplelib.h"

#include "stdio.h"

/// <summary>
/// 
/// </summary>
/// <param name="name"></param>
void sayHelloTo(const char* name) {

	if (name != NULL) {
		printf("Hello %s \n", name);
	}
	else {
		printf("Hello There\n");
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
int sum(int a, int b) {

	int c = 0;
	c = a + b;
	return c;
}

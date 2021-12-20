#pragma comment(lib, "..\\Debug\\CE103-HW2-Lib.lib")
#include "..\CE103-HW2-Lib\CE103-HW2-Lib.h"
#include <stdio.h>

int main()
{
	printf("CE103 Algorithms and Programming I HW-2\n");

	char a1[] = "Hello";
	char a2[] = "World";
	char a3[] = "HelloWorld";
	char* a4 = NULL;

	char b1[] = "Computer"; 
	char b2[] = "Engineering";
	char b3[] = "ComputerEngineering";
	char* b4 = NULL;

	a4 = ce103_strcat(a1, a2);
	b4 = ce103_strcat(b1, b2);

	printf("%s\n", a4);
	printf("%s\n", b4);

	getch();

}

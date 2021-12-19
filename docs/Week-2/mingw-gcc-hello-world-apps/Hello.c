#include <stdio.h> 
#include<locale.h> 
#include <stddef.h>

int main(int argc, wchar_t **argv)
{ 
	setlocale(LC_ALL, "Turkish"); 
	printf("TÜRKÇE"); 
	getchar(); 
	return 0; 	
}
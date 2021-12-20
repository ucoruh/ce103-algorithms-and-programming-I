#define _CRT_SECURE_NO_WARNINGS

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

#include "translate.h"

/*This will keep our global selected langauge information*/
int app_language = APP_LANG_EN;

//This function gets ID of message from line
int getId(char* line);

//This function get message from line
char* getIdString(char* line);

//This file fix lang.conf file for empty or corrupted issues.
void fixFile(FILE* fptr, bool close);

//This function set global language configuration
void setTranslateLang(char* str, bool save)
{
	FILE* fptr;

	//check and set language variables
	if (strcmp(str, (char*)ENGLISH_L) == 0) {
		app_language = APP_LANG_EN;
	}
	else if (strcmp(str, TURKISH_L) == 0) {
		app_language = APP_LANG_TR;
	}
	else {
		app_language = APP_LANG_EN;
	}

	if (save)
	{
		//if save enabled then create file and save current language setting "en" or "tr"
		fptr = fopen(LANG_CONF_FILE, "w");
		fprintf(fptr, "%s", str);
		fclose(fptr);
	}

}

void fixFile(FILE* fptr, bool close)
{
	//if file is open this should call to close file
	if (close)
		fclose(fptr);

	//open and write default "en" string in the file for missing or corrupted files.
	fptr = fopen(LANG_CONF_FILE, "w");
	fprintf(fptr, "%s", ENGLISH_L);
	fclose(fptr);
}

void getTranslateLang(char* lang)
{
	FILE* fptr;
	char line[100] = { 0 };

	if ((fptr = fopen(LANG_CONF_FILE, "r")) == NULL) {
		//if file not exist create default file with "en" configured
		fixFile(fptr, false);
		sprintf(lang, "%s", ENGLISH_L);
	}
	else {

		if (fscanf(fptr, "%[^\n]", line) != '\0')
		{
			//read line
			fgetc(fptr);

			if (strcmp(line, "") == 0) {
				//if file exist but has empty line then fix file with default "en" configuration
				fixFile(fptr, true);
				sprintf(lang, "%s", ENGLISH_L);
			}
			else {
				//if file exist and has a configuration copy to output. We don't check "en" or "tr" entered here.
				strcpy(lang, line);
			}

		}
		else {

			//if file has no data fix file with default "en" configuration.
			fixFile(fptr, true);
			sprintf(lang, "%s", ENGLISH_L);
		}
	}

}

void printTranslateLang(int id)
{
	char line[1000] = { 0 };
	char fileName[100] = { 0 };
	FILE* fptr;

	//get translation file name by language setting.
	if (app_language == APP_LANG_TR) {
		strcpy(fileName, TR_LANG_FILE);
	}
	else if (app_language == APP_LANG_EN) {
		strcpy(fileName, EN_LANG_FILE);
	}
	else {
		strcpy(fileName, EN_LANG_FILE);
	}

	//open translation language file if not exit then close application
	//you should create "tr.dat" and "en.dat" manually.
	if ((fptr = fopen(fileName, "r")) == NULL) {
		printf("Error! opening file please create lang file first");
		// Program exits if file pointer returns NULL.
		exit(1);
	}

	//read each line untill end of file
	while (fscanf(fptr, "%[^\n]", line) != EOF) {

		fgetc(fptr);

		//if line empty skip
		if (strcmp(line, "") == 0)
			continue;

		// reads text until newline is encountered
		//printf("Data from the file:\n [%s] \n", line);
		//printf("Line ID [%d] \n",getId(line));
		//printf("Line Message [%s] \n",getIdString(line));

		//get ID and compare with input id parameter if match then get ID string and print to screen.
		if (getId(line) == id) {
			printf("%s", getIdString(line));
			break;
		}
	}

	//close the file.
	fclose(fptr);
}

int getId(char* line)
{
	char* pch;
	int index;
	char idStr[50] = { 0 };
	int idInt = 0;
	//find comma to extract id
	pch = strchr(line, ',');
	//calculate comma index
	index = pch - line;
	//copy ID as string
	memcpy(idStr, line, index);
	//convert ID string to integer    
	idInt = atoi(idStr);
	//return ID 
	return idInt;
}

char* getIdString(char* line)
{
	char* str = line;
	int length = strlen(line); //calculate length of line.
	char* pch;
	int index;
	//set end character to null this was "
	*(str + length - 1) = 0;
	//find " character
	pch = strchr(str, '\"');
	//calculate index of " character
	index = pch - line;
	//move pointer to this location
	str += index;
	//skip " character
	str += 1;
	//return only ID message.
	return str;
}


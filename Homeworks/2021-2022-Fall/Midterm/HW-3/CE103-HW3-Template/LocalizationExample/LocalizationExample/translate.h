#pragma once

#include <stdbool.h> 

//this are definition to keep code clean
#define ENGLISH_L "en"
#define TURKISH_L "tr"

//file names
#define EN_LANG_FILE "en.dat"
#define TR_LANG_FILE "tr.dat"
#define LANG_CONF_FILE "lang.conf"

//application language definitions.
#define APP_LANG_EN 0
#define APP_LANG_TR 1

// 0 for English 1 for Turkish
extern int app_language;

//set translation language "en" or "tr" 
//and keep this setting in lang.conf file with save parameter 
//if its yes then it stores this configuration in the file
void setTranslateLang(char* str, bool save);

//read the current language from conf.file if its not exist creates with default "en" value.
//if its corrupted or empty then fixes with default "en" value.
void getTranslateLang(char* lang);

//read translation files "en.dat" or "tr.dat" find id related message and print to screen with current language configuration.
void printTranslateLang(int id);



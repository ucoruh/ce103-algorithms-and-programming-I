#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "translate.h"
#include "message.h"


int main(int argc, char* argv[]) {


	//this variable keeps language setting that stored in file
	char langConfig[2 + 1] = { 0 };
	//language selection from console 0=en 1=tr
	int  langSelection = 0;

	//get current language setting from lang.conf file its "en" or "tr"
	getTranslateLang(langConfig);

	//set application language setting but setting is not set to file
	setTranslateLang(langConfig, false);

	//print current language setting with translation support
	printTranslateLang(current_lang_setting);
	printf(":[%s]\n", langConfig);

	//ask for language
	printTranslateLang(enter_language_option);
	printf("en->0\n");
	printf("tr->1\n");
	//get input
	scanf("%d", &langSelection);


	if (langSelection == APP_LANG_TR)
	{
		//if TR selected then set application language to Turkish 
		setTranslateLang(TURKISH_L, true);
	}
	else {
		//other cases set language to English 
		setTranslateLang(ENGLISH_L, true);
	}

	//after update printf the current language
	getTranslateLang(langConfig);
	printTranslateLang(current_lang_setting);
	printf(":[%s]\n", langConfig);

	//and now print translated message according to our config files
	printTranslateLang(welcome_to_my_program);
	printf("\n");
	printTranslateLang(lets_translate_messages);
	printf("\n");

	//setTranslateLang("tr",true);

	//getTranslateLang(langConfig);
	//printTranslateLang(current_lang_setting);
	//printf(":[%s]\n",langConfig);

	//printTranslateLang(welcome_to_my_program);
	//printf("\n");
	//printTranslateLang(lets_translate_messages);
	//printf("\n");

	return 0;


}

//////////////////////////////////////////
// Titre : testQ4
// Nom : Besson Nicolas
// Fichier : testQ4.c
// Date : 02.11.2023
//////////////////////////////////////////

//-- librairies Standart --//
#include <stdio.h>	//entrée sortie
#include <stdint.h> // Type variable

//-- librairies Personelle --//
#include "testQ4.h">	//headerfile principal du projet 

void main()
{
	//-- Variable Local --//
	int8_t InfoSigne;
	int16_t InfoValeurEntier;
	float InfoValeurDemi;
	float ValeurTemp;


	InfoSigne = VALBRUTCPTDS1820 >> 8; // Decalage 8bit vers la droite 
	
	if (InfoSigne == TESTINFOSIGNE)
	{
		InfoSigne = InfoSigne - 1;
	}
	else
	{
		InfoSigne = 1;
	}
	InfoValeurDemi = (VALBRUTCPTDS1820 && LOGIQUEVALDEMI) * BIT0VALDEMI;

	InfoValeurEntier = VALBRUTCPTDS1820 && LOGIQUEVALENTIER;

	ValeurTemp = InfoSigne * InfoValeurDemi * InfoValeurEntier;


}


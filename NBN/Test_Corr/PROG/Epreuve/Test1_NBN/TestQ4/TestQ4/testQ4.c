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
#include "testQ4.h"	//headerfile principal du projet 

void main()
{
	//-- Variable Local --//
			
	int8_t infoSigne;
	int16_t valbrutcptDS820 = 0xFF33;
	int16_t infoValeurEntier;
	float infoValeurDemi;
	float valeurTemp;


	infoSigne = valbrutcptDS820 >> 8; // Decalage 8bit vers la droite 
	
	if (infoSigne == TESTINFOSIGNE)
	{
		infoSigne = infoSigne - 1;
	}
	else
	{
		infoSigne = 1;
	}
	infoValeurDemi = (valbrutcptDS820 & LOGIQUEVALDEMI) * BIT0VALDEMI;

	infoValeurEntier = (valbrutcptDS820 & LOGIQUEVALENTIER) >> 1;

	valeurTemp = infoSigne * infoValeurDemi + infoValeurEntier;


}


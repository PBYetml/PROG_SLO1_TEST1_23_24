/*Programme Q4 test1
Lieu:	ETML-ES
Auteur:	Stefanelli Matteo Antonino
Date:	02.11.2023
Modification: 29.11.2023
correction du code
*/

//include//
#include "testQ4.h"
#include <stdint.h> //type normalise
#include <stdio.h> //entre sortie

//Programme principale//
void main()
{
	int16_t InfoSigne;
	int8_t ValeurTemp;
	int8_t InfoValeurEntier;
	float InfoValeurDemi;
	
	while (1)
	{
		InfoSigne = valbrutcptDS1820 >> 8;
		if (InfoSigne == 0xFF)
		{
			InfoSigne = -1;
		}
		else
		{
			InfoSigne = 1;
		}
		InfoValeurDemi = (valbrutcptDS1820 & 0x0001) * 0.5;
		InfoValeurEntier = (valbrutcptDS1820 & 0x00FF) >> 1;
		ValeurTemp = InfoSigne * (InfoValeurDemi + InfoValeurEntier);
	}
}

//-- librairies standard --//
#include <stdio.h>
#include <stdint.h>
#include "testQ4.h"

//-- variable globales --//
uint16_t infosigne, infovaleurentier, valeurtemp, infovaleurdemi;


//-- programme principal --//
void main()
{
	
	infosigne = valbrutcptDS1820 >> 8; //décalage de 8bits

	if (infosigne == 0xFF)
	{
		infosigne = -1;
	}
	else
	{
		infosigne = 1;
	}

	infovaleurdemi = valbrutcptDS1820 & 0x0001 * 0.5;

	infovaleurentier = valbrutcptDS1820 & 0x00FF >> 1;

	valeurtemp = infosigne * infovaleurdemi + infovaleurentier;

}

//------------------------------//
// Nom		: Stopa
// Prénom	: Karol
// Date		: 02.11.2023
//------------------------------//

// Librairies 
#include <stdio.h>	// Standard
#include "testQ4.h"	// Personelle

// Programme principale
void main(void)
{
	// Variables locales
	int InfoSigne = 0;
	int InfoValeur_Entier = 0;
	float InfoValeur_Demi = 0;
	int ValeurTemp = 0;
	int ValBrutCptDS1820 = 0;

	// -----Programme-----

	ValBrutCptDS1820 = 0xFF33;

	InfoSigne = ValBrutCptDS1820 >> 8;	// Décalage de 8 bits

	if (InfoSigne)

}
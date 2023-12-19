/*
*------------------------------------------------------------------------
* Nom du projet					: CorrectionTest1
* Date de création du projet	: 29.11.2023
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Kirian Gruber
* Date de création du fichier	: 29.11.2023
*------------------------------------------------------------------------
* Nom du dernier éditeur		: 
* Version						: x.x
* Date de dernière modification	: 
*------------------------------------------------------------------------
* But du fichiers				: 
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdint.h>
#include "testQ4.h"

/*-- librairie privé --*/


/*-- déclaration variable --*/


/*-- déclaration fonction --*/


/*-- fontion princpale --*/
void main()
{
	/*-- déclaration variable --*/
	unsigned short valBrutCptDS1820, infoValeurEntier;
	signed short infoSigne;
	float infoValeurDemi;
	signed short valeurTemp;
	UN_SUR_DEUX;
	VAL_DEBUT;

	valBrutCptDS1820 = VAL_DEBUT;


	infoSigne = valBrutCptDS1820 >> 8; //J'ai de la peine à comprendre ce que vous entendez par faire une définition pour le décalage par 8

	if (infoSigne == 0xFF)
	{
		infoSigne = -1;
	}
	else
	{
		infoSigne = 1;
	}
	
	infoValeurDemi = (valBrutCptDS1820 & 0x0001) * UN_SUR_DEUX;

	infoValeurEntier = (valBrutCptDS1820 & 0x00FF) >> 1;

	valeurTemp = (float)infoSigne * (infoValeurDemi + infoValeurEntier);

}

/*-- documentation --*/


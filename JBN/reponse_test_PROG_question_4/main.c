/*
*------------------------------------------------------------------------
* Nom du projet					: reponse_test_PROG_question_4
* Date de création du projet	: 02/11/2023
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Blitsheyn Jacob
* Date de création du fichier	: 02/11/2023
*------------------------------------------------------------------------
* Nom du dernier éditeur		: Blitshtey Jacob
* Version						: x.x
* Date de dernière modification	: 02/11/2023
*------------------------------------------------------------------------
* But du fichiers				: repondre a la question 4 du premiers test de PROG
* commentaire					: N/A
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>				// entré - sortie

/*-- librairie privé --*/
#include "testQ4.h"				// fichiers .h pour les constentes numeriques

/*-- déclaration variable --*/
long valBrutCptDS1820;
int infoSigne, infoValeurEntier, infoValeurDemi, valeurTemp;

/*-- déclaration fonction --*/


/*-- fontion princpale --*/
void main() {
	valBrutCptDS1820 = 0xFF33;

	infoSigne = valBrutCptDS1820 >> 8;			// décalage 8bits

	if (infoSigne == 0xff) {
		infoSigne = -1;

	}
	else {
		infoSigne = 1;
	}

	infoValeurDemi = valBrutCptDS1820 & 0x00FF * 0.5;

	infoValeurEntier = valBrutCptDS1820 & 0x00FF >> 1;

	valeurTemp = infoSigne * infoValeurDemi + infoValeurEntier;
	
}

/*-- documentation --*/


//-- libraires strandrad --//

#include <stdio.h>	//entree - sortie
#include <testQ4.h>	//Constantes

//-- déclaration des variables --//
short infovaleurentier,valeurtemp;
char infosigne;
float infovaleurdemi;				

//-- programme principale --//
void main()
{
	infosigne = valbrutcptDS1820 >> 8;	//Décalage de 8bits

	if (infosigne == 0xFF)				//Sélection du signe de température
	{
		infosigne = -1;
	}
	else
	{
		infosigne = 1;
	}
	infovaleurdemi = valbrutcptDS1820 & 0x0001; //Traitement des donnés de température selon le datasheet
	infovaleurdemi = infovaleurdemi / 2;

	infovaleurentier = valbrutcptDS1820 & 0x00FF >> 1;
	infovaleurentier = infovaleurentier >> 1;

	valeurtemp = infosigne * infovaleurdemi;
	valeurtemp = valeurtemp + infovaleurentier;
}
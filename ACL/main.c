#include "testQ4.h"
#include <stdint.h>

void main(void)
{
	//VarLoc
	uint16_t valBrutCptDS1820 = 0;
	int16_t infoSigne = 0;
	float infoValeurDemi = 0;
	float valeurTemp = 0;
	uint8_t infoValeurEntier = 0;

	//Body

	valBrutCptDS1820 = VALDS;
	infoSigne = valBrutCptDS1820 >> EIGHT;
	if (infoSigne == SIGNE)
	{
		infoSigne = -1;
	}
	else
	{
		infoSigne = 1;
	}
	infoValeurDemi = ((valBrutCptDS1820&DEM)*HALF);
	infoValeurEntier = (valBrutCptDS1820 & ENT) >> 1;
	valeurTemp = (infoSigne * (infoValeurDemi + infoValeurEntier));

}

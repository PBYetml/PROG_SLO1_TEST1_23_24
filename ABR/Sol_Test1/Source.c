/*
 * @brief Question 4
 * @file Question 4
 * @author alan.badertscher@gmail.com
 * @date November 2023
 */

  // Libraries standard
#include <stdio.h>
#include <stdint.h> //int8_t,int16_t.....
#include "testQ4.h"

// ======================== Main Program ==========================
void main ()
{
	// Local declaration & Initialization
	int8_t InfoSigne = 0;
	int8_t InfoValeurEntier = 0;
	int8_t InfoValeurDemi = 0;
	int16_t InfoValeurTemp = 0;
	int16_t ValBrutCpt1820 = 0xFF33;

	InfoSigne = ValBrutCpt1820 >> DECALAGE_SIGNE;
	if (InfoSigne == 0xFF)
	{
		InfoSigne = -1;
	}
	else
	{
		InfoSigne = 1;
	}
	InfoValeurDemi = (ValBrutCpt1820 & MASQUE_LSB) * ARRONDI;
	InfoValeurEntier = (ValBrutCpt1820 & MASQUE_8_BITS) >> 1;
	InfoValeurTemp = InfoSigne * InfoValeurDemi + InfoValeurEntier;

	printf(" %d  ", InfoValeurTemp);

	return 0;
}






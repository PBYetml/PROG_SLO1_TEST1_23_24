/*
 * @brief Question 4
 * @file Question 4
 * @author alan.badertscher@gmail.com
 * @date November 2023
 */


 /*====================== Purpose of the program =========================
  *
  * The program allows the user to get informed of the temperature of high precision digital thermometer
  *
  * Program return values:
  *
  *      - 0: when there are no errors
  *
  */



  // Libraries standard
#include <stdio.h>
#include <stdint.h> //int8_t,int16_t.....
#include "testQ4.h"


// ======================== Main Program ==========================
int main(void)
{
	// Local declaration & Initialization
	int32_t InfoSigne = 0;
	int32_t InfoValeurEntier = 0;
	int32_t InfoValeurDemi = 0;
	int32_t InfoValeurTemp = 0;

	InfoSigne = VAL_BRUT_CPT_1820 >> 8;
	if (InfoSigne == 0xFF)
	{
		InfoSigne = -1;
	}
	else
	{
		InfoSigne = 1;
	}

	InfoValeurDemi = VAL_BRUT_CPT_1820 & 0x00FF >> 1;
	InfoValeurTemp = InfoSigne * InfoValeurDemi + InfoValeurEntier;

	printf(" %d  ", InfoValeurTemp);

	return 0;

}






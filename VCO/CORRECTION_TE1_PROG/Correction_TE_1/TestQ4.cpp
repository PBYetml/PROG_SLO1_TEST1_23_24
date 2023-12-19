#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include "TEST_Q4.H"

int main() {
    // Déclaration des variables
    int16_t    infoSigne = 0;
    int16_t    valBrutCPTDS1820 = 0;
    int8_t     infoValeurEntier = 0;
    float      infoValeurDemi = 0;
    int8_t     valeurTemp = 0;

    // Valeurs des variables
    valBrutCPTDS1820 = 0xFF33;

    while (true) {

        infoSigne = valBrutCPTDS1820 >> 8;

        if (infoSigne == 0xFF) 
        {
            infoSigne = -1;
        }
        else 
        {
            infoSigne = 1;
        }
        infoValeurDemi = (valBrutCPTDS1820 & 0x0001) * 0.5;
        infoValeurEntier = (valBrutCPTDS1820 & 0x00FF) >> 1;
        valeurTemp = infoSigne * (infoValeurDemi + infoValeurEntier);

        // Affichage des variables         Ceci est en C++, dû le projet en .cpp -> j'ai uniquement écrit en dur ^le "printf" car mon débug ne fonctionnait pas, j'ai donc print la valeur des variables à chaque fois
        std::cout << "InfoSigne: " << infoSigne << std::endl;
        std::cout << "ValBrutCPTDS1820: " << valBrutCPTDS1820 << std::endl;
        std::cout << "InfoValeurDemi: " << infoValeurDemi << std::endl;
        std::cout << "InfoValeurEntier: " << static_cast<int>(infoValeurEntier) << std::endl;
        std::cout << "ValeurTemp: " << valeurTemp << std::endl;
    }

    return 0;
}


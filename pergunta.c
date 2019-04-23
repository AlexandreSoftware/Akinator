#include "logicaakinator.h"
#include <stdio.h>
#include "input.h"
#include <stdbool.h>
#include "carinha.h"
#include <string.h>
char *perguntas(int question){


    switch (question){
        case 1:
            //if yes go to 3, if not go to 2
        return "o famoso e um ator?";
       break;

       case 2:
            // if yes go to 5 if not go to 4
         return "o famoso e um musico ?";
       break;

       case 3://if yes go to 6 if not go to 7
         return "o ator participou do seriado game of thrones?";
       break;

       case 4://final if not not an response if yes john oliver

         return "o famoso participa de um talk show ";
       break;
       case 5:
           //if yes posty boi, if no beyonce
        return "a pessoa em questao ja foi associado com mal cheiro?";
       break;
       case 6://if yes arnold shwarneger if not Bruce Campbell
         return "o ator participou do filme predador(1987)";
       break;
       case 7://if not jason momoa if yes peter dinklage
        return "o ator tem menos de 1,40 ?";
       break;
       default:
        return "PORRA KRATOS TU FEZ MERDA";


    }
}
int loopergunta(){
 printf("%s \n %s %s \n %s ", topcarinha,midcarinha, perguntas(1),botcarinha);
 char input =validateinput();
}

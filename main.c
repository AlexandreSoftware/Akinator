#include <stdio.h>
#include <stdlib.h>
#include "logicaakinator.h"
#include <stdbool.h>
int main(){
   bool gameisfinished=false;
   while(!gameisfinished){
    bool menuisfinished=false;
    system("cls");
    while(!menuisfinished){menuisfinished =menuquestion();}
    char *questions[16] ={
      "",
      "Pergunta 1",
      "Pergunta 2: if not 1",
      "Pergunta 3:if yes 1",
      "Pergunta 4:if not 2",
      "Pergunta 5:if yes 2",
      "Pergunta 6:if not 3",
      "Pergunta 7:if yes 3",
      "Resposta 8:if not 4",
      "Resposta 9:if yes 4",
      "Resposta 10:if not 5",
      "Resposta 11:if yes 5",
      "Resposta 12:if not 6",
      "Resposta 13:if yes 6",
      "Resposta 14:if yes 7",
      "Resposta 15:if not 7"};
     int i =1;
     while(i<16){i=question(questions[i],i);}
     printf("Deseja jogar novamente ?");
     char playagain=validateinput();
     playagain=='n'? system("cls"),printf("Obrigado por jogar"),gameisfinished=true : system("cls");
   }
    return 0;
}


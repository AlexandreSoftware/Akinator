#include <stdio.h>
#include <stdlib.h>
#include "logicaakinator.h"
#include <stdbool.h>

int main(int argc, char *argv[0]){
    int pathlength=strlen(argv[0]);
    char path[pathlength-20];
    for(int i =0;i<=pathlength-22;i++){path[i]=argv[0][i];}
   /*
   //Loop DE jogo
   bool gameisfinished=false;
   while(!gameisfinished){
    //Loop Menu
    bool menuisfinished=false;
    system("cls");
    while(!menuisfinished){menuisfinished =menuquestion();}
    //FIM DO MENU----------------------------
    char *questions[] ={
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
      "Resposta 14:if not 7",
      "Resposta 15:if yes 7"};
     int i =1,length=sizeof(questions)/sizeof(int);
     while(i<=length-1){i=question(questions[i],i);}
     //FIM DE JOGO--------------------------------------------------
     printf("Deseja jogar novamente ?");
     char playagain=validateinput();
     playagain=='n'? system("cls"),printf("Obrigado por jogar"),gameisfinished=true : system("cls");
   }*/
    return 0;
}


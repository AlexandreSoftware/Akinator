#include "logicaakinator.h"
#include <stdio.h>
#include "input.h"
#include <stdbool.h>
#include "carinha.h"
#include <string.h>
bool menuquestion(){
    printf("Bem vindo ao GUESSBOT\n1-Jogar\n2-Opcoes (WIP)\n3-Adicione o seu personagem (Wip)\n4-Creditos");
    char input=getch();
    switch(input){
      case '1':
       return true;
       break;
      case '2':
       system("cls");
       printf("WIP: VOCE NAO CONSEGUE LER O TITULO ?\nPressione qualquer tecla para continuar");
       getch();
       system("cls");
       break;
      case '3':
       system("cls");
       printf("WIP: VOCE NAO CONSEGUE LER O TITULO ?\nPressione qualquer tecla para continuar");
       getch();
       system("cls");
       break;
      case '4':
       system("cls");
       printf("WIP: VOCE NAO CONSEGUE LER O TITULO ?\nPressione qualquer tecla para continuar");
       getch();
       system("cls");
       break;
      /* Logica de saida do programa, WIP
      case '5':
       system("cls");
       printf("Obrigado por jogar");
       ;  */
      default:
        system("cls");
        printf("Input incorreto\nPressione qualquer tecla para continuar");
        getch();
        system("cls");
        break;
    }
    return false;
}
int question(char *Question,int loop){
 system("cls");
 printf(" %s \n %s %s \n %s ", topcarinha,midcarinha, Question ,botcarinha);
 char input =validateinput();

 return loop=='n'? loop*2:loop*2+1;
}

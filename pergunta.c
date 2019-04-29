#include "logicaakinator.h"
#include <stdio.h>
#include "input.h"

#include "carinha.h"
#include <string.h>
int menuquestion(){
     return 0;

}

int question(char *Question,int input){
 system("cls");
 printf(" %s \n %s %s \n %s ", topcarinha,midcarinha, Question ,botcarinha);
 char input =validateinput();

 return input=='n'? input*2:input*2+1;
}

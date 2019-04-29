#include "logicaakinator.h"
#include <stdio.h>
#include "input.h"

#include "carinha.h"
#include <string.h>
int menuquestion(){
     return 0;
}

int question(char *Question,int loop){
 system("cls");
 printf(" %s \n %s %s \n %s ", topcarinha,midcarinha, Question ,botcarinha);
 char input =validateinput();

 return loop=='n'? loop*2:loop*2+1;
}

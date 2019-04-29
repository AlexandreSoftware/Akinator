#include <stdio.h>
#include <stdlib.h>
#include "logicaakinator.h"
int main(){
    char questions[10][50] ={
      "",
      "Pergunta 1",
      "Pergunta 2: if not 1",
      "Pergunta 3:if yes 1",
      "Pergunta 4:if not 2",
      "Pergunta 5:if yes 2",
      "Pergunta 6:if not 3",
      "Pergunta 7:if yes 3"};
    int i =1;
    while(i<7){
     i=question(questions[i],i);
    }
    return 0;
}


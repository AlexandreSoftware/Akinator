#include "input.h"
#include <stdbool.h>
#include <conio.h>
#include <stdio.h>

char validateinput(){
    bool x=false;
    while(!x){
    char input = _getch();
    system("cls");
    printf("%c \n", input);
    if(input=='s'||input=='n'){
         return input;
    }
    else{

        printf("input invalido: tente novamente");
    }}
    return '@';
}

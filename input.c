#include "input.h"
#include <stdbool.h>
#include <conio.h>
#include <stdio.h>
#include "carinha.h"
char validateinput(){
    bool x=false;
    while(!x){
    char input = _getch();

    printf("%c \n", input);
    if(input=='s'||input=='n'){
         return input;
    }
    else{
        system("cls");
        printf(" %s \n %s \n %s ", topcarinha,midcarinha,botcarinha);
        printf("input invalido: tente novamente");
    }}
    return '@';
}

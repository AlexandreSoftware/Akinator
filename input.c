#include "input.h"
#include <stdbool.h>
#include <conio.h>
#include <stdio.h>
#include "carinha.h"
char validateinput(){
    bool x;
    char input;
    while(!x){
        input = _getch();
        input=='s'||input=='n'? system("cls"),x=true:printf("\rInput invalido: tente novamente");
    }
    return input;
}

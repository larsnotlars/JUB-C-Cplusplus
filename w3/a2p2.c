/*
CH-230-A
a2p2.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char char1;
    scanf("%c",&char1); //reads char
    printf("character=%c\n",char1); //
    printf("decimal=%d\n",char1);
    printf("octal=%o\n",char1);
    printf("hexadecimal=%x\n",char1); //prints char in different types
    return 0;
}
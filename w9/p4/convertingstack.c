/*
CH-230-A
a8p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>

int main()
{
    unsigned int input;
    struct stack thestack;
    thestack.count = 0;//initialize input and stack
    scanf("%d",&input);//scan input
    dectobin(&thestack,input);// call function to convert
    return 0;
}
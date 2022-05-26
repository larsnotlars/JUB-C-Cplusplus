/*
CH-230-A
a6p2.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#define LSBIT(A) (int)(A & 1)//use mask to compare it to 1

int main()
{
    unsigned char c;
    scanf("%c",&c);//get values
    printf("The decimal representatiation is:%d\n",c);
    printf("The least significant bit is:%d\n",LSBIT(c));//call function
    return 0;
}
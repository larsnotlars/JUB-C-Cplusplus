/*
CH-230-A
a2p8.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int int_a;
    scanf("%d",&int_a);
    if (int_a%2== 0 && int_a%7 ==0) 
    {
        printf("The number is divisible by 2 and 7\n");
    } //print is executed when int_a is divisible by BOTH 2 and 7
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    } // executes in the case int_a is not divisible by either 2 or 7 or both
    return 0;
}
/*
CH-230-A
a3p2.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int  main ()
{
    char ch;
    int n,i;
    scanf("%c",&ch);
    scanf("%d",&n);//initialize variables and get values
    for ( i = 0; i <= n; i++) //the loop breaks wheb i is bigger than n
    {
        printf("%c\n",(int)(ch-i));//printing the letters minus i
    }
    return 0;
}
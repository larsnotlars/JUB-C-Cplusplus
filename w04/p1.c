/*
CH-230-A
a3p1.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int  main ()
{
    float x;
    int n=0, i;
    scanf("%f",&x);//gets float
    while (n<=0) //iterate while int is invalid
    {
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Input is invalid, reenter value\n"); 
        }//only print this if int is invalid
    }
    for ( i = 0; i < n; i++)
    {
        printf("%f\n",x);
    }//print x as n many times
    return 0;
}
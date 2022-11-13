/*
CH-230-A
a5p10.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
void countdown(int n)
{
    printf("%d\n",n);//print passed number
    if (n != 1)
    {
        countdown(n-1);//if not at 1 pass the next lower number
    }
}

int main()
{
    int n;
    scanf("%d",&n);//read number
    countdown(n);//pass it to function
    return 0;
}
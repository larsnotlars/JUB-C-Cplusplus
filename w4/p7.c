/*
CH-230-A
a3p7.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c);//prototype function

int main()
{
    int a, b;
    char c;
    scanf("%d%d %c",&a,&b,&c);//read values
    print_form(a,b,c);// call function
    return 0;
}

void print_form(int n, int m, char c)
{
    int i,j;
    for (i = 0; i < n; i++)/*run this n-times to get a pyramid with height n
    i will never be n on the last iteration it will be n-1*/
    {
        for (j = 0; j < (m+i); j++)/* run this m+i times 
        on the last iteration of the first for-loop i =n-1 so m+i= m+n-1*/
        {
            printf("%c",c);
        }
    printf("\n");// makes new line after each row
    }   
}
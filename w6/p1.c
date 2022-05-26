/*
CH-230-A
a5p1.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>

void triangle(int n, char ch);

int main()
{
    int n;
    char ch;
    scanf("%d %c",&n,&ch);
    triangle(n,ch);//call function with input vars
    return 0;
}

void triangle(int n, char ch)
{
    for (int i = 0; i < n; i++)//col
    {
        for (int j = 0; j < n; j++)//row
        {
            if ((i+j)<n)//print ch over secondary diagonal
            {
                printf("%c",ch);
            }
        }
        printf("\n");
    }
    
}
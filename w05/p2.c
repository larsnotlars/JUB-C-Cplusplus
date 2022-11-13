/*
CH-230-A
a4p2.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50];
    fgets(string1,sizeof(string1),stdin);//read string
    for (int i = 0; i < strlen(string1)-1; i++) /*executes the following code
    for all letters exept the last one which is '/n'*/
    {
        if (i % 2 == 0)
        {
            printf("%c\n",string1[i]);
        }//prints w/o space when index is even
        else
        {
            printf(" %c\n",string1[i]);
        } //prints with space when index is odd
        
    }
    
    return 0;
}
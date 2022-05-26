/*
CH-230-A
a4p12.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e);

int main()
{
    char a, b, arr[80];
    while(1)//endless loop
    {
        fgets(arr,sizeof(arr),stdin);//read string 
        if (strcmp(arr, "stop\n") == 0)
        {
            break;//end loop if string is stop
        }
        scanf("%c",&a);
        getchar();
        scanf("%c",&b);//get chars for replacements
        getchar();
        replaceAll(arr,a,b);//call function
        printf("%s\n",arr);
    }
    return 0;
}

void replaceAll(char *str, char c, char e)
{
    char *ptr;
    for (ptr = str; *ptr != '\0'; ptr++)//iterate string
    {
        if (*ptr == c)//search for char to replace
        {
            *ptr = e;//replace it
        }
    }
}
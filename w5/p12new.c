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
    char a, b, *arr;
    arr = (char*) malloc(sizeof(char) * 80);
    if (arr == NULL)
    {
        printf("memory cannot be allocated\n");
        exit(1);
    }
    arr[1]='A';
    while(strcmp(arr, "stop") == 0)//endless loop
    {
        scanf("%[^\n]",arr);//read string 
        getchar();
        printf("Enter character to replace:");
        scanf("%c",&a);
        getchar();
        printf("Enter replacement:");
        scanf("%c",&b);//get chars for replacements
        getchar();
        replaceAll(arr,a,b);//call function
    }
    free(arr);
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
        printf("%c",*ptr);//print "new" chars
    }
    printf("\n");
}
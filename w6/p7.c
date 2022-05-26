/*
CH-230-A
a5p7.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100], *str3;
    scanf("%[^\n]",str1);//reads first string
    getchar();
    scanf("%[^\n]",str2);//reads second string
    str3 = (char*)malloc((sizeof(char)*(strlen(str1)+strlen(str2))));
    //alloc space for exactly the two strings
    strcat(str3,str1);//concat str1 into str3
    strcat(str3,str2);//concat str2 into str3
    printf("Result of concatenation: %s\n",str3);
    free(str3);
    return 0;
}
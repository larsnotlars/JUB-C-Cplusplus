/*
CH-230-A
a4p11.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int count_insensitive(char *str, char c);
int main()
{
    char *str, *str1;
    str = (char*) malloc(sizeof(char)*50);
    if (str == NULL)
    {
        printf("memory cannot be allocated\n");
        exit(1);
    }//check if memory can be allocated
    scanf("%[^\n]",str);//scan string into allocated mem
    str1 =(char*) malloc(sizeof(char)*strlen(str));/*allocate enough memory*/
    if (str1 == NULL)
    {
        printf("memory cannot be allocated\n");
        exit(1);
    }
    strcpy(str1,str);// copy string to fitted memory space
    free(str);//free previous memory
    printf("The character'%c'occours %d times\n",'b',
    count_insensitive(str1,'b'));
    printf("The character'%c'occours %d times\n",'H',
    count_insensitive(str1,'H'));
    printf("The character'%c'occours %d times\n",'8',
    count_insensitive(str1,'8'));
    printf("The character'%c'occours %d times\n",'u',
    count_insensitive(str1,'u'));
    printf("The character'%c'occours %d times\n",'$',
    count_insensitive(str1,'$'));
    free(str1);
    return 0;
}

int count_insensitive(char *str, char c)
{
    int occ=0;
    char *ptrstr;//for pointer erithmetic
    for ( ptrstr = str; *ptrstr!= '\0' ; ptrstr++)//iterate until end of string
    {
        *ptrstr = toupper(*ptrstr);//set all letters of string uppercase
        if ((*ptrstr) == toupper(c))//compare to uppercase version of c
        {
            occ++;
        }
        
    }
    return occ;
}
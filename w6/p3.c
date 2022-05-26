/*
CH-230-A
a5p3.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
int count_lower(char* str);

int main()
{
    char str[50];
    while (str[0] != '\n')//read string until empty string
    {
        fgets(str, 50, stdin);
        printf("The text contains %d lowercase characters\n",count_lower(str));
    }//call function on read string
    return 0;
}

int count_lower(char* str)
{
    int count = 0;
    for (; *str != '\0'; str++)
    {
        if (*str >= 97 && *str <= 122)// if ascii is lowercase char count it
        {
            count++;
        }
    }
    return count;
}
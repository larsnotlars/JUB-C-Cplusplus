/*
CH-230-A
a4p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/
 
#include <stdio.h>
#include <string.h>
int count_consonants(char str[]);
int main ()
{
    char string[100];
    while (string[0]!='\n')// get string until only enter is pressed
    {
        fgets(string,100,stdin);
        if (string[0]!='\n')//only print result if there is more than just /n 
        {
            printf("Number of consonants=%d\n",count_consonants(string));
        }  
    } 
    return 0;
}
int count_consonants(char str[])
{
    int count=0;//counts consonants
    for (int i = 0; i < strlen(str); i++)
    {
        if ((int)str[i]<123&&(int)str[i]>96)//if char is a lowercase letter
        {
            switch (str[i])//check if it is a vovel
            {
            case 'a':
                break;
            case 'e':
                break;
            case 'i':
                break;
            case 'o':
                break;
            case 'u':
                break;
            default:// if its no vovel it must be a consonant so increase count
            count++;
                break;
            }
        }
        if ((int)str[i]<91&&(int)str[i]>64)//if char is a uppercase letter
        {
            switch (str[i])//check if it is a vovel
            {
            case 'A':
                break;
            case 'E':
                break;
            case 'I':
                break;
            case 'O':
                break;
            case 'U':
                break;
            default:// if its no vovel it must be a consonant so increase count
            count++;
                break;
            }
        }
        
    }
    return count;
}
/*
CH-230-A
a7p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//prototypes of the four functions
void allcaps(char mystring[]);
void alllow(char mystring[]);
void swap(char mystring[]);
void quit(char mystring[]);

int main()
{
    char mystring[50];
    char c;
    //array of function pointers
    void (*funcarr[4])(char[]);
    fgets(mystring, 50, stdin);
    funcarr[0]= &allcaps;
    funcarr[1]= &alllow;
    funcarr[2]= &swap;
    funcarr[3]= &quit;

    while (1)
    {
        scanf("%c",&c);
        getchar();
        //deduct 49 from c because ASCII of '1' is 49
        funcarr[(int)c-49](mystring);
    }
    return 0;
}

void allcaps(char mystring[])
{//prints uppercase for lowercase chars and for others just the char
    for (int i = 0; mystring[i]!= '\0'; i++)
    {
        if (mystring[i]>='a' && mystring[i]<='z')
        {
            printf("%c",toupper(mystring[i]));
        }
        else
        {
            printf("%c",mystring[i]);
        }
        
        
    }  
}

void alllow(char mystring[])
{//prints lowercase for uppercase chars and for others just the char
    for (int i = 0; mystring[i]!= '\0'; i++)
    {
        if (mystring[i]>='A' && mystring[i]<='Z')
        {
            printf("%c",tolower(mystring[i]));
        }
        else
            printf("%c",mystring[i]);
    }
       
}

void swap(char mystring[])
{//prints uppercase as lowercase and vice versa others are just printed
    for (int i = 0; mystring[i]!= '\0'; i++)
    {
        if (mystring[i]>='A' && mystring[i]<='Z')
        {
            printf("%c",tolower(mystring[i]));
        }
        else if (mystring[i]>='a' && mystring[i]<='z')
        {
            printf("%c",toupper(mystring[i]));
        }
        else
        {
            printf("%c",mystring[i]);
        }
        
    }
}

void quit(char mystring[])
{//stops the programm
    exit(0);
}
/*
CH-230-A
a6p7.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void printbin(unsigned char c);
unsigned char set3bits(unsigned char char1, int a, int b, int c);

int main()
{
    int a, b, c;
    char char1;
    scanf("%c%d%d%d",&char1,&a,&b,&c);
    printf("The decimal representation is: %d\n",char1);
    printf("The binary representation is: ");
    printbin(char1);//call function to print bin version
    printf("After setting the bits: ");
    printbin(set3bits(char1,a,b,c));//print changed version
    return 0;
}

void printbin(unsigned char c)
{//code from problem 6
    unsigned char a = c;
    for (int i = 0; i < 8; i++)//iterate through all bits
    {
        if ((a & 1<<7) != 0)//check first one and print its value
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        a= a<<1;//shift left / lose most sig bit
    }
    printf("\n");
}

unsigned char set3bits(unsigned char char1, int a, int b, int c)
{
    char1 |= (unsigned char) pow(2,a);
    char1 |= (unsigned char) pow(2,b);
    char1 |= (unsigned char) pow(2,c);/*turn on the corresponding bits 
    using masks of kind 2^x*/
    return char1;
}
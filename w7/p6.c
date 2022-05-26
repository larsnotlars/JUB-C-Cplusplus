/*
CH-230-A
a6p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned char character;
    scanf("%c",&character);
    printf("The decimal representation is: %d\n",character);
    printf("The binary representation is: ");
    for (int i = 0; i < 8; i++)//iterate through whole bit
    {
        if ((character & 1<<7) != 0)//check if first bit is 1
        {
            printf("1");//if so print 1
        }
        else
        {
            printf("0");//else print 0
        }
        character= character<<1;//lose first bit
    }
    printf("\n");
    return 0;
}
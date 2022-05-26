/*
CH-230-A
a6p5.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char a;
    scanf("%c",&a);
    printf("The decimal representation is: %d\n",a);
    printf("The backwards binary representation is: ");
    while (a != 0)//loop until all digits in c are 0
    {
        printf("%d",(a & 1));//print least significant bit first
        a = a>>1;//shift to right(lose least sig bit)
    }
    printf("\n");
    return 0;
}
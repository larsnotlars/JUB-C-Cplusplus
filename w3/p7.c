/*
CH-230-A
a2p7.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i);
        i--;
    } // i was not decreased because i-- it was not in the while loop
    //adding the brace lets i--; be in the loop
    printf("That’s it.\n");
    return 0;
}
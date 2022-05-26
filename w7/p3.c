/*
CH-230-A
a6p3.c
Lars Schuster
l.schuster@jacobs-university.de
*/
//MAX and MIN determine return the bigger/smaller value of two values
#define MAX(A,B) ((A) > (B) ? (A) : (B))
#define MIN(A,B) ((A) < (B) ? (A) : (B))
//MID uses formular and determines biggest value by calling MIN/MAX twice each
#define MID(A,B,C) ((MAX(MAX(A,B),C)+MIN(MIN(A,B),C)) / 2.0)
#include <stdio.h>

int main()
{
    int a, b ,c;
    scanf("%d%d%d", &a, &b, &c);//read values
    printf("The mid-range is: %.6f\n", MID(a,b,c));//call function on values
    return 0;
}
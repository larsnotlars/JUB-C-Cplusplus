/*
CH-230-A
a2p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x,y;
    printf("Enter two doubles:\n");
    scanf("%lf %lf",&x,&y);//stores input in x and y
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;// declares and initializes pointers
    printf("Address of ptr_one:  %p\n",ptr_one);
    printf("Address of ptr_two:  %p\n",ptr_two);
    printf("Address of ptr_three:%p\n",ptr_three); // prints addresses
    return 0;
}
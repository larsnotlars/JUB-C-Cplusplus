/*
CH-230-A
a2p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
int main(){
    float a, b, h;
    scanf("%f%f%f", &a,&b,&h);
    printf("square area=%f\n",a*a);
    printf("rectangle area=%f\n",a*b);
    printf("triangle area=%f\n",0.5*a*h);
    
    printf("trapezoid area=%f\n",(a+b)*.5*h); //compute and print statements
    return 0;
}   
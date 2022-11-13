/*
CH-230-A
a2p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
int main(){
    float a, b, h, trap_area,squa_area , rect_area, tri_area;
    scanf("%f%f%f", &a,&b,&h);
    squa_area=a*a;
    rect_area=a*b;
    tri_area=0.5*a*h;
    trap_area= (a+b)*.5*h;
    printf("square area=%f\n",squa_area);
    printf("rectangle area=%f\n",rect_area);
    printf("triangle area=%f\n",tri_area);
    
    printf("trapezoid area=%f\n",trap_area); //compute and print statements
    return 0;
}   
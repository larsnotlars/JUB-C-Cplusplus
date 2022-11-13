/*
CH-230-A
a2p1.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double w,x; //declare double
    scanf("%lf",&w);
    scanf("%lf",&x); //get doubles
    double dsum = w+x;
    double ddif = w-x;
    double dsqu = w*w; //compute sum dif and sqrt
    printf("sum of doubles=%lf\n",dsum);
    printf("difference of doubles=%lf\n",ddif);
    printf("square=%lf\n",dsqu); //print values
    int y,z; //declare int
    scanf("%d",&y);
    scanf("%d",&z);//get int
    int isum = y +z;
    int iprod= y*z; //compute sum and prod
    printf("sum of integers=%d\n",isum);
    printf("product of integers=%d\n",iprod); //print values
    char char1,char2; // declare char
    getchar();
    scanf("%c ",&char1);
    scanf("%c",&char2); //get char
    printf("sum of chars=%d\n",char1+char2);
    printf("product of chars=%d\n",char1*char2);
    printf("sum of chars=%c\n",char1+char2);
    printf("product of chars=%c\n",char1*char2); //compute and print values
    return 0;
}
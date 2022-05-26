/*
CH-230-A
a2p3.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>

int main(){
    int hours, weeks , days ,total_hours; //initialize variables
    printf("Type Number of weeks:\n");
    scanf("%d",&weeks);
    printf("Type Number of days:\n");
    scanf("%d",&days);
    printf("Type Number of hours:\n");
    scanf("%d",&hours); 
    //Import values for weeks, days and hours  
    total_hours = hours + (days*24) +(weeks*24*7);
    printf("The total amount of hours are:\n%d\n",total_hours);
    //Compute and print total hours
    return 0;
}
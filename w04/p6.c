/*
CH-230-A
a3p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
float to_pounds(int kg, int g)//initialize function
{
    float lbs;
    lbs= 2.2*(kg+(g/1000.));//convert to pounds
    return lbs;//return punds value
}
int main()
{
    int kg, g;
    scanf("%d %d",&kg,&g);//get integers 
    printf("Result of conversion: %f\n",to_pounds(kg,g));
    //print return of function
    return 0;
}
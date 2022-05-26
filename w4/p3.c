/*
CH-230-A
a3p3.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
float convert(float a);//prototype function

int  main ()
{

    int int_cm;
    scanf("%d",&int_cm); //get  number for cm
    float km = convert(int_cm);// store converted number
    printf("Result of conversion: %f\n",km);//print it
    return 0;
}
float convert(float a)//function converts by dividing by 100000
{
    float b;
    b = a/100000.;
    return(b);
}
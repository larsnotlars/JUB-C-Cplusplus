/*
CH-230-A
a4p1.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float lowlim = 0, upplim = 0, incr = 0; //declare variables
    scanf("%f", &lowlim);
    scanf("%f", &upplim);
    scanf("%f", &incr);//read variables 
    for (float i = lowlim; i <= upplim; i += incr)
    {
        printf("%f %f %f", i, i * i * M_PI,2 * M_PI * i);//prints digits in row
        printf("\n");//prints new line after row
    }//executes this from upplim to lowlim adding incr in every step 
    return 0;
}
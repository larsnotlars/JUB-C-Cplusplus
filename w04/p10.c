/*
CH-230-A
a3p10.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);//prototypes
int main()
{
    float f1, f2, prodref;
    float *ptr = &prodref;
    scanf("%f%f", &f1, &f2);// gets the floats
    printf("%f\n",product(f1, f2));//call and print product function
    productbyref(f1, f2, ptr);// call function to change prodref
    printf("%f\n", prodref);//print prodref
    modifybyref(&f1, &f2);// call modify function
    printf("%f\n%f\n", f1, f2);//print modified variables
}
float product(float a, float b)
{
    float prod;
    prod = a*b;
    return prod;/*function claculates and returns product 
    but it does not store the value*/
}
void productbyref(float a, float b, float *p)
{
    float prod;
    prod = a*b;
    *p= prod;//function changes variable given for product based on vars given
}
void modifybyref(float *a, float *b)
{
    *a += 3;
    *b += 11;//function changes the variables because their pointer was given
}
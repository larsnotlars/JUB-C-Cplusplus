/*
CH-230-A
a4p10.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb)//define function
{
    *prod= a*b;
    *div= a/b;
    *pwr= pow(a,b);
    *invb = 1/b;//change variables through pointers
}

int main()
{
    float a, b, prod, div, pwr, invb;
    scanf("%f%f",&a,&b);//read a and b
    proddivpowinv(a,b,&prod,&div,&pwr,&invb);//call function
    printf("%f\n",prod);+
    printf("%f\n",div);
    printf("%f\n",pwr);
    printf("%f\n",invb);//print changed variables
    return 0;

}
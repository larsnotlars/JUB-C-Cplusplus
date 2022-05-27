#include<stdio.h> // # missing
int main()
{
    float result;
    /*The result of the division*/
    int a = 5;
    int b = 13.5;
    result = (float)a / b;// cast one of divisors to float
    printf("The result is %f\n", result); //result is float so %f instead of %d
    return 0;
}
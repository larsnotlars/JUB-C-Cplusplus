#include <stdio.h>
int main()
{
    double result; /*The result of our calculation*/
    result = (3 + 1) / 5.0;//the following digits will be cut off
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
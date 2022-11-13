#include <stdio.h>
int main() 
{
    int result;
    /*The result of our calculation*/
    result = (2 + 7)*9 / 3;
    printf("The result is %d\n",result);
//we do not pass a value to the reference so it the program takes a random value
    return 0;
}
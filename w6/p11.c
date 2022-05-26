/*
CH-230-A
a5p11.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int isprime(int n, int div)
{
    if (n == 1||n == 0)//check base cases
    {
        return 0;
    }
    else if(n == div)//if n is not divisible by a number [2, n] it is prime
    {
        return 1;
    }
    else if (n % div == 0)
    //if n is divisible by any number below n its not prime
    {
        return 0;
    }
    else
    {
        return(isprime(n,div+1));//call function and add one divisor
    }
    
    
}

int main()
{
    int num;
    scanf("%d",&num);
    if (isprime(num, 2) == 1)//call function with 2 as first divisor
    {
        printf("%d is prime\n",num);
    }
    else
    {
        printf("%d is not prime\n",num);
    }
    
    return 0;
}
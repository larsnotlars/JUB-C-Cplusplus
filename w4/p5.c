/*
CH-230-A
a3p5.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char c;
    int n,i;
    double sum=0,far=0,mean=0;//initialize variables
    double temp[100];//initialize array for temperatures
    scanf("%c",&c);
    scanf("%d",&n);//get values for c and n

    for ( i = 0; i < n; i++)
    {
        scanf("%lf",&temp[i]);
    }// get n floats
    switch (c)
    {
    case 's':// if c is s
        for (i = 0; i < n; i++)
        {
            sum += temp[i];
        } //add all elements of array to sum
        printf("sum=%lf°C\n",sum);// print sum
        break;
    case 'p'://if c is p
        for (i = 0; i < n; i++)
        {
            printf("%lf°C\n",temp[i]);
        }//print all elements of array to sum
        break;
    case 't':// if c is t
        for (i = 0; i < n; i++)
        {
            far = ((float)9/5)*temp[i]+32;//convert to farenheit
            printf("%lf°F\n",far);//print values in far
        }
        break;
    default:
        for (i = 0; i < n; i++)
        {
            sum += temp[i];
        }//add all the temps to sum
        mean= sum/n;//compute mean
        printf("%lf°C\n",mean);//print mean
        break;
    }
    
}
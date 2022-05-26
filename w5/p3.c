/*
CH-230-A
a4p3.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
float geometric_mean(float arr[], int num);
float sum(float arr[], int num);
float highest(float arr[], int num);
float lowest(float arr[], int num);

int main()
{
    float numbers[15];
    int count = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%f",&numbers[i]);//get 15 values
        if (numbers[i]<0)/*if negative value is entered 
        delete it and break loop*/
        {
            numbers[i]=0;
            break;
        }
        count++;//count number of valid elements
    }
    char char1;
    getchar();
    scanf("%c",&char1);
    switch (char1)//switch to decide which function to execute
    {
    case 'm':
        printf("geometric mean= %f\n", geometric_mean(numbers,count));
        break;
     case 'h':
        printf("highest value is= %f\n", highest(numbers,count));
        break;
     case 'l':
        printf("lowest value is= %f\n", lowest(numbers,count));
        break;
     case 's':
        printf("sum= %f\n", sum(numbers,count));
        break;
    default:
        break;
    }
    return 0;
}

float geometric_mean(float arr[], int num)
{
    float prod = 1;
    for (int i = 0; i < num ; i++)
    {
        prod = prod*arr[i];//multiply value to the product
    }
    float vgmean;
    vgmean = pow(prod,((float)1/(num)));//calculate gmean with power function
    return vgmean;
}
float sum(float arr[], int num)
{
    float vsum=0;
    for (int i = 0; i < num ; i++)//for every num in array add num to sum
    {
        vsum += arr[i];
    }
    return vsum;
}
float highest(float arr[], int num)
{
    float high;
    high = arr[0];//set high to first value of the array
    for (int i = 0; i < num ; i++)
    {
        if (arr[i]>high)//check if element is higher than any of the previous
        {
            high = arr[i];
        }
    }    
    return high;
}
float lowest(float arr[], int num)//same principle as highest. 
{
    float low;
    low = arr[0];
    for (int i = 0; i < num ; i++)
    {
        if (arr[i]<low)
        {
            low = arr[i];
        }
    }
    return low;
}
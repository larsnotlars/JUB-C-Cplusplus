/*
CH-230-A
a3p8.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

float sum(float numbers[],float i);
float avg(float numbers[],float i);//prototypes for the functions
int count=0;/*global variable to be used in all functions. 
count counts the elements in the array*/
int main()
{
    int i;
    float numbers[10];
    float nsum,navg;//initialize the vars and an array for input
    for (i = 0; i < 10; i++)//takes 10 inputs
    {
        ++count;//counts number of inputs
        scanf("%f",&numbers[i]);
        if (numbers[i]==-99.0)
        {
            numbers[i]=0;//deletes -99.0
            --count;// since -99.0 is deleted it will deduct one from the count 
            i=10;//breaks loop if -99.0 is input
        }
    }
    nsum = sum(numbers,i);
    navg = avg(numbers,i);//calls functions
    printf("The sum is:%f\nThe average is:%f\n", nsum, navg); 
    //confirms if values are correct
}

float sum(float numbers[],float i)
{
    int j;
    float sum=0;
    for ( j = 0; j <= count; j++)
    {
        sum += numbers[j];
    } //adds each value to sum and returns it
    return sum;
}

float avg(float numbers[],float i)
{
    float avg;
    avg =(sum(numbers,count)/(count));
    return avg;//divide sum by count to get average 
}
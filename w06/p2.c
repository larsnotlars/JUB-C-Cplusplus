/*
CH-230-A
a5p2.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>

void divby5(float arr[], int size);
void printarr(float arr[], int size);

int main()
{
    float arr[6]= {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = 6;
    printf("Before:\n");
    printarr(arr,size);
    divby5(arr,size);//call function
    printf("After:\n");
    printarr(arr,size);
    return 0;
}

void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i]= arr[i] / 5;
    }//div all values by 5
}

void printarr(float arr[], int size)
//print all values in array of type float
{
    for (int i = 0; i < size; i++)
    {
        printf("%.3f ",arr[i]);
    }
    printf("\n");
}
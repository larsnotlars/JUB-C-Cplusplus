/*
CH-230-A
a5p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>

#include <stdlib.h>

void divby5(float arr[], int size);
void printarr(float arr[], int size);

int main()
{
    int n;
    float *arr;
    scanf("%d",&n);//read size now
    arr = (float*) malloc(sizeof(int)*n);//alloc arr of size n
    if (arr == NULL)
    {
        printf("cannot allocate memory\n");
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&arr[i]);//scan values for all elements
    }
    printf("Before:\n");
    printarr(arr,n);
    divby5(arr,n);//call function
    printf("After:\n");
    printarr(arr,n);
    free(arr);
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
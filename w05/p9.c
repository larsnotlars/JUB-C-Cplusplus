/*
CH-230-A
a4p9.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n);
int main()
{
    int n ,*arr;
    scanf("%d",&n);//get dim of arr
    arr =(int*) malloc(sizeof(int) * n);//allocate mem for arr
    if (arr == NULL)
    {
        printf("memory cannot be allocated\n");
        exit(1);
    }//check if memory can be allocated
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }//scan var for arr
    printf("Product of min and max: %d\n",prodminmax(arr,n));//call/print funct
    free(arr);//free mem
    return 0;
}

int prodminmax(int arr[], int n)
{
    int min =arr[0], max = arr[0], prod;//give min/max value in case n=1
    for (int i = 0; i < n; i++)//for all values of arr
    {
        if (arr[i] > max)
        {
            max= arr[i];
        }//save max value in max
        else if (arr[i]<min)
        {
            min= arr[i];
        }//save min value in min
    }
    prod = min*max;//calc prod
    return prod;//return prod
}
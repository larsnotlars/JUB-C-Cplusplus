/*
CH-230-A
a4p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void twomax(int arr[],int x);
int main()
{
    int n;
    int *intarr;//initialize pointer to dyn array
    printf("Enter number of integers to be stored:\n");
    scanf("%d",&n);//get dimension of dyn array
    intarr = (int*) malloc(sizeof(int)*n);
    if (intarr== NULL)
    {
        printf("memory cannot be allocated\n");
        exit(1);
    }//check if memory can be allocated
    for (int i = 0; i < n; i++)//read exactly n values
    {
        scanf("%d",&intarr[i]);
    }
    twomax(intarr, n);//call function
    free(intarr);//free memory
    return 0;
}

void twomax(int arr[],int x)
{
    int max1 = arr[0], max2 = arr[0];/*set max1/2 to first  values of array 
    in case array is only one value*/
    for (int i = 0; i < x; i++)//for all values in arr
    {
        if (arr[i] > max2)//check if bigger than second biggest
        {
            max2 = arr[i];//if bigger set max 2 to value
            if (arr[i] > max1)//if also bigger than max 1
            {
                max2 = max1;//shift max 1 to max two
                max1 = arr[i];//set max 2 to value
            }
        }
    }
    printf("largest value: %d\n",max1);
    printf("second largest value: %d\n",max2);//output max1 and max2
}
/*
CH-230-A
a4p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max1, max2;
    int *intarr;
    printf("Enter number of integers to be stored:\n");
    scanf("%d",&n);
    intarr = (int*) malloc(sizeof(int)*n);
    if (intarr== NULL)
    {
        printf("memory cannot be allocated\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&intarr[i]);

        if (intarr[i]>max2)
        {
            max2=intarr[i];
            if (intarr[i]>max1)
            {
                max2=max1;
                max1=intarr[i];
            }
        }
    }
    printf("largest value: %d\n",max1);
    printf("second largest value: %d\n",max2);
    free(intarr);
    return 0;
}
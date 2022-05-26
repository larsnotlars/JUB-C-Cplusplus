/*
CH-230-A
a7p5.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

int ascending(const void *va , const void *vb) 
{//compares values a and b- returns 1 if a larger b if b larger and 0 if equal
    const int *a = (const int*) va;
    const int *b = (const int*) vb;
    if (*a < *b) 
        return -1;
    else if (*a > *b) 
        return 1;
    else
        return 0;
}

int descending(const void *va , const void *vb)
{//same as ascending the order of the input is just changed
    return ascending(vb,va);
}

int main()
{
    //allocate and fill array of size n
    int n, *arr;
    char action;
    scanf("%d",&n);
    arr = (int*) malloc (sizeof(int)*n);
    if (arr == NULL)
    {
        printf("Memory cannot be allocated");
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    getchar();

    //sort the array in different orders and print it afterwards
    while (1)
    {
        scanf("%c",&action);
        switch (action)
        {
        case 'a':
            qsort(arr,n,sizeof(int),ascending);//sort with ascending order
            for (int i = 0; i < n; i++)
                printf("%d ",arr[i]);
            printf("\n");
            break;
        case 'd':
            qsort(arr,n,sizeof(int),descending);//sort with descending order
            for (int i = 0; i < n; i++)
                printf("%d ",arr[i]);
            printf("\n");;
            break;
        case 'e':
            free(arr); //free mem and exit program
            exit(1);
            break;
        default:
            break;
        }
    }
    return 0;
}
/*
CH-230-A
a5p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int len;
    scanf("%d",&len);//read length
    float arr[len],*ptr;// alloc memory for array
    for (int i = 0; i < len; i++)
    {
        scanf("%f",&arr[i]);//read values
    }
    ptr = arr;
    while(ptr != &(arr[len]) && *ptr >= 0) // if first negative value is read
    {
        ptr++;
    }
    if (ptr == &(arr[len]))
    {
        printf("No negative value entered.\n");
    }
    else{
        printf("Before the first negative value: %ld elements\n",(ptr-arr));
    }
    //compute differnce in addresses of first value and first negative value
    return 0;
}
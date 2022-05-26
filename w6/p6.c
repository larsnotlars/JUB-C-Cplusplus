/*
CH-230-A
a5p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int len, check = 0;
    scanf("%d",&len);//read length
    float arr[len],*ptr;// alloc memory for array
    for (int i = 0; i < len; i++)
    {
        scanf("%f",&arr[i]);//read values
        if (arr[i]<0 && check == 0)// if first negative value is read
        {
            ptr = &arr[i];//save address of first negative value
            check++;//change check so programm knows not to save another value
        }
    }
    printf("Before the first negative value: %ld elements\n",(ptr-arr));
    //compute differnce in addresses of first value and first negative value
    return 0;
}
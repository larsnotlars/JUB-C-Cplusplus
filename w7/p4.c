/*
CH-230-A
a6p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#define INTERMEDIATE //can be commented out to avoid intermediate results
#include <stdio.h>
#include <stdlib.h>
void readvec(int arr[],int num);// reads arrays takes arr and length
int scalprod(int arr1[],int arr2[], int num);//computes scalar prod

int main()
{
    int n;
    scanf("%d",&n);//read size
    int v[n],w[n];//static alloc
    readvec(v,n);
    readvec(w,n);
    printf("Scalar product=%d\n",scalprod(v,w,n));// compute and print scalprod
    return 0;
}

void readvec(int arr[],int num)
{
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);//read values for every element in arr
    }
    
}
int scalprod(int arr1[],int arr2[], int num)
{
    int scal = 0;
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    #endif
    for (int i = 0; i < num; i++)
    {
        #ifdef INTERMEDIATE
        printf("%d\n",arr1[i]*arr2[i]);
        #endif//print the intermediate values when macro is def
        scal += (arr1[i]*arr2[i]);//compute scalar product
    }
    return scal;
}
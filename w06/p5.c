/*
CH-230-A
a5p5.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void readvec(double arr[],int num);// reads arrays takes arr and length
double scalprod(double arr1[],double arr2[], int num);//computes scalar prod
void smallandbig(double arr[], int num);/*finds smallest and largest value 
and their position*/

int main()
{
    int n;
    scanf("%d",&n);//read size
    double v[n],w[n];// static alloc
    readvec(v,n);
    readvec(w,n);
    printf("Scalar product=%lf\n",scalprod(v,w,n));// compute and print scalprod
    smallandbig(v,n);
    smallandbig(w,n);// call function to print small and largest val(+position)
    return 0;
}

void readvec(double arr[],int num)
{
    for (int i = 0; i < num; i++)
    {
        scanf("%lf",&arr[i]);//read values for every element in arr
    }
    
}

double scalprod(double arr1[],double arr2[], int num)
{
    double scal = 0;
    for (int i = 0; i < num; i++)
    {
        scal += (arr1[i]*arr2[i]);//compute scalar product
    }
    return scal;
}

void smallandbig(double arr[], int num)
{
    double small=arr[0], big= arr[0];//set variables to first value in arr
    int possmall=0, posbig=0;//set variables to 0 for first position
    for (int i = 1; i < num; i++)//compare all values of arr[i] with big/small
    {
        if (arr[i]>big)
        {
            big = arr[i];//overwrites big if arr[i] is bigger than prev big
            posbig = i;
        }
        if (arr[i]<small)
        {
            small = arr[i];//overwrite small if arr[i]<previous small
            possmall= i;
        }
        
        
    }
    printf("The smallest = %lf\n",small);
    printf("Position of smallest = %d\n",possmall);
    printf("The largest = %lf\n",big);
    printf("Position of largest = %d\n",posbig);// print all values 
    
}
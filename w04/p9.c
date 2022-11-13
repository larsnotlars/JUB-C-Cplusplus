/*
CH-230-A
a3p9.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
double sum25(double v[], int n);
int main()
{
    int n ,i;
    double arr[20];
    scanf("%d",&n);//get n
    for ( i = 0; i < n && i < 20; i++)
    {
        scanf("%lf",&arr[i]);
    } // scan n elements into array
    if (sum25(arr,n)!=-111)//executes if both 2 and 5 exist 
    {
        printf("sum=%f\n",sum25(arr,n));
    }
    else//if return of function is -111 this is printed
    {
        printf("One or both positions are invalid\n");
    }
    return 0;
}
double sum25(double v[], int n)
{
    double sum;
    if(n>5)//validates that value at index 5 exists-> if 5 exists so does 2
    {
        sum= v[2]+v[5];// add values of pos 2 and 5
        return sum;
    }
    else //if 5 does not exist return this
    {
        return -111;
    }
    
}
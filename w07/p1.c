/*
CH-230-A
a6p1.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
//create temp Var to store value of A temporarily
#define SWAP(A,B,C)  {C Var; Var= A; A = B; B = Var;}

int main()
{
    int a,b;
    double c,d;
    scanf("%d%d%lf%lf",&a,&b,&c,&d);//get all values
    SWAP(a,b,int);
    SWAP(c,d,double);//Call SWAP Macro
    printf("After swapping:\n");   
    printf("%d\n%d\n%.6lf\n%.6lf\n",a,b,c,d);//print changed values
    return 0;
}

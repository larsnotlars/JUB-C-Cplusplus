/*
CH-230-A
a5p8.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void allocarr(int ***ptr,int Row, int Col);
void deallarr(int **ptr,int Row, int Col);
void printmtrx(int **ptr,int Row, int Col);
void readmtrx(int **ptr,int Row, int Col);//prototypes

int main()
{
    int n, m, p;
    int **a = NULL;
    int **b = NULL;
    int **c = NULL;//set up pointers for 2D-allocation
    scanf("%d%d%d", &n, &m, &p);
    allocarr(&a, n, m);
    allocarr(&b, m, p);
    allocarr(&c, n, p);//call functions to dyn-alloc the arrays
    readmtrx(a,n,m);
    readmtrx(b,m,p);//call functions to read into matrix
    printf("Matrix A:\n");
    printmtrx(a,n,m);
    printf("Matrix B:\n");
    printmtrx(b,m,p);//print intput matrices
    for (int i = 0; i < n; i++)//compute the product for the matrices
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];//add the products for all k-values
            }
        }
        
    }
    printf("The multiplication result AxB:\n");
    printmtrx(c,n,p);//print resulting matrix
    deallarr(a, n, p);
    deallarr(b, m, p);
    deallarr(c, n, p);//call functions to free the memory
    return 0;
}

void allocarr(int ***ptr, int Row, int Col)
{
    *ptr = (int**) malloc(sizeof(int*) * Row);//alloc pointers to every row
    if ((*ptr)==NULL)
    {
        printf("Mem cannot be allocated 1");
        exit(1);
    }
    for (int j = 0; j < Row; j++)
    {
        (*ptr)[j] = (int*)malloc(sizeof(int) * Col);//alloc pointers to elements
        if ((*ptr)[j]==NULL)
        {
            printf("Mem cannot be allocated 2");
            exit(1);
        }
        
    }
}

void deallarr(int** ptr,int Row, int Col)
{
    for (int j = 0; j < Row; j++)
    {
        free ((ptr[j]));//free memory of elements
    }
    free(ptr);//free memory of row pointers
}

void printmtrx(int **ptr,int Row, int Col)
{//print every value of matrix
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            printf("%d ",(ptr)[i][j]);
        }
        printf("\n");
    }
    
}
void readmtrx(int **ptr,int Row, int Col)
{//read values for every positon in the arr
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    
}
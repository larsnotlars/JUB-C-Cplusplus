/*
CH-230-A
a5p9.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void allocarr(int ****ptr,int row, int col,int dep);
void readmtrx(int ***ptr,int row, int col,int dep);
void printlayers(int ***ptr, int row, int col, int dep);
void deallarr(int ***ptr,int row, int col, int dep);//protoypes

int main()
{
    int x, y, z;
    int ***mtrx;//pointer for dyn alloc
    scanf("%d%d%d",&x,&y,&z);//read dimensions
    allocarr(&mtrx, x, y, z);//pass dimensions to function to alloc
    readmtrx(mtrx, x, y, z);//read values
    printlayers(mtrx,x,y,z);//print the sections
    deallarr(mtrx, x, y, z);//free memory
    return 0;
}


void allocarr(int ****ptr, int row, int col, int dep)
//quad-pinter is passed so its passed by address and gets changed
{
    *ptr = (int***) malloc(sizeof(int**) * row);
    //alloc list of double pointers
    if (ptr == NULL)
        {
            printf("Mem cannot be allocated 1");
            exit(1);
        }
    for (int j = 0; j < row; j++)
    {
        (*ptr)[j] = (int**)malloc(sizeof(int*) * col);
        //alloc list of pointers for every double pointer
        if ((*ptr)[j] == NULL)
        {
            printf("Mem cannot be allocated 2");
            exit(1);
        }
        for (int i = 0; i < dep; i++)
        {
            (*ptr)[j][i]=(int*)malloc(sizeof(int) * dep);
            //alloc elements for every pointer
            if ((*ptr)[j][i] == NULL)
            {
                printf("Mem cannot be allocated 3");
                exit(1);
            }
        }
        
    }
}

void readmtrx(int ***ptr,int row, int col, int dep)
{
    for (int i = 0; i < row; i++)//col to col
    {
        for (int j = 0; j < col; j++)//row to row
        {
            for (int k = 0; k < dep; k++)//dep to dep
            {
                scanf("%d",&ptr[i][j][k]);
            }
            
        }
    }
    
}

void printlayers(int ***ptr,int row, int col, int dep)
{
    int sec_count=1;
    for (int i = 0; i < dep; i++)
    {//print elements of same dep
        printf("Section %d:\n",sec_count);
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < row; k++)//go through row
            {
                printf("%d ",(ptr)[j][k][i]);//go through col
            }
            printf("\n");
        }
        sec_count++;
    }
    
}

void deallarr(int ***ptr,int row, int col, int dep)
{
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < col; i++)
        {
            free(ptr[j][i]);//free space for elements first
        }
        free ((ptr[j]));//free space of single pointers
    }
    free(ptr);//free space of double pointers
}
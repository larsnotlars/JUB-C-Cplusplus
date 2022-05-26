/*
CH-230-A
a4p7.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
void print_matrix(int arr[][30], int num);
void under_maindia(int arr[][30], int num);//prototype functions

int main()
{
    int arr2D[30][30],n;//initialize array and n
    scanf("%d",&n);//read dimension n
    for(int i = 0; i < n; i++)//from row to row
    {
        for (int j = 0; j < n; j++)//from col to col
        {
            scanf("%d",&arr2D[i][j]);//read values
        }
        
    }
    printf("The entered matrix is:\n");
    print_matrix(arr2D, n);
    printf("Under the main diagonal:\n");
    under_maindia(arr2D, n);//call functions
    return 0;
}

void print_matrix(int arr[][30], int num)
{
    for(int i = 0; i < num; i++)//from row to row
    {
        for (int j = 0; j < num; j++)//from col to col
        {
            printf("%d ",arr[i][j]);//print all values
        }
        printf("\n");//new line for every row
    }
}
void under_maindia(int arr[][30], int num)
{
    for(int i = 0; i < num; i++)//from row to row
    {
        for (int j = 0; j < num; j++)//from col to col
        {
            if (i>j)//only values where row>col are printed
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
    printf("\n");
}
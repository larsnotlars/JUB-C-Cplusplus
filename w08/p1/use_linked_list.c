/*
CH-230-A
use_linked_list.c
Lars Schuster
l.schuster@jacobs-university.de
*/

//file with the main fuction
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"//link to headerfile

int main()
{
    char c;
    int value;
    struct list *start = NULL;
    while (1)
    {
        scanf("%c",&c);//read char
        getchar();
        switch (c)//compare char to cases and call corresponding fuctions
        {
        case 'a':
            scanf("%d",&value);//read value to append
            getchar();
            start = end(start,value);
            break;
        case 'b':
            scanf("%d",&value);//read value to prepend
            getchar();
            start = front(start,value);
            break;
        case 'r':
            start = remfirst(start);
            break;
        case 'p':
            printit(start);
            break;
        case 'q':
            emptyit(start);
            return 0; 
            break;        
        default://just read another char
            break;
        }
    }
}
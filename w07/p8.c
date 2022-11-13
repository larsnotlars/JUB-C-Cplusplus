/*
CH-230-A
a6p8.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
struct list 
{
    int info;
    struct list *next;
};
//prototypes for the functions
struct list* front(struct list *start, int value);
struct list* end(struct list *start, int value);
struct list* remfirst(struct list *start);
void printit(struct list* start);
void emptyit(struct list* start);

int main()
{
    char c;
    int value, a=1;
    struct list *start = NULL;
    while (a==1)//as long as a is 1
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
            a++; 
            break;        
        default://just read another char
            break;
        }
    }
    
}
 
struct list* end(struct list *start, int value)
{
    struct list *new,*iterate;
    new = (struct list *) malloc(sizeof(struct list));//create element
    if (new == NULL)
    {
        printf("Memory cannot be allocated!");
        return start;
    }
    new->info = value;//asign the value
    new->next = NULL;//end of list
    if (start == NULL)
    {
        return new;
    }//return pointer to elem if its the first in the list
    iterate = start;
    while (iterate->next != NULL)
    {
        iterate = iterate->next;
    }//search for previous end of list
    iterate->next = new;//connect previos end to new last element
    return start;
}
 
struct list* front(struct list *start, int value)
{
    struct list *new;
    new = (struct list *) malloc(sizeof(struct list));//create new elem
    if (new == NULL)
    {
        printf("Memory cannot be allocated!");
        return start;
    }
    new->info = value;//assign value
    new->next = start;//connect it to previous start
    return new;//return new as new start
}
 
struct list* remfirst(struct list *start)
{
    if (start != NULL)
    {
        struct list *second;
        second = start->next;//save address of second elem
        free(start);// delete first elem
        return second;// return second elem as new start
    }
    else
    {
        return start;//if there is no elem just ignore command
    }
}
 
void printit(struct list* start)
{
    struct list *ptr;
    for ( ptr = start; ptr != NULL; ptr = ptr->next)
    {
        printf("%d ",ptr->info);
    }// go through list and print every value
    printf("\n");
}
 
void emptyit(struct list* start)
{
    struct list* nextel;
    while (start != NULL)//until end of list
    {
        nextel = start->next;//save next element
        free(start);//delete current one
        start = nextel;//go to next one
    }
}
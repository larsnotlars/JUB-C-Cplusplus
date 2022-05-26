/*
CH-230-A
a6p9.c
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

struct list* front(struct list *start, int value);
struct list* end(struct list *start, int value);
struct list* remfirst(struct list *start);
void printit(struct list* start);
void emptyit(struct list* start);
struct list* ind(struct list *start, int pos, int value);
struct list* reverse(struct list *start);

int main()
{
    char c;
    int value, position, a=1;
    struct list *start = NULL;
    while (a==1)
    {
        scanf("%c",&c);
        getchar();
        switch (c)
        {
        case 'a':
            scanf("%d",&value);
            getchar();
            start = end(start,value);
            break;
        case 'b':
            scanf("%d",&value);
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
        case 'i':
            scanf("%d%d",&position,&value);
            getchar();
            start = ind(start,position,value);
            break; 
        case 'R':
            start = reverse(start);
            break;       
        default:
            break;
        }
    }
    return 0;
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

struct list* ind(struct list *start, int pos, int value)
{
    if (pos<0)
    {
        printf("Invalid position!\n");
        return start;
    }//check if entered pos is positive(or 0)
    int counter=0;
    struct list *new,*iterate;
    for (iterate = start; iterate; iterate = iterate->next)
    {
        counter++;
    }
    if (pos > counter)
    {
        printf("Invalid position!\n");
        return start;
    }
    if (pos == 0)
    {
        front(start,value);
    }//if add at first pos use other function :)

    iterate = start;
    for (int i = 0; i < pos-1; i++)
    {
        iterate = iterate->next;
    }//iterate through list until wanted position
    new = (struct list *) malloc(sizeof(struct list));//create new elem
    if (new == NULL)
    {
        printf("Memory cannot be allocated!");
        return start;
    }
    new->next = iterate->next;//set next of new to next of current elem
    iterate->next = new;//set next of current to new element
    new->info = value;//assing value to new
    return start;
}

struct list* reverse(struct list *start)
{
    struct list *iterate, *save, *before;
    before = NULL;
    for (iterate = start; iterate != NULL; iterate = save)//go trough whole list
    {
        save = iterate->next;//save address of next item
        iterate->next= before;//set address to previos item
        before = iterate;//save current address as previous of last one 
    }
    return before;//return item that had NULL as next
}
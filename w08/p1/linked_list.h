/*
CH-230-A
linked_list.h
Lars Schuster
l.schuster@jacobs-university.de
*/

//file with prototypes and types
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
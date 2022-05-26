/*
CH-230-A
a7p2.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//type declaration of doubly linked list
struct list 
{
    int info;
    struct list *next;
    struct list *before;
};

struct list* front(struct list *start, char input)
{//adds element at the front of the list
    struct list *new;
    new = (struct list*) malloc (sizeof(struct list));
    if (new == NULL)
    {
        printf("Memory cannot be allocated");
        return start;
    }
    new->next = start;
    new->before = NULL;
    if (start != NULL)//incase new element is first element start will ne NULL
        start->before = new;
    new->info = input;
    return new;
}

struct list* removeind(struct list *start, char input)
{//removes all elements that have the value of input
    struct list *iterate, *save;
    char error = 'a'; //to detect if char is not in string
    for (iterate = start; iterate != NULL;)
    {//iterate trough the whole list
        save = iterate->next;
        if (iterate->info == input)
        {
            error = 'b';
            if (iterate->before != NULL)
            {//connect the element before to the one after the current
                (iterate->before)->next = iterate->next;
            }
            else
            {//special case if the start is deleted the second element is start
                start = save;
            }
            if (iterate->next != NULL)
            {//connect the one after to the one before (not if at end)
                (iterate->next)->before = iterate->before;
            }
            free(iterate);
            iterate = save;
        }
        else
        {
            iterate = save;
        }
            
        
    }
    if (error == 'a')//if error is changed nothing was deleted
        printf("The element is not in the list!\n");
    return start;
}

void printit(struct list *start)
{//iterates through list and prints info of all elements
    struct list *iterate;
    for (iterate = start; iterate != NULL; iterate = iterate->next)
    {
        printf("%c ",iterate->info);
    }
    printf("\n");
}

void unoreverse(struct list *start)
{//iterates to the end and prints iterating back to start
    struct list *iterate;
    for (iterate = start; iterate->next != NULL; iterate = iterate->next);
    for (; iterate != NULL; iterate = iterate->before)
    {
        printf("%c ",iterate->info);
    }
    printf("\n");
    
}

void deleteit(struct list *start)
{//iterates until every element is deleted
    struct list  *save;
    while (start != NULL)
    {
        save= start->next;
        free(start);
        start = save;
    }
    exit(0);//exit programm(breaks loop)
}

int main()
{
    int action;
    char input;
    struct list *start = NULL; 
    while (1)
    {
        scanf("%d",&action);
        getchar();
        switch (action)
        {//decide which function to call 
        case 1:
            //read input value and call front
            scanf("%c",&input);
            getchar();
            start = front(start,input);
            break;
        case 2:
            //read input and call removeing
            scanf("%c",&input);
            getchar();
            start = removeind(start,input);
            break;
        case 3:
            printit(start);
            break;
        case 4:
            unoreverse(start);
            break;
        case 5:
            deleteit(start);
            break;
        default:
            break;
        }
    }
    
}
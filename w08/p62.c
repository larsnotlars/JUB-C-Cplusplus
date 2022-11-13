/*
CH-230-A
a7p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/

//Bubblesort!!!

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
    char name[30];
    int age;
};

void swap(struct person *a, struct person *b)
{
    struct person save;
    strcpy(save.name, a->name);
    save.age= a->age;
    strcpy(a->name, b->name);
    a->age = b->age;
    strcpy(b->name, save.name);
    b->age = save.age;
}

int age(const void *va, const void *vb)
{
    const struct person* first = (const struct person*) va;
    const struct person* second = (const struct person*) vb;
    if (first->age > second->age)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
       
}

//takes two person elements
int name(const void *va, const void *vb)
{
    const struct person* first = (const struct person*) va;
    const struct person* second = (const struct person*) vb;
    if (strcmp(first->name, second->name)>0)
    {
        return 1;
    }
    else if (strcmp(first->name, second->name)<0)
    {
        return -1;
    }
    else
    {
        return age(first, second);
    }
    
}

// takes array of person the length and a compare function pointer
void bubblesort(struct person people[], int n, 
                int (*compare)(const void *, const void *))
{
    int swapped = 1;
    while (swapped  != 0)
    {
        swapped = 0;
        for (int i = 1; i < n; i++)
        {   
            if (compare(&people[i-1],&people[i]) == 1)
            {//in case the pair is in wrong order swap it and run again
                swap(&people[i-1],&people[i]);
                swapped = 1;
            }//if no pair in the string is in wrong order stop
        }
    }
}

void printit(struct person people[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("{%s, %d}; ",people[i].name,people[i].age);
    }   
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    struct person people[n];
    for (int i = 0; i < n; i++)
    {//read all data for people
        scanf("%29s",people[i].name);
        scanf("%d",&people[i].age);
        getchar();
    }
    bubblesort(people,n,name);//sort by name
    printit(people,n);
    bubblesort(people,n,age);//sort by age
    printit(people,n);
    return 0;
}

/*
CH-230-A
stack.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

//takes pointer to stack as well as new value
void push(struct stack *astack,int input)
{
    if (astack->count < 12)
    {//if stack is not full add save elem and put count one up
        printf(" %d",input);
        astack->array[astack->count]= input;
        astack->count++;
    }
    else
    {//if stack is full
        printf(" Stack Overflow");
    }
}

//takes pointer to stack
void pop(struct stack *astack)
{
    if (astack->count>0)
    {//if stack is not empty decrease count and print elem
        astack->count--;
        printf(" %d",astack->array[astack->count]);
    }
    else
    {//if stack is empty 
        printf(" Stack Underflow");
    }
}

//takes pointer to stack
void empty(struct stack *astack)
{
    printf("Emptying Stack");
    while (astack->count > 0)
    {//pop elements until stack is empty
        pop(astack);
    }
    printf(" ");
}

//cheks if stack is empty
void isempty(struct stack *astack)
{
    if (astack->count==0)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack is not empty");
    }
}

void dectobin(struct stack *astack,int input)
{
    while (input!=0)
    {
        push(astack,input%2);
        input = input/2;
    }
    empty(astack);
}
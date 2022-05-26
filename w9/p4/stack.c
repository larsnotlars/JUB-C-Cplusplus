/*
CH-230-A
a8p4.c
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
        printf("%d",astack->array[astack->count]);
    }
    else
    {//if stack is empty 
        printf(" Stack Underflow");
    }
}

//takes pointer to stack
void empty(struct stack *astack,int input)
{
    printf("The binary repretsentation of %d is ",input);
    while (astack->count > 0)
    {//pop elements until stack is empty
        pop(astack);
    }
    printf(".\n");
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

//converts decimal number to binary
void dectobin(struct stack *astack,unsigned int input)
{
    while (input!=0)
    {//until every number ist represented put the bin numbers in stack 
        push(astack,input%2); // first to last into the stack
        input = input/2;
    }
    empty(astack,(int)input);//empty stack to get the numbers in the right order
}
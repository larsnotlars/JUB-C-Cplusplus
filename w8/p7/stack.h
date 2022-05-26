/*
CH-230-A
stack.h
Lars Schuster
l.schuster@jacobs-university.de
*/
struct stack {
    unsigned int count;
    int array[12]; // Container
};

void push(struct stack *astack,int input);
void pop(struct stack *astack);
void empty(struct stack *astack);
void isempty(struct stack *astack);
void dectobin(struct stack *astack,int input);
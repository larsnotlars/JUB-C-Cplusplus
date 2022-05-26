/*
CH-230-A
a8p4.h
Lars Schuster
l.schuster@jacobs-university.de
*/
struct stack {
    unsigned int count;
    int array[12]; // Container
};

void push(struct stack *astack,int input);
void pop(struct stack *astack); 
void empty(struct stack *astack, int input);
void isempty(struct stack *astack);
void dectobin(struct stack *astack, unsigned int input);
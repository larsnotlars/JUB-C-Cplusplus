/*
CH-230-A
teststack.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

int main()
{
    char c;
    int input;
    struct stack thestack;
    thestack.count = 0;//declare that stack is empty
    while (1)
    {
        scanf("%c",&c);//read operation
        getchar();
        switch (c)
        {//execute corresponding operation
        case 's':
            scanf("%d",&input);
            getchar();
            printf("Pushing");
            push(&thestack,input);
            break;
        case 'p':
            printf("Popping");
            pop(&thestack);
            break;
        case 'e':
            empty(&thestack);
            break;
        case 'q':
            printf("Quit\n");
            return 0;
            break;
        case 'd':
            scanf("%d",&input);
            dectobin(&thestack,input);
            break; 
        default:
            break;
        }
    printf("\n");//new line after every operation!
    }
}
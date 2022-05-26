/*
CH-230-A
a2p5.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int a;// initailize a
    printf("Enter Integer:");
    scanf("%d",&a); //read int
    printf("You entered:%d\n",a); //prints a
    int *ptr_a;//initializes pointer
    ptr_a = &a;//connects pointer and to a
    printf("The address of the Integer is:%p\n",ptr_a); //prints address
    *ptr_a +=5;//increase a by 5
    printf("Your integer plus 5 is:%d\n",*ptr_a);
    printf("The address of the Integer is still:%p\n",ptr_a); 
    //prints new a and address
    return 0;
}
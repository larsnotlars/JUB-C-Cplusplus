/*
CH-230-A
a3p4.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c){
    int idx;
    for (idx = 0; str[idx] != c && str[idx] !='\0'; ++idx); 
    /*if there is no semi-colon the for loop takes return as statement       
    and the for loop breaks in the first iteration*/
    return (idx);    
}
int main() {
    char line[80];
    while (1) { //infinite loop
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line,'g'));
    }
    return 0;
}
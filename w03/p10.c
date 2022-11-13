/*
CH-230-A
a2p10.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int n = 0, count=2;
    while(n<=0){
        printf("Please enter positive number of days:\n");
        scanf("%d",&n);
    } // gets new input until n is a positive integer
    printf("1 day = 24 hours\n");/* since n>0 it must be at least 1 or more
    since day is singular for 1 I print it before the while loop*/
    while(n>=count){
    printf("%d days = %d hours\n",count,count*24);
        ++count;
    }/*prints days and hours until count is equal not bigger than n
    count starts with value 2 since first line is always printed 
    with correct input*/
    return 0;
    
}
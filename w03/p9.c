/*
CH-230-A
a2p9.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char c1;
    scanf("%c",&c1);
    if ((int)c1>=48 && (int)c1<=57){
        printf("%c is a digit\n",c1);
    }// executes if ASCII value of c1 indicates it is a digit
    else if (((int)c1>=65 && (int)c1<=90)||((int)c1>=97 && (int)c1<=122)){
        printf("%c is a letter\n",c1);
    }// executes if ASCII value of c1 indicates it is a letter
    //does not work for non english chars (ÄÜÖß)
    else{
        printf("%c is some other symbol\n",c1);
    }// executes if ASCII value of c1 indicates it is none of the above
    return 0;
}
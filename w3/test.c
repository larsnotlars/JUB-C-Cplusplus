#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char char1;
    char char2;
    scanf("%c ",&char1);
    scanf("%c",&char2);
    printf("%c\n", char1);
    printf("%c\n", char2);
        int cisum = (int)char1+(int)char2;
    int ciprod = (int)char1*(int)char2;
    char csum =(char)cisum;
    char cprod =(char)ciprod;
}
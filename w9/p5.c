/*
CH-230-A
a8p5.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;
    FILE *input, *output;
    input = fopen("chars.txt","r"); //open input file
    if (input == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    output = fopen("codesum.txt","w"); //create output file
    if (output == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    a = getc(input);
    b = getc(input);//read chars form the file
    fprintf(output,"%d",a+b);//print the result of the addition into output
    fclose(input);
    fclose(output);
    return 0;
 }
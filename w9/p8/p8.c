/*
CH-230-A
a8p8.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int wordend(char c)
{// function to check if cursor is on word or a seperator
    if (c == ' ' || c == ',' || c == '?' || c == '!'|| c == '.')
        return 1;
    if (c == '\t'|| c == '\r'||c == '\n')
        return 1;
    return 0;
}
int main()
{
    char fname[100];
	fgets(fname, sizeof(fname), stdin);//read file name
	fname[strlen(fname)-1]='\0';
    FILE *inp = fopen(fname, "r");//open corresponding file
    if (inp == NULL)
    {
        printf("Cannot open files");
        exit(1);
    }
    int count;
    char c;
    while (!feof(inp))
    {
        fscanf(inp,"%c",&c);//read char 
        if(wordend(c) == 0)
        {//in case cursor is on a word
            count++;//count it
            while (wordend(c) == 0 && !feof(inp))
            {// move cursor until its on seperator
                fscanf(inp,"%c",&c);
            }
        }
    }
    printf("The file contains %d words. \n",count);//print the count
    fclose(inp);
    return 0;
}
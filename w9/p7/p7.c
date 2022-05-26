/*
CH-230-A
a8p7.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *txt1, *txt2, *merge;
    char temp[100];
    txt1 = fopen("text1.txt","r");
    txt2 = fopen("text2.txt","r");
    merge = fopen("merge12.txt","w");//open all files
     if (txt1 == NULL || txt2 == NULL || merge ==NULL)
    {
        printf("Cannot open all files\n");
        exit(1);
    }//check if they can be opened
    while(!feof(txt1))
    {
        fgets(temp,100,txt1);//read one line
        fprintf(merge,"%s",temp);//put it into new file
    }
    fputc('\n',merge);//last line is not finished with \n so insert it
    while (!feof(txt2))
    {
        fgets(temp,100,txt2);
        fprintf(merge,"%s",temp);//put it into new file
    }
    fclose(txt1);
    fclose(txt2);
    fclose(merge);//close the files
    return 0;
}

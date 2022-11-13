/*
CH-230-A
a8p6.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double a, b;
    char string1[50],string2[50];
    fgets(string1,50,stdin);
    fgets(string2,50,stdin);
    string1[strlen(string1)-1]='\0';
    string2[strlen(string2)-1]='\0';//get the names of the files
    FILE *inp1, *inp2, *oup;
    inp1 = fopen(string1, "r");
    inp2 = fopen(string2, "r");//open corresponding files
    oup = fopen("results.txt", "w");//create output file
    if (inp1 == NULL || inp2 == NULL || oup ==NULL)
    {
        printf("Cannot open files\n");
        exit(1);
    }
    fscanf(inp1,"%lf",&a);
    fscanf(inp2,"%lf",&b);//scan values from the files
    //write the computations on seperate lines
    fprintf(oup,"%lf\n%lf\n%lf\n%lf", a + b, a - b, a * b, a / b);
    fclose(inp1);
    fclose(inp2);
    fclose(oup);
    return 0;
}
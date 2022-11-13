/*
CH-230-A
a8p8.c
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    FILE *inp ,*oup;
    char buffer[64];//only use one buffer
    long l;// var to store size of chunks

    scanf("%d",&n);//read number of files to concat
    getchar();
    oup = fopen("output.txt", "wb");//create output file
    if (oup == NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    
    char filenames[n][100];

    for (int i = 0; i < n; i++)
    {
        fgets(filenames[i], sizeof(filenames[i]), stdin); // read name
        filenames[i][strlen(filenames[i]) - 1] = '\0';
    }
    printf("Concating the content of %d files ...\n",n);
    printf("The result is:\n");

    for (int i = 0; i < n; i++)
    {//for n files
        inp = fopen(filenames[i], "rb");//open corresponding file
        if (inp == NULL)
        {
            printf("Cannot open files 1");
            exit(1);
        }
        l = fread(buffer,1,64,inp);//read from input and store length
        fwrite(buffer,1,l,oup);//write it into output file
        printf("%s\n",buffer);
        fwrite("\n",1,1,oup);
        fclose(inp);//close input file
    }
    printf("The result was written into output.txt\n");
    fclose(oup);
    return 0;
}
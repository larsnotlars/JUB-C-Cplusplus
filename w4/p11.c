/*
CH-230-A
a3p10.c
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[200], string3[100];//initializing the 3 strings
    scanf("%[^\n]", string1);
    getchar();
    scanf("%[^\n]", string2);/*modify scanf so it takes all chars
    (including spaces) and terminates when /n is put in.*/
    int comp = strcmp(string1, string2);/*compares strings before concat. 
    strcmp returns integer value. 
    int is pos. if str1 is smaller 0 if same and neg. if it is bigger*/
    printf("length1=%ld\nlength2=%ld\n", strlen(string1), strlen(string2));
    //lengths are long ints so %ld
    printf("concatenation=%s\n",strcat(string1, string2));
    //strcat also returns pointer to string1 so it can be used as string
    strcpy(string3, string2);// copies str2 to str3
    printf("copy=%s\n", string3);// print string 3
    if (comp<0)
    {
        printf("one is smaller than two\n");
    }    
    else if (comp==0)
    {
        printf("one is equal to two\n");
    }
    else
    {
        printf("one is larger than two\n");
    }
    char char1;
    getchar();//prevents that \n is the read char
    scanf("%c",&char1);// reads char to search for
    if (strchr(string2,char1)!= NULL)/*strchr returns NULL if char is not in 
    string*/
    {
        long int idx_char = strchr(string2,char1)-&string2[0];
        /*the index of c is the difference of the first appearence address 
        and the address for index 0*/
        printf("position=%ld\n",idx_char); 
    }
    else
    {
        printf("The character is not in the string\n");
    }//executed if NULL is returned
    return 0;
}
/*
CH-230-A
a9p6.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <iostream>
#include <string.h>
#include <cstdlib>

int myfirst(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {//iterate thorugh array and return first value that satisfies
        if(arr[i] > 0 && arr[i] % 2 == 0)//positive and even
            return arr[i];
    }
    return -1;//if none satisfy return -1
}

double myfirst(double arr[],int n)
{
    for (int i = 0; i < n; i++)
    {//iterate through array and return first value that satisfies
        if(arr[i]<0 && arr[i] == (int)arr[i])//negativ and 
            return arr[i];
    }
    return -1.1;//if none satisfy return -1.1
}

int cons(char c)
{
    if ((c >= 'a'&& c <= 'z')||( c >= 'A' && c <= 'Z'))
    {//check if its letter
        if (c != 'a' && c != 'e' && c !='i' && c != 'o' && c != 'u')
        {//check if its lowercase vowel
            if (c != 'A' && c != 'E' && c !='I' && c != 'O' && c != 'U')
            return 1;//check if uppercase vowel
        }
    }
    return 0;
}

char myfirst(char s[30], int n)
{
    for (int i = 0; i < n ; i++)
    {//iterate whole string
        if(cons(s[i]) == 1)
        {// return first consonant
            return s[i];
        }
    }
    return '0';
}


int main(int argc, char const *argv[])
{
    int intarr[5], n = 5;
    double doubarr[5];
    char mystring[30];
    std::cout << "Please enter 5 integers" <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> intarr[i];
    }//get int array and call function
    
    std::cout << "First positive even value " << myfirst(intarr,n)<<std::endl;
    std::cout << "Please enter 5 rational numbers" <<std::endl;
    for (int j = 0; j < n ; j++)
    {
        std::cin >> doubarr[j];
    }//get float array and call function
    std::cout << "First negative non fraction "<< myfirst(doubarr,n)<<std::endl;
    
    std::cout << "Please enter a word" <<std::endl;
    getchar();
    fgets(mystring,30,stdin);//get string and call function
    std::cout << "first consonant ";
    std::cout<< myfirst(mystring,strlen(mystring))<<std::endl;
    return 0;
}


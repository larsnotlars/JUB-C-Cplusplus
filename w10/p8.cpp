/*
CH-230-A
a9p8.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <iostream>

void subtract_max(int* arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {//iterate through array
        if (arr[i]>max)
        {//save max
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {//substract max form every value
        arr[i] = arr[i]-max;
    }
}

void deallocate(int* arr)
{
    delete [] arr;
}//free the memory

int main()
{
    int n;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }//get array
    subtract_max(arr,n);//change array
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }//print changed array
    deallocate(arr);//free memory
    //delete [] arr;
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }//print changed array
    return 0;
}

/*
CH-230-A
a11p1.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

int main()
{
    int n;
    Box *arr;
    double temp;
    std::cout << "Enter number of boxes:" << std::endl;
    std::cin >> n;
    arr = new Box[2*n];//allocate memory for Boxes

    for (int i = 0; i < n; i++)
    {//for n boxes get their dimensions
        std::cout << "Box" << (i+1) << ":" << std::endl;
        std::cout << "Enter height" << std::endl;
        std::cin >> temp;
        arr[i].setheight(temp);
        std::cout << "Enter width" << std::endl;
        std::cin >> temp;
        arr[i].setwidth(temp);
        std::cout << "Enter depth" << std::endl;
        std::cin >> temp;
        arr[i].setdepth(temp);
    }

    for (int i = 0; i < n; i++)
    {//copy the first n elements to the second n elements
        arr[i+n] = Box(arr[i]);
    }

    for (int i = 0; i < (2*n); i++)
    {//for all items print their volume
        std::cout << "Volume of Box " << i+1 << ": " << arr[i].volume()
        << std::endl;
    }

    delete [] arr;//free memory
    return 0;
}
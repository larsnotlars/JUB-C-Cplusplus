/*
CH-230-A
a13p3.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstdlib>


int main()
{
    int n, flen;
    char fname[50], *buffer;//initialize array for filenames and buffer pointer1
    std::cout << "Enter number of files:"<< std::endl;
    std::cin >> n;//get number of files

    //create output file
    std::ofstream out("concatn.txt");
    if (!out.good())
    {
        std::cerr << "Cannot open file";
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter filename:"<< std::endl;
        std::cin >> fname;
        std::ifstream in(fname,std::ios::binary);//open entered file
        if (!in.good())
        {
            std::cerr << "Cannot open file";
            exit(2);
        }
        
        in.seekg(0, in.end);
        flen = in.tellg();//save length of file
        in.seekg(0,in.beg);//go back to start

        buffer = new char[flen];//create buffer to store the file
        in.read(buffer,flen);//temp store file in buf
        out.write(buffer,flen);//writw from buf to file
        if (i < n-1)
        {
            out.write("\n",1);
        }
        delete[] buffer;//delete buffer
        in.close();
    }
    out.close();
    
    return 0;
}

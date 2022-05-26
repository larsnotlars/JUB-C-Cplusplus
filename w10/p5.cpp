/*
CH-230-A
a9p5.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    std::string player;
    std::cout << "Hello there!\nPlease enter name:" << std::endl;
    getline(std::cin,player,'\n');//get player name
    int guess, randnum, tries = 0;
    srand(static_cast<unsigned int>(time(0)));//initialize random numbers
    randnum = rand() % 100 + 1;//select random numbers
    while(1)
    {//endless loop
        std::cout << "Please enter guess between 1 and 100:" << std::endl;
        std::cin >> guess;//get guess
        tries++;//increase tries
        if (guess > randnum)
        {//if higher than rand
            std::cout << "Too high! Try again!"<<std::endl;
        }
        else if (guess < randnum)
        {//if lower than rand
            std::cout << "Too low! Try again!"<<std::endl;
        }
        else
        {//if won
            std::cout << "Congratulations " << player << std::endl;
            std::cout << "You guessed the right number" << std::endl;
            std::cout << "It took " << tries << " tries" << std::endl;
            break;
        }
    }
    
    return 0;
}


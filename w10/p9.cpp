/*
CH-230-A
a9p9.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <iostream>
#include <string>

int vowel(char c)
{
    if (c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u')
        return 1;//check if letter low case vow
    if (c == 'A' || c == 'E' || c =='I' || c == 'O' || c == 'U')
        return 1;//or uppercase vow
    return 0;
}

int main()
{
    std::cout << "Hello there!" << std::endl;
    std::string words[17] = {"computer","television","keyboard","laptop",
    "mouse","chosen","high","ground", "father","liar","lightsaber"
    ,"force","may","the","fourth","Star","Wars"};
    std::string guess;
    srand(time(NULL));//set random number seed
    int randnum;
    int tries;
    while (1)
    {
        randnum = (rand() % 17); //select random word from array
        std::cout << "Can you guess the following word?!" << std::endl;
        for (unsigned int i = 0; i < words[randnum].size(); i++)
        {//print word w/o vowels
            if(vowel (words[randnum][i]) == 1)
                std::cout<< "_";
            else
                std::cout<< words[randnum][i];
        }
        std::cout << std::endl;
        tries = 0;
        guess = " ";
        while (guess != words[randnum])
        {//loop until correct word
            std::cout << "What's your guess?" << std::endl;
            getline(std::cin,guess,'\n');//get guess
            std::cout<< guess <<std::endl;
            tries++;
            if (guess == "quit")
            {//if quit is guess
                std::cout<<"General Kenobi"<<std::endl;
                return 0;
            }
            if (guess == words[randnum])
                break;//break if guess is right
            std::cout << "Wrong guess :( Try again!"<<std::endl;
        }
        std::cout << "YES that is correct!" << std::endl;//congratulate
        std::cout << "It took " << tries << " tries" << std::endl;//tell tries
        std::cout << "Do you want to play again?" << std::endl;//ask for rematch
        std::cin >> guess;
        while (guess != "yes" && guess != "no" && guess!= "quit")
        {//ask until valid input
            std::cout << "Do you want to play again? Answer yes or no"
            << std::endl;
            getline(std::cin,guess,'\n');
        }
        if (guess == "no" || guess == "quit")
        {//if no or quit exit game
            std::cout<<"General Kenobi"<< std::endl;
            return 0;
        }
        getline(std::cin,guess,'\n');// to absorb the \n
    }
}

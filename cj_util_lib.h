#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <limits>

bool choice()
{

    char c=0;
    while(true)
    {
    std::cin.get(c);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (c == '\n' || c == ' ') continue;
    if (c=='y'||c=='Y') return true;
    else if (c=='n'||c=='N') return false;
    else
    {
    std::cout << std::endl << "Invalid Choice. Please Enter (y/n) : ";
    continue;
    }
    }
}

int numchoice()
{
    int choice;
    while (1)
    {
        std::cin >> choice;
        if (std::cin.fail())
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please Enter a Number: ";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return choice;
        }
    }
}

void enter()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int roll(int min, int max)
{
std::mt19937 gen(std::random_device{}());
std::uniform_int_distribution <> distrib(min, max);
return distrib(gen);
}
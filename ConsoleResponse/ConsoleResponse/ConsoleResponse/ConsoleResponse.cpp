// ConsoleResponse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "What is your name?\n";
    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << ". Have a good day!";
}


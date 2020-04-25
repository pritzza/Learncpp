// Learncpp 4.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x{};

    while (1) {

        std::cout << "Enter a single digit integer to evaluate whether it is prime\n";
        std::cin >> x;

        if (x > 9)
        {
            std::cout << "That't not a single digit number!\n";
        }
        else if (x < 0)
        {
            std::cout << "There are no prime negative numbers.\n";
        }
        else
        {
            if (x == 2 || x ==3 || x == 5 || x == 7)
                std::cout << "The digit is prime.\n";
            else
                std::cout << "The digit is not prime.\n";
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

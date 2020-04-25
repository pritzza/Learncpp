// Learncpp 6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int getInt()
{
    std::cout << "Enter an integer: ";
    int x;      // x goes in scope
    std::cin >> x;

    return x;    // x goes out of scope
}

int getBigInt()
{
    std::cout << "Enter a larger integer: ";
    int x;      // x goes in scope
    std::cin >> x;

    return x;   // x goes out of scope
}

void printNums(int smaller, int larger)     // smaller and larger go in scope
{
    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';
}       // smaller and larger go out of scope

int main()
{   
    int x = getInt();       // x in scope
    int y = getBigInt();    // y in scope
    
    if (x < y)
    {
        int smaller = x;    // smalled in scope
        int larger = y;     // larger in scope
        printNums(smaller, larger);
    }   // smaller and larger go out of scope if x < y
    else
    {
        int smaller = y;    // smalled in scope
        int larger = x;     // larger in scope
        std::cout << "Swapping the values\n";
        printNums(smaller, larger);
    }   // smaller and larger go out of scope if x > y

}   // int x and y go out of scope

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

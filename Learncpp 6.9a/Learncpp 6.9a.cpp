// Learncpp 6.9a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstddef>

int main()
{

	std::cout << "How many names would you like to enter? ";
	std::size_t lengthOfList;
	std::cin >> lengthOfList;

	std::string* listOfNames{ new std::string[lengthOfList] };

	for (int i = 0; i < static_cast<int>(lengthOfList); i++)
	{
		std::cout << "Enter name #" << i << ": ";
		std::cin >> listOfNames[i];
		std::cout << std::endl;
	}

	std::sort(listOfNames, listOfNames + lengthOfList);

	std::cout << "\nHere is your sorted list: " << std::endl;

	for (int i = 0; i < static_cast<int>(lengthOfList); i++)
		std::cout << "Name #" << i << ": " << listOfNames[i] << std::endl;

	delete[] listOfNames;

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

// Learncpp 6.x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int allowed_to_pass{ 3 };

bool passOrFail()
{
	if (allowed_to_pass > 0)
	{
		allowed_to_pass--;
		return true;
	}
		return false;
}

int main()
{
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #5: " << (passOrFail() ? "Pass\n" : "Fail\n");

	return 0;
}

//#include <iostream>
//#include "constants.h"
//
//int main()
//{
//	std::cout << "How many students are in your class?";
//	int students{};
//	std::cin >> students;
//
//	if (students > constants::max_class_size)
//		std::cout << "there are too many students in this class";
//	else
//		std::cout << "This class isn't too large";
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//    std::cout << "Enter a positive number: ";
//    int num{};
//    std::cin >> num;
//
//    if (num < 0)
//    {
//        std::cout << "Negative Number entered. Making positive. \n";
//        num = -num;
//    }
//
//    std::cout << "You entered: " << num;
//    
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

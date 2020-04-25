// Learncpp 2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
int three()
{
	return 3;
}
int main()
{
	std::cout << "the number 3 is " << three();
}








//This program doesn't work
//#include <iostream>
//
//int getValueFromUser()
//{
//	std::cout << "Enter an integer: ";
//	int input{};
//	std::cin >> input;
//
//	return input;
//}
//
//int main()
//{
//	int num{ getValueFromUser() }; // How do we get the value from getValueFromUser() and use it to initialize this variable?
//
//	std::cout << num << " doubled is: " << num * 2 << '\n';
//
//	return 0;
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

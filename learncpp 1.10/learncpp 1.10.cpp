// learncpp 1.10.cpp : This file contains the 'main' function. Program execution begins and ends there.



#include <iostream>

int main()
{

	std::cout << "Enter an integer: ";

    long long numOne{ 0 };
	long long numTwo{ 0 };

	std::cin >> numOne;

	std::cout << "Enter another integer: ";

	std::cin >> numTwo;

	std::cout << numOne << " + " << numTwo << " is " << numOne + numTwo << ".\n";
	std::cout << numOne << " - " << numTwo << " is " << numOne - numTwo << ".\n";

	return 0;


	/*std::cout << "Enter an integer: ";

	int num{0};
	std::cin >> num;

	std::cout << "Double " << num << " is: " << num * 2 << "\n";
	std::cout << "Triple " << num << " is: " << num * 3 << "\n";

	return 0;*/
}


//#include <iostream>
//
//int main()
//{
//	int x{};
//	int product{};
//
//	while (!((product == -2) && (x != -1))){
//
//		std::cout << "Enter a number to have multiplied by 2\n";
//		std::cin >> x;
//		product =  x * 2;
//		std::cout << product << " is your product\n";
//
//	} if (x != -1){
//		std::cout << "overflow";
//	}
//
//	return 0;
//
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

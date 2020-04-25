// Learncpp 3.x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void d()
{ // here
}

void c()
{
}

void b()
{
    c();
    d();
}

void a()
{
    b();
}

int main()
{
    a();

    return 0;
}

//#include <iostream>
//
//int readNumber()
//{
//	std::cout << "Please enter a number: ";
//	int x{};
//	std::cin >> x;
//	return x;
//}
//
//void writeAwnser(int x)
//{
//	std::cout << "the quotient is: " << x;
//}
//
//int main()
//{
//	int x{ 0 };
//	int y{ 0 };
//	x = readNumber();
//	y = readNumber();
//	writeAwnser(x / y);
//
//	return 0;
//}


//#include <iostream>
//
//int readNumber()
//{
//	std::cout << "Please enter a number: ";
//	int x{ 0 };
//	std::cin >> x;
//	return x;
//}
//
//void writeAwnser(int x)
//{
//	std::cout << "The sum is: " << x;
//}
//
//int main()
//{
//	int x{ readNumber() };
//	x = x + readNumber();
//	writeAwnser(x);
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

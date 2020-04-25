// Learncpp 4.x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "constants.h"

void calculate(double x, double y, char sign)
{
	if (sign == '+')
		std::cout << x << sign << y << ' = ' << x + y;
	else if (sign == '-')
		std::cout << x << sign << y << ' = ' << x - y;
	else if (sign == 'x')
		std::cout << x << sign << y << ' = ' << x * y;
	else if (sign == '/')
		std::cout << x << sign << y << ' = ' << x / y;
	else
		std::cout << "[Invalid Operation]";
}

char getOperation()
{
	std::cout << "Enter an operation\n";
	char operation;
	std::cin >> operation;

	return operation;
}

double getNumber()
{
	std::cout << "Enter a double value: \n";
	double x{};
	std::cin >> x;

	return x;
}

int main()
{
	std::cout << "Would you like to run #3 or #4 \n";
	int input;
	std::cin >> input;

	if (input == 3)
	{
		double num1{ getNumber() };
		double num2{ getNumber() };

		calculate(num1, num2, getOperation());
	}
	else if (input == 4)
	{
		std::cout << "Give the height of a building: ";
		int height;
		std::cin >> height;

		float distance_fallen{ 0.0f };

		for (int sec = 1; distance_fallen < height; sec++)
		{
			std::cout << "At " << sec-1 << " seconds, the ball is at height: " << height - distance_fallen << " meters" << '\n';
			distance_fallen = gravity_constant * (sec * sec) / 2;
		}
		std::cout << "By the next second, the ball touches the ground"; 
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

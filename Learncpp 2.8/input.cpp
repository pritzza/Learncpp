#include <iostream>

int getInteger()
{
	std::cout << "Etner an integer: ";
	int x{};
	std::cin >> x;
	return x;
}
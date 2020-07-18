// Learncpp L.5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

enum class Animal
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH,
};

void printLegCount(Animal animal)
{
	std::string animalName;
	int legCount;

	switch (animal)
	{
		case(Animal::PIG):
			animalName = "pig";
			legCount = 4;
			break;
		case(Animal::CHICKEN):
			animalName = "chicken";
			legCount = 2;
			break;
		case(Animal::GOAT):
			animalName = "goat";
			legCount = 4;
			break;
		case(Animal::CAT):
			animalName = "cat";
			legCount = 4;
			break;
		case(Animal::DOG):
			animalName = "dog";
			legCount = 4;
			break;
		case(Animal::OSTRICH):
			animalName = "ostrich";
			legCount = 2;
			break;
	}

	std::cout << "a " << animalName << " has " << legCount << " legs." << '\n';
}

int main()
{

	printLegCount(Animal::CAT);
	printLegCount(Animal::CHICKEN);

	return 0;
}


//#include <iostream>
//
//int calculate(int x, int y, char o)
//{
//    int result;
//
//    switch (o)
//    {
//        case('+'):
//            result = x + y;
//            break;
//        case('-'):
//            result = x - y;
//            break;
//        case('*'):
//            result = x * y;
//            break;
//        case('/'):
//            result = x / y;
//            break;
//        case('%'):
//            result = x % y;
//            break;
//        default:
//            std::cout << "\Error!\n";
//            result = 0;
//            break;
//    }
//
//    return result;
//}
//
//char getOperation()
//{
//    std::cout << "Enter an operation (+, -, *, /, %)\n";
//    char o;
//    std::cin >> o;
//    return o;
//}
//
//int getNumber()
//{
//    std::cout << "Enter an integer\n";
//    int x;
//    std::cin >> x;
//    return x;
//}
//
//int main()
//{
//    int num1 = getNumber();
//    int num2 = getNumber();
//    char operation = getOperation();
//
//    std::cout << num1 << " " << operation << " " << num2 << " = " << calculate(num1, num2, operation);
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

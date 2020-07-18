// Learncpp L.5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int i = 1;
	int j;
	while (i <= 5)
	{
		j = 5;
		while (j >= 1)
		{
			if (j <= i)
				std::cout << j << ' ';
			else
				std::cout << "  ";
			--j;
		}
		std::cout << '\n';
		++i;
	}
	return 0;
}


//#include <iostream>
//
//int main()
//{
//	int i = 5;
//	int j;
//	while (i > 0) 
//	{
//		j = i;
//		while (j > 0)
//		{
//			std::cout << j << " ";
//			j--;
//		}
//		std::cout << '\n';
//		i--;
//	}
//}


//#include <iostream>
//
//int main()
//{
//    int number = 97;
//    char letter;
//
//    while (number < 123)
//    {
//        letter = number;
//        std::cout << letter << " is " << number << std::endl;
//        number++;
//    }
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

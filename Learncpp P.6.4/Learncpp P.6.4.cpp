// Learncpp P.6.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator>

int main()
{
	int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	constexpr int arrayLength{ std::size(array) };

	for (int i = 0; i < arrayLength - 1; i++)
	{
		for(int k = 0; k < arrayLength - 1; k++)
			if (array[k] > array[k + 1])
				std::swap(array[k], array[k + 1]);
		
		for (int j = 0; j < arrayLength; j++)
			std::cout << array[j] << ' ';
			std::cout << std::endl;
	}

	return 0;
}

//#include <iostream>
//#include <iterator>
//
//int main()
//{
//    int array[]{ 30,50,20,10,40 };
//    constexpr int length{ static_cast<int>(std::size(array)) };
//
//    for (int index{ 0 }; index < length; ++index)
//        std::cout << array[index] << ' ';
//    std::cout << std::endl;
//
//    for (int startIndex = 0; startIndex < length - 1; startIndex++)
//    {
//        int largestIndex{ startIndex };
//        for (int currentIndex = startIndex + 1; currentIndex < length; currentIndex++)
//        {
//            if (array[currentIndex] > array[largestIndex])
//                largestIndex = currentIndex;
//        }
//        std::swap(array[startIndex], array[largestIndex]);
//
//        for (int index{ 0 }; index < length; ++index)
//            std::cout << array[index] << ' ';
//        std::cout << std::endl;
//    }
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

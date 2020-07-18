// Learncpp P.6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator> // for std::size

int main()
{
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    constexpr int numStudents{ static_cast<int>(std::size(scores)) };

    int maxIndex{ 0 }; // keep track of our largest score

    // now look for a larger score
    for (int student{ 0 }; student < numStudents; ++student)
    {
        if (scores[student] > maxIndex)
        {
            maxIndex = student;
        }
    }

    std::cout << "The best score was " << scores[maxIndex] << '\n';

    return 0;
}

//#include <iostream>
//
//int main()
//{
//	int array[]{ 777,666,69,420,1337,21,300,42,0 };
//	int input{};
//
//	while (input > 9 || input < 1)
//	{	
//		std::cout << "Enter a number between 1 and 9 to see haha funny number in array.\n";
//		std::cin >> input;
//
//		std::cin.clear(); // reset any error flags
//		std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
//	}
//
//	std::cout << array[input - 1];
//
//	return 0;
//}



//#include <iostream>
//#include <iterator>
//
//int main()
//{
//    constexpr int array[]{ 4,6,7,3,8,2,1,9,5 };
//    constexpr int arraySize = static_cast<int>(std::size(array));
//
//    for (int i = 0; i < arraySize; i++)
//        std::cout << array[i];
//
//
//    return 0;
//}
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

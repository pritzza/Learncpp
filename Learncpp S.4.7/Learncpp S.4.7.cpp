// Learncpp S.4.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//struct Ads
//{
//    int shown;          // Number shown
//    float clicked;      // Percentage of ads clicked
//    float earned;       // Average of each ad clicked
//};
//
//Ads getAds()
//{
//    Ads today;
//    std::cout << "How many ads were shown today?" << std::endl;
//    std::cin >> today.shown;
//    std::cout << "What percentage of ads were clicked today?" << std::endl;
//    std::cin >> today.clicked;
//    std::cout << "What was the average earning per ad click?" << std::endl;
//    std::cin >> today.earned;
//
//    return today;
//}
//
//int main()
//{
//    Ads today{ getAds() };
//        
//    std::cout << "Today's ads earning are: " << today.shown * (today.clicked/100) * today.earned;
//}

#include <iostream>

struct Fraction
{
	double numerator;
	double denominator;
};

Fraction getFraction()
{
	Fraction temp;
	std::cout << "Enter the numerator of a fraction: " << std::endl;
	std::cin >> temp.numerator;
	std::cout << "Enter the denominator of a fraction: " << std::endl;
	std::cin >> temp.denominator;

	return temp;
}

auto multiply(Fraction one, Fraction two)
{
	return ((one.numerator / one.denominator) * (two.numerator / two.denominator));
}

int main()
{
	Fraction one{ getFraction() };
	Fraction two{ getFraction() };

	std::cout << one.numerator << "/" << one.denominator << " x " << two.numerator << "/" << two.denominator << " = ";
	std::cout << multiply(one, two);
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

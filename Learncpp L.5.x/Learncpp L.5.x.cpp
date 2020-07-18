// Learncpp L.5.x.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <stdlib.h>     // srand & rand 
#include <time.h>       // time

int generateRandomNumber(int range)
{
	int rng = rand() % range + 1;		// 1 - range

	return rng;
}

void gameOver(int awnser, bool win)
{
	if (win)
		std::cout << "Correct! You win!" << std::endl;
	else
		std::cout << "Sorry, you lose.  The correct number was " << awnser << std::endl;

	char input = ' ';

	while (input != 'y' && input != 'n')
	{
		std::cout << "Would you like to play again (y/n)?" << std::endl;
		std::cin >> input;
		std::cin.ignore(32767, '\n');
	}
	if (input == 'y')
		;
	else if (input == 'n')
	{
		std::cout << "Thank you for playing.";
		while (1)
			;
	}
}

void startNumberGame(int randomNumber, int tries)
{
	std::cout << "Let's play a game.  I'm thinking of a number.  You have " << tries << " tries to guess what it is." << std::endl;

	int guessNumber{ 1 };
	int guess{0};

	for (; tries > 0; tries--)
	{
		std::cout << "Guess #" << guessNumber << ": ";
		std::cin >> guess;
		std::cin.ignore(32767, '\n');

		if (guess > randomNumber)
			std::cout << "Your guess is too high." << std::endl;
		else if (guess < randomNumber)
			std::cout << "Your guess is too low." << std::endl;
		else if (guess == randomNumber)
			gameOver(randomNumber, true);
		else
		{
			std::cout << "Invalid input";
			tries++;
		}
		guessNumber++;
	}
	gameOver(randomNumber, false);
}

int main()
{
	srand((unsigned int)time(NULL));

	while (1)
	{
		startNumberGame(generateRandomNumber(100), 7);
	}

	return 0;
}


//#include "constants.h"
//
//#include <iostream>
//
//// gets initial height from user and returns it
//double getInitialHeight()
//{
//	std::cout << "Enter the height of the tower in meters: ";
//	double initialHeight;
//	std::cin >> initialHeight;
//	return initialHeight;
//}
//
//// Returns height from ground after "secondsPassed" seconds
//double calculateHeight(double initialHeight, int secondsPassed)
//{
//	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
//	double distanceFallen{ (myConstants::gravity * secondsPassed * secondsPassed) / 2.0 };
//	double currentHeight{ initialHeight - distanceFallen };
//
//	return currentHeight;
//}
//
//// Prints height every second till ball has reached the ground
//void printHeight(double height, int secondsPassed)
//{
//	if (height > 0.0)
//	{
//		std::cout << "At " << secondsPassed << " seconds, the ball is at height:\t" << height <<
//			" meters\n";
//	}
//	else
//		std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.\n";
//}
//
//void calculateAndPrintHeight(double initialHeight, int secondsPassed)
//{
//	double height{ calculateHeight(initialHeight, secondsPassed) };
//	printHeight(height, secondsPassed);
//}
//
//int main()
//{
//	const double initialHeight{ getInitialHeight() };
//
//	int secondsPassed = 0;
//	for (; calculateHeight(initialHeight, secondsPassed) >= 0; secondsPassed++) 
//		calculateAndPrintHeight(initialHeight, secondsPassed);
//		calculateAndPrintHeight(initialHeight, secondsPassed);
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

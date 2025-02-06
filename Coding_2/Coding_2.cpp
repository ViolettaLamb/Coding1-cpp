/*
// Brian Foaster Coding 1 Spring 2025 Week 3
// Variables, Logic, and Randomness

#include <iostream> // in out stream sends to and from the console
#include <string> // allows us to use strinf variables
#include <cstdlib>
#include <ctime>

using namespace std; // so we don't have to type "std::" all time.

// this is where the program starts running!
// its a function that returns an integer.
int main() 
{
	// all code inside a code block should be indented
	cout << "Hello! What is your name?\n";
	string input;  // create a variable to hold player's input
	cin >> input;  // assign input from console to input variable

	if (input == "Violetta")
	{
		cout << "What is the Password?\n";
		cin >> input;
		if (input == "Nugget")   // nested if statement
		{
			cout << "Hello creator!\n";
		}
		else
		{
			cout << "Imposter!!! ALERT ALERT ALERT\n";
			return 0;     //quits out of the program early
		}
	}

	//default statement
	else
	{
		cout << "Hello " << input << ".\n";
	}

	cout << "Are you ready to play a game?\n";
	// a character is a single character, anything you could type on your keyboard
	char playerCharInput = 'n';
	//string is an ordered list of characters.
	string name = "ToastedOreo";

	int totalTurns = 0;
	do
	{
		cout << "Press 'y' to keep playing.\n";  //Ask Player for input
		cin >> playerCharInput;           // get input
		totalTurns += 1;   //explain increment and combined assignment operators

	} while (playerCharInput == 'y');  //test input


	//todo: use a switch statement (next time)
	cout << "You played for " << totalTurns << "!\n";

	cout << "\n";

	cout << "\tWeclome to Week 3!\n";
	cout << "We're talking about Variables, Logic, and Randomness today.\n";
	cout << "\tAlways initialized your variables.\n\n";

	srand(time(0));
	cout << "Here's one random number for you : " << rand() << ".\n";
	cout << "Here's a second random number for you : " << rand() << ".\n";
	cout << "Here's a third random number for you : " << rand() << ".\n\n";

	// modulus gives remainder of long division
	cout << "7 divided by 2 = " << 7 / 2 << " with a remainder of " << 7 % 2 << ".\n";

	cout << "A random number between 1 and 10 (inclusive) : " << (rand() % 10) + 1 << ".\n\n";

	// 1 - 10 inclusive could be 1 or 10.
	// 1 - 10 exclusive could NOT be 1 or 10, but 2 to 9.

	cout << "Here are this week's grades for this class (between 50 and 100).\n";
	int counter = 0;
	// while the test is true, keep looping.
	//while (test) { code block }
	while (counter < 10) 
	{
		counter += 1;   
		cout << (rand() % 50) + 50 << "\n";
	}

	cout << "\n";



	// variables are nicknames for data.
	// creating a variable of the type integer
	//named "age"
	//with the defined value of 19.
	int age = 19;
	int score = 0; // declaring the variable, but not defining the variable


	// let's talk camelCase
	// captitalize each new word after the first one.
	int playerOneFuelAmount = 43;

	// an integer is a whole number, postive or negative -2bil and +2bil.
	int oceanDepth = -234;

	//floats are floating-point numbeers. they have decimal point!
	//they're accurate to 7 digits
	//creating a constant float named "pi" with the value of "3.1415".
	const float pi = 3.1415f;

	//doubles are double-precision floating point numbers. accurate to 22-digits.
	double someNumberWithDecimalPlaces = 3456.7898456534;

	// task: send these 4 numbers to the console.
	cout << "Player 1's fuel amount is " << playerOneFuelAmount << ".\n";
	cout << "Ocean Depth is " << oceanDepth << ".\n";
	cout << "Pi is " << pi << ".\n";
	cout << "Some numbers have decimals like " << someNumberWithDecimalPlaces << ".\n";

	//when using random numbers, dont forget to 
	//#include <cstdlib>  // for rand() and srand()
	//#include <ctime>   // for time ()

}// end of main()
*/
// Violetta Lamb Coding1b
// Loops and Lists
/*
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


int main() 
{
	cout << "Welcome to week 5!\n";

	//if/else if/else
	//variables
	//while and do-while
	//random numbers
	srand(time(0));

	cout << "What program would you like to run?\n";
	cout << "Press 1 for keep playing\n";
	cout << "Press 2 for Player name\n";

	string input;  //make a variable to store the input from the player
	getline(cin, input);  //get input from thr player


	//test the input from the player
	//stoi() stands for "string to integer" and converts a string to an interger (if it can)
	//if/else if/else
	if (stoi(input) == 1)
	{
		cout << "Let's start the Keep Playing program!\n";
	}
	else if (stoi(input) == 2)
	{
		cout << "Let's start the Player Name program.\n";
	}
	else
	{
		cout << "I didn't understand the request.\n";
	}

	// lists 
		// arrays
		// vectors
	// loops
		//for loop
	// more logic
		// switch statement
		// if/else if/else


	//Arrays
	string colors[4]; //size of array

	colors[0] = "Purple";
	colors[1] = "Blue";
	colors[2] = "Orange";
	colors[3] = "Yellow\n";

	cout << "The first color in our array of colors is " << colors[0] << ".\n";

	//lets loop through all of colors
	cout << "\nHere are all of the colors in the array:\n";
	int iterator = 0;    //the iterator counts, starting at 0
	while (iterator < 4) // loop as long as we're less than the array's size
	{
		cout << colors[iterator] << "\n"; // sends the array element's value tp the console
		iterator += 1; // add 1 to the iterator
	}


	//lets build a new list, using player input.
	cout << "Who are your best friends?\n";
	//keeps using string input from earlier
	string bestfriends[10]; //size of 10, arrays must be specify size in c++
	int currentElement = 0; // This is points at the next avaiable spot in the array

	do //loops
	{

		cout << "enter a name, or type 'quit' tp quit\n";
		
		getline(cin, input); //using cin, get input and assign it to temp value

		if (input == "quit")  //if they said quit, that's not one of their friends.
		{
			break;
		}

		bestfriends[currentElement++] = input; // after currentElement is used, add 1

	} while (currentElement <=10); // ! is the not operator. 
	// Loop while input is not equal to quit ; and while current element is <= 10.

	//error looks like this:
	//there's is a main(): :input and a do: :input

	//for Loop
	
	cout << "\nHere are all of your best friends. Looks like a great party!\n";
	//for(setup, test, action {code}
	for (int i = 0; i < currentElement; i++)
	{
		cout << bestfriends[i] << "\n";
	}

	//use pseudcode to plan my program
		// create an array of 33
		// random year from 1777 to 2025
		// use a for loop to genrate 33 random numbers and assign them to the array
			// optionally check "mostRecentYears" at the end of each loop
		//print the most recent year 
			//extra requirment, print all years
	int randomYears[33];  //random array of 33
	int mostRecentYears = 0;
	int min = 1777;
	int max = 2025;
	int range = max - min; 
	int randomYear = (rand() % (range + 1)) + min;
	
	cout << "\nHere is an array of years from 1777 to 2025: \n";
	
	//runs 33 times
	for (int i = 0; i < 33; i++)
	{
		//years of i = random years
		randomYears[i] = (rand() % (248 + 1) + 1777);
		if (randomYears[i] > mostRecentYears)
		{
			mostRecentYears = randomYears[i];
		}
	}
	for (int i = 0; i < 33; i++)
	{
		
		cout << randomYears[i] << "\n";
	}

	cout << "The most recent year in the list is " << mostRecentYears << ".\n";

	// then create a for lop to tell the user what is the highest number of the array


	return 0;




} */






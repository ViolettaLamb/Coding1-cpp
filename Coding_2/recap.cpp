// Violetta Lamb, Coding 1 Spring 2025 
// Recap Day!

#include <iostream>
#include <string>
#include <ctime>  //for srand()
#include <cstdlib> // for ran()
#include <vector> //for vector
#include <algorithm>

using namespace std;


// this is where the program starts
int main()
{
	srand(time(0));
	bool debug = false; //debug mode is offf unless player is us
	string input; //for player input.
	string name; //for player name.

	//have the computer greet you
	cout << "Hello new player! Welcome to the program!\n";
	cout << "What shall I call you?\n";
	getline(cin, name);

	// if input is my name greet creator
	if (name == "Violetta")
	{
		cout << "Hello Creator!\n";
		
		debug = true;
		if (debug) cout << "Debug mode is ON!\n";
	}
	else //if input is not my name say hi.
	{
		cout << "Hello " << name << ".\n";
		cout << "WOMP WOMP WOMP " << name << " IS STINKY.\n";
	}


	//build a "guess athe number' game
	// where the computer picks a random number between 1 and 10 
	// and the player guesses, the computer says higher or lower or thats it
	// for set up;pick a random number

	if (false)
	{
		int theNumber = rand() % 10 + 1; //this number will be 1,2,3,4,5,6,7,8,9 or 10
		if (debug) cout << "The number is " << theNumber << ".\n";
		int guess = 0;

		cout << "\nI am thinking of a number between 1 and 10 (inclusive).\n";
		cout << "\nCan you guess the number?\n";

		while (guess != theNumber)
		{
			cout << "What is your guess?\n>>";
			getline(cin, input);
			guess = stoi(input);
			if (guess == theNumber)
			{
				cout << "Congrats, " << name << " you've guessed it!\n";
				break;
			}
			if (guess > theNumber)
			{
				cout << "\nToo High\n";
				cout << "\nWOMP WOMP STINKY\n";
				cout << name << " try again\n";
			}
			else
			{
				cout << "\nToo Low\n";
				cout << "\nWOMP WOMP STINKY\n";
				cout << name << " try again\n";
			}
		}
	}

	if (true)
	{
		//vectors

		vector<string> favBooks;  
		favBooks.push_back("Miss Peregrine's Home for Peculiar Children");
		favBooks.push_back("The Outsiders");
		favBooks.push_back("Cinder");
		cout << "\nThe first book in my list of favNooks is " << favBooks[0] << ".\n";

		cout << "\nPlease add another book to the list\n";
		getline(cin, input);

		favBooks.push_back(input); //adds another element to end of vector?

		cout << "\nThere are now " << favBooks.size() << " books in the list\n";
		cout << "The last book in the list is " << favBooks[favBooks.size() - 1] << ".\n";


		//useful stuff with vectors, after push_back and variable sizes
		//#include <algortithm> for .find() .sort() amf .shuffle()

		cout << "\nHere is the unsorted list:\n";
		for (int i = 0; i < favBooks.size(); i++)
		{
			cout << favBooks[i] << "\n";
		}
		
		cout << "\nLet's sort the list!\n"; //sorts the list
		sort(favBooks.begin(), favBooks.end());


		cout << "\nHere is the sorted list:\n";
		for (int i = 0; i < favBooks.size(); i++)
		{
			cout << favBooks[i] << "\n";
		}

		//random shuffle
		cout << "\nRandomly shuffling the list:\n";
		random_shuffle(favBooks.begin(), favBooks.end());

		cout << "\nHere is the shuffled list:\n";
		for (int i = 0; i < favBooks.size(); i++)
		{
			cout << favBooks[i] << "\n";
		}

		cout << "\nGive me a book from the list, and I'll tell you what position it is in the list.\n";
		getline(cin, input);
		vector<string>::iterator iter;  //new kind of variable type called iterator
		iter = find(favBooks.begin(), favBooks.end(), input); // they point at certain spots in vector

		if (iter != favBooks.end()) // if find() went through the whole vector and didnt
		{
			cout << *iter << ".\n"; // finde anything, iter will oiubt at vector.end()
		}
		else
		{
			cout << "\nThat book is not in the list.\n";
		}
	}
	


}
//Violetta Lamb Week 10 Coding 1
//Functions
/*
#include <iostream>
#include <string>
#include <ctime>  
#include <cstdlib> 
using namespace std;

//global variables are dangerous
//global variables exist in all functions in this source file.
const bool debug = false;




//Funcations
	//f(x) = y
	//f(input) = output
	//f(2) = 4
	//f(4) = 6
	//all functions have a return type, a name, and (input parameteers)
	//declaring and defining a new function named 'sayHello"
	// it has a return type of void, which means it returns nothing
	// it has one input parameter named "greeting" with a default value of "Hello!"
	

void sayHello(string greeting = "Hello!")
{
	cout << greeting << "\n";
}
void sayGoodBye(string farewell = "Goodbye!")
{
	cout << farewell << "\n";
}


int triple(int givenNumber)
{
	if (debug) cout << "giveNumber: " << givenNumber << ".\n";
	return givenNumber * 3;   //this is the output of the fuction.
}

double triple(double givenNumber)
{
	if (debug) cout << "[giveNumber: " << givenNumber << ".]\n";
	return givenNumber * 3;
}
float  triple(float givenNumber)
{
	if (debug) cout << "[giveNumber: " << givenNumber << ".]\n";
	return givenNumber * 3;
}
string triple(string givenNumber)
{
	if (debug) cout << "[giveNumber: " << givenNumber << ".]\n";
	return givenNumber + givenNumber + givenNumber;
}

//get player name input with min and max size
string getPlayerName(int minSize = 5, int maxSize = 15)
{
	string input;
	do
	{
		cout << "What is your name?\n";
		getline(cin, input);

		//data validation
		if (input.size() < minSize)
		{
			cout << "Your name needs to be at least " << minSize << " characters long, \n";
		}
		else if (input.size() > maxSize)
		{
			cout << "Your name needs to be fewer than " << maxSize + 1 << " characters.\n";
		}
		else
		{
			string greeting = "Hello " + input + "!";
			sayHello(greeting);
			string farewell = "Goodbye " + input + "!";
			sayGoodBye(farewell);
			return input;
		}
	} while (true);
}

//task:
// create a function that returns a random number bwtween min and max
//ask player fpr a min number and max number 
//then use the function to return to a random number bwtwwen those balues 


// getline(cin, input)
// int min = stoi(input)
//for a random number between min and max: rand() % (max - min) + min;
//int range = (max - min) + 1;
//rand() % ramge + min

int randomNumberInRange(int min = 0, int max = 10)
{
	// check to ensure that max is larger than min?
	// 
	if (min >= max)
	{
		cout << "I can't use those numbers/\n";
		return -1;
	}
		//else return -1 and throw error or warning message
	//calculate range
	// 
	int range = (max - min) + 1;
	return rand() % range + min; 
	//return random number
	
}





int main()
{
	string input; //keep track of user types
	srand(time(0));
	
	cout << "Min = what?: \n";
	getline(cin, input);
	int min = stoi(input);

	cout << "Max = what?: \n";
	getline(cin, input);
	int max = stoi(input);

	cout << "A random number bewteen " << min << " and " << max;
	cout << " is " << randomNumberInRange(min, max) << ".\n\n";


	cout << "Triple of 4 is " << triple(4) << ".\n";

	cout << "Triple of 4 is " << triple(12) << ".\n";

	cout << "Triple of 4 is " << triple(6.62) << ".\n\n";

	sayHello("Weclome to the abyss!");

	
	string playerName = getPlayerName();
	string favFood[11];

	

	cout << "Ah, alrighty " << playerName << ", lets get to know you.\n";
	cout << "So tell me, " << playerName << ", what is your top three faviorte food?\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "fav food #" << i + 1 << ": ";
		getline(cin, input);

		favFood[i] = input;
	}

	cout << "Here is your favorite foods, " << playerName << ": \n";
	for (int i = 0; i < 3; i++)
	{
		cout << favFood[i] << ".\n";
	}

	sayGoodBye();
	sayGoodBye("Goodbye great adventure\n");

} */
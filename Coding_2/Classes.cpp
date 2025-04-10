//Violetta Lamb
//Week 12
// Structs, Classes, Getters and Setters

//Classes 
//String is a class

#include <iostream>
#include <string>
using namespace std;


// use the class keyword to create a class
//classes has stuff privated by default
class robot
{
public: //anyone can see it, call it and change it
	
	//Data Members
	string name;
	string phrase;
	int charge;

	//Member Functions
	//functions declarations, to be defined later.
	//function declarations don't require parameter names
	robot(string, string, int);
	robot();
	void SayHello();

private: //only I can see this, call this, and change this.
protected: 
};

//Function definitions must be outside of the class definition.
	//constructor - special function when a new variable is created
	// has to be name same as class and no return type
robot::robot(string givenName, string givenPhrase, int givenCharge)
{
	//assigns this instances variables to the given values
	name = givenName;
	phrase = givenPhrase;
	charge = givenCharge;

	// lets us know that this constructor has run.
	cout << "A new robot has been constructed!\n";

}
//overloading the constructor with a 'defult constructor"
robot::robot()
{
	cout << "Using the DEFAULT constructor.\n";
	cout << "Hey programmer Dean, please fix this in the source code.\n";
}

void robot:: SayHello()
{
	cout << "My name is " << name << " and my charge is " << charge << ".\n";
	cout << phrase << "\n";
}


int main()
{
	cout << "Classes, yeah?\n";

	robot bobert; //cinstructor runs here.
	bobert.name = "Bobert Junior";
	bobert.charge = 5;

	cout << "Have a look at my new robot! Their name is " << bobert.name << ".\n";
	cout << "I am currently charging them, their charge is " << bobert.charge << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);
	cout << "My new robot was very expensive! They works on the nuclear reactor.\n";
	cout << "They can introduce themselves, watch!\n";
	rob.SayHello();

	bobert.SayHello();

	return 0;
}
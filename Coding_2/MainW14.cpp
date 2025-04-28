//Violetta Lamb
//Weel 14
//Coding 1 Spring 2025

//Reading from and Writing to Files.


#include "filez.h"
#include "ship.h"

using namespace std;


int main()
{

	cout << "Lets Write Some NEW FILES!\n";
	

	ReadFromFile();

	WriteToFile("Did you get the Switch 2 preorder?\n");

	WriteShipToFile("SS Minnow", 25, CRUISER); //CANT FIGURE OUT WHY ITS NOT RUNNING PROPERLY

	
	return 0;
}

/*
files well use today

MainW14.cpp       <------ this is the entry point for the rest of the program

filez.h

filez.cpp

ship.h

ship.cpp

the header file just has the #includes and the function declarations
the source file (.cpp) will have the function definitions. 

*/
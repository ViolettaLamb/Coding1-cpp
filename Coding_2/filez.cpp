#include "filez.h"
#include "ship.h"


void WriteToFile(string givenString)
{
	//open or create the file
	ofstream file("file.txt", ios::app);

	//confrim the file is open
	if (!file.is_open())
	{
		cout << "Could not open File.\n";
		return; 
	}

	//write text to the open file
	file << givenString;

	//close the file (which saves it to disk)
	file.close();

}
ship WriteShipToFile(string givenShipName, int givenFuel, shipType shipType)
{
	//set name, fuel and ship type
	

	//opens file
	ofstream file("file.txt", ios::app);

	//confrim the file is open
	if (!file.is_open()) //it doesnt like this code
		//"C2561" "WriteShipToFIle" function must return a value?
	{
		cout << "Could not open File.\n";
		return;
	}
	
	
	//write text to the open file
	void status();
	

	//close the file (which saves it to disk)
	file.close();
}


void ReadFromFile()
{
	string fileContents;

	// open the file
	ifstream file("file.txt");

	// check that its actually open
	if (!file.is_open())
	{
		cout << "could not open the file.\n";
	}
	// cout everything in the file
	while (getline(file, fileContents))
	{
		cout << fileContents << "\n";
	}

	// close the file
	file.close();
}


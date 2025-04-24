#include "filez.h"

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

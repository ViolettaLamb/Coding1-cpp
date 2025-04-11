//Violetta Lamb
//CPP Coding Week 12 homework
//Human Classes

#include <iostream>
#include <string>
using namespace std;

class human
{
private:
	//in private code will hold name, health and damage templates
	string name;
	int health = 10;
	int damage = 4;


public:
	// makes constructor public
	human(string, int, int);
	void SayHello();

	//setter and getters
	//setter first for health
	void SetHealth(int byAmount)
	{
		if (byAmount < 0)
		{
			health = 0;
		}
		else if (byAmount > 100)
		{
			health = 100;
		}
		else
		{
			health = byAmount;
		}
	}
	//Getter for health
	int GetHealth()
	{
		return health;
	}
	//setter for damage  hopefully this works 
	//unsure if it will ;-; 
	void SetDamage(int givenDamage = 4)
	{
		health -= givenDamage;
		SetHealth(health);
	}
	// getter for damage
	int GetDamage()
	{
		return damage;
	}
	//name
	void SetName(string givenName)
	{
		if (givenName.size() < 2)
		{
			cout << "Name is too short!\n";
			return; // return nothing out of  a void funtion to end the function.
		}
		else if (givenName.size() > 20)
		{
			cout << "Name is too long!\n";
			return;
		}
		else
		{
			name = givenName;
		}
	}
	string GetName()
	{
		return name;
	}
};

//constructors

human::human(string givenName, int health, int baseDamage)
{
	name = givenName;
	health = health;
	damage = baseDamage;

	// new talk
	cout << "A new Human has been made!\n";
}
void human::SayHello()
{
	cout << "Hello my name is " << name << ", and my health is " << health << ".\n";
}


//main
int main()
{
	cout << "Human Class!\n\n";

	human vio("Violetta", 25, 8); //i dont think health worked? 
	cout << "Heres a new human!\n";
	cout << "They can introduce themselves, watch!\n";
	
	vio.SayHello();

	

	return 0;
}
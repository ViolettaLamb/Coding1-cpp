//Violetta Lamb
//CPP Coding Week 12 homework
//Human Classes
/*
#include <iostream>
#include <string>
using namespace std;

class human
{
protected:
	//in private code will hold name, health and damage templates
	string name;
	int health;
	int damage;


public:
	// makes constructor public
	human(string, int, int);
	human()
	{
		health = 10;
		damage = 4;
	}
	void SayHello();

	//setter and getters
	//setter first for health
	void SetHealth(int givenhealth)
	{
		if (givenhealth < 0)
		{
			health = 0;
		}
		else if (givenhealth > 100)
		{
			health = 100;
		}
		else
		{
			health = givenhealth;
		}
	}
	//Getter for health
	int GetHealth()
	{
		return health;
	}
	//setter for damage  hopefully this works 
	//unsure if it will ;-;
	void ChangeHealth(int by = 1)
	{
		int tempHealth = health;
		tempHealth += by;
		SetHealth(tempHealth);
	}
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


//the wizard class inherits from the human class
//everything that the human class has, so does the wizard.
class wizard:public human
{
public:
	int mana;
	void castSpell()
	{
		cout << name << " casts a spell.\n\n";
	}

	//build a spell that posions any human
	//it will cut their health in half
	void posion(human& target)
	{
		cout << "The terrible wizard " << name << " has posioned " << target.GetName() << "!!\n";

		int halfOfTargetHealth = target.GetHealth() / 2;

		target.ChangeHealth(-halfOfTargetHealth);
	}
};

//another fun class
class necromancer :public human
{
public:
	int mana;
	void raiseDead()
	{
		cout << name << ", has RISEN THE DEAD!\n";
		cout << "RUNNNNN BEFORE THE DEAD GETS YOU!!!\n\n";
	}
};


//constructors

human::human(string givenName, int givenhealth, int baseDamage)
{
	name = givenName;
	health = givenhealth;
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

	necromancer deadriser;
	deadriser.SetName("Keith");
	deadriser.SayHello();
	deadriser.raiseDead();

	wizard dumblydore;
	dumblydore.SetName("Abloose");
	dumblydore.SayHello();
	dumblydore.castSpell();

	cout << "Human Class!\n\n";

	human vio("Violetta", 25, 8); //i dont think health worked? 
	cout << "Heres a new human!\n";
	cout << "They can introduce themselves, watch!\n\n";
	
	dumblydore.posion(vio);

	cout << "[Checking Health after posion]\n";
	vio.SayHello();


	return 0;
}

*/
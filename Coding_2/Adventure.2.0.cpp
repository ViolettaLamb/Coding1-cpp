//Writing out the adventure 2.0
//the includes and using namespace are basic always need before starting
#include <iostream>
#include <string>
#include <ctime>  //might need, will delted if not
#include <cstdlib> //might need, will deleted if not

using namespace std;

//call for totaltreasure and heal vairables
int health = 20;
int treasure = 0;


//FUNCTIONS
//Story() -Return Void type and is the start of story and explains stuff
void startStory()
{
    cout << "------------------------------------------------------------\n";
    cout << "You fall down this large pit.\n";
    cout << "Getting up to view the area you are now surronded by.\n";
    cout << "You as the player starts with " << health << ".\n";
    cout << "You wonder to yourself 'who you are?' and 'where are you?'\n";
    cout << "In the distances you hear a voice.\n";
    cout << "Welcome to the abyss!\n";
    cout << "------------------------------------------------------------\n\n";
}



//GetPlayerName() - I love doing the names since to me it makes it feel more immersive
////get player name input with min and max size
string getPlayerName(int minSize = 5, int maxSize = 15)
{
   
    cout << "Hello there lost wonderer.\n";
    string input;
    do
    {
        
        cout << "What is your name?\n";
        getline(cin, input);

       

        //data validation
        if (input.size() < minSize)
        {
            cout << "Your name needs to be at least " << minSize << " characters long.\n\n";
        }
        else if (input.size() > maxSize)
        {
            cout << "Your name needs to be fewer than " << maxSize + 1 << " characters.\n\n";
        }
        else
        {
            
            return input;
        }
    } while (true);
  
}

// 
//RollDie() -int parameter named sides and with defult value of 6 (dice) and reture type is int
int rollDie()
{
    int diceRoll = (rand() % 6);
    return diceRoll;

}
// 
// 
//Ending() -return void; ends if out of turns, says no or dies - break into two functions
void ending() // proper ending if player doesnt die
{
    string playerName = getPlayerName();
    cout << "congrats, " << playerName << ", you've survive the abyss.\n";
    cout << "you were were able to bring back " << treasure << " amount of treasure back to the surface.\n\n";
    if (health < 5) cout << "You may want to take a rest and seek medical help, " << playerName << ".\n\n";
}
void death() //ending if player dies
{
    string playerName = getPlayerName(); 
    cout << playerName << ", you were unable to surivie the abyss.\n";
    cout << "You lost all the treasure you had collected " << playerName << ".\n";
    cout << "Amount of treasure losted to the abyss: " << treasure << ".\n\n";

    treasure = 0;
}

//AskYesNo() - One String agrument named "question"|return type is bool|yes starts|no ends it
bool askYesNo(string question = "Would you like to explore the abyss?\n")
{
    string playerName = getPlayerName();  

    do
    {
        string response;
        cout << question << "yes or no, \n" << playerName << "?\n" << endl;
        getline(cin, response);


        if (response == "yes")
        {
            return true; //starts it. 
        }
        else if (response == "no")
        {
            return false;//ends the adventure
        }
        //anything else doesnt register and ends the adventure
        else
        {
            cout << "I am sorry, " << playerName << ".\n";
            cout << "But I do not understand this request.\n";
            cout << "Please choice from the inputs of 'yes' or 'no'.\n";

        }

    } while (true);

}


//Adventure() - Calls rolldie for attack, block and treasure, void or bool, tells player HP
void adventure()
{
    while (true) //all actions for game
    {
        string playerName = getPlayerName();  

        //randomizes block and attack
        int attack = rollDie();
        int block = rollDie();

        cout << "Oh no, " << playerName << ", there seems to be creatures that want to attack you!!\n";
        cout << "The creature attack is " << attack << " and you're block is " << block << ".\n\n";

        if (attack > block) //you got hurt
        {
            health -= attack;
            cout << "Oh no you lost " << attack << " health.\n";
            cout << "Your health is now, " << health << ".\n";
        }
        else if (block >= attack) //you block it
        {
            
            cout << "It seems like you block it's attack.\n";
            cout << "Your health is now: " << health << ".\n\n";
            cout << "You gained treasure for blocking their attack!\n";

            treasure += rollDie() * 2;
            cout << "You're current treasure count is: " << treasure << ".\n";

        }
        if (health < 1) //health 0 player dies
        {
            
            death();
            break;
        }
        else if (askYesNo() == false)
        {
            ending();
            break;
        }
    }
}



//INT MAIN; were the code truly runs at
//only error i am having is the name reasking but dont know how to reference it properly in the many functions ;-;.
int main()
{
	//keep these at top in order to function properly
	
	srand(time(0));

	//Story functions
	 startStory();

    //Would you like to explore it? Yes or no Function. 
    askYesNo(); //finally got it working.
    
    //adventure
    adventure();
}
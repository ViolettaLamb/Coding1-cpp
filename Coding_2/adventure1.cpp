#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    srand(time(0));
    string name;
    string input;
    bool gameLive = false;
    int totalTurns = 0;
    int health = (rand() % 20) + 5; //randomize player health
    int attack;
    int block;

    //Weclome Player, What is your name?
    cout << "Hello Lost Wonderer! What shall I call you?\n";
    cin >> name;

    //Weclome "Name" are you ready for an adventure? 
    cout << "Weclome " << name << ". Would you like to join me on an Adventure?\n";
    cout << "\tyes or no?\n";
    cin >> input;
    
    if (input == "no") //ends if player says no
    {
        cout << "Thanks for going on this adventure " << name << ".\n";
        return(0);
    }
    //generates a seed and see if player wants to play it. 
    cout << "Weclome to Your New Home: " << rand() << ".\n";
    cout << "Would you like to explore it?\n";
    cout << "\tyes or no?\n";
    cin >> input;

    while (input == "no") //randomize world again
    {
        cout << "Weclome to Your New Home: " << rand() << ".\n";
        cout << "Would you like to explore it?\n";
        cout << "\tyes or no?\n";
        cin >> input;
        
    }


    if (input == "yes") gameLive = true;
    //If yes starts the adventure.
    while (gameLive)
    {
  
            //encounter monster
            cout << "OH NO!! You've encounter a Creature.\n";
            cout << "It seems like it wants to attack, " << name << ".\n";
            cout << "Do you engage, " << name << "?\n";
            cout << "yes or no?\n";
            cin >> input;

            //if yes then attack starts
            if (input == "yes")
            {
         
                totalTurns += 1;
                attack = (rand() % 5) + 0;
                block = (rand() % 5) + 0;


                if (attack > block) //you got hurt
                {
                    health -= attack;
                    cout << "Oh no you lost " << attack << " health.\n";
                    cout << "Your health is now, " << health << ".\n";
                }
                else //you block it
                {
                    block >= attack;
                    cout << "It seems like you block it's attack.\n";
                    cout << "Your block was " << block << ".\n";
                    cout << "Their attack was " << attack << ".\n";
                    cout << "Your health is now, " << health << ".\n";
               
                }
                if (health < 1) //health 0 player dies
                {
                    gameLive = false;
                    cout << "Oh no it seems like you've been killed, " << name << ".\n";
                    cout << "I'll miss you, " << name << ".\n";
                    cout << "I hope to see you again, " << name << ".\n";
                    return(0);
                }
                if (totalTurns == (rand() % 10) + 4) //game stops after random amount of turns
                {
                    gameLive = false;
                    cout << "You've survive " << totalTurns << " turns and reach the end of your journey.\n";
                    cout << "Congrats " << name << ".\n";
                    return(0);
                }
                //stop game after random amount of turns

                else
                {
                    cout << "Keep playing " << name << "?\n";
                    cout << "yes or no?\n";
                    cin >> input;
   
                    if (input == "no")
                    {
                        cout << "Thanks for going on this adventure " << name << "!\n";
                        return(0);      // this breaks us out of the loop early!
                    }
          

                }


            }

    
        if (input == "no") //thanks them for playing
        {
            gameLive = false;
            cout << "Thanks for going on this adventure " << name << "!\n";
            cout << "Hope to see you on your Next Adventure " << name << "!\n";
            return(0);
        }


    }
}
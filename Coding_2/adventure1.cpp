#include <iostream>
#include <string>
using namespace std;


int main()
{
    cout << "Hello Player! Ready for adventure?\n";

    //welcome the player
        //set up the game
        //int health = 10, attack, block, turns = 0
       // seed the random number generator
        //start the loop
        //add 1 to turns
        //start the encounter
       // randomly generate numbers for attack(range = 0 - 4) and block(range = 0 - 4)
        //if block is greater or equal to attack, successful block
          //  otherwise, subtract attack value from health.
           // ask the player if they would like to keep adventuring. if they don't, break out of the loop.
           // keep looping while health is greater than zero and fewer than 4 turns have happened

            //if health is greater than 0, congratulate player
            //    otherwise, tell the player they're dead.

    while (true) 
    {
        cout << "Keep playing?\n";
        string input;
        cin >> input;

        if (input == "yes") {
            cout << "Here we go again!\n";
        }
        else {
            cout << "Thanks for playing!\n";
            break;      // this breaks us out of the loop early!
        }
    }
}
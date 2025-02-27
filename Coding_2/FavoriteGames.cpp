#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
    string favGames[10];
    string input;
    int currentFavGame = 0;
   

    cout << "Welcome to the FavGame Program!\n";
    cout << "Here You Tell Me, Your Top Ten Favorite Games\n";
    cout << "Then I create a list of it!\n";

    do //starts the loop of being able to add, remove, show or edit your list
    {
        // these string input is duplicating to double when the do-whiile loop repeats
        cout << "\nSo player would you like to:\n";
        cout << "\n'Add','Edit','Remove','Show' to your faviort game list?\n";
        cout << "\nOr would you like to 'Quit' the program?\n";

        getline(cin, input);

        if (input == "Quit")
        {
            cout << "Thanks for playing!\n";
            break;
        }
        
        

        if (input == "Add") 
        {
            cout << "What Game would you like to Add to You're list?\n";

            getline(cin, input);
            favGames[currentFavGame++] = input;


        }
       
        else if (input == "Edit") //edit the game
        {
            cout << "What Game would you like to Edit?\n";
           

            for (int i = 0; i < currentFavGame; i++)
            {
                getline(cin, input);

                if (favGames[i] == input) //now this aint working? doing samething as add?
                {
                    cout << "I've found the game, what would you like to change it too?\n";
                    getline(cin, input);

                    favGames[i] = input;

                }

                if (i + 1 == currentFavGame)
                {
                    cout << "I couldn't find the game you are asking for\n";
                }

            }

        }
        else if (input == "Remove")  // remove it; no idea if this works?
        {
            // what do you want to remove?
            cout << "What game would you like to Remove?\n";
            getline(cin, input);

            // // get input
            // looking through the loop
            for (int i = 0; i < currentFavGame; i++) 
            {
 
                if (favGames[i] == input)
                { 
                    cout << "I've found the game, removing it now.\n";
                    favGames[i] = "";
                    cout << "Game has been removed.\n";
                }
            }
        }
        else if (input == "Show")
        {
            cout << "Here is the list of you're favorite games: \n";

            for (int i = 0; i < currentFavGame; i++) 
            {
                
                if (favGames[i] == "") 
                {
                    continue;
                }
                else 
                {
                    cout << favGames[i] << ".\n";
                }
            }
        }
        
      

    } while(currentFavGame <= 10);
    
}

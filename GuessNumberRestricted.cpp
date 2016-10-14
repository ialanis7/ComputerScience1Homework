/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: 10/07/2016
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich
//
// Generate a random number and ask the user to guess the number.
// Only allow the user to guess 5 times.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>


using namespace std;

int main()
{
    int number; // The correct number
    int guess;  // The user's guess
    bool correct = false; // If the user has correctly guessed the number
    int numGuesses; // The number of times the user has guessed

    // Seed the random generator.
    srand(static_cast<int> (time(NULL)));
	
    // Generate a random number between 1 and 100.
    number = (rand() % 100) + 1;

    
    //////////////////////////////////////////////
    // Start modifying program here

    // This is the loop from the original program, where the user is allowed
    // an unlimited number of guesses.
    // Change this while loop to only allow 5 guesses.
	numGuesses = 0; //initializes loop counter to 0.
	while (!correct)
	{
		if (numGuesses >= 5){        //if the number of guesses exceeds 5 tries
			cout << "Sorry, you lost. The number is: " << number << endl;  //it will display this
			correct = true;  //and also jump out of this loop.
		}
		else{ //if the number of guesses hasn't exceeded 5 tries, it'll carry this out
			cout << "Guess the number the computer randomly picked between 1 - 100: ";
			cin >> guess;

			// Check if the user has guessed the correct number.
			// If not, tell him if his guess is too low or too high
			//cout << number << endl;(Just to check when it is right.
			if (number > guess)                                           //
			{                                                             //
				cout << "sorry, your guess is too low\n" << endl;           //    
			}                                                             //
			else if (number < guess)                                      //Basic 
			{                                                             //if  statements.
				cout << "sorry, your guess is too high\n" << endl;          //
			}                                                             //
			else                                                          //
			{                                                             //
				cout << "you guessed right, you win!\n" << endl;

				// Update the looping condition so the program will exit the loop
				correct = true;
			}
			numGuesses++;    //update loop counter
		}
	}
		
	
    // End of program modifications
    //////////////////////////////////////////////

    system("pause");
	
    return 0;
}

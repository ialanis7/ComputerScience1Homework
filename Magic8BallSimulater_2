///////////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: September 23, 2016
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich 
// // Program Description: Magic 8 ball: generates random answer to question
//
////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

int main() {

	//Declares a variables named answer that holds text
	string answer;
	//	Declares a variable named randomNumber that holds whole numbers,  lowRange that holds whole numbers and initializes it to 0, highRange that holds whole numbers and initializes it to 4
	int randomNumber = 0, lowRange = 0, highRange = 4;
	//	Seeds the random number generator using expression 1)
	srand(static_cast<int> (time(NULL)));
	//	Prompts the user to enter a question
	cout << "Ask the Magic 8 Ball a question: ";
	//	Ignores the user input
	cin.ignore('\n');
	//	Generates a random number using expression 2) and assigns it to randomNumber
	randomNumber = (rand() % (highRange - lowRange + 1)) + lowRange;
	//	Makes the different cases for possible random numbers using the following decision structure
	switch (randomNumber)
	{
	case 0:
		//randomNumber == 0;
		answer = "Yes\n";
		break;
	case 1:
		//randomNumber == 1;
		answer = "Maybe\n";
		break;
	case 2: 
		//randomNumber == 2;
		answer = "No\n";
		break;
	case 3:
		//randomNumber == 3;
		answer = "Ask again later\n";
		break;
	case 4:
		//randomNumber == 4;
		answer = "I don't know\n";
		break;
	}
		cout << "Answer: " << answer;
		
	
	
	return 0;
}

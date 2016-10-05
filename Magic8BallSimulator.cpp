/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: September 23, 2016
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich 
// // Program Description: Magic 8 ball: generates random answer to question
//
/////////////////////////////////////////////////////////////////////
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
	//	if (random number = 0)
	//		answer is assigned "Yes"
	if (randomNumber == 0) {
		answer = "Yes";
	}
	//		otherwise if (random number = 1)
	//		answer is assigned "Maybe"
	else if (randomNumber == 1) {
		answer = "Maybe";
	}
	//		otherwise if (random number = 2)
	//		answer is assigned "No"
	else if (randomNumber == 2) {
		answer = "No";
	}
	//		otherwise if (random number = 3)
	//		answer is assigned "Ask again later"
	else if (randomNumber == 3) {
		answer = "Ask again later";
	}
	//		otherwise answer is assigned "I don't know"
	else {
		answer = "I don't know";
	}
	//		Displays the message shown below "Answer: “, answer
	cout << "Answer: " << answer << endl;
	return 0;
}

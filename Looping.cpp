/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: 10/07/2016
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich
//
// Use looping to ensure that the user inputs a proper value.
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
	char ans; // The user's answer to the question
	int age; // The user's age
	bool correct; // The boolean flag
	////////////////////////////////
	// Beginning of your code


		// Ask the user a yes/no question and make sure the response is
		// either y or n
		// Ask the user a yes/no question and make sure the response is
		// either y or n
	correct = false;

	while (!correct) {
		cout << "Do you like Pecan Pie? (y/n): ";
		cin >> ans;
		if (ans == 'y') {
			correct = true;
		}
		else if (ans == 'n') {
			cout << "How could you not like Pecan Pie?:(\n";
			correct = true;
		}
		else {
			cout << "incorrect value\n";
			cin.clear();
			cin.ignore(2000, '\n');
		}
	}
	// Get the user's age
	// Make sure the user enters her age as a number
	//
	//cout << "Enter your age as an integer: ";
	//cin >> age;
	while (correct) {
		cout << "Enter your age as an integer: ";
		cin >> age;
		if (!cin) {
			cout << "You must enter an integer\n";
			cin.clear();
			cin.ignore(2000, '\n');
		}
		else {
			correct = false;
		}
	}
	// End of your code
	////////////////////////////////

	cout << "Thanks for your input!" << endl;
  
	system("pause");

	return 0;
}

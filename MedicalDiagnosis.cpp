/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: 9/30/16
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich
// Program Description: Medical Diagnosis
//
/////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
	//Declares a variables named fever, stuffy, rash, and earHurts that hold single characters
	char fever, stuffy, rash, earHurts;
	//Displays "Disclaimer -- This should not be used for a real medical diagnosis"
	cout << "Disclaimer -- This should not be used for a real medical diagnosis\n\n";

    //Asks the user if he has a fever
	cout << "Do you have a fever? (y/n): ";
	//Gets the value from the keyboard and stores it in the corresponding variable
	cin >> fever;
	//if fever = 'y'
	if (fever == 'y') {
		//Asks the user if he has a rash
		cout << "Do you have a rash? (y/n): ";
		//Gets the value from the keyboard and stores it in the corresponding variable
		cin >> rash;
		//if (rash = 'n')
		if (rash == 'n') {
			//Asks the user if your ear hurts
			cout << "Does your ear hurt? (y/n): ";
			//Gets the value from the keyboard and stores it in the corresponding variable
			cin >> earHurts;
			// if (earHurts = 'y')
			if (earHurts == 'y')
				//Display "Diagnosis: You have an Ear Infection."
				cout << "Diagnosis: You have an Ear Infection.\n";
			//otherwise if (earHurts = 'n')
			else if (earHurts == 'n')
				//Displays "Diagnosis: You have the Flu."
				cout << "Diagnosis: You have the Flu.\n";
			//otherwise
			else
				//Displays "Unable to make a diagnosis"
				cout << "Unable to make a diagnosis\n";
		}
		//otherwise if (rash = 'y')
		else if (rash == 'y')
			//Displays ""Diagnosis: You have Measles."
			cout << "Diagnosis: You have Measles.\n ";
		//otherwise
		else
			//Displays "Unable to make a diagnosis"
			cout <<"Unable to make a diagnosis\n";
	}
	//otherwise if (fever = 'n')
	else if (fever == 'n')
	{
		//Asks the user if he has a stuffy nose
		cout << "Do you have a stuffy nose? (y/n): ";
		//Gets the value from the keyboard and stores it in the corresponding variable
		cin >> stuffy;
		//if (stuffy = 'y')
		if (stuffy == 'y')
			//Displays "Diagnosis: You have a cold."
			cout << "Diagnosis: You have a cold.\n";
		//otherwise if (stuffy = 'n')
		else if (stuffy == 'n')
			//Displays "Diagnosis: You have hypochondria."
			cout << "Diagnosis: You have hypochondria.\n";
		//otherwise
		else
			//Displays "Unable to make a diagnosis"
			cout << "Unable to make a diagnosis.\n";
	}
	//otherwise
	else
		//Displays "Unable to make a diagnosis"
		cout << "Unable to make a diagnosis.\n";
		return 0;
}

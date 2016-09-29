/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr.;
// Date: September 9, 2016;
// Class: CSCI 1370.04;
// Semester: Fall 2016;
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich
//
// Program Name: Length to feet converter
// Program Description: Converts feet 
//  to yards, and shows the result on the screen.   
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
//Declare variables named length_feet and length_yards that hold double precision real numbers.
	double length_feet = 0. ,length_yards = 0.;
	//Prompt the user to enter the length in feet.
	cout << "Please enter your length in feet. ";
	//Get the length from the keyboard and store it in to length_feet.
	cin >> length_feet;
//Calculate the length in yards using the formula and assign the result to length_yards.
	length_yards = 1. / 3. * length_feet;
//Display the length in yards
	cout <<"Hi" << endl << endl << length_feet << " feet are equal to "
	<< length_yards << " yards";
	return 0;
}
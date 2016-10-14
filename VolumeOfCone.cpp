/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: September 20, 2016
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich
// // Program Description: Calculate volume of cone given hight and radius.
//
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Declare a variable named name that holds text. 
	string name;
	//Declare variables named height and radius that hold whole numbers.
	int height, radius;
	//Declare a variable named volume that holds double precision real numbers.
	double volume = 0.;
	//Prompts the user "May I get your first name please?: ".
	cout << "May I get your first name please?: ";
	//Reads the value from the keyboard and stores it in name.
	cin >> name;
	//Prompts the user "Thanks ", name, " , now enter height and radius of the cone please: ".
	cout << "\nThanks " << name << ", now enter height and radius of the cone please: ";
	//Reads the values from the keyboard and stores them in height and radius respectively.
	cin >> height >> radius;
	//Calculates the volume using the formula
	volume = (1. / 3.) * 3.1415 * radius * radius * height;
	//Formats the output to display the volume in fixed format with two decimal digits.
	cout << fixed << setprecision(2);
	//Prints outcome
	cout << "\nOk " << name << " the cone's volume is " << volume << endl << endl;
	return 0;
}

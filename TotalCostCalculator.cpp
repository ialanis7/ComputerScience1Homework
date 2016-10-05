/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: September 16, 2016
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich
// // Program Description: Calculates the total cost of a product
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Declare variables named price, tax, and total that hold single precision real numbers.
	double price = 0, tax = 0, total = 0;
	//Prompt the user to Enter the price and tax.
	cout << "Please enter the price and tax(%)" << endl;
	//Read the values from the keyboard and store them in price and tax respectively.
	cin >> price >> tax;
	//Calculate the total cost using the expression and assign the resulting value to total.
	total = price * (1 + (tax / 100));
	//Format the output to display the values in fixed format with two decimal digits
	cout << "\nFor a price $" << price << " and " << tax << "% tax, the total cost of the product is $" << total << endl << endl;
	return 0;
}

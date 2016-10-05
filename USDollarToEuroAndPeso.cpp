//******************************************************************************
// Team #01				CSCI 1370.04			Fall 2016			Homework #1
// Isaac Ruiz
// Ignacio Alanis
// This program calculates the value of a user-specified amount of dollars into 
// Mexican Pesos and Euros according to a predefined constant exchange rate.
//
//******************************************************************************

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//Declare double precision variables for U.S. Dollars, Mexican Pesos, and Euros
	double valueDollar, valuePeso, valueEuro, roundedPeso, roundedEuro;

	//Declare integral type variables for the whole and cent values for Pesos and Euros
	int wholePeso, centsPeso, wholeEuro, centsEuro;

	//Declare constants for the conversion to Mexican Pesos and  Euros
	const double DOL2MEX = 19.7875;
	const double DOL2EURO = 0.8908;

	//Prompts the user to input the amount of dollars to be converted
	cout << "U.S. Dollar to Mexican Peso and Euro converter\n\nPlease enter an amount of U.S.Dollars: ";
	
	//Store the input in the variable for U.S.Dollars
	cin >> valueDollar;

	//Multiply the user input dollars by the conversion factor for pesos and euros and assign to their respective variables
	valuePeso = valueDollar * DOL2MEX;
	valueEuro = valueDollar * DOL2EURO;
	
	//Use the formula static_cast<double>(static_cast<int>(Mexican Pesos*100+0.5)/100)
	//to round the dollar conversion to the nearest cent and assign to valuePeso
	roundedPeso = static_cast<double>(static_cast<int>((valuePeso * 100.) + 0.5)) / 100.;
		
	//Repeat the rounding algorithm for Euros and assign to valueEuro
	roundedEuro = static_cast<double>(static_cast<int>((valueEuro * 100.) + 0.5) / 100.);
	
	cout << endl << valuePeso << " Pesos conversion" << endl;//DEBUG CODE DELETE!!!!!!!
	cout << valueEuro << " Euros conversion" << endl;        //DEBUG CODE DELETE!!!!!!!
	cout << roundedPeso << " Pesos rounded" << endl;         //DEBUG CODE DELETE!!!!!!!
	cout << roundedEuro << " Euros rounded" << endl;         //DEBUG CODE DELETE!!!!!!!

	//Separates the whole value of the currency from the fractional part
	wholePeso = static_cast<int>(roundedPeso);
	wholeEuro = static_cast<int>(roundedEuro);

	//Finds the cent value by converting the variables to cents and taking the modulous
	//of the complete value and the whole value
	centsPeso = static_cast<int>(100 * roundedPeso) % (100 * wholePeso);
	centsEuro = static_cast<int>(100 * roundedEuro) % (100 * wholeEuro);
	
	//Outputs the formatted results to the screen
	cout << endl << fixed << setprecision(2) << valueDollar << " U.S. Dollars are equal to:";
	cout << endl << endl << setw(8) << wholePeso << setw(20) << " Mexican Pesos with " << centsPeso << " cents";
	cout << endl << endl << setw(8) << wholeEuro << setw(20) << " Euros with " << centsEuro << " cents\n\n";

	return 0;
}

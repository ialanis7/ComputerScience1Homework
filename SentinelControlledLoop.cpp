/////////////////////////////////////////////////////////////////////
//
// Name: Ignacio Alanis Jr
// Date: 10/07/2016
// Class: CSCI 1370.04
// Semester: Fall 2016
// CSCI/CMPE 1370 Instructor: Gustavo Dietrich
//
// Use a sentinal controlled loop to find the average of grades
// entered by the user. The sentinal value is -1.
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int grade; // The grade entered by the user
    int sum; // Sum of the grades
    int count; // Number of grades entered
    double avg; // Average of the grades
    ////////////////////////////////
    // Start of your code
	grade = 0;  //
	count = 0;  //Initializing
	sum = 0;    //
    
    // Loop until the user enters -1
    // Each time through the loop, add the number input by the user
    // to the sum. Make sure not to include the sentinal value in the
    // sum or count!
	while (grade != -1){
		if (grade != -1){
			cout << "Enter a grade, or -1 to stop: ";
			cin >> grade;
			if (grade != -1){
				sum = grade + sum;
				count++;     //increments count as grade entered.
			}
			else{}
		}
		else {
			grade = -1;
		}
	}
	avg = (static_cast<double>(sum)) / (static_cast<double>(count));
	cout << "The average of the grades entered is: " << avg << endl;
    // Find the average of the grades entered by the user
    // and print the result   
    // End of your code
    ////////////////////////////////

    system("pause");

    return 0;
}

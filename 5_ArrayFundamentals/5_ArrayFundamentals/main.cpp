#include <iostream>
using namespace std;

int main () 
{
	cout << "A PROGRAM THAT CALCULATES THE AVERAGE OF MONTHLY PHONE BILLS FOR A YEAR" << endl;

	float phoneBills [12]; //Declaring a phoneBill Array that will hold the bill amount for each of the 12 months;
	float sum = 0.0, average;

	cout << "\nEnter the bill amount for each month" << endl;

	for (int i=0; i<12; i++) 		
	{ // Looping and storing the values for each of the 12 months; Arrays are 0-Indexed

		cout << "\nMONTH " << (i+1) << ": ";
		cin >> phoneBills [i]; //Storing entered value to array index i
		sum += phoneBills [i]; //Adding this entered value to the sum so far
	}

	average = sum/(float)12.0; //Calculating average

	cout << "\nThe average of the bills for the year is: " << average <<  endl;

	system("pause");
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

//These are the function prototypes; All functions are called by value

void checkN();
double getEntriesSum(int);
double calcAverage(double, int);
void printAverage(double, int);

/* The prototype statement is a declaration statement that provides the compiler with
information about input and return data types.
*/

string statement = ""; // adds entries to a string which  will be added to a print statement later
int n; //Tracks number of entries

int main ()
{
	cout << "A SIMPLE PROGRAM TO CALCULATE AVERAGE OF n NUMBERS USING FUNCTIONS\n" << endl;
		
	char ans = 'y';

	while (ans == 'y' || ans == 'Y') 
	{
		cout << "\nHow many numbers do you wish to calculate average for? \n" << 
		"Answer: ";
		statement = ""; //Resets to an empty string in case a previous calculation was made;

		cin >> n;

		//Function 1: makes sure that n >= 2
		checkN();
			 
		//Function 2: Get the number entries and sum up
		double sum = getEntriesSum (n); // Returns sum of entries

		//Function 3: Calculate Average
		double average = calcAverage (sum, n);

		//Function 4: Print Result
		printAverage (average, n);
		
		cout << "\nNew Calculation? y for YES | any other key means NO" << endl;
		cin >> ans;
	}
	
	system("pause");
	return 0;
}

void checkN ()
{
	while (n < 2) 
	{
		cout << "\nAnswer must be at least 2; \n"
			<< "New Answer: ";
		cin >> n;
	}
}

double getEntriesSum (int n) 
{

	double sum = 0;
	cout << "\nEnter the " << n << " Numbers" << endl;

	for (int i=0; i<n; i++)
	{
		cout << "\nNumber " << (i+1) << ": " << endl;
		
		int newEntry;

		cin >> newEntry;
		string newEntryString = to_string(newEntry); // Converts the entry value to a string
		
		sum += newEntry;
		statement += " |"+newEntryString;
	}
	
	return sum;
}

double calcAverage(double sum, int n) 
{
	return sum/n;
}

void printAverage (double average, int n) 
{
	cout << "The Average of the " << n << " Numbers:"
		<< statement << " is: " << average << endl;
}
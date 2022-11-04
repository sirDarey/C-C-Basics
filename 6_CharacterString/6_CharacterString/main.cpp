#include <iostream>
using namespace std;

int main ()
{
	//char arrays are null terminated in C++;
	//This means you must assign an array size that will accomodate this null character
	//The null value is - "\0"; It tells the C++ compiler the end of the string

	char str1 [11] = {"I Love C++"}; 
	// Though "I Love C++" has ten chars, 
	//we must assign at least a size of 11 so as to accomodate the null character
	//any value less than 11 would result in errors by the compiler

	cout << "\nPrinting String 1: \n" << str1 << endl;

	//Another way of using char arrays to declare strings
	char str2[5]; 
	
	// We assign each char of the string to desired index
	//For instance, if we want to declare the string "str2", we have:
	str2[0] = 's';
	str2[1] = 't';
	str2[2] = 'r';
	str2[3] = '2';
	str2[4] = '\0'; //We must explicitly add the null character in this case, 
	//unlike in str1 above where C++ added it automatically

	cout << "\nPrinting String 2: \n" <<str2 << endl;

	//If we fail to include the null character explicitly, there would be some errors in the output
	char str3[10]; //The array can be of any size as long as it accomodates the input + the null character

	str3[0] = 'e';
	str3[1] = 'r';
	str3[2] = 'r';
	str3[3] = 'o';
	str3[4] = 'r';
	// We forgot the null characer

	cout << "\nPrinting String 3 with expected errors: \n" <<str3 << endl;  // Now, you see how important the null character is

	str3[5] = '\0'; //Adding it now, fixes the error
	cout << "\nPrinting String 3 with fixed errors: \n" << str3 << endl;
	
	system("pause");
	return 0; 
}
#include <iostream>
using namespace std;

int main ()
{
	cout << "\nDifference Between CIN and CIN.GETLINE Methods To get User Inputs" << endl;
	char text1 [15], text2 [15];

	cout << "\nUsing 'cin.getline >> text1'; Enter => 'I Love C++'" << endl;
	cin.getline (text1, 14);   // This will read the input stream until it sees a new line
	cout << "\nUsing CIN.GETLINE, text1 prints: " << text1 << endl;

	//However, using "cin" alone, we'll see the difference
	cout << "\nUsing 'cin >> text2'; Enter => 'I Love C++'" << endl;
	cin >> text2;
	cout << "\nUsing CIN, text2 prints: " << text2 << endl;
	//Thus, cin will stop reading input once it sees a space while leaving out the remaining characters in the input stream
	char t2 [15], t3 [15];

	cin >> t2 >> t3; //Reading the two words left in text2 and storing them in t2 and t3 respectively

	cout << "\nThen, we have: " << t2 << endl;  //Prints "love" from the characters left in text2
	cout << "\nAnd lastly, we have: " << t3 << endl;  //Prints "C++" from the characters left in text2

	//We can also use a DELIMETER when reading input
	char text3[15];
	cout << "\nUsing 'cin.get(string, maxSize, Delimeter)'; Enter => 'I Love C++'" << endl;
	cin.get(text3, 13, 'C'); //This reads input till it sees the DELIMETER,'C';
	cout << text3 << endl; 
	
	// However, the delimeter 'C' is still left in the input stream
	//Using "cin.getLine(string, maxSize, Delimeter)" removes the Delimeter on seeing it
	//That's the difference between "cin.get(string, maxSize, Delimeter)" and cin.getLine(string, maxSize, Delimeter)


	//To avoid reading leftover characters from the input stream, we make use of "cin.ignore"
	cin.ignore(2, '\n'); //This will flush the next 2 leftover characters or till it sees a new line

	char text4 [8];
	cin.getline(text4, 7);
	cout << text4 << endl; //Thus, this will still print the last "+" since from the "C++" left; 
	//The igone flushed "C+" - 2 characters as indicated; still leaving the last + in the input stream

	system("pause");
	return 0;
}
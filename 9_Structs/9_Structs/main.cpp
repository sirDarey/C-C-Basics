#include <iostream>
#include "Student.h";
#include "Person.h";

using namespace std;

int main () 
{
	Student myStudent; //Creating an instance of Student structure

	strcpy (myStudent.name, "Sir Darey");
	strcpy (myStudent.address, "Random Address, Nice One");
	strcpy (myStudent.idNum, "170408006");
	myStudent.deptCode = 7;
	myStudent.major = 6;

	cout << "\nNAME: " << myStudent.name 
		 << "\nADDRESS: " << myStudent.address
		 << "\nID Number: " << myStudent.idNum
		 << "\nDEPARTMENT CODE: " << myStudent.deptCode
		 << "\nMAJOR: " << myStudent.major <<  endl;

	// We can also create an array of structures
	Student students [5]; // An array of 5 students

	//Each student can be accessed using the array's index
	//For instance, we can fill the 1st student's data as follows:

	strcpy (students[0].name, "Sir Darey_2");
	strcpy (students[0].address, "Random Address, Nice One");
	strcpy (students[0].idNum, "170408006_2");
	students[0].deptCode = 7;
	students[0].major = 6;
	
	// Structs can  also be copied to one another just like every other data type
	//For instance, we can copy the data of the 1st student above to the 2nd student:

	students[1] = students[0]; //Each data will be copied from the 1st to the coressponding data of the 2nd

	//Now, Printing the data of the second student
	cout << "\nPrinting Data of the 2nd student" << endl;
	cout << "\nNAME: " << students[1].name 
		 << "\nADDRESS: " << students[1].address
		 << "\nID Number: " << students[1].idNum
		 << "\nDEPARTMENT CODE: " << students[1].deptCode
		 << "\nMAJOR: " << students[1].major <<  endl;

	Person runner; //Creating an instance of Person structure
	//We can  fill up a runner's information (Which is of a Person Type) as follows

	strcpy (runner.name, "Jack Mill");
	runner.age = 25;
	runner.category = 2;
	runner.race = 1;
	runner.sex = 'm';
	runner.howfast.hour = 0; //The "." operator helps us to access structs within structs
	runner.howfast.min = 12;
	runner.howfast.sec = 25;

	//We can do whatever we want to with these info

	system("pause");
	return 0;
}
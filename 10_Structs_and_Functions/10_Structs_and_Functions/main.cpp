#include <iostream>
#include "Point.h"
#include "Student.h"

using namespace std;

//Function Prototypes

Point calcMidPoint(Point, Point);
void getMyStudentInfo (Student *myStudent_ptr);
void printMyStudentInfo (Student *myStudent_ptr);

int main() 
{
	/********  
				PROGRAM  1 
								*********/

	//Just like  every other data type, a function can  also return a structure type
	//Below is a simple program to calculate the mid-point of 2 points

	Point P, Q, MP; //MP - MidPoint
	P.x = 5.0; P.y = 12.5;
	Q.x = -3.8; Q.y = 4.2;

	//Implementing Call By Value with Structs
	MP = calcMidPoint(P, Q); //Assigning the Point Type returned to the MidPoint

	cout << "The Midpoint of P("<<P.x<<", "<<P.y<<") and Q("<<Q.x<<", "<<Q.y<< ") is \n-> M.P ("
		<< MP.x << ", " << MP.y << ")" << endl;


	/********  
				PROGRAM  2 
								*********/

	//This program Implements Call By Reference with sructs
	//It takes students data via inputs from the keyboard

	Student myStudent;
	getMyStudentInfo (&myStudent); // This collects the student's data via the address of the student
								  //That's call by reference
	printMyStudentInfo(&myStudent);

	system ("pause");
	return 0;
}

Point calcMidPoint(Point P, Point Q) 
{
	Point MP;

	MP.x = (P.x + Q.x)/2.0;
	MP.y = (P.y + Q.y)/2.0;

	return MP;  // Returning a Point Type
}

void getMyStudentInfo (Student *myStudent_ptr) //NO local copy of myStudent
{
	cout << "\nEnter the following data for a student" << endl;

	// The operator "->" is used to access the variables from the struct that the pointer is pointing to
	// This is wrong: "*myStudent_ptr.name" because the dot operator has a higher precedence than the indirection operator(*)
	// The compiler would wrongly interpret it this way: "*(myStudent_ptr.name) instead of "(*myStudent_ptr).name"
	// It would perform the dot operation first which  is wrong

	cout << "\nNAME: "; 
	cin.getline(myStudent_ptr -> name, 50); //This is also correct: "(*myStudent_ptr).name"

	cout << "\AGE {An Integer}: "; 
	cin >> myStudent_ptr -> age;
	cin.ignore(10, '\n');

	cout << "\nGROUP {A Character}: "; 
	cin >> myStudent_ptr -> group;
} 

void printMyStudentInfo (Student *myStudent_ptr)  //NO local copy of myStudent
{
	cout << "\nThe Filled-In Details are: \n"
		 << "\n NAME : " << myStudent_ptr -> name
		 << "\n AGE : " << myStudent_ptr -> age
		 << "\n GROUP : " << myStudent_ptr -> group << endl;
}
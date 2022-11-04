#include "mustHeader.h"

int *a_ptr, *b_ptr;

int addNumbers (int a, int b) 
{
	a_ptr = &a;		// Assigning address of a to a_ptr
	b_ptr = &b;		// Assigning address of b to b_ptr

	cout << "Address  of a: " << a_ptr << endl;
	cout << "Address  of b: "  << b_ptr << endl;
	cout << "a: " << a  << " b: " << b << 
			"\n a + b = ";
	
	// The pointers can  be used to ASSIGN values to and GET values from the variables they are pointing to

	return (*a_ptr + *b_ptr);  // This is same as return (a + b); 
	
	//I'm using the pointers to get values here and returning the sum
}
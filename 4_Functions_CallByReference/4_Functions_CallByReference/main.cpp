#include <iostream>
using namespace std;

//Function Prototypes
void getParameters (float*, float*); // Implementing call by reference; the arguments are POINTER variables
double calcVolume (float, float);
void printVolume (float, float, double);

const double pi = 3.143;

int main ()
{
	float radius, height;
	double volume;
	cout << "A PROGRAM THAT CALCULATES THE VOLUME OF A CYLINDER" << endl;
	
	getParameters(&radius, &height); //Passing the addresses of radius and height

	//Now, radius and height both have values assigned to them via the "getParameters" function call above
	//Thus, we can use them to execute other operations

	volume = calcVolume(radius, height);
	printVolume (radius, height, volume);

	system("pause");
	return 0;
}

void getParameters (float *r_ptr, float *h_ptr) //Accepts pointer parameters which receive their respective addresses
{
	float radius, height;

	cout << "\n\nEnter the parameters:"
		 << "\nRADIUS - ";
	cin >> radius;
	cout << "HEIGHT - ";
	cin >> height;

	*r_ptr = radius;
	*h_ptr = height;
}

double calcVolume (float radius, float height) 
{
	return (pi * radius * radius * height);
}

void printVolume (float radius, float height, double volume)
{
	cout << "\nThe volume of the cylinder of radius " << radius <<  " and height "
		 << height <<  " is: " << volume << endl;
}
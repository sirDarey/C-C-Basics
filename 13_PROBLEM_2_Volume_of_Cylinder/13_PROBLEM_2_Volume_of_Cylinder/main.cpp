#include <iostream>
#include <iomanip>  // this is for the precison to 3 decimal places

using namespace std;

#define pi 3.14159265 //defining PI

//Function Prototypes
void getParameters (float *, float *);
double calcVolume(float *, float *);
void printResult(double *, float *, float *);


int main () 
{
	cout << "\n Welcome, this is an app that calculates the volume of a cylinder from a given radius and height" <<  endl;
	char recur = 'y';
	
	do  //The will make program run at least once
	{
		float radius, height;
		double volume; 

		getParameters (&radius, &height);  //gets input parameters from user
		volume = calcVolume(&radius, &height);    //returns volume and assign to the "volume" variable
		printResult (&volume, &radius, &height);    //Prints out result

		cout << "\n Do you wish to calculate another? " 
			 << "\n Press ('y' or 'Y') for YES; otherwise, any other key means NO" << endl;
		cin >> recur;  //Takes in response for another calculation
		cin.ignore(10, '\n');    //Flushes the input stream

	} while (recur == 'y' || recur == 'Y');   //Program recurs, if condition is true (Do-While Loop)

	cout << "\n Alright, GOOD BYE then :) \n" << endl;

	system ("pause");
	return 0;
}

void getParameters (float *radius_ptr, float *height_ptr) //Receives pointers as stated from problem
{
	cout << "\n Please input the parameters \n" 
		 << "\n Radius: "; 
			cin >> *radius_ptr;   //Assigns value via pointers as stated
			cin.ignore(10, '\n');

	cout << "\n Height: "; 
			cin >> *height_ptr;    
			cin.ignore(10, '\n');
}

double calcVolume(float *radius_ptr, float *height_ptr) 
{
	return pi * pow((*radius_ptr), 2) * (*height_ptr);   //return the calculated volume
}

void printResult(double *volume_ptr, float *radius_ptr, float *height_ptr) 
{
	cout << setiosflags(ios::fixed) << setprecision(3);    //sets precision to 3 Decimal Places

	cout << "\n Your Input Parameters are: "  
		 << "\n RADIUS: " << *radius_ptr 
		 << "\t HEIGHT: " << *height_ptr
		 << "\n\n VOLUME => " << *volume_ptr << "\t (to 3 Decimal Places)"<< endl;
}
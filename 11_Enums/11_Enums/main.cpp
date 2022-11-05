#include <iostream>
#include "Shape.h"

using namespace std;

Shape getYourShape();

int main ()
{

	//Enums help us to create variables that contain a set of integer-based constants
	
	Shape myShape; //  A shape struct

	myShape.shapeType = trapezium;  //Assigning a shapeType from the pre-defined set of shapes in the enum - shapes_2D
	// "Trapezium" is among the shape types I defined

	myShape.shapeColor = red;		//Assigning a shapeColor from the pre-defined set of colors in the enum- colors
	// "Red" is among the colors I defined

	cout <<  myShape.shapeColor << " " <<  myShape.shapeType << endl; 
	//Integer values are displayed since this is what happens in the background- enums are integer-based
	//The enums values are 0-Indexed like arrays


	//Just like any other data type, a function can return an enum data type
	Shape yourShape = getYourShape(); 
	cout <<  yourShape.shapeColor << " " <<  yourShape.shapeType << endl; 

	system("pause");
	return 0;
}

Shape getYourShape() 
{
	Shape yourShape;

	yourShape.shapeColor = blue;
	yourShape.shapeType = circle;

	return yourShape;
}
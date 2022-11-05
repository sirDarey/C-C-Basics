#include "Header.h"

//Function Prototypes
int banner (); 
void input_parameter (int, float *, float *, float *);
double analysis(int, float, float, float);
void output (float, float, float, double);

int choiceNo; // stores user's choice of eqtn to be solved

int main () 
{
	char recur = 'y';  //stores user's response to re-run program

	while (recur == 'y' || recur == 'Y')  //re-runs program if true
	{
		int eqtnChoice = banner();	
		choiceNo = eqtnChoice;  //Assgining user's equation choice to the global "choiceNo"
	
		float var1, var2, var3;   //parameters to solve eqtns; they are 3 in each eqtn
		input_parameter (eqtnChoice, &var1, &var2, &var3);    //Takes input parameters from user
	

		double result;
		result = analysis(eqtnChoice, var1, var2, var3);   //solves the chosen eqtn and returns result

		output (var1, var2, var3, result);  //prints output

		cout << "\n I'd love to see you make another calculation."
			 << "  Enter 'y' or 'Y' to CONTINUE; otherwise press any other key to EXIT the program \n\n";
		cin >> recur;    // stores response to start another calculation
		cin.ignore(10, '\n');  //flushes the input stream
	}

	cout << "Alright, GOOD BYE, for now :) \n" << endl;

	system ("pause");
	return 0;
}

int banner () 
{
	int eqtnChoice;

	cout << "\n *******   Welcome to the Equations of Motion Application Programme   *******" 
		 << "\n 1. First Equation: s = u*t + (1/2)*a*t^2" 
		 << "\n 2. Second Equation: v = u + a*t"
		 << "\n 3. Third Equation: v^2 = u^2 + 2*a*s" << endl;
	
	cout << "\n Choose the Equation to Solve => ";
	cin >> eqtnChoice;

	return eqtnChoice;
}

void input_parameter (int eqtnChoice, float *var1, float *var2, float *var3) 
{
	cout << "\n Please, input the parameters to solve the chosen equation " << endl;
	
	cout << "\n u => "; cin >> *var1;   //both eqths 1 & 2 have 'u' &  'a' as parameters
	cout << "\n a => "; cin >> *var2;
	
	if (eqtnChoice == 3) {  //however, eqtn 3 has 's' as a unique parameter but doesn't have 't'
		cout << "\n s => "; cin >> *var3;
		return;     //Thus, if chosen eqtn is 3, just return from here;
	}
	
	cout << "\n t => "; cin >> *var3;	 //otherwise, 't' is the 3rd parameter since eqtns 1 & 2 don't need 's'
}

double analysis(int eqtnChoice, float var1, float var2, float var3)
{
	switch (eqtnChoice)   //based on the user's choice of eqtn
	{
	case 1:
		return (var1*var3) + (0.5*var2*var3*var3);   //calculates eqtn 1
	case 2:
		return var1 + (var2*var3);   //calculates eqtn 2
	case 3:
		return sqrt( (var1*var1) + (2*var2*var3) );    //calculates eqtn 3
	default:
		(int)-1;   //As stated from problem
	}
}

void output (float var1, float var2, float var3, double result)
{
	if (result == -1)   //if true, it means the user's choice was none of eqtns {1, 2 or 3}
	{
		cout << " The Choice of Equation is not a Valid One.\n" << endl;
		return;  //Just return from here if true;
	}

	//otherwise, print these stuffs

	cout << "\n u = " << var1
		 << "\n a = " << var2;
	if (choiceNo == 3)
		cout << "\n s =" << var3;
	else
		cout << "\n t =" << var3;

	if (choiceNo == 1)    // We are calculating for s in eqtn 1
		cout << "\n Result => s = " << result << endl << endl;
	else  // We are calculating for v in eqtns 1 & 2
		cout << "\n Result => v = " << result << endl << endl;
}
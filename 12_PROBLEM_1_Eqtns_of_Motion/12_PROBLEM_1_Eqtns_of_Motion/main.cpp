#include "Header.h"

int banner (); 
void input_parameter (int, float *, float *, float *);
double analysis(int, float, float, float);
void output (float, float, float, double);

int choiceNo;

int main () 
{
	char recur = 'y';

	while (recur == 'y' || recur == 'Y') 
	{
		int eqtnChoice = banner();
		choiceNo = eqtnChoice;
	
		float var1, var2, var3;
		input_parameter (eqtnChoice, &var1, &var2, &var3);
	

		double result;
		result = analysis(eqtnChoice, var1, var2, var3);

		output (var1, var2, var3, result);

		cout << "\n I'd love to see you make another calculation."
			 << "  Enter 'y' or 'Y' to CONTINUE; otherwise press any other key to EXIT the program \n\n";
		cin >> recur;
		cin.ignore(10, '\n');
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
	
	cout << "\n u => "; cin >> *var1;
	cout << "\n a => "; cin >> *var2;
	
	if (eqtnChoice == 3) {
		cout << "\n s => "; cin >> *var3;
		return;
	}
	
	cout << "\n t => "; cin >> *var3;	
}

double analysis(int eqtnChoice, float var1, float var2, float var3)
{
	if (eqtnChoice < 1 || eqtnChoice > 3)
		return (int)-1;

	switch (eqtnChoice)
	{
	case 1:
		return (var1*var3) + (0.5*var2*var3*var3);
	case 2:
		return var1 + (var2*var3);
	default:
		return (var1*var1) + (2*var2*var3);
	}
}

void output (float var1, float var2, float var3, double result)
{
	if (result == -1)
	{
		cout << " The Choice of Equation is not a Valid One.\n" << endl;
		return;
	}

	cout << "\n u = " << var1
		 << "\n a = " << var2;
	if (choiceNo == 3)
		cout << "\n s =" << var3;
	else
		cout << "\n t =" << var3;
	cout << "\n Result => " << result << endl << endl;
}
#include "mustHeader.h";

void forLoop(int i) 
{
	for (int j=0; j<i; j++)
		cout << "For Loop Count: " << (j+1) << endl;

	cout << "End of For Loop \n" << endl;
}

void whileLoop (int i) 
{
	int j = 0;
	while (j < i) {
		cout << "While Loop Count: " << (j+1) << endl;
		j++;
	}
	
	cout << "End of While Loop \n" << endl;
}
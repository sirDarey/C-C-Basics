#include "Header.h"

int main () 
{

	cout << "Hello C++" << endl;

	cout << "\n /**** From if_else_statements ******/" << endl;
	if_else_statements(5, 15);

	cout << "\n /****** From loops ******/" << endl;
	forLoop(5);
	whileLoop(7);

	cout << "\n /****** From switch_statements ******/" << endl;
	check_Odd_Even(1012);

	system("pause");
	return 0;
}

#include "mustHeader.h";

void check_Odd_Even (int x) {
	int R = x%2;

	switch (R)
	{		
	case 1:
		cout << "Number: "<< x << "\t It is ODD" << endl;
		break;
	default:
		cout << "Number: "<< x << "\t It is EVEN" << endl;
		break;
	}
}
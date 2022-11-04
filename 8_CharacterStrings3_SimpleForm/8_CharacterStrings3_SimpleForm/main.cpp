#include <iostream>
using namespace std;

int main ()
{
	cout << "\nA SIMPLE FORM FOR FEW USER DETAILS"  << endl;

	char name[50], address[100], color[30], food[20];
	int age, countryCode;

	cout << "\nNAME: ";
	cin.getline (name, 50);
	
	cout << "\nAGE: ";
	cin >> age;
	cin.ignore(50, '\n');

	cout << "\nADDRESS: ";
	cin.getline (address, 100);

	cout << "\nCOUNTRY CODE: +";
	cin >> countryCode;
	cin.ignore(50, '\n');

	cout << "\nFAVOURITE COLOR: ";
	cin.getline (color, 30);

	cout << "\nFAVOURITE FOOD: ";
	cin.getline (food, 20);

	cout << "\n\nThese are your Details" << endl;
	
	cout << "\nNAME: " << name 
		 << "\nAGE: " << age
		 << "\nADDRESS: " << address
		 << "\nCOUNTRY CODE: +" << countryCode
		 << "\nFAVOURITE COLOR: " << color
		 << "\nFAVOURITE FOOD: " << food << endl;

	system("pause");
	return 0;
}
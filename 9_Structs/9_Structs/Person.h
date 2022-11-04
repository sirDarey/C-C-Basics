#include "Time.h";

struct Person
{
	char name[40];
	char sex;
	int age, category, race;
	
	Time howfast ; //This is a structure within "Person" Structure
	//That's why the "Time.h" header was included at the top of this "Person" Header
};
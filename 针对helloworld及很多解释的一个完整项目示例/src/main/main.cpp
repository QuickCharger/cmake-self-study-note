#include <iostream>

#include "person.h"

using namespace std;

int main()
{
	Person *person = new Person("NAME", "NUMBER", "EMAIL");
	cout << person->ToString() << endl;
	delete person;

	getchar();

	return 0;
}

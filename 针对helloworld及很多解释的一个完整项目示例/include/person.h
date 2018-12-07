#pragma once

#include <string>

using std::string;

class Person
{
public:
	Person();
	Person(string name, string phone, string email);
	~Person();

	string ToString();

private:
	string name;
	string phone;
	string email;
};

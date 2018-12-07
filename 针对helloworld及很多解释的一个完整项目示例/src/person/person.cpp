#include "person.h"

Person::Person()
{
}

Person::Person(string name, string phone, string email)
{
	this->name = name;
	this->phone = phone;
	this->email = email;
}

Person::~Person()
{
}

string Person::ToString()
{
	string ret = "Person:";
	ret = name + " " + phone + " " + email;

	return ret;
}

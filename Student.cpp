#include "Student.h"
#include <string>
using namespace std;

Student::Student()
{
	int mog_ = 19;
	int id_ = 101;
	int cource_ = 4;
	string name_ = "Name";
}

Student::Student(const string &name, int id, int mog, int cource)
{
	id_ = id;
	mog_ = mog;
	name_ = name;
	cource_ = cource;
}

Student::Student(const Student& a)
{
	id_ = a.id_;
	mog_ = a.mog_;
	name_ = a.name_;
	cource_ = a.cource_;	
}

Student& Student::operator=(const Student& a)
{
	if (this == &a)
		return (*this);

	id_ = a.id_;
	mog_ = a.mog_;
	name_ = a.name_;
	cource_ = a.cource_;

	return (*this);
}

string Student::Name()
{
	return name_;
}

int Student::Cource()
{
	return cource_;
}

int Student::Id()
{
	return id_;
}

int Student::Mog()
{
	return mog_;
}




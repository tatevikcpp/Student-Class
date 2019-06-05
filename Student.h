#pragma once

class Student
{
public:
	Student();
	Student(const string &name, int id, int mog, int cource);
	~Student() {};

	Student(const Student& a);
	Student& operator = (const Student& a);

	int Mog();
	int Id();
	int Cource();
	string Name();


private:

	string name_;
	int id_;
	int cource_;
	int mog_;
};

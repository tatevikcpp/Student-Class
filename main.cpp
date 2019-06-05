#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
	Student s("Anun", 19, 101, 4);
	Student a = s;
	s = a; 

	cout << "Normal constructor : " << endl;

	cout << "Name: " << s.Name() << endl;
	cout << "Mog: " << s.Mog() << endl;
	cout << "ID: " << s.Id() << endl;
	cout << "Cource: " << s.Cource() << endl;

	cout << "Copy constructor : " << endl;

	cout << "Name: " << a.Name() << endl;
	cout << "Mog: " << a.Mog() << endl;
	cout << "ID: " << a.Id() << endl;
	cout << "Cource: " << a.Cource() << endl;

	system("pause");
}
#include "ClassSection.h"
#include "Student.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Joseph Patrick - Lab 4" << endl << endl;

	char ClassName[256];
	char SecName[256];
	int SecCap;
	char input;
	bool flag = true;

	cout << "Enter Class Name: ";
	cin.getline(ClassName, 256);
	cout << "Enter Section Name: ";
	cin.getline(SecName, 256);
	cout << "Enter Section Capacity: ";
	cin >> SecCap;

	ClassSection MyClassSection(ClassName, SecName, SecCap);
	
	while (flag)
	{
		cout << "Main Menu" << '\n' << '\n';
		cout << "A - Add a new student" << '\n' << '\n';
		cout << "L - List Students" << '\n' << '\n';
		cout << "Q - Quit" << '\n' << '\n';
		cout << "Selection: ";
		cin >> input;
		
		switch(input)
		{
		case('A'):
		case('a'):
			MyClassSection.addStudent();
		case('L'):
		case('l'):
			MyClassSection.listStudents();
		case('Q'):
		case('q'):
			flag = false;
		default:
			cout << "Unknown input" << endl;
		}
	}
}
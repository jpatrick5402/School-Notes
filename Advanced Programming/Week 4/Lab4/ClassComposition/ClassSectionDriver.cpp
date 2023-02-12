#include "ClassSection.h"
#include "Student.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Joseph Patrick - Lab 4" << endl;
	cout << "Class Section - Student/Grades" << endl << endl;

	char ClassName[256];
	char SecName[256];
	int SecCap;
	char input;
	bool flag = true;

	cout << "Enter Class Name: ";
	cin.getline(ClassName, 256);
	cout << "Enter Section Name: ";
	cin.getline(SecName, 256);
	cout << "Enter Section Capacity (2-10): ";
	cin >> SecCap;
	cout << '\n';

	ClassSection MyClassSection(ClassName, SecName, SecCap);
	
	while (flag)
	{
		cout << "Main Menu" << '\n' << '\n';
		cout << "A - Add a new student" << '\n' << '\n';
		cout << "L - List Students" << '\n' << '\n';
		cout << "Q - Quit" << '\n' << '\n';
		cout << "Selection: ";
		cin.clear();
		cin >> input;

		switch(input)
		{
		case('A'):
		case('a'):
			if (MyClassSection.getClassSize() < MyClassSection.getSectionCapacity())
				MyClassSection.addStudent();
			else
			{
				cout << "The seection has the maximum number of students" << endl;
				system("pause");
			}
			break;
		case('L'):
		case('l'):
			MyClassSection.listStudents();
			break;
		case('Q'):
		case('q'):
			flag = false;
			break;
		default:
			cout << "Invalid Option, Try again" << endl;
		}
	}
}
//RectangleDriver.cpp -- entry point for ClassCreationLab
//CSIS 212-B01

#include "Rectangle.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "Joseph Patrick - Class Creation Assignment #2" << endl << endl;
	Rectangle myRectangle;
	do
	{
		// Input & Set Width
		double str;
		cout << "Width of rectangle as a positive number (-1 to exit): ";
		cin >> str;
		if (str == -1)
		{
			cout << "terminating program as requested" << endl;
			break;
		}
		else if (str <= 0)
		{
			cout << "incorrect width value entered, terminating program" << endl;
			break;
		}
		myRectangle.setWidth(str);
		// Input & Set Length
		cout << "Length of rectangle as a positive number: ";
		cin >> str;
		if (str <= 0)
		{
			cout << "incorrect length value entered, terminating program" << endl;
			break;
		}
		myRectangle.setLength(str);
		// Show calculations
		myRectangle.showData();
	} while (true);
}
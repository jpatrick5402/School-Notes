//**************************************************************************************************************************
//
//	Notes for Advanced Programming with C++ week 3
//
//**************************************************************************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

void testScore();
void proccessingOneDimensionalArrays();

// Three data types: simple, structure, pointers

int main()
{
	proccessingOneDimensionalArrays();
}

void testScore() // this type program is very inneficient for large amounts of data
{
	int test0, test1, test2, test3, test4;
	double average;
	
	cout << "Enter five test scores: ";
	cin >> test0 >> test1 >> test2 >> test3 >> test4;
	cout << endl;

	average = (test0 + test1 + test2 + test3 + test4) / 5.0;
	cout << average;

	// <section using if statemtns to compare scores>, very slow
}

void proccessingOneDimensionalArrays()
{
	int list[100], i;
	for (i = 0; i < 100; i++)
		cin >> list[i];
	for (i = 0; i < 100; i++)
		cout << list[i] << " ";
	cout << endl;
}

void ArrayIndexOutOfBounds()
{
	// An array index is in bounds if it is between 0 and ARRAY_SIZE - 1
	// An array index is out of  bounds if it is not in bounds
}

void ArrayInitializationDuringDeclaration()
{
	double slaes[5] = { 12.25, 32.50, 16.90, 23, 45.68 }; // Initialize array at declaration
	double slaes[] = { 12.25, 32.50, 16.90, 23, 45.68 }; // Another way to initialize array at declaration
}


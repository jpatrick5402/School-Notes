//**************************************************************************************************************************
//
//	Notes for Advanced Programming with C++ week 3
//
//**************************************************************************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void testScore();
void proccessingOneDimensionalArrays();
void arrayTest();
void arraysAsParameters(int listOne[], double listTwo[]);

// Three data types: simple, structure, pointers

int main()
{
	arrayTest();
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
	double sales[5] = { 12.25, 32.50, 16.90, 23, 45.68 }; // Initialize array at declaration
	//double sales[] = { 12.25, 32.50, 16.90, 23, 45.68 }; // Another way to initialize array at declaration
}

void arrayTest()
{
	int list[4] = { 1,2,3,4 };
	cout << list;
}

void arraysAsParameters(int listOne[],double listTwo[]);
{
}

void enumerators()
{
	enum int{ RED, GREEN, BLUE };
}

void inputOptions()
{
	char name[25];
	cin >> name; 
	// or
	cin.get(name, 25) // Allows for whitespace in the entry - C style string
}

void fileManip()
{
	ifstream infile;
	string fileName;
	cout << "Eenter the input file name: ";
	cin >> fileName;

	infile.open(fileName.c_str())
}
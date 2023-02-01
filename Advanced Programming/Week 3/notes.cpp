//**************************************************************************************************************************
//
//	Notes for Advanced Programming with C++ week 3
//
//**************************************************************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

void testScore();

// Three data types: simple, structure, pointers

int main()
{
	testScore();
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
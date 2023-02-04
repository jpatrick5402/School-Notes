#include <iostream>
#include <fstream>
#include "Salesperson.h"
using namespace std;
// G:\My Drive\!Projects\School-Notes\Advanced Programming\Week 3\VectorsAndSorting\File.txt
int main()
{
	char fileName[256];
	Salesperson MyPerson;
	cout << "Enter the name of the file: ";
	cin.getline(fileName, 256);

	ifstream infile;
	infile.open(fileName);
	string name;
	string dealer;
	int goal;
	double commission;
	infile >> name;
	infile >> dealer;
	infile >> goal;
	infile >> commission;
	infile.close();
}
#include "Salesperson.h"
#include <iostream>
#include <fstream>
using namespace std;
// G:\My Drive\!Projects\School-Notes\Advanced Programming\Week 3\VectorsAndSorting\File.txt
int main()
{
	cout << "Joseph Patrick - Vecotr and Sorting Assignment #3" << endl << endl;

	char fileName[256];
	char name[256];
	char dealer[256];
	int goal;
	double commission;
	int temp;

	Salesperson MyPerson;
	cout << "Enter the name of the file: ";
	cin.getline(fileName, 256);


	ifstream infile;
	infile.open(fileName);
	if (!infile.is_open())
	{
		cout << "File not found" << '\n';
		system("pause");
		exit(-1);
	}
	infile.getline(name, 256);
	MyPerson.setSalespersonName(name);
	infile.getline(dealer, 256);
	MyPerson.setDealershipName(dealer);
	infile >> goal;
	MyPerson.setSalesGoal(goal);
	infile >> commission;
	MyPerson.setCommissionPercentage(commission);
	infile >> temp;
	do
	{
		MyPerson.addSalesAmount(temp);
		infile >> temp;
	} while (!infile.eof());
	infile.close();

	MyPerson.displaySalesInfo();
}
//**************************************************************************************************************************
//
//	Notes for Advanced Programming with C++ week 3
//
//**************************************************************************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

void testScore();
void proccessingOneDimensionalArrays();
void arrayTest();
int seqSearch(const int list[], int listLength, int searchItem);

// Three data types: simple, structure, pointers

int main()
{
}


void loopThroughList()
{
	for (auto i : list); // for (i in list)
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
	// Above is how to use a list as a parameter
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

	infile.open(fileName.c_str());
	
	// Paralell arrays
	/*
	Sample Data from fileName
	***********
	23456 A
	09234 B
	10209 C
	40933 D
	09302 F
	*/


	int studentId[50];
	char courseGrade[50];

	int noOfStudents = 0;
	infile >> studentId[noOfStudents] >> courseGrade[noOfStudents];

	while (infile && noOfStudents < 50)
	{
		noOfStudents++;
		infile >> studentId[noOfStudents] >> courseGrade[noOfStudents];
	}
}

void twoDimensionalArrays()
{
	// two-dimensional arrays are like matricies
	//
	// dataType arrayName[intExp1][intExp2];
	// dataType arrayName[Rows][Columns];

	double sales[10][5];
	sales[5][3] = 25.75;

	// 2D arrays are also made like this

	int board[4][3] = { 
	{2,3,1},
	{15,25,13},
	{20,4,7},
	{11,18,14} };

	// Here's 2D arrays and enum types

	const int NUMBER_OF_ROWS = 6;
	const int NUMBER_OF_COLUMNS = 5;
	enum carType {GM, FORD, TOYOTA, BMW, NISSAN, VOLVO};
	enum colorType {RED, BROWN, BLACK, WHITE, GRAY};
	int inStock[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
	inStock[1][3]; // This is the same as
	inStock[FORD][WHITE]; // This function

	// String arrays

	string list[100];
}

void multidimensionalArrays()
{
	// dataType arrayName[intExp1][intExp2]...[intExpn];
}

// Chapter 16 - Searching, Sorting, and the vector type

int seqSearch(const int list[], int listLength, int searchItem) // This is actually a really useful search algorithm
{
	int loc;
	bool found = false;
	loc = 0;
	
	while (loc < listLength && !found)
	{
		if (list[loc] == searchItem) // Since this algorithm has to process every item, it takes more time depending on list size
			found == true;
		else
			loc++;
	}
	if (found)
		return loc; // Sorting the list first allows for a much quicker algorithm
	else
		return -1;
}

void bubbleSort(int list[], int length)
{
	// Bubble sort - A sort algorithm that sorts a list by comparing successive pairs of elements in the list and swapping those elements if they are out of order.
	// A by product of this algoritm is that the largest number is pushed all the way to the end of the list.

	int temp;

	for (int iteration = 1; iteration < length; iteration++)
	{
		for (int index = 0; index < length - iteration; index++)
			if (list[index] > list[index + 1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
	}
}

void insertionSort(int list[], int listLength)
{
	// insertion sort - a sort algorithm that sorts a list by moving each element to its proper place

	int firstOutOfOrder, location;
	int temp;

	for (firstOutOfOrder = 1; firstOutOfOrder < listLength; firstOutOfOrder++)
	{
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
		{
			temp = list[firstOutOfOrder];
			location = firstOutOfOrder;

			do
			{
				list[location] = list[location - 1];
				location--;
			} while (location > 0 && list[location - 1] > temp);

			list[location] = temp;
		}
	}
}

int binarySearch(const int list[], int listLength, int searchItem)
{
	// Binary Search - a very fast search algorithm that uses the divide-and-conquer technique and can only be performed on sorted lists
	int first = 0;
	int last = listLength - 1;
	int mid;

	bool found = false;

	while (first <= last && !found)
	{
		mid = (first + last) / 2;
		if (list[mid] == searchItem)
			found = true;
		else if (list[mid] > searchItem)
			last = mid - 1;
		else
			first = mid + 1;
	}
	if (found)
		return mid;
	else
		return -1
}

// Vectors are lists that can grow and shrink during program execution
// vector<elemType> vecList;

void learnVectors()
{
	vector<int> intList; // declares empty vector object
	vector<int> intList(10); // declares a vecotor, intList, of size 10 and the the eleement type is int. All elements initialized to 0

	// This is a collection of the operations that can be performed on a vector

	//	vecList.at(index)	Returns the element at the position specified by index.
	//	vecList[index]	Returns the element at the position specified by index.
	//	vecList.front()	Returns the first element. (Does not check whether the object is empty.)
	//	vecList.back()	Returns the last element. (Does not check whether the object is empty.)
	//	vecList.capacity()	Returns the total number of elements that can be currently added to vecList.
	//	vecList.clear()	Deletes all elements from the object.
	//	vecList.push_back(elem)	A copy of elem is inserted into vecList at the end.
	//	vecList.pop_back()	Deletes the last element of vecList.
	//	vecList.empty()	Returns true if the object vecList is empty, and false otherwise.
	//	vecList.size()	Returns the number of elements currently in the object vecList.The value returned is an unsigned int value.
	//	vecList.max_size()	Returns the maximum number of elements that can be inserted into the object vecList.


	// Vectors can be initialized like this
	// vector<int> intList = {24,39,90,66};
}

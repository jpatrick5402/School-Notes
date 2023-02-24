#include "Book.h"
#include <iomanip>
#include <stdlib.h>
using namespace std;

// *****************************************************************************************
// The objective of this lab is to demonstrate dynamic allocation and deallocation
// of memory. This program leverages functionality that is useful in real-world
// applications where information is not always available at design time, and structures
// must be created at run time. This program also highlights the need for effective memory
// management to prevent issues with memory leaks, security, and overall program performance
// *****************************************************************************************

int generateScore(int position);

int main()
{
	cout << "Joseph Patrick - Lab 6" << endl << endl;
	// Creating varibles to be used in main()
	int bookNum;
	string bookName;
	string genreName;
	string bookTypeName;
	int DISP_WIDTH = 20;
	int score;

	// Getting the user's read books for the past year
	cout << "Enter the number of books that have read in the previous year: ";
	cin >> bookNum;

	while (cin.fail()) // Looping if failed to get bookNum
	{
		cin.clear();
		cin.ignore();
		cout << "Please enter a number" << endl;
		cout << "Enter the number of books that have read in the previous year: ";
		cin >> bookNum;
	}

	cin.clear();
	cin.ignore();

	// Creating dynamic list of Books
	// https://learn.microsoft.com/en-us/cpp/cpp/new-and-delete-operators?view=msvc-170

	Book** bookList = new Book * [bookNum];

	for (int i = 0; i < bookNum; i++) // Loopring to get info for books
	{
		cout << "What is the name of Book #" << i + 1 << " ?" << endl;
		getline(cin, bookName);
		cout << "What is the genre of the " << bookName << " book? (Western, Devotional, etc.)" << '\n';
		getline(cin, genreName);
		cout << "What is the type of Book #" << i + 1 << " ? (Paper, Electronic, etc.)" << '\n';
		getline(cin, bookTypeName);

		score = generateScore(i);

		Book* p = new Book();

		// I used the "->" from the Lab 6 Demo
		p->setTitle(bookName);
		p->setGenre(genreName);
		p->setTypeBook(bookTypeName);
		p->setReadingScore(score);

		bookList[i] = p;
		cout << '\n';
	}

	cout << "These are the books you have read this year:" << '\n';

	for (int i = 0; i < bookNum; i++)  // Getting bad memory allocation error here, resolved by switching "(*bookList)[i]" to "bookList[i]->"
	{
		cout << setw(DISP_WIDTH) << left << "Book Name:" << bookList[i]->getTitle() << '\n';
		cout << setw(DISP_WIDTH) << left << "Book Genre:" << bookList[i]->getGenre() << '\n';
		cout << setw(DISP_WIDTH) << left << "Book Type:" << bookList[i]->getTypeBook() << '\n';
		cout << setw(DISP_WIDTH) << left << "Reading Score (1-5): " << bookList[i]->getReadingScore() << '\n';
		cout << '\n';
	}

	// From instructions
	for (int i = 0; i < bookNum; i++)
	{
		delete bookList[i];
		bookList[i] = NULL;
	}
	delete[] bookList;

	system("pause");
}

int generateScore(int position)
{
	srand(100 + position);
	int num = rand() % 5;
	return num + 1;
}
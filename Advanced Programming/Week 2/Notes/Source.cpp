/*
*****************************************************************************************************
This is the notes for the second week of my Advanced Programming Class

This week we discussed programming approaches and we are using classes
*****************************************************************************************************
*/
#include <iostream>
using namespace std;

class clockType
{
public:
	// Everything in public is available outside of the program
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const; // The word const at the end of the member functions
	// getTime, printTime, and equalTime specifies that these functions cannot modify the member 
	// variables of a variable of type clockType.

	void printTime() const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	bool eequalTime(const clockType&) const;
private:
	// Everything in private is not accessable ouside of the program
	int hr;
	int min;
	int sec;
};

int main()
{
	clockType myClock; // Declaration of Class Object
	myClock.setTime(1,1,1); // Accessing Class Members
	// Recall that in C++, the dot, . (period), is an operator called the member access operator.
}
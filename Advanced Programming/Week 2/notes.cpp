//**************************************************************************************************
// Notes for Week 2 of Advance Programming with C++
//**************************************************************************************************

#include <iostream>

using namespace std;



int main()
{

}

class clockType
{
public:
	void setTime(int, int, int);
	void getTime(int&, int&, int&);
	void printTime() const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	bool equalTime(const clockType&) const;
	clockType(int, int, int); // constructor with parameters
	clockType(); // default constructor
private:
	int hr;
	int min;
	int sec;
};


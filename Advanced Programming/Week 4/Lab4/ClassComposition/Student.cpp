#include "Student.h"
#include <iomanip>
#include <iostream>

Student::Student()
{
	studentName = "";
	birthYear = 0;
	pointsEarned = 0;
}

Student::Student(std::string StudentName, int YearOfBirth, int PointsEarned)
{
	studentName = StudentName;
	birthYear = YearOfBirth;
	pointsEarned = PointsEarned;
}

Student::~Student()
{
}

void Student::setStudentName(std::string StudentName)
{
	studentName = StudentName;
}

std::string Student::getStudentName()
{
	return studentName;
}

void Student::setBirthYear(int YearOfBirth)
{
	birthYear = YearOfBirth;
}

int Student::getBirthYear()
{
	return birthYear;
}

void Student::setPointsEarned(int PointsEarned)
{
	pointsEarned = PointsEarned;
}

int Student::getPointsEarned()
{
	return pointsEarned;
}

char Student::calcLetterGrade()
{
	int points = getPointsEarned();
	if (!points)
		return -1;
	if (points < 0)
		return -1;
	else if (0 <= points && points <= 599)
		return 'F';
	else if (600 <= points && points <= 699)
		return 'D';
	else if (700 <= points && points <= 799)
		return 'C';
	else if (800 <= points && points <= 899)
		return 'B';
	else if (900 <= points && points <= 1010)
		return 'A';
	else if (points > 1010)
		return -1;
}

void Student::listStudentInfo()
{
	int dispWidth = 15;
	std::cout << std::right << std::setw(dispWidth) << getStudentName();
	std::cout << std::right << std::setw(dispWidth) << getBirthYear();
	std::cout << std::right << std::setw(dispWidth) << getPointsEarned();
	std::cout << std::right << std::setw(dispWidth) << calcLetterGrade();
	std::cout << std::endl;
}
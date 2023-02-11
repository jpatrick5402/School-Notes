#include "Student.h"

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
	return 'A';
}

void Student::listStudentInfo()
{

}
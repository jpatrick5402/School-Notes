#pragma once
#include <string>

class Student
{
	std::string studentName;
	int birthYear;
	int pointsEarned;

public:

	Student();
	Student(std::string StudentName, int YearOfBirth, int PointsEarned);

	void setStudentName(std::string StudentName);
	std::string getStudentName();
	void setBirthYear(int YearOfBirth);
	int getBirthYear();
	void setPointsEarned(int PointsEarned);
	int getPointsEarned();
	char calcLetterGrade();
	void listStudentInfo();
};
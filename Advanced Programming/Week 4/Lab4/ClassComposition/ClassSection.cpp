#include "ClassSection.h"

#include <iostream>
#include <iomanip>

ClassSection::ClassSection()
{
	className = "";
	sectionName = "";
	sectionCapacity = 0;
}

ClassSection::ClassSection(std::string ClassName, std::string SectionName, int NumStudents)
{
	className = ClassName;
	sectionName = SectionName;
	sectionCapacity = NumStudents;
}

void ClassSection::setClassName(std::string ClassName)
{
	className = ClassName;
}

std::string ClassSection::getClassName()
{
	return className;
}

void ClassSection::setSectionName(std::string SectionName)
{
	sectionName = SectionName;
}

std::string ClassSection::getSectionName()
{
	return sectionName;
}

void ClassSection::setSectionCapacity(int NumStudents)
{
	sectionCapacity = NumStudents;
}

int ClassSection::getSectionCapacity()
{
	return sectionCapacity;
}

void ClassSection::addStudent()
{
	char StuName[256];
	int YearOfBirth;
	int TotalPoints;
	std::cout << "Enter Student Name: ";
	std::cin.getline(StuName, 256);
	std::cout << "Enter Student Birth Year: ";
	std::cin >> YearOfBirth;
	std::cout << "Enter Total Student Points: ";
	std::cin >> TotalPoints;
	std::cin.ignore();
	Student MyStudent(StuName, YearOfBirth, TotalPoints);

	students.push_back(MyStudent);
}

void ClassSection::listStudents()
{
	int dispWidth = 20;
	std::cout << "Class Report with Students" << '\n';
	std::cout << "==========================" << '\n' << '\n';

	std::cout << std::setw(dispWidth) << "Class Name:" << getClassName() << '\n';
	std::cout << std::setw(dispWidth) << "Section Name:" << getSectionName() << '\n';
	std::cout << std::setw(dispWidth) << "Section Capacity:" << getSectionCapacity() << '\n';
	std::cout << std::setw(dispWidth) << "Students Enrolled:" << students.size() << '\n' << '\n';

	std::cout << "Students in Class/Section" << '\n';
	std::cout << "-------------------------" << '\n';

	dispWidth = 15;
	std::cout << std::right << std::setw(dispWidth) << "Student's Name";
	std::cout << std::right << std::setw(dispWidth) << "Birth Year";
	std::cout << std::right << std::setw(dispWidth) << "Points Earned";
	std::cout << std::right << std::setw(dispWidth) << "Letter Grade";
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;

	for (Student i : students)
	{
		i.listStudentInfo();
	}
	system("pause");
}
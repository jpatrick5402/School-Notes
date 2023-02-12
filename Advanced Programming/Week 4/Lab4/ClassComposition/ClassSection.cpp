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
	while (ClassName == "" || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Class Name cannot be blank" << '\n';
		std::cout << "Enter Class Name: ";
		std::getline(std::cin, ClassName);
	}

	while (SectionName == "" || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Section Name cannot be blank" << '\n';
		std::cout << "Enter Section Name: ";
		std::getline(std::cin, SectionName);
	}

	while (NumStudents < 2 || NumStudents > 10 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		if (NumStudents < 2)
		{
			std::cout << "Section Capacity must be 2 or greater" << '\n';
		}
		else if (NumStudents > 10)
		{
			std::cout << "Section Capacity must be 10 or less" << '\n';
		}
		else
		{
			std::cout << "Section Capacity must be a number" << '\n';
		}
		std::cout << "Enter Section Capacity: ";
		std::cin >> NumStudents;
	}

	className = ClassName;
	sectionName = SectionName;
	sectionCapacity = NumStudents;
}

ClassSection::~ClassSection()
{
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

	std::cin.clear();
	std::cin.ignore();

	std::cout << "Enter Student Name: ";
	std::cin.getline(StuName, 256);

	std::cout << "Enter Student Birth Year: ";
	std::cin >> YearOfBirth;

	std::cout << "Enter Total Student Points: ";
	std::cin >> TotalPoints;
	
	Student MyStudent(StuName, YearOfBirth, TotalPoints);

	students.push_back(MyStudent);
}

void ClassSection::listStudents()
{
	int dispWidth = 20;
	std::cout << "Class Report with Students" << '\n';
	std::cout << "==========================" << '\n' << '\n';

	std::cout << std::setw(dispWidth) << "Class Name: " << getClassName() << '\n';
	std::cout << std::setw(dispWidth) << "Section Name: " << getSectionName() << '\n';
	std::cout << std::setw(dispWidth) << "Section Capacity: " << getSectionCapacity() << '\n';
	std::cout << std::setw(dispWidth) << "Students Enrolled: " << students.size() << '\n' << '\n';

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

int ClassSection::getClassSize()
{
	return students.size();
}
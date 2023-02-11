#include "ClassSection.h"

#include <iostream>

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
}

void ClassSection::listStudents()
{

}
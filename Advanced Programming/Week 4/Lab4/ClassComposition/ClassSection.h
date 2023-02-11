#pragma once
#include <string>
#include <vector>
#include "Student.h"

class ClassSection
{
	std::string className;
	std::string sectionName;
	int sectionCapacity;
	std::vector<Student> students;

public:

	ClassSection();
	ClassSection(std::string ClassName, std::string SectionName, int NumStudents);

	void setClassName(std::string ClassName);
	std::string getClassName();
	void setSectionName(std::string SectionName);
	std::string getSectionName();
	void setSectionCapacity(int NumStudents);
	int getSectionCapacity();
	void addStudent();
	void listStudents();
};
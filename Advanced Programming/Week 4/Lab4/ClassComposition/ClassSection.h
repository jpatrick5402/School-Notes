#include <string>
#include <vector>

class ClassSection
{
	std::string className;
	std::string sectionName;
	int sectionCapacity;

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
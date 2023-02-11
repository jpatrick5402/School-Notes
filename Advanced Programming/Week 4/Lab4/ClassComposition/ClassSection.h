#include <string>

class ClassSection
{
	std::string className;
	std::string sectionName;
	int sectionCapacity;

public:

	ClassSection();
	ClassSection(std::string StudentName, std::string YearOfBirth, int PointsEarned);

	void setClassName();
	std::string getClassName();
	void setSectionName();
	std::string getSectionName();
	void setSectionCapacity();
	int getSectionCapacity();
	void addStudent();
	void listStudents();
};
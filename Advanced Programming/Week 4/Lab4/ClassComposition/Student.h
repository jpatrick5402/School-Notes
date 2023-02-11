#include <string>

class Student
{
	std::string studentName;
	int birthYear;
	int pointsEarned;

public:

	Student();
	Student(std::string ClassName, std::string SectionName, int NumStudents);

	void setStudentName();
	std::string getStudentName();
	void setBirthYear();
	int getBirthYear();
	void setPointsEarned();
	int getPointsEarned();
	char calcLetterGrade();
	void listStudentInfo();
};
#include <iostream>

int findInString(std::string Source, std::string Search);

int main()
{
	std::string var = "Teststring";
	int location = findInString(var, "r");
	std::cout << location;
	std::cout << var[location];
}

int findInString(std::string Source, std::string Search)
{
	return Source.find(Search);
}
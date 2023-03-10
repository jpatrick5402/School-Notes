// This is the header file for the Salesperson program

#include <iostream>
#include <vector>
#include <string>

class Salesperson
{
	// I chose to keep the data members private for security
	// Data members
	std::string salespersonName;
	std::string dealershipName;
	int salesGoal;
	double commissionPercentage;
	std::vector<int> sales;

public:
	// All other members are public
	// Contructors
	Salesperson();
	Salesperson(std::string name, std::string dealer, int goal, double commission);

	// Getter Functions
	std::string getSalespersonName();
	std::string getDealershipName();
	int getSalesGoal();
	double getCommissionPercentage();

	// Setter Functions
	void setSalespersonName(std::string name);
	void setDealershipName(std::string dealer);
	void setSalesGoal(int goal);
	void setCommissionPercentage(double commission);

	// General Functions
	void addSalesAmount(int ammount);
	void sortSalesAmount();
	double calcSalesAverage();
	double getSmallestSale();
	double getLargestSale();
	int getNumberSales();
	double calcTotalSales();
	double calcCommissionEarned();
	void displaySalesInfo();
};

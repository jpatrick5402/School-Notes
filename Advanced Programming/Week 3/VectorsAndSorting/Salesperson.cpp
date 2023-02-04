#include "Salesperson.h"
#include <vector>
#include <iomanip>

// Contructors
Salesperson::Salesperson()
{
	salespersonName = " ";
	dealershipName = " ";
	salesGoal = 0;
	commissionPercentage = 0;
}

Salesperson::Salesperson(std::string name, std::string dealer, int goal, double commission)
{
	salespersonName = name;
	dealershipName = dealer;
	salesGoal = goal;
	commissionPercentage = commission;
}

// Getter Functions
std::string Salesperson::getSalespersonName()
{
	return salespersonName;
}
std:: string Salesperson::getDealershipName()
{
	return dealershipName;
}
int Salesperson::getSalesGoal()
{
	return salesGoal;
}
double Salesperson::getCommissionPercentage()
{
	return commissionPercentage;
}

// Setter Functions
void Salesperson::setSalespersonName(std::string name)
{
	salespersonName = name;
}
void Salesperson::setDealershipName(std::string dealer)
{
	dealershipName = dealer;
}
void Salesperson::setSalesGoal(int goal)
{
	if (!goal)
	{
		std::cout << "Non-numeric value entered as a Sales Goal" << std::endl;
		std::cout << "Terminating Program" << std::endl;
		exit(-1);
	}
	else if (goal < 0)
	{
		std::cout << "Negative number found as Sales Goal" << std::endl;
		std::cout << "Terminating Program" << std::endl;
		exit(-1);
	}
	else if (goal >= 0)
		salesGoal = goal;
	else
	{
		std::cout << "Unknown error with Sales Goal: " << std::endl;
		std::cout << "Terminating Program" << std::endl;
		exit(-1);
	}
}
void Salesperson::setCommissionPercentage(double commission)
{
	commissionPercentage = commission;
}

// General Functions
void Salesperson::addSalesAmount(int ammount)
{
	if (!ammount)
	{
		std::cout << "Non-numeric value entered as a sale" << std::endl;
		std::cout << "Terminating Program" << std::endl;
		exit(-1);
	}
	else if (ammount < 0)
	{
		std::cout << "Negative number found in file" << std::endl;
		std::cout << "Terminating Program" << std::endl;
		exit(-1);
	}
	else if ( ammount >= 0)
		sales.push_back(ammount);
	else
	{
		std::cout << "Unknown error with ammount: " << std::endl;
		std::cout << "Terminating Program" << std::endl;
		exit(-1);
	}
}

void Salesperson::sortSalesAmount()
{
	int firstOutOfOrder, location;
	int temp;

	for (firstOutOfOrder = 1; firstOutOfOrder < getNumberSales(); firstOutOfOrder++)
	{
		if (sales[firstOutOfOrder] < sales[firstOutOfOrder - 1])
		{
			temp = sales[firstOutOfOrder];
			location = firstOutOfOrder;

			do
			{
				sales[location] = sales[location - 1];
				location--;
			} while (location > 0 && sales[location - 1] > temp);

			sales[location] = temp;
		}
	}
}

double Salesperson::calcSalesAverage()
{
	return (calcTotalSales() / getNumberSales());
}

double Salesperson::getSmallestSale()
{
	int loc = 0;
	int currentSmallest = sales[loc];
	int saleNumber = getNumberSales();
	while (loc < saleNumber - 1)
	{
		if (sales[loc] > sales[loc + 1])
			currentSmallest = sales[loc + 1];
		else
			currentSmallest = sales[loc];
		loc++;
	}
	return currentSmallest;
}

double Salesperson::getLargestSale()
{
	int loc = 0;
	int currentLargest = sales[loc];
	int saleNumber = getNumberSales();
	while (loc < saleNumber - 1)
	{
		if (sales[loc] < sales[loc + 1])
			currentLargest = sales[loc + 1];
		else
			currentLargest = sales[loc];
		loc++;
	}
	return currentLargest;
}

int Salesperson::getNumberSales()
{
	return sales.size();
}

double Salesperson::calcTotalSales()
{
	double total = 0;
	for (int i = 0; i < getNumberSales(); i++)
	{
		total = total + sales[i];
	}
	return total;
}

double Salesperson::calcCommissionEarned()
{
	return (calcTotalSales() * (getCommissionPercentage() / 100));
}

void Salesperson::displaySalesInfo()
{
	const int LINE_SPACE = 26;
	std::cout << '\n';
	std::cout << std::setw(LINE_SPACE) << "Delership: ";
	std::cout << getDealershipName() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Salesperson: ";
	std::cout << getSalespersonName() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Sales Goal: ";
	std::cout << getSalesGoal() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Total Sales: ";
	std::cout << calcTotalSales() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Number of Sales: ";
	std::cout << getNumberSales() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Average Sale: ";
	std::cout << calcSalesAverage() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Commission Prcentage: ";
	std::cout << getCommissionPercentage() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Comission Earned: ";
	std::cout << calcCommissionEarned() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Smallest Sale: ";
	std::cout << getSmallestSale() << '\n';
	std::cout << std::setw(LINE_SPACE) << "Largest Sale: ";
	std::cout << getLargestSale() << '\n';

	std::cout << std::setw(LINE_SPACE) << "List of Sales (sorted): " << '\n';
	sortSalesAmount();
	for (int i : sales)
	{
		std::cout << std::setw(LINE_SPACE) << i << '\n';
	}
}
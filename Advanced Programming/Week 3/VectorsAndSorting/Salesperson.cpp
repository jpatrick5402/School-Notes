#include "Salesperson.h"
#include <vector>

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
	salesGoal = goal;
}
void Salesperson::setCommissionPercentage(double commission)
{
	commissionPercentage = commission;
}

// General Functions
void Salesperson::addSalesAmount(int ammount)
{
	if ( ammount >= 0)
		sales.push_back(ammount);
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
	while (loc < saleNumber)
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
	while (loc < saleNumber)
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
	for (int i : sales)
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

}
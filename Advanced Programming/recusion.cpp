// recursion.cpp -- This is the mortgage calculator for the first assignment in CSIS112
// CSIS 212-B01
//
// https://stackoverflow.com/questions/3775274/exponential-operator-in-c
// https://stackoverflow.com/questions/3237247/c-rounding-to-the-nths-place

#include <iostream>
#include <cmath>

using namespace std;

double principle;
double interest;
int loan_years;
bool flag = true;

int main()
{
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;

    // Looping to get accurate Principle amount
    do
    {
        cout << "Principle (between $50,000 and $100,000): ";
        cin >> principle;
        if (principle <= 100000)
        {
            if (principle >= 50000)
            {
                break;
            }
        }
        system("cls");
        cout << "Please enter a Principle between $50,000 and $100,000" << endl
             << endl;
    } while (flag);

    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Principle (between $50,000 and $100,000): " << principle << endl;

    // Getting Interest Rate
    cout << "Annual Interest Rate (e.g. 4.5): ";
    cin >> interest;
    // Looping to get Loan Term
    do
    {
        cout << "Loan Term in Years (10, 15, 25, or 40): ";
        cin >> loan_years;

        switch (loan_years)
        {
        case 10:
            flag = false;
        case 15:
            flag = false;
        case 25:
            flag = false;
        case 40:
            flag = false;
        }
        system("cls");
        cout << "Please enter loan term option" << endl
             << endl;
        cout << "Principle (between $50,000 and $100,000): " << principle << endl;
        cout << "Annual Interest Rate (e.g. 4.5): " << interest << endl;
    } while (flag);

    // Pausing for review
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Principle (between $50,000 and $100,000): " << principle << endl;
    cout << "Annual Interest Rate (e.g. 4.5): " << interest << endl;
    cout << "Loan Term in Years (10, 15, 25, or 40): " << loan_years << endl;
    system("pause");

    double int_per_per = interest / 1200;
    double total_pay_pers = loan_years * 12;

    double pay_per_period = (principle * int_per_per * pow((1 + int_per_per), total_pay_pers)) / (pow((1 + int_per_per), total_pay_pers) - 1);

    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Loan Application Information and Amortization Schedule" << endl
         << endl;
    cout << "Principle: " << principle << endl;
    cout << "Annual Interest Rate: " << interest << "%" << endl;
    cout << "Life of Loan: " << loan_years << " years" << endl;
    pay_per_period = floor((pay_per_period * 100)) / 100;
    cout << "Payment per period: $" << pay_per_period << endl;
}
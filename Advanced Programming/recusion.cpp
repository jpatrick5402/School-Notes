// recursion.cpp -- This is the mortgage calculator for the first assignment in CSIS112
// CSIS 212-B01
//
// https://stackoverflow.com/questions/3775274/exponential-operator-in-c
// https://stackoverflow.com/questions/3237247/c-rounding-to-the-nths-place
// https://www.daniweb.com/programming/software-development/threads/211198/cout-padding-and-text-alignment#post947662

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double principle;
double interest;
int loan_years;
bool flag = true;

void get_values(double &Prin, double &Intr, int &Years);
double PaymentCalculator(double &Principle, double &Interest, int &Years);
void amortization(double &Principle, double &interest, int &loan_years, double &Pay_per_period);
void amortization_recursion(int Payment_num, double Pay_per_period, double Interest, double Balance);

int main()
{

    get_values(principle, interest, loan_years);

    double pay_per_period = PaymentCalculator(principle, interest, loan_years);

    // Pausing for review
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Principle (between $50,000 and $100,000): " << principle << endl;
    cout << "Annual Interest Rate (e.g. 4.5): " << interest << endl;
    cout << "Loan Term in Years (10, 15, 25, or 40): " << loan_years << endl;
    system("pause");

    amortization(principle, interest, loan_years, pay_per_period);
}

void get_values(double &Principle, double &Interest, int &Years)
{
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;

    // Looping to get accurate Principle amount
    do
    {
        cout << "Principle (between $50,000 and $100,000): ";
        cin >> Principle;
        if (Principle <= 100000)
        {
            if (Principle >= 50000)
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
    cout << "Principle (between $50,000 and $100,000): " << Principle << endl;

    // Getting Interest Rate
    cout << "Annual Interest Rate (e.g. 4.5): ";
    cin >> Interest;

    // Looping to get Loan Term
    do
    {
        cout << "Loan Term in Years (10, 15, 25, or 40): ";
        cin >> Years;

        switch (Years)
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
        cout << "Principle (between $50,000 and $100,000): " << Principle << endl;
        cout << "Annual Interest Rate (e.g. 4.5): " << Interest << endl;
    } while (flag);
}

double PaymentCalculator(double &Principle, double &Interest, int &Years)
{
    double int_per_per = Interest / 1200;
    double total_pay_pers = Years * 12;

    double pay_per_period = (Principle * int_per_per * pow((1 + int_per_per), total_pay_pers)) / (pow((1 + int_per_per), total_pay_pers) - 1);
    return pay_per_period;
}

void amortization(double &Principle, double &Interest, int &Loan_years, double &Pay_per_period)
{
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Loan Application Information and Amortization Schedule" << endl
         << endl;
    cout << setw(40) << left << "Principle: " << right << "$" << principle << endl;
    cout << setw(40) << left << "Annual Interest Rate: " << right << interest << "%" << endl;
    cout << setw(40) << left << "Life of Loan: " << right << loan_years << " years" << endl;
    cout << setw(40) << left << "Payment per period: $" << right << Pay_per_period << endl
         << endl;

    cout << setw(10) << right << "Payment" << setw(10) << "Amount" << setw(10) << "Interest" << setw(10) << "Principal" << setw(10) << "Balance" << endl;
    cout << setw(50) << right << setprecision(2) << fixed << Principle << endl;
    amortization_recursion(1, Pay_per_period, Interest, Principle);
}

void amortization_recursion(int Payment_num, double Pay_per_period, double Interest_rate, double Balance)
{
    float Interest_cost = (Interest_rate / 1200) * Balance;
    float Principle = Pay_per_period - Interest_cost;

    cout << setw(10) << right << fixed << setprecision(2) << Payment_num << setw(10) << Pay_per_period << setw(10) << Interest_cost << setw(10) << Principle << setw(10) << round(((Balance - Principle) * 100)) / 100 << endl;

    Balance = Balance - Principle;

    if ((round(Balance - Principle)) >= 0)
    {
        Payment_num++;
        amortization_recursion(Payment_num, Pay_per_period, Interest_rate, Balance);
    }
}
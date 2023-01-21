// recursion.cpp -- This is the mortgage calculator for the first assignment in CSIS112
// CSIS 212-B01
//
// https://stackoverflow.com/questions/3775274/exponential-operator-in-c
// https://stackoverflow.com/questions/3237247/c-rounding-to-the-nths-place
// https://www.daniweb.com/programming/software-development/threads/211198/cout-padding-and-text-alignment#post947662
// https://cplusplus.com/reference/iomanip/setprecision/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double principle;
double interest_yearly;
int loan_years;
bool flag = true;

void GetValues(double &Principle, double &Interest, int &Years);
double PaymentCalculator(double &Principle, double &Interest, int &Payments);
void LoanAmortizaeSchedule(int Payment_num, int Total_pay_periods, double Pay_per_period, double Interest_rate, double Balance);

int main()
{

    GetValues(principle, interest_yearly, loan_years);

    int number_of_payments = loan_years * 12;
    double interest_monthly = interest_yearly / 1200;

    double pay_per_period = PaymentCalculator(principle, interest_monthly, number_of_payments);

    // Pausing for review
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Principle (between 50000 and 100000): " << principle << endl;
    cout << "Annual Interest Rate (e.g. 4.5): " << interest_yearly << endl;
    cout << "Loan Term in Years (10, 15, 25, or 40): " << loan_years << endl;
    system("pause");

    // Printing the heading for schedule
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Loan Application Information and Amortization Schedule" << endl
         << endl;
    cout << setw(40) << left << "Principle: " << right << "$" << principle << endl;
    cout << setw(40) << left << "Annual Interest Rate: " << right << interest_yearly << "%" << endl;
    cout << setw(40) << left << "Life of Loan: " << right << loan_years << " years" << endl;
    cout << setw(40) << left << "Payment per period:" << right << fixed << setprecision(2) << "$" << pay_per_period << endl
         << endl;

    cout << setw(10) << right << "Payment" << setw(10) << "Amount" << setw(10) << "Interest" << setw(10) << "Principal" << setw(10) << "Balance" << endl;
    cout << setw(50) << right << setprecision(2) << fixed << principle << endl;

    LoanAmortizaeSchedule(1, number_of_payments, pay_per_period, interest_monthly, principle);
}

void GetValues(double &Principle, double &Interest, int &Years)
{
    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;

    // Looping to get Principle amount
    do
    {
        cout << "Principle (between 50000 and 100000): ";
        cin >> Principle;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (Principle <= 100000 && Principle >= 50000)
            break;

        system("cls");
        cout << "Please enter a Principle between 50000 and 100000!" << endl
             << endl;
    } while (true);

    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Principle (between 50000 and 100000): " << Principle << endl;

    // Looping to get Interest Rate
    do
    {
        cout << "Annual Interest Rate (e.g. 4.5): ";
        cin >> Interest;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (Interest > 0 && Interest < 100)
            break;
        system("cls");
        cout << "Please enter a valid interest rate!" << endl
             << endl;
        cout << "Principle (between 50000 and 100000): " << Principle << endl;

    } while (true);

    system("cls");
    cout << "Joseph Patrick -- Lab 1 - Recursion" << endl
         << endl;
    cout << "Principle (between 50000 and 100000): " << Principle << endl;
    cout << "Annual Interest Rate (e.g. 4.5): " << Interest << endl;

    // Looping to get Loan Term
    do
    {
        cout << "Loan Term in Years (10, 15, 25, or 40): ";
        cin >> Years;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (Years == 10 || Years == 15 || Years == 25 || Years == 40)
            break;

        system("cls");
        cout << "Please enter loan term option!" << endl
             << endl;
        cout << "Principle (between 50000 and 100000): " << Principle << endl;
        cout << "Annual Interest Rate (e.g. 4.5): " << Interest << endl;
    } while (flag);
}

double PaymentCalculator(double &Principle, double &Interest, int &Payments)
{
    double pay_per_period = (Principle * Interest * pow((1 + Interest), Payments)) / (pow((1 + Interest), Payments) - 1);
    return pay_per_period;
}

void LoanAmortizaeSchedule(int Payment_num, int Total_pay_periods, double Pay_per_period, double Interest_rate, double Balance)
{
    float Interest_cost = Interest_rate * Balance;
    float Principle = Pay_per_period - Interest_cost;

    cout << setw(10) << right << fixed << setprecision(2) << Payment_num << setw(10) << Pay_per_period << setw(10) << Interest_cost << setw(10) << Principle << setw(10) << abs(round(((Balance - Principle) * 100)) / 100) << endl;

    Balance = Balance - Principle;

    if ((round(Balance - Principle)) >= 0)
    {
        Payment_num++;
        LoanAmortizaeSchedule(Payment_num, Total_pay_periods, Pay_per_period, Interest_rate, Balance);
    }
}
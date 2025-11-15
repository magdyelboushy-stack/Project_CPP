#include <iostream>
using namespace std;

int main()
{

    const double feeMonthley = 15.50;
    const double kilowate = 1.45;
    string NameCust;
    float kilowateinp;


    cout << "--- Electricity Bill Generator --- \n";

    cout << "Enter customer name: ";
    cin >> NameCust;

    cout << "Enter Kilowatts consumed: ";
    cin >> kilowateinp;

    double cost = kilowateinp * kilowate;

    cout << "--- Final Bill for " << NameCust << " --- \n";

    cout << "Consumption Cost " << kilowateinp << " * " << kilowate << ": " << cost << "\n";
    cout << "Fixed Service Fee: " << feeMonthley << "\n";

    double TotalAmount = cost + feeMonthley;
    cout << " ------------------------------------------------ \n";
    cout << "Total Amount Due: " << TotalAmount;

    cout << "--- System Info --- \n";
    cout << "Consumption variable size: " << sizeof(kilowateinp);
}
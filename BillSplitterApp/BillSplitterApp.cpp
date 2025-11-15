#include <iostream>
using namespace std;
int main()
{
    cout << "=====================\n";
    cout << "= Welcome My firend =\n";
    cout << "=====================\n";
    double TotalBill;
    int NumberOfPeople;
    double  TipPercentage;
    double TotalAmount;
    double PerCapita;
    cout << "Please Enter The Total Bill \n";
    cin >> TotalBill;
    cout << "Please Enter The Number Of People \n";
    cin >> NumberOfPeople;
    cout << "Please Enter The Tip Percentage " << "Enter Number  Like 10 to 10% or 20% \n";
    cin >> TipPercentage;
    TipPercentage = TotalBill * (TipPercentage / 100.0);
    TotalAmount = TotalBill + TipPercentage;
    cout << "The Total Amount after add Bill And people And All is: " << TotalAmount << "\n";
    PerCapita = TotalAmount / NumberOfPeople;


    cout << "--- Bill Spliting Cacualator ---\n";
    cout << "Total Bill: " << TotalBill << " EGP \n";
    cout << "Tip Value : " << (TipPercentage) << " EGP \n";
    cout << "---------------------------------\n";
    cout << "Total Amount to Pay: " << TotalAmount << " EGP \n";

}

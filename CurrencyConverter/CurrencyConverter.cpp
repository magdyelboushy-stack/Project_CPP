#include <iostream>
using namespace std;

int main()
{
    const double USD_TO_EGP_RATE = 47.5;

    double UIUSD;
    double EGTOUSD;

    cout << "==============================\n";
    cout << "===== Currency Converter =====\n";
    cout << "==============================\n";

    cout << "Please Enter The USD: ";
    cin >> UIUSD;

    double EGPP = UIUSD * USD_TO_EGP_RATE;

    cout << "$" << UIUSD << " Is Equal To: " << EGPP << " EGP";

}
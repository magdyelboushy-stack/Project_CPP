// DiscountApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int price = 100;
    int discount = 10;
    int years;

    cout << "Tybe Te number f yeart";
    cin >> years;

    switch (years)
    {
    case 1:
        discount = 20;
        break
;   case 2:
        discount = 40;
        break;
    case 3:
        discount = 80;
        break;
    }

    cout << "Te Price Is " << price - discount << "\n";
}



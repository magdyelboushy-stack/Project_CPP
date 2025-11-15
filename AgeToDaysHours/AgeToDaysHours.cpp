#include <iostream>
using namespace std;


int main()
{
    cout << "==============================\n";
    cout << "== Calculate Yor Age Application\n";
    cout << "==============================\n";

    int age;
    cin >> age;

    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;

    cout << "Age in days is: " << age_in_days << " Days\n";
    cout << "Age in hours is: " << age_in_hours << " Days\n";


}


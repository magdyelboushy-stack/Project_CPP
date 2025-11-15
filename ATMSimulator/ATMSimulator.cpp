#include <iostream>
#include <iomanip>
using namespace std;

const int CORRECT_PIN = 1995;
double account_balance = 5000.75;

int main()
{
	int NAME;
	int PIN;
	int selc;
	float amount;

	cout << "WELCOME \n";

	cout << "Please Enter Your PIN KEY \n";
	cin >> PIN;

    if (PIN == CORRECT_PIN) {
        cout << "Welcome, Customer.";
        cout << "1. Withdraw Cash \n" << "2. Deposit Cash \n" << "3. Check Balance \n" << "Please Enter Your Choice (1-3)";
        cin >> selc;
        if (selc == 1)
        {

            cout << "Enter amount to withdraw: ";
            cin >> amount;


            if (amount <= account_balance && amount > 0)
            {

                account_balance -= amount;
                cout << "Withdrawal successful. New balance: " << account_balance;
            }
            else
            {
                cout << "Error: Insufficient funds or invalid amount.";
            }
        }
        else if (selc == 2)
        {
           
            cout << "Enter amount to deposit: ";
            cin >> amount;

            
            account_balance += amount;
            cout << "Deposit successful. New balance: " << account_balance;
        }
        else if (selc == 3)
        {
            
            cout << "Your current balance is: " << account_balance;
        }
        else
        {
            
            cout << "Invalid choice.";
        }

    }
}
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << " Enter The Number \n";
	cin >> num;

	switch (num)
	{
	case 100:
	case 110:
	case 120:
		cout << "Your Prize Is Iphone \n";
		break;
	case 200:
		cout << "Your Prize is ipda \n";
		break;
	case 300:
		cout << "Your Prize is TV \n";
		break;
	case 400:
		cout << "Your Prize is Key \n";
		break;
	default:
		cout << "Now Prize For This Number \n";
	}
}
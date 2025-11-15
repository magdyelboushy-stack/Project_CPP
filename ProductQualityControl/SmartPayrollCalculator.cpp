//#include <iostream>
//using namespace std;
///* |||||||| Const Variables |||||||| */
//using ProductID = long long;
//const double MIN_WEIGHT = 10.5;
//const double MAX_LENGTH = 50.2;
//const string REJECTED_COLOR = "blue";
//
//int main(){
//	string product_name;
//	ProductID serial_number;
//	double actual_weight;
//	double actual_length;
//	string product_color;
//	bool weight_check;
//	bool length_check;
//	bool color_check;
//	bool serial_check;
//	bool final_result;
//
//	cout << "Please Enter Product Name: ";
//	cin >> product_name;
//	cout << "Please Enter Serial Number: ";
//	cin >> serial_number;
//	cout << "Please Enter Actual Weight: ";
//	cin >> actual_weight;
//	cout << "Please Enter Actual Length: ";
//	cin >> actual_length;
//	cout << "Ple"
//}
#include <iostream>
using namespace std;


const float tax = 0.15;
const float reward = 500.25;
const int MinimumReward = 25;
using EmployeeID = long long;


int main() {
	string name;
	EmployeeID SerialNumber;
	float salary;
	unsigned int days;
	char HisJob;
	bool serial_check;
	bool final_result;

	cout << "Please Enter Name Emplo: " << endl;
	cin >> name;
	cout << "Please Enter Your Id: " << endl;
	cin >> SerialNumber;
	cout << "Please Enter Salary: " << endl;
	cin >> salary;
	cout << "Enter Days Work: " << endl;
	cin >> days;
	cout << "Enter HisJob: " << endl;

	serial_check = SerialNumber % 2;
	cout << serial_check;

}
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


/// Shipping Rules (Standards) //////
const double MinimumFreeShipping = 5000.0;
const double DomesticShippingCost = 50.0;
const double InternationalShippingCost = 250.0;
const double ExpressShippingAdditionalFee = 75.0;


int main()
{
	/// variables to store user input ///
	double purchase_amount;
	string destination_country;
	char shipping_speed;
	double base_shipping_cost;
	double extra_fees;
	double final_total_cost;
	
	cout << "Enter Your Purchase: ";
	cin >> purchase_amount;
	cout << "Enter Your Ccountry: ";
	cin >> destination_country;
	cout << "Enter Shipping Speed 'S' Mean Standard 'E' Mean Express: ";
	cin >> shipping_speed;

	if (purchase_amount >= MinimumFreeShipping)
	{
		base_shipping_cost = 0.0;
	}
	else if (destination_country == "Egypt")
	{
		
		base_shipping_cost = DomesticShippingCost;
	}
	else
	{
		
		base_shipping_cost = InternationalShippingCost;
	}
	if (shipping_speed == 'E')
	{
		extra_fees = ExpressShippingAdditionalFee;

	}
	else
		base_shipping_cost = InternationalShippingCost;

	final_total_cost = purchase_amount + base_shipping_cost + extra_fees;

	cout << fixed << setprecision(2);

	cout << "\n--- Shipping Invoice ---\n";
	cout << "Purchase Amount: " << purchase_amount << "\n";
	cout << "Base Shipping: " << base_shipping_cost << "\n";
	cout << "Express Fee: " << extra_fees << "\n";
	cout << "-------------------------\n";
	cout << "Total Cost: " << final_total_cost << "\n";;
	//////////////////////////////////////////////////////////// Solve AI ////////////////////////////////////////////////////////////////////////
	//#include <iostream>
	//#include <string>
	//#include <iomanip> // <-- ممتاز أنك تذكرت تضمينها
	//	using namespace std;
	//
	//
	//	/// Shipping Rules (Standards) //////
	//	const double MinimumFreeShipping = 5000.0;
	//	const double DomesticShippingCost = 50.0;
	//	const double InternationalShippingCost = 250.0;
	//	const double ExpressShippingAdditionalFee = 75.0;
	//
	//
	//	int main()
	//	{
	//		/// variables to store user input ///
	//		double purchase_amount;
	//		string destination_country;
	//		char shipping_speed;
	//		double base_shipping_cost;
	//		double extra_fees;
	//		double final_total_cost;
	//
	//		cout << "Enter Your Purchase: ";
	//		cin >> purchase_amount;
	//		cout << "Enter Your Country: ";
	//		cin >> destination_country;
	//		cout << "Enter Shipping Speed ('S' for Standard or 'E' for Express): "; // <-- تحسين بسيط للرسالة
	//		cin >> shipping_speed;
	//
	//		if (purchase_amount >= MinimumFreeShipping)
	//		{
	//			base_shipping_cost = 0.0;
	//		}
	//		else if (destination_country == "Egypt")
	//		{
	//
	//			base_shipping_cost = DomesticShippingCost;
	//		}
	//		else
	//		{
	//
	//			base_shipping_cost = InternationalShippingCost;
	//		}
	//
	//		// --- الطريقة الاحترافية (النصيحة 2): استخدام العامل الثلاثي ---
	//		// الكود الخاص بك (if/else) كان صحيحًا تمامًا، وهذه مجرد طريقة أنظف
	//		extra_fees = (shipping_speed == 'E' ? ExpressShippingAdditionalFee : 0.0);
	//
	//
	//		final_total_cost = purchase_amount + base_shipping_cost + extra_fees;
	//
	//		// --- اللمسة الاحترافية (النصيحة 1): استخدام iomanip ---
	//		// هذا السطر يجبر كل الأرقام العشرية القادمة على الطباعة برقمين عشريين
	//		cout << fixed << setprecision(2);
	//
	//		cout << "\n--- Shipping Invoice ---\n";
	//		cout << "Purchase Amount:    " << purchase_amount << " EGP\n";
	//
	//		// يمكننا أيضًا استخدام العامل الثلاثي هنا لطباعة رسالة الشحن المجاني!
	//		cout << "Base Shipping:      " << base_shipping_cost << " EGP"
	//			<< (base_shipping_cost == 0.0 ? " (Free Shipping Unlocked!)\n" : "\n");
	//
	//		cout << "Express Fee:        " << extra_fees << " EGP\n";
	//		cout << "---------------------------------\n"; // <-- خط أطول ليتناسب
	//		cout << "Total Cost:         " << final_total_cost << " EGP\n";
	//
	//		return 0; // من الجيد دائمًا إضافة return 0
	//	}
	//}
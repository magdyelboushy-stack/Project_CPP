#include <iostream>
#include <iomanip>
using namespace std;
using StoreID = long long;

const string STORE_NAME = "Elzero Tech";
const StoreID STORE_ID = 1020304050;
const char PRODUCT_CODE = 'K';

int main()
{
    unsigned int stock_quantity = 25;
    double product_price = 350.75;
    int customer_count = 0;
    int quantity_to_buy;
    bool sale_approved;

    cout << "WELCOME TO MY STORE: " << STORE_NAME << "\n";
    customer_count++;

    cout << "Customer Number: " << customer_count << endl;

    cout << "--- Product Details ---\n";
    cout << "Product Name: Keyboard\n";
    cout << "Price: " << product_price << " EGP\n";
    cout << "Available Stock: " << stock_quantity << "\n";

    cout << "Plese Enter The Quantity You Wish To Purchase: ";
    cin >> quantity_to_buy;

    cout << " --- Smart Invoice --- " << "\n";
    sale_approved = (quantity_to_buy > 0 && quantity_to_buy <= stock_quantity);

    auto endcost = quantity_to_buy * product_price;
    stock_quantity -= quantity_to_buy;

    cout << "Sale Status (1=OK, 0=Failed): " << sale_approved << endl;

    cout << "Total Cost: " << endcost << "\n";
    cout << "Remaining Stock: " << stock_quantity << "\n";

    cout << "--- System Info --- " << "\n";
    // اطبع حجم متغير stock_quantity بالبايت (sizeof) وعنوانه في الذاكرة (&).
    cout << "Stock Variable Size: " << sizeof(stock_quantity) << endl;

    cout << "Stock Memory Address: " << &stock_quantity << endl;



}
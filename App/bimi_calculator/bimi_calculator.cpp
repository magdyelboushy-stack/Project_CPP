
/// My Slove
#include <iostream>
using namespace std;

int main()
{
    double UserWeightKilogram;
    double UserHeightMeter;

    cout << "=====================================\n"
        << "========= BMI Calculator ============\n"
        << "=====================================\n";

    cout << "Please Enter Your Weight By Kilgoram: ";
    cin >> UserWeightKilogram;
    cout << "Please Enter Your Heigh: ";
    cin >> UserHeightMeter;
    double  UserHeight = UserHeightMeter * UserHeightMeter;
    cout << "This Is BIMI: " << UserWeightKilogram / UserHeight;

}


/// Solve Gem

// #include <iostream>
// using namespace std;

// int main()
// {
//     double userWeightKilogram;
//     double userHeightMeter;
//     double bmiResult; // 1. متغير جديد لتخزين النتيجة النهائية

//     cout << "=====================================\n"
//          << "========= BMI Calculator ============\n"
//          << "=====================================\n";

//     cout << "Please Enter Your Weight In Kilograms: ";
//     cin >> userWeightKilogram;
//     cout << "Please Enter Your Height In Meters (e.g., 1.75): ";
//     cin >> userHeightMeter;

//     // 2. دمج الحساب في سطر واحد باستخدام الأقواس
//     // الأقواس تضمن أن الطول * الطول سيتم حسابه أولاً
//     bmiResult = userWeightKilogram / (userHeightMeter * userHeightMeter);

//     // 3. رسالة إخراج نهائية أكثر تفصيلاً ووضوحًا
//     cout << "\n--- Your Result ---\n";
//     cout << "Your Body Mass Index (BMI) is: " << bmiResult << endl;

//     return 0;
// }
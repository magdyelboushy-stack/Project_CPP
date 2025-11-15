// #include <iostream>
// using namespace std;


// int main()
// {
//     cout << "============================\n";
//     cout << "==== Heat Conversion App ===\n";
//     cout << "============================\n";

//     const double CONVERSION_FACTOR = 1.8 ;
//     double tempCelsius;
//     double Fahrenheit;
//     cout << "Please Enter The temperature \n";
//     cin >> tempCelsius;
//     Fahrenheit = tempCelsius * CONVERSION_FACTOR;
//     cout << "This is Tep after convert It " << Fahrenheit;
// }


#include <iostream>
using namespace std;

// 1. تم نقل الثابت ليصبح عامًا (Global)
const double CONVERSION_FACTOR = 1.8;

int main()
{
    cout << "============================\n";
    cout << "==== Heat Conversion App ===\n";
    cout << "============================\n";

    double tempCelsius;
    double tempFahrenheit; // قمت بتغيير الاسم ليكون أوضح

    cout << "Please Enter The temperature in Celsius: \n"; // رسالة أوضح
    cin >> tempCelsius;

    // 2. أضفنا + 32 للمعادلة
    tempFahrenheit = (tempCelsius * CONVERSION_FACTOR) + 32; // <--- التعديل هنا

    // 3. رسالة إخراج أكثر تفصيلاً ووضوحًا
    cout << tempCelsius << " degrees Celsius is " << tempFahrenheit << " degrees Fahrenheit." << endl;

    return 0; // من الممارسات الجيدة إضافة return 0 في نهاية main
}
#include <iostream>
using namespace std;

/*
  Data Types
  - What Is Data ?
  - Data Examples In Real Life
  --- Integer => 5000, 10, -100
  --- String => "Elzero Web School", "Osama Elzero", "100A"
  --- Boolean => true, false
  --- Float => 18.5, 1900.50
  --- Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
  - Why We Choose Data ?
  --- Size
  --- Operation

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/


/*
  Data Types

  - Ram [R]andom [A]ccess [M]emory
  --- Computer Memory Has Locations

  - Data Sizes
  --- Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  --- Byte => A Group of 8 => Store Single Character
  --- Kilo Byte => 1024 Byte
  --- Mega Byte => 1024 Kilobytes
  --- Giga Byte => 1024 Megabytes
  --- Tera Byte => 1024 Gigabytes

  - Data Types With Size
  --- int => 2 Or 4 Bytes => Will Cover Later Why
  --- float => 4 Bytes [18.5656565656]
  --- double => 8 Bytes [18.5656565656]
  ------ Number . Fractional Component
  --- char => 1 Byte => "A" "x" "9"
  --- boolean => 1 Byte => true, false
  - Double vs Float

  - The Story Behind Creating A Variable
  --- Declare A Variable
  --- Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  --- Restrict Type Of Data To The Type We Choosed

  - Declare Variable Without Type
  - See Memory Address &

  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/

/*
  Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
*/

/*
  Primitive Data Types
  - float => Floating Point Number
  --- Test Integer Value In Float Variable
  --- We Make Sure Its Float Not Double By Adding Suffix "f" Or "F"
  --- Test With Auto
  --- 7 Decimal Precision

  - double => Double The Float
  --- 15 Decimal Precision
*/


///// هنعمل معالجعه قبل قبل ايه ؟ بنعمل كوبايل للكود
/// Translation قبل ما يعمل run للكود 
// Iclude Preprocessor Directives
// Include بتسدعي ملف
// < iostream دا file Library

/*
    SynTax Varabile
    [Data_Type] [Variable Name]
*/

/*
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math
  --- Test > And <
  --- Test Data [100, 0, -100, ""]

  - void => Valueless
  --- Without Value
*/

/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;

*/


/*Varabile*/
/*
    Variables Namig Rules & Best Practies

    - Naming Rules
    --- Must Be Unique
    --- Case Sensitive
    --- Cannot Start With Numbers
    --- Nums or Letter or Underscore
    --- No White space or Special Character
    --- Reserved Keywords "CLass, Public"

    - Best Practices
    --- Related Names
    elzerWebSchool == Camal Case
    elzer_web_school == Snake Case
    elzer-web-schhol == Kebab Case
    ELZERO_CASE == Streaming Case
   

    Variables Advanced Knowledge
    Declere Var Wihtout Value + Change Later
    Declare Multiple Var Without Value + Change Later
    Declare Multiple Var With same Value
   
    Varible Scope
    --- Global Variabel
    --- Local Varibale
    Constanat Variale
    ---- Read Only Value
    ---- Can't Declare Without Value

    Escape Sequnces Characters
    --- Special Non Printing Characters
    --- Control Printing Behaviour
        Start With Back Slach "\"
        can be Inserted In Any Postion

        \n
        \\
        \"
        \'
        \t => Tap Equal 8 Space
        \b
        \a => Alert => Play Beep During Execution
        \r => Carriage Return

        Data Types
        Data Examples In Real Life
        Integert 1 -100
        String "String"
        Boolean True or Folse
        Float 1.5
        Array ["Osma" , "Ahmed", "Sayed" , "Mohamoud"]
        Why We Choose Data ?
        Size
        Operation

        Auto data tybe

        user mamory Location
        int numbs = 100;
        cout << &nums;

        Primitive Data Types
        int = integer

        Store From -2147483648 to 2147483648
        INT_MIN and INT_MAX Constant
*/

/*
  Data Types
  - Type Conversion
  --- Convert Data of One Type To Another

  - Implicit Conversion
  --- Conversion Is Done Automatically By The Compiler

  - Explicit Conversion AKA Type Casting
  --- Conversion Is Done By The Programmer

  - Data Loss
  --- When Larger Type Is Converted To Smaller Type
*/

/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Arithmetic Operators
  "For Mathematical Operations"

  --- + => Addition
  --- - => Subtraction
  --- * => Multiplication
  --- / => Division
  --- % => Modulo => Remainder After Division
*/

/*
NTg
  Operators & Operands
  "Symbols To Operate On Data"

  - Assignment Operators
  "For Assigning Operations"

  --- = Assign
  --- += Addition
  --- -= Subtraction
  --- *= Multiplication
  --- /= Division
  --- %= Modulo => Remainder After Division
*/

/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Increment And Decrement Operators
  "For incrementing And Decrementing Values"

  --- Pre/Post Increment
  --- Pre/Post Decrement
*/

/*
Code
  Operators & Operands
  "Symbols To Operate On Data"

  - Comparison Operators
  "For Comparing Values"

  --- == Equal
  --- != Not Equal
  --- > Greater Than
  --- < Less Than
  --- >= Greater Than Or Equal
  --- <= Less Than Or Equal
*/

/*
Ai-Ai
  Operators & Operands
  "Symbols To Operate On Data"

  - Logical Operators
  "For Logic Between Values"

  --- && And
  --- || Or
  --- ! Not
*/
/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Operators Precedence
  "Which One Has Higher Precedence"

  Refernce
  --- Operators Precedence Table

  Search
  - Bitwise Operators
  - Spaceship Operator

  Training
  - Try Operators Yourself Before Browsing References
*/


//
//int main()
//{
//	cout << 10 + 5 * 5 << "\n";
//	// 5 * 5 = 25
//	// 10 + 25 = 35
//	cout << 10 - 5 * 5 << "\n";
//	// 5 * 5 = 25
//	// 10 - 25 = -15
//	cout << 20 / 5 * 4 << "\n";
//	// 20 / 5 = 4
//	// 4 * 4 = 16
//	cout << 10 + 20 / 5 * 4 << "\n";
//	// 10 + 16 = 26
//	// 20 / 5 = 4
//	// 4 * 4 = 16
//	cout << (10 + 5) * 5 << "\n"; // (15) * 5 = 75
//	return 0;
//}

/*
  Control Flow
  - If Condition Introduction

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int age;
//    cout << "Welcome\n";
//
//    if (age < 18) // False
//    {
//        cout << "Beware\n";
//    }
//
//    cout << "See You\n";
//    return 0;
//}

/*
  Control Flow
  - If ... else if ... else

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int age = 15;
//    int points = 450;
//    int rank = 4;
//
//    if (age >= 18)
//    {
//        cout << "Welcome Your Age Is Ok\n";
//    }
//    else if (points > 500)
//    {
//        cout << "Welcome Your Points Is Ok\n";
//    }
//    else if (rank > 5)
//    {
//        cout << "Welcome Your Rank Is Ok\n";
//    }
//    else
//    {
//        cout << "Iam Sorry\n";
//    }
//
//    return 0;
//}

/*
  Control Flow
  - Nested If Conditions
*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int age = 25;
//    int points = 1500;
//
//    if (age >= 18)
//    {
//        cout << "Welcome Your Age Is OK\n";
//        if (points >= 1000)
//        {
//            cout << "You Are VIP\n";
//        }
//    }
//
//    return 0;
//}

/*
  Control Flow
  - Ternary Operator

  Syntax
  (Condition) ? True : False;
*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int age = 15;
//
//    if (age >= 18)
//    {
//        cout << "Your Age Is OK\n";
//    }
//    else
//    {
//        cout << "Your Age Is Not OK\n";
//    }
//
//    cout << (age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n");
//
//    string msg = age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n";
//
//    cout << msg;
//
//    return 0;
//}

//int main()
//{
//    int age = 15;
//    int points = 400;
//    if (age >= 18)
//    {
//        cout << "Okay\n";
//    }
//    else
//    {
//        if (points >= 500)
//        {
//            cout << "Okay Bec Points Is Acc\n";
//        }
//        else
//        {
//            cout << "No\n";
//        }
//    }
//
//    cout << (age >= 18 ? "Okay\n" : "Not Okay")
// 
//}

/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition

  Syntax
  (Condition Is True) ? True : False;
*/

/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition

  Syntax
  (Condition Is True) ? True : False;
*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int age = 15;
//    int points = 450;
//
//    if (age >= 18)
//    {
//        cout << "OK\n";
//    }
//    else
//    {
//        if (points >= 500)
//        {
//            cout << "OK Because Of Points\n";
//        }
//        else
//        {
//            cout << "No Age Or Points\n";
//        }
//    }
//
//    cout << (age >= 18 ? "OK\n" : (points >= 500 ? "OK P\n" : "No P\n"));
//
//    cout << (points >= 500 ? "OK P\n" : "No P\n");
//
//    if (age >= 18)
//        cout << "OK\n";
//    else
//        cout << "Not OK\n";
//
//    return 0;
//}

//4 Training Apps
//  - Even / Odd Checker
//  - Find Greatest Number
//  - User Rank Checker
//  - Simple Calculator
//*/
//int main()
//{
//    /*-Even / Odd Checker*/
//    //int num;
//    //cin >> num;
//    ////cout << num;
//    //if (num % 2 == 0)
//    //{
//    //    cout << "The Number " << num << "Number Is Even";
//    //}
//    //else
//    //{
//    //    cout << "The Number " << num << "Number Is Odd";
//    //}
//
//   /* -Find Greatest Number
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    if (a > b && a > c) {
//        cout << a << "Is The Greatest Number";
//    }
//    else if (b > a && b > c) {
//        cout << b << "Is The Greatest Number";
//    }
//    else {
//        cout << c << "Is Greatset Number";
//    }*/
//   
//
//}

/*
  Control Flow
  - Switch iterger and character Only
*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int day;
//    cout << "Choose A Day From 1 To 25\n";
//    cin >> day;
//
//    if (day == 1)
//    {
//        cout << "Open From 08:00 To 14:00";
//    }
//    else if (day == 2)
//    {
//        cout << "Open From 08:00 To 14:00";
//    }
//    else if (day == 3)
//    {
//        cout << "Open From 10:00 To 16:00";
//    }
//    else
//    {
//        cout << "Closed";
//    }
//
//    switch (day)
//    {
//    case 1:
//    case 2:
//        cout << "Open From 08:00 To 14:00";
//        break;
//    case 3:
//        cout << "Open From 10:00 To 16:00";
//        break;
//    default:
//        cout << "Closed";
//    }
//
//    return 0;
// 
// 
// 
//}

/*
  Control Flow
  - Switch Trainings
  --- Award System Application
  --- Discount Application
  --- Simple Calculator Application
*/

////#include <iostream>
//using namespace std;
//
//int main()
//{
//    // App 1 => Award System Application
//
//    int num;
//    cout << "Type The Number\n";
//    cin >> num;
//
//    switch (num)
//    {
//    case 100:
//    case 110:
//    case 120:
//        cout << "Congratz For The iPhone";
//        break;
//    case 200:
//        cout << "Congratz For The iPad";
//        break;
//    case 300:
//        cout << "Congratz For The TV";
//        break;
//    case 400:
//        cout << "Congratz For The KeyChain";
//        break;
//    default:
//        cout << "No Award For This Number";
//    }
//
//    // App 2 => Discount Application
//
//    int price = 100;
//    int discount = 10;
//    int years;
//    cout << "Type The Number Of Years in Company\n";
//    cin >> years;
//
//    switch (years)
//    {
//    case 1:
//        discount = 20;
//        break;
//    case 2:
//        discount = 40;
//        break;
//    case 3:
//        discount = 80;
//        break;
//    }
//
//    cout << "The Price Is " << price - discount << "\n";
//
//    // App 3 => Simple Calculator
//
//    int n1, n2, op;
//    cout << "Type Number One\n";
//    cin >> n1;
//    cout << "Type Number Two\n";
//    cin >> n2;
//    cout << "Choose Operation Number\n";
//    cout << "[1] +\n";
//    cout << "[2] -\n";
//    cout << "[3] /\n";
//    cout << "[4] *\n";
//    cin >> op;
//
//    if (op == 1)
//    {
//        cout << num_one + num_two << "\n";
//    }
//    else if (op == 2)
//    {
//        cout << num_one - num_two << "\n";
//    }
//    else if (op == 3)
//    {
//        cout << num_one / num_two << "\n";
//    }
//    else if (op == 4)
//    {
//        cout << num_one * num_two << "\n";
//    }
//    else
//    {
//        cout << "Operation Is Not Valid\n";
//    }
//
//    switch (op)
//    {
//    case 1:
//        cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
//        break;
//    case 2:
//        cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
//        break;
//    case 3:
//        cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
//        break;
//    case 4:
//        cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";
//        break;
//    default:
//        cout << "Operation Is Not Valid\n";
//    }
//
//    return 0;
//}
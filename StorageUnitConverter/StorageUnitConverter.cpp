#include <iostream>
using namespace std;

int main()
{
    cout << "=================================================================== \n"
        << "  === Implementing a Storage Unit Converter (Interactive)  === \n"
        << "=================================================================== \n";

    int Kilobytes;

    cout << "The Number By Kilobytes \n";
    cin >> Kilobytes;

    int Bytes = 1024;
    int Bits = 8;


    int NmberByBytes = Kilobytes * Bytes;
    int NmberByBits = Kilobytes * Bits;
    cout << "This Is The User Input "
        << Kilobytes
        << "\n"
        << "This Is Nmber By Bytes = " << NmberByBytes << "\n" << "This Is Nmber By Bits = " << NmberByBits;


}
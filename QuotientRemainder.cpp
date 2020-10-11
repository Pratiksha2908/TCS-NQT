#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, Quotient, Remainder;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    Quotient = firstNumber/secondNumber;
    Remainder = firstNumber%secondNumber;

    cout << "Quotient is: " << Quotient << endl;
    cout << "Remainder is: " << Remainder << endl;
    
    return 0;
}
    
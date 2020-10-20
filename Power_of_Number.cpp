#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int base, exponent;
    cin >> base;
    cin >> exponent;
    if(exponent < 0){
        cout << "Wrong input";
    }
    else if(exponent >= 0){
        cout << pow(base, exponent);
    }
}
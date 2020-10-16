#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i=2; i<n; i++)
        if(n%i == 0) 
            return false;
        return true;
}

int main() 
{
    int n;
    cin >> n;
    isPrime(n) ? cout << fixed << setprecision(2) << sqrt(n) : cout << "0.00";
}
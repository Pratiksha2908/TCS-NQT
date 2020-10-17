#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int decimal;
   cin >> decimal;
   int i, octal = 0;
    i = 1;
    while(decimal!=0){
        octal = octal + ((decimal%8)*i);
        decimal = int(decimal/8);
        i = i*10;
    }
    cout << octal;
}
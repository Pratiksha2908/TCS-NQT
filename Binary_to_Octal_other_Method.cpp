#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int binary;
   cin >> binary;
   int i = 0, octal = 0, decimal = 0;
    while(binary!=0){
        decimal = decimal + ((binary%10)*pow(2, i));
        i++;
        binary = int(binary/10);
    }
    i = 1;
    while(decimal!=0){
        octal = octal + ((decimal%8)*i);
        decimal = int(decimal/8);
        i = i*10;
    }
    cout << octal;
}
#include <iostream>
#include <math.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   string str, str2;
   int j = 0, sum =0, i=0;
   cin >> str;
   int len = str.length();
   reverse(str.begin(), str.end());
    while(j!=(len) && i!=len) { 
        str2 = str[i]; 
        stringstream convert(str2);
        int x;
        convert >> x;
        sum = sum + (x*pow(2,j)); 
        j++;
        i++;
   }
   cout << sum;
}
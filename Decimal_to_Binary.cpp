#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n, Q;
   string bin1, bin2;
   cin >> n;
   Q = n;
   while(Q/2 != 0){
       bin2 = to_string(Q%2);
       bin1.append(bin2);
       Q = Q/2;
   }
   bin1.append(to_string(Q));
   reverse(bin1.begin(), bin1.end());
   cout << bin1;
}
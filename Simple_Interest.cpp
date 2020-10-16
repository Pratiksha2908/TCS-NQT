#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   float P, n, r, SI;
   cin >> P;
   cin >> n;
   cin >> r;
   SI = ((P*n*r)/100);
   cout << fixed << setprecision(6) << SI;
}
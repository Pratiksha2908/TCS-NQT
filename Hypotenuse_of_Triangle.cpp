#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   float a, b, hypo;
   cin >> a;
   cin >> b;
   hypo = sqrt(pow(a,2) + pow(b,2));
   cout << fixed << setprecision(2) << hypo;
}
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int d;
   float area;
   cin >> d;
   area = 3.14*(pow(d,2)/4);
   cout << fixed << setprecision(2) << area;
}
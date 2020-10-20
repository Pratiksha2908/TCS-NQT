#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   float r, theta, arc;
   cin >> r;
   cin >> theta;
   arc = ((2*3.14*r)*(theta/360));
   cout << fixed << setprecision(2) << arc;
}
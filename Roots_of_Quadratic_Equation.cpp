#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int a, b, c;
   float root1, root2, diff;
   cin >> a;
   cin >> b;
   cin >> c;
   diff = b*b-4*a*c;
   root1 = (-b+sqrt(diff))/(2*a);
   root2 = (-b-sqrt(diff))/(2*a);
   cout << "root1 = " << fixed << setprecision(2) << root1 << "  " << "root2 = " << fixed << setprecision(2) << root2;
}
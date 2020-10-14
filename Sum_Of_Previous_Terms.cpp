#include <iostream>
using namespace std;

int main() 
{
   int t1 = 1, t2 = 2, tn, n;
   cin >> n;
   if (n <=30) {
       if (n==1) {
            tn = t1;
       } else if (n==2) {
            tn = t2;
       } else {
            for (int i=3; i<=n; i++) {
                tn = t1+t2;
                t1 = t2;
                t2 = tn;
            }
        }
        cout << tn;
   } else {
       cout << "Invalid Input";
   }
}
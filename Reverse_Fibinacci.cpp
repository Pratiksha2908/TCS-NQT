#include <iostream>
using namespace std;

int main() 
{
   int n, t1=0, t2=1, tn, arr[1000];
   cin >> n;
   for (int i=0; i<n; i++) {
       if(i==0) {
           tn = t1;
       } else if(i==1) {
           tn = t2;
       } else {
           tn = t1+t2;
           t1 = t2;
           t2 = tn;
       }
       arr[i] = tn;
   }
   for(int j=(n-1); j>=0; j--){
        cout << arr[j] << " ";
   }
}
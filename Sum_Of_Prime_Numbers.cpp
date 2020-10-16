#include <iostream>
using namespace std;

bool isPrime(int k) {
    for (int i=2; i<k; i++)
        if(k%i == 0) 
            return false;
        return true;
}

int main() 
{
   int l, u, sum=0;
   cin >> l;
   cin >> u;
   if(l!=0){
        for (int k=(l+1); k<u; k++){
            isPrime(k) ? sum = sum + k : sum = sum;
        }
        cout << sum;
   } else if(l==0) {
       for (int k=(l+1); k<u; k++){
            isPrime(k) ? sum = sum + k : sum = sum;
        }
        cout << sum-1;
   }
}
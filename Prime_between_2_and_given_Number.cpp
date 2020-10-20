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
   int n, arr[1000],b[1000];
   int j=0;
   cin >> n;
   for (int k=2; k<=n; k++){
        if(isPrime(k)){
            arr[j] = k;
            j++;
        }else{
            b[0] = k;
        }
   }
   for(int l=0; l<j; l++){
       cout << arr[l] << " ";
   }
}
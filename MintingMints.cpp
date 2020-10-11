#include <iostream>
using namespace std;

int main() 
{
   // Try out your code here
    int n, len, i, sum, nxtSum=0;
  	cin >> n >> len;
  	for(i=1; i<=len; i++) {
        sum = nxtSum + n;
        nxtSum = sum-1;
        n = sum;
    }
    cout << sum << endl;
}
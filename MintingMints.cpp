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
//i=1
//sum = 14
//nxtSum = 13
//n = 14
//i=2
//sum = 27
//nxtsum = 26
//n = 27
//i=3
//sum = 53
//nxtSum = 52
//n =53
//i=4
//sum = 105
//i=5 stopped
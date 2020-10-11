#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
  
int reverse(int n) 
{ 
    int rev = 0; 
    while (n != 0) { 
        rev = (rev * 10) + (n % 10); 
        n /= 10; 
    } 
    return rev; 
} 

void getSum(int n) 
{ 
    n = reverse(n); 
    int sumOdd = 0, sumEven = 0, c = 1, result; 
  
    while (n != 0) { 
  
        if (c % 2 == 0) 
            sumEven += n % 10; 
        else
            sumOdd += n % 10; 
        n /= 10; 
        c++; 
    } 

    result = sumOdd - sumEven;
    cout << abs(result);

} 

int main() 
{ 
    int n;
    cin >> n; 
    getSum(n); 
    return 0; 
} 
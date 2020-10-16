#include <iostream>
#include <math.h>
using namespace std;

int count = 0, sum = 0, digit;

int count_digit(int n)
{
    if(n >= 10)
       count_digit(n / 10);
    int digit = n%10;
    count++;
    return count;
}

bool each_digit(int n)
{
    if(n >= 10)
       each_digit(n / 10);
    int digit = n%10;
    sum = sum + pow(digit, count);
    if(sum == n)
        return true;
    return false;
}

int main() 
{
   int n;
   cin >> n;
   count_digit(n);
   each_digit(n) ? cout << "ARMSTRONG" : cout << "NOT AN ARMSTRONG";
}
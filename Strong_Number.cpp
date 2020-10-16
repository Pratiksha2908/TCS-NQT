#include <iostream>
using namespace std;

int sum=0;

int fact(int digit){
    int fact = 1;
    for (int i=1; i<=digit; i++)
       fact = fact * i;
    return fact;
}

bool print_each_digit(int x)
{
    if(x >= 10)
       print_each_digit(x / 10);
    
    int digit = x%10;
    sum = sum + fact(digit);
    if(sum == x) {
        return true;
    } else {
        return false;
    }
}

int main() 
{
   int x;
   cin >> x;
   print_each_digit(x) ? cout << "Yes" : cout << "No";
}
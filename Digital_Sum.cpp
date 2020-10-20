#include<iostream>
using namespace std;

int sumofdigits(int n)
{   
    int digit, sum=0;
    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
		n = n / 10;
    } 
    return sum;  
}

int main()
{ 
    int n, sum_of_digits;
	cin>>n;
    sum_of_digits = n;
    while(sum_of_digits > 9){
        sum_of_digits = sumofdigits(sum_of_digits); 
    }
    cout<<sum_of_digits;
    return 0;
}
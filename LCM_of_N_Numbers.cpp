#include <iostream>
using namespace std;
int gcd(int a, int b);
int lcm(int a[], int n);
int main()
{
    int n, arr[100], i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<lcm(arr, n);
}
int lcm(int a[], int n) 
{
  int i,res=1;
   for(i=0;i<n;i++)
    {
       res = res*a[i]/gcd(res,a[i]);
    }
   return res;
}
int gcd(int a, int b)
{
    int i;
   i = (a>b)?b:a;
   for(;i>=1;i--)
    {
       if(a%i==0 && b%i==0)
        {
           return i;
        }
    }
}
#include <iostream>
using namespace std;

bool perfectSquare(int n){
    for (int i=1; i<=n; i++)
       if((i*i) == n)
            return true;
       return false; 
}

int main() 
{
   int n;
   cin >> n;
   perfectSquare(n) ? cout << "YES" : cout << "NO";
}
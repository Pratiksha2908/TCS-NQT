#include <iostream>
using namespace std;

int main()
{
    int t1=1, n, tn, t2=1;
    cin >> n;
    if(n%2 != 0){
        for (int i=1; i<n; i++) {
            tn = t1*2;
            t1 = tn; 
            i++; 
        }
    }
    else if(n%2 == 0){
        for (int j=2; j<n; j++) {
            tn = t2*3;
            t2 = tn;
            j++; 
        }
    }
    cout << tn;
}
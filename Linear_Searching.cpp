#include <iostream>
using namespace std;

int arr[1000], i, n, x;

bool search(){
    cin >> n;
    for (i=0; i<n; i++)
        cin >> arr[i];

    cin >> x;
    for (i=0; i< n; i++)
        if(x==arr[i])
            return true;
        return false;
}

int main(){
    search() ? cout << (i+1) : cout << x << " isn't present in the array.";
}
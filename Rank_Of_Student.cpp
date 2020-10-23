#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int n, x;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> x;
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] < arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    reverse(arr, arr + n); 
    for(int i=1; i<=n; i++){
        if(x == arr[i]){
            cout << (i+1);
        }
    }
}

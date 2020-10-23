#include <iostream>
using namespace std;

int main(){
    int n, size=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if((arr[i] != 0) && (arr[i] != 1)){
            size++;
        }
    }
    int newArraySize = (size/2);
    int arr1[newArraySize], j=0;
    for(int i=0; i<(n/2); i++){
        if((arr[i] != 0) && (arr[i] != 1)){
            arr1[j] = arr[i];
            j++;
        }
    }
    int arr2[newArraySize], k=0;
    for(int i=(n/2); i<n; i++){
        if((arr[i] != 0) && (arr[i] != 1)){
            arr2[k] = arr[i];
            k++;
        }
    }
    int sum = 0, m=0, q=(newArraySize-1);
    while((m!=newArraySize) && (q!=-1)){
        sum = sum + (arr1[m]*arr2[q]);
        m++;
        q--;
    }
    cout << sum;
}
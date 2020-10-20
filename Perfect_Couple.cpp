#include<iostream>
using namespace std;

void perfect_couple(int arr[], int n, int sum) {
    int i,j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(sum == (arr[i] + arr[j])){
               cout << "Perfect couple: " << arr[i] << " " << arr[j]; 
               exit(0);
            }
    cout<<"No perfect couple found!";
} 

int main() {
    int n;
    cin>>n;  
    int arr[50], i;
        for(i=0; i<n; i++){
            cin>>arr[i];
        }      
    int sum;
    cin>>sum;     
    perfect_couple(arr, n, sum);
}  
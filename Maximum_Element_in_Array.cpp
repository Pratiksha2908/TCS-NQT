#include <iostream>
using namespace std;

int main() 
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i=0; i<n; i++){
        cin >> arr[i];
    }
    int GrNum = arr[0];
    for(i=1; i<n; i++){
        if(arr[i] > GrNum){
            GrNum = arr[i];
        }
    }
    cout << GrNum;
}
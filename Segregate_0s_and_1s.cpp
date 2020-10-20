#include <iostream>
using namespace std;

int main() 
{
    int n, i, j;
    cin >> n;
    char arr[n];
    for (i=0; i<n; i++){
        cin >> arr[i];
    }
    for (j=0; j<n; j++){
      	if(arr[j] == '0'){
          	cout << "0" << " ";
        }
    }
  	for (j=0; j<n; j++){
      	if(arr[j] == '1'){
          	cout << "1" << " ";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T, P=0, S1=1, S2=2;
  cin >> T;
  int n = T*3;
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  while(T!=0){
      if(arr[S1]>arr[S2]){
        if(((arr[S1]+1)==arr[P])){
            cout << "1" << endl;
        } else if((arr[S1]+2)==arr[P]){
            cout << "2" << endl;
        }
        } else if(arr[S2]>arr[1]){
            if(((arr[S2]+1)==arr[P])){
                cout << "1" << endl;
            } else if((arr[S2]+2)==arr[P]){
                cout << "2" << endl;
            }
        }
        P = P+3;
        S1 = S1+3;
        S2 = S2+3;
        T--;
  }
}
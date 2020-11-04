#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T, N, K, Kenichi, Amara, n=0;
  cin >> T;
  string arr[T];
  for(int j=0; j<T; j++){
    cin >> N >> K;
    int k_arr[N], A_arr[N];
    for(int i=0; i<N; i++){
        cin >> k_arr[i];
    }
    for(int l=0; l<N; l++){
        cin >> A_arr[l];
    }
    Kenichi = k_arr[(K-1)];
    Amara = A_arr[(K-1)];
    // cout << Kenichi << Amara << endl;
    if(Kenichi > Amara){
        arr[n] = "WIN";
        n++;
    } else if(Kenichi <= Amara){
        arr[n] = "LOSE";
        n++;
    }
  } 
  for(int i=0; i<T; i++){
    cout << arr[i] << endl;
  }
}
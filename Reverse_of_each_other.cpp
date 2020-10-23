#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, count=0;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<N; i++)
    {
        int num=(arr[i]%10*10)+(arr[i]/10);
        for(int j=i+1; j<N; j++)
        {
            if(arr[j]==-1)
                continue;
            if(num==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
    }
    cout << count;
    return 0;
}
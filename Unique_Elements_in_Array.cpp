#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
 	int n,i,j,flag=0;
    cin>>n;
  	int arr[n];
  	for(i=0;i<n;i++){
      cin>>arr[i];
    }
  	for(i=0;i<n;i++){
      	flag=0;
      	for(j=0;j<n;j++){
          	if(arr[i]==arr[j] && i!=j){
              	flag=1;
              	break;
            }
        }
      	if(flag==0){
          	cout<<arr[i]<<" ";
        }
    }
}   
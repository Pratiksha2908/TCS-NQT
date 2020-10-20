#include <iostream>
#include <stdlib.h>
using namespace std;
void duplicate(int arr[], int n)
{
	int i, j;
	int count = 0;
	for(i = 0;i < n;i++)
	{
		for(j = i+1;j < n;j++)
		{
			if(arr[i] == arr[j])
			{
				cout << arr[j] << " ";
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int i;
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	duplicate(arr,n);
}
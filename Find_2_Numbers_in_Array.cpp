#include <iostream>
using namespace std;

int arr[1000], i, j, n, x1, x2;

bool search_x1(int x1){
    for(i=0; i<n; i++)
        if(x1 == arr[i])
            return true;
        return false;     
}

bool search_x2(int x2){
    for(j=0; j<n; j++)
        if(x2 == arr[j])
            return true;
        return false;       
}

int main() 
{
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cin >> x1;
    cin >> x2;

    cout << "Element 1" << " index = ";
    search_x1(x1) ? cout << i << endl : cout << "-1" << endl;
    cout << "Element 2" << " index = ";
    search_x2(x2) ? cout << j << endl : cout << "-1" << endl;
}
#include <iostream>
using namespace std;

int main() 
{
    int a, row, col, x, i, j, k=0, sum=0;
    cin >> a;
    cin >> row >> col;
    int n = (row*col);
    int matrix1_elements[n], matrix2_elements[n];
    
    for (i=0; i<n; i++){
        cin >> matrix1_elements[i];
    }
    for(j=0; j<n; j++){
        cin >> matrix2_elements[j];
    }

    for(k=0; k<n; k++) {
        cout << matrix1_elements[k] + matrix2_elements[k] << " ";
    }
}
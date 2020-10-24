#include <iostream>
using namespace std;


int main() 
{
    int input, N=10, k;
    cin >> input;
    if(input >=1 && input <=5){
        cout << "NUMBER OF CANDIES SOLD : " << input << endl;
        cout << "NUMBER OF CANDIES AVAILABLE : " << (N-input) << endl;
    } else {
        cout << "INVALID INPUT" << endl;
        cout << "NUMBER OF CANDIES LEFT : " << N << endl;
    }
}

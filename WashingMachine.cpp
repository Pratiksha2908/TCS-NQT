#include <iostream>
using namespace std;

int main() 
{
    int W;
    cin >> W;
    if(W>=0 && W<=7000){
        if(W == 0){
            cout << "Time Estimated : 0 Minutes";
        } else if(W>=1 && W<=2000){
            cout << "Time Estimated : 25 Minutes";
        } else if(W>=2001 && W<=4000){
            cout << "Time Estimated : 35 Minutes";
        } else if(W>=4001 && W<=7000){
            cout << "Time Estimated : 45 Minutes";
        }
    } else if(W > 7000){
        cout << "OVERLOADED!";
    } else {
        cout << "INVALID INPUT";
    }
}

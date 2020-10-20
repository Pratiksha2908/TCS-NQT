#include <iostream>
using namespace std;

int main() 
{
   int a, b, Gr;
   cin >> a >> b;
   if(a > b){
       Gr = a;
       if(a%b == 0){
           cout << a;
       } else{
           cout << a*b;
       }
    //    else if(a%b != 0){
    //         while ((Gr%a != 0) && (Gr%b != 0)){
    //             Gr++;
    //         }
    //         cout << Gr;
    //    }
   } else if(b > a){
       Gr = b;
       if(b%a == 0){
           cout << b;
       } else {
            cout << a*b;
       }
   }
}
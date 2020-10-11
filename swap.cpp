#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=5, b=10, temp;
    cout << "Before Swaping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swaping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}


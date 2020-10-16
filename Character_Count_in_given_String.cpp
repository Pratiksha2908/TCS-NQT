#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
   string str1;
   int count=1, i, len;
   cin >> str1;
   len = str1.length();
   if (len > 20) {
       cout << "Invalid Input";
       return 0;
   } else {
       for(i=1; i<=len; i++) {
            if(str1[i] == str1[i-1]) {
                count++;
            } else {
                cout << str1[i-1] << count;
                count = 1;
            }
       }
   }
   return 0;
}



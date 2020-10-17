#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   string str, str2;
   int i;
   cin >> str;
   int len = str.length();
   reverse(str.begin(), str.end());  
   if(str[0]=='0'){
       for(int j=1; j<=len; j++){
           cout << str[j];
       }
   } else {
       cout << str;
   }
}
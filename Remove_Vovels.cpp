#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   std::string str2;
   std::getline(std::cin, str2);
   for (int i = 0; i<str2.length(); i++) { 
       if(((str2.at(i)>='a'&& str2.at(i)<='z') || (str2.at(i)>='A' && str2.at(i)<='Z' || str2.at(i) == ' ')) && (str2.at(i) != 'a' && str2.at(i) != 'e' && str2.at(i) != 'i' && str2.at(i) != 'o' && str2.at(i) != 'u' && str2.at(i) != 'A' && str2.at(i) != 'E' && str2.at(i) != 'O' && str2.at(i) != 'U' && str2.at(i) != 'I')){
           cout << str2.at(i);
       }
   }
}
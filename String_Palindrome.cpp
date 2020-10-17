#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str1, string str2) {
    if(str1 == str2)
        return true;
    return false;
}

int main() 
{
    std::string str1, str2;
    std::getline(std::cin, str1);
    str2 = str1;
    reverse(str2.begin(), str2.end());
    palindrome(str1, str2) ? cout << str1 << " is a palindrome" : cout << str1 << " is not a palindrome";
}
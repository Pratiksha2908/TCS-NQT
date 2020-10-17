#include <iostream>
using namespace std;

bool palindrome(string str) {
    int len = str.length();
    int mid = len/2;
    for (int i=0; i<mid; i++)
        for (int j=len; j>mid; j--) 
            if(str[i]==str[j])
                return true;
            return false;
}

int main() 
{
    std::string str;
    std::getline(std::cin, str);
    palindrome(str) ? cout << "Palindrome" : cout << "Not a Palindrome";
}
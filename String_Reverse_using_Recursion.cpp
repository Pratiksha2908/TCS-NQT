#include <iostream>
#include <string>
using namespace std;

void reverse(string str)
{
    int len = str.length();
    if(len==1)
        cout<<str;
    else
    {
        cout << str[len-1];
        reverse(str.substr(0, len - 1));
    }
}

int main()
{
    string str;
    getline(cin, str);
    reverse(str);   
}
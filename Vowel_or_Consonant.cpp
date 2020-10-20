#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cin >> ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "Vowel";
    }
    else if(((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z')) && (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'O' && ch != 'U' && ch != 'I')){
        cout << "Consonant";
    }
}
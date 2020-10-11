#include <iostream>
using namespace std;

int main() 
{
   string str1, str2, str3;
   cin >> str1;
   cin >> str2;
   cin >> str3;
   for (int i = 0; i<str1.length(); i++) {
       if(str1.at(i) == 'a' || str1.at(i) == 'e' || str1.at(i) == 'i' || str1.at(i) == 'o' || str1.at(i) == 'u' || str1.at(i) == 'A' || str1.at(i) == 'E' || str1.at(i) == 'I' || str1.at(i) == 'O' || str1.at(i) == 'U') {
           str1.at(i) = '$';
       }
   }
   for (int i = 0; i<str2.length(); i++) { 
       if(((str2.at(i)>='a'&& str2.at(i)<='z') || (str2.at(i)>='A' && str2.at(i)<='Z')) && (str2.at(i) != 'a' && str2.at(i) != 'e' && str2.at(i) != 'i' && str2.at(i) != 'o' && str2.at(i) != 'u' && str2.at(i) != 'A' && str2.at(i) != 'E' && str2.at(i) != 'O' && str2.at(i) != 'U' && str2.at(i) != 'I')){
           str2.at(i) = '#';
       }
   }
   for (int i = 0; i<str3.length(); i++) {
       if(str3.at(i)>='a' && str3.at(i)<='z'){
           str3.at(i) = str3.at(i)-32;
       }
   }
   string str = str1 + str2 + str3;
   cout << str;
}
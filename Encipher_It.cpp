#include <iostream>
using namespace std;

int main() 
{
   int input, num, chOutput;
   char output, ch;
   cin >> ch;
   cin >> num;
   if (ch>='A' && ch<='Z') {
       chOutput = int(ch) - 65;
       input = chOutput + num;
       output = input%26 + 'A';
   } else if (ch>='a' && ch<='z') {
       chOutput = int(ch) - 97;
       input = chOutput + num;
       output = input%26 + 'a';
   }
   cout << output;
}


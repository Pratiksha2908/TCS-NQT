#include <iostream>
using namespace std;

int main() 
{
    int count=0;
   string str;
   std::getline(std::cin, str);
   for(int i=0; i<str.length(); i++){
       if(str[i]==' '){
           count++;
       }
   }
   cout << (count+1);
}
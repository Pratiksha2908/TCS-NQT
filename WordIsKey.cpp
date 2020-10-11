#include<iostream>
#include<string.h>

using namespace std;
int main(){
  
    char str[16][10] = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};    
    char input[20];    
    int flag = 0;
    cin >> input;   
    for(int i = 0; i<16;i++){
        if(strcmp(input,str[i]) == 0){
            flag = 1;
            break;
        }
    }  
    if(flag==1){
        cout << input << " is a keyword";
    }
    else{
        cout << input << " is not a keyword";
    }
    return 0;
}
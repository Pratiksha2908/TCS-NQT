#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
int main(){

  char hex[17];
  long long decimal, place;

  int i = 0, val, len;
  decimal = 0;
  place = 1;

  cin>> hex;

  len = strlen(hex);
  len--;

  for(i = 0;hex[i]!='\0';i++)
  {
    if(hex[i]>='0'&& hex[i]<='9'){

      //48 to 57 are ascii values of 0 - 9
      //say value is 8 its ascii will be 56
      //val = hex[i] - 48 => 56 - 48 => val = 8

      val = hex[i] - 48;
    }
    else if(hex[i]>='a'&& hex[i]<='g'){

      //97 to 103 are ascii values of a - g
      //say value is g its ascii will be 103
      //val = hex[i] - 97 + 10 => 103 - 97 + 10=> val = 16
      //10 is added as g value is 16 not 6 or a value is 10 not 0

      val = hex[i] - 97 + 10;
    }
    else if(hex[i]>='A'&& hex[i]<='G'){

      //similarly, 65 to 71 are values of A - G
      val = hex[i] - 65 + 10;
    }

    decimal = decimal + val * pow(17,len);
    len--;
  }

  cout<< decimal;

  return 0;
}
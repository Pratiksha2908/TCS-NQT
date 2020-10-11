#include <iostream>
using namespace std;
int main()
{
    int first,last;
    cin >> first >> last;
    for(int i=first; i<=last; i++)
    {
        if(last>=100)
            printf("%03d ",i);
        else if(last>=10)
            printf("%02d ",i);
        else
            printf("%d ",i);
    }
    return 0;
}
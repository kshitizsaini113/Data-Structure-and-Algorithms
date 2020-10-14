// Program for understanding bitwise operator

#include <iostream>

using namespace std;

int main()
{
    int d = 5 & 6;
    cout<<d<<endl;

    d = 5 | 6;
    cout<<d<<endl;

    d = 5 ^ 6;
    cout<<d<<endl;

    d = ~ 4;
    cout<<d<<endl;

    d = 4<<1;
    cout<<d<<endl;

    d = 4>>1;
    cout<<d<<endl;
    
    return 0;
}
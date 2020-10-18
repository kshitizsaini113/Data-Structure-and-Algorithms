// Program for converting binary to decimal

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d=0,b=1;

    for(;n!=0;n/=10)
    {
        d+=b*(n%10);
        b*=2;
    }
    cout<<d<<endl;

    return 0;
}

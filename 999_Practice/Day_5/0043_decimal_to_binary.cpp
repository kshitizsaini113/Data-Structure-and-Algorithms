// Program for converting decimal to binary

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d=0,b=1;

    for(;n!=0;n/=2)
    {
        d+=b*(n%2);
        b*=10;
    }
    cout<<d<<endl;

    return 0;
}

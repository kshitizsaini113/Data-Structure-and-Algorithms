#include <iostream>

using namespace std;

typedef long long int ll;

ll binary2decimal(ll binary)
{
    ll decimal=0;

    for(ll multiplier=1; binary>0; multiplier*=2, binary/=10)
    {
        decimal += (multiplier * (binary%10));
    }

    return decimal;
}

int main()
{
    ll binary;
    cin>>binary;

    cout<<binary2decimal(binary)<<endl;
    return 0;
}
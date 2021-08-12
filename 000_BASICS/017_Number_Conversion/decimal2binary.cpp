#include <iostream>

using namespace std;

typedef long long int ll;

ll decimal2binary(ll decimal)
{
    ll binary = 0;
    
    for(ll multiplier=1; decimal>0; multiplier*=10, decimal/=2)
    {
        binary += (multiplier * (decimal%2));
    }

    return binary;
}

int main()
{
    ll decimal;
    cin>>decimal;

    cout<<decimal2binary(decimal)<<endl;

    return 0;
}
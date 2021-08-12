#include <iostream>

using namespace std;

typedef long long int ll;

ll decimal2octal(ll decimal)
{
    ll octal = 0;
    
    for(ll multiplier=1; decimal>0; multiplier*=10, decimal/=8)
    {
        octal += (multiplier * (decimal%8));
    }

    return octal;
}

int main()
{
    ll decimal;
    cin>>decimal;

    cout<<decimal2octal(decimal)<<endl;

    return 0;
}
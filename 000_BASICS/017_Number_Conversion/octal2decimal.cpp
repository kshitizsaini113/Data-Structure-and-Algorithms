#include <iostream>

using namespace std;

typedef long long int ll;

ll octal2decimal(ll octal)
{
    ll decimal=0;

    for(ll multiplier=1; octal>0; multiplier*=8, octal/=10)
    {
        decimal += (multiplier * (octal%10));
    }

    return decimal;
}

int main()
{
    ll octal;
    cin>>octal;

    cout<<octal2decimal(octal)<<endl;
    return 0;
}
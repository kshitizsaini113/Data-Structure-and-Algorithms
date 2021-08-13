#include <iostream>

using namespace std;

typedef long long int ll;

string decimal2hexadecimal(ll decimal)
{
    string hexadecimal = "";

    for(ll multiplier=1; decimal>0; decimal/=16)
    {
        ll temp = (decimal%16);
        if(temp>9)
        {
            char ch = 'A' + temp -10;
            hexadecimal.insert(0, 1, ch);
        }
        else
        {
            char ch = '1' + temp - 1;
            hexadecimal.insert(0, 1, ch);
        }
    }

    return hexadecimal;
}

int main()
{
    ll decimal;
    cin>>decimal;

    cout<<decimal2hexadecimal(decimal)<<endl;

    return 0;
}
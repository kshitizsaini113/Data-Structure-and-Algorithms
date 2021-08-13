#include <iostream>
#include <cmath>

using namespace std;

typedef long long int ll;

ll hexadecimal2decimal(string hexadecimal)
{
    ll decimal = 0;
    ll multiplier=1;

    for(int i=0; i<hexadecimal.length(); i++)
    {
        multiplier = pow(16, hexadecimal.length()-i-1);
        char ch = hexadecimal.at(i);
        ll temp;
        if(ch >= 'A')
        {
            temp = ch - 'A' + 10;
        }
        else
        {
            temp = ch - '0';
        }
        cout<<multiplier<<"-->";
        decimal += (multiplier * temp);
    }

    return decimal;
}

int main()
{
    string hexadecimal;
    cin>>hexadecimal;

    cout<<hexadecimal2decimal(hexadecimal)<<endl;

    return 0;
}
#include <iostream>

using namespace std;

typedef long long int ll;

ll addBinary(ll binary1, ll binary2)
{
    ll result = 0;

    ll multiplier = 1;
    int carry = 0;
    while(binary1>0 || binary2>0)
    {
        int add = binary1%10 + binary2%10 + carry;
        if(add<=1)
        {
            carry = 0;
        }
        else if(add==2)
        {
            carry = 1;
            add = 0;
        }
        else
        {
            carry = 1;
            add = 1;
        }
        result += multiplier*add;
        binary1/=10;
        binary2/=10;
        multiplier*=10;
    }
    if(carry)
    {
        result += multiplier*carry;
    }

    return result;
}

int main()
{
    ll binary1, binary2;
    cin>>binary1>>binary2;

    cout<<addBinary(binary1, binary2)<<endl;
    
    return 0;
}
#include <iostream>

using namespace std;

typedef long long int ll;

ll factorial(ll n)
{
    ll fact = 1;

    for(ll i=1; i<=n; i++)
    {
        fact*=i;
    }

    return fact;
}

int main()
{
    ll num;
    cin>>num;

    cout<<"Factorial of "<<num<<" is : "<<factorial(num);

    return 0;
}
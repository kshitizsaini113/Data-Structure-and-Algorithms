#include <iostream>

using namespace std;

typedef long long int ll;

void multiplicationTable(ll int n)
{
    for(int i=1; i<=10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

int main()
{
    ll num;
    cin>>num;

    multiplicationTable(num);

    return 0;
}
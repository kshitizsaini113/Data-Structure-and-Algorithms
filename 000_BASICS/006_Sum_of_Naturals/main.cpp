#include <iostream>

using namespace std;

typedef long long int ll;

ll sumOfNaturals(ll n)
{
    return (n*(n+1))/2;
}

int main()
{
    int n;
    cin>>n;

    cout<<"Sum of "<<n<<" naturals is : "<<sumOfNaturals(n)<<endl;
    
    return 0;
}
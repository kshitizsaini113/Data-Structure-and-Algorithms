// Program for calculating combination (nCr)

#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=2; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int com = factorial(n)/(factorial(n-r) * factorial(r));
    return com;
}

int main()
{
    int n, r;
    cin>>n>>r;

    cout<<nCr(n, r)<<endl;

    return 0;
}